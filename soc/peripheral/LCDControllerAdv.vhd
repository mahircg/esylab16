-- See the file "LICENSE" for the full license governing this code. --

LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.numeric_std.all;
USE work.lt16x32_global.all;
USE work.wishbone.all;
USE work.config.all;

ENTITY wb_lcd_adv IS
	generic(
		memaddr		: generic_addr_type;
		addrmask	: generic_mask_type
	);
	port(
		clk			: IN std_logic;
		rst			: IN std_logic;

		dataLCD		: INOUT std_logic_vector(7 downto 0);
		enableLCD	: OUT std_logic;
		rsLCD		: OUT std_logic;
		rwLCD		: OUT std_logic;

		wslvi		: IN wb_slv_in_type;
		wslvo		: OUT wb_slv_out_type
	);
END ENTITY;

ARCHITECTURE behav OF wb_lcd_adv IS

	--Constant definitions : cycles
	constant NUM_CYCLES_40MS : natural := 4000000;
	constant NUM_CYCLES_37US : natural := 3700;
	constant NUM_CYCLES_1_52MS : natural := 152000;
	constant NUM_CYCLES_1_5MS: natural := 150000;
	constant NUM_CYCLES_500NS: natural := 50;
	constant NUM_CYCLES_700NS: natural := 70;
	
	--Constant definitions: Commands
	constant CMD_FUNC_SET : std_logic_vector(7 downto 0) := X"38";
	constant CMD_ON_OFF : std_logic_vector(7 downto 0) := X"0E";
	constant CMD_CLEAR : std_logic_vector(7 downto 0) := X"01"; 
	constant CMD_ENTRY_SET : std_logic_vector(7 downto 0) := X"06";
	--State definitions for FSMs
	type lcd_fsm_type is (ifs,w1,fs1,w2,fs2,wnd,rw,b);
	type enable_fsm_type is (e,eh,el);
	
	--State declarations
	signal lcd_state				:lcd_fsm_type;
	signal enable_state			:enable_fsm_type;
	
	--Counter declarations
	signal count				: integer range 0 to NUM_CYCLES_40MS;
	signal count_e  			: integer range 0 to NUM_CYCLES_700NS;
	
	--Shared signals
	signal e_edge : std_logic;
	signal cycle_e: std_logic;
	
	--E-detector signals
	signal E : std_logic;
	
	
	
	--LCD controller signals
	signal busy : std_logic;
	signal new_data : std_logic;

	signal lcd_reg	: std_logic_vector(10 downto 0);
	signal ack		: std_logic;

BEGIN

lcd_proc: process(clk)
begin
	if rising_edge(clk) then
		if rst = '1' then
			lcd_state <= ifs;
			busy <= '1';
			count <= 0;
		else
			case lcd_state is
			when ifs =>
				if count /= NUM_CYCLES_40MS then
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= (others => 'Z');
					lcd_state <= ifs;
				else
					count <= 0;
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_FUNC_SET;
					lcd_state <= w1;
				end if;
			when w1 =>
				if e_edge = '0' then
					cycle_e <= '1';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_FUNC_SET;
					lcd_state <= w1;
				else
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_FUNC_SET;
					lcd_state <= fs1;
				end if;
			when fs1 =>
				if count /= NUM_CYCLES_37US then
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '0';
					dataLCD <= (others => 'Z');
					lcd_state <= fs1;
				else
					count <= 0;
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '1';
					dataLCD <= CMD_ON_OFF;
					lcd_state <= w2;
				end if;
			when w2 =>
				if e_edge = '0' then
					cycle_e <= '1';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_ON_OFF;
					lcd_state <= w2;
				else
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_ON_OFF;
					lcd_state <= fs2;
				end if;
			when fs2 =>
				if count /= NUM_CYCLES_37US then
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '0';
					dataLCD <= (others => 'Z');
					lcd_state <= fs1;
				else
					count <= 0;
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '1';
					dataLCD <= CMD_CLEAR;
					lcd_state <= w3;
				end if;
			when w3 =>
				if e_edge = '0' then
					cycle_e <= '1';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_CLEAR;
					lcd_state <= w3;
				else
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_CLEAR;
					lcd_state <= fs3;
				end if;
			when fs3 =>
				if count /= NUM_CYCLES_1_52MS then
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '0';
					dataLCD <= (others => 'Z');
					lcd_state <= fs3;
				else
					count <= 0;
					rwLCD <= '0';
					rsLCD <= '0';
					cycle_e <= '1';
					dataLCD <= CMD_ENTRY_SET;
					lcd_state <= w4;
				end if;
			when w4 =>
				if e_edge = '0' then
					cycle_e <= '1';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= CMD_ENTRY_SET;
					lcd_state <= w3;
				else
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= (others => 'Z');
					lcd_state <= wnd;
				end if;
			when wnd =>
				if new_data = '0' then
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					dataLCD <= (others => 'Z');
					busy <= '0';
					lcd_state <= wnd;
				else
					cycle_e <= '1';
					rsLCD		<= lcd_reg(9);
					rwLCD		<= lcd_reg(8);
					dataLCD	<= lcd_reg(7 downto 0) when lcd_reg(8) = '0' else "ZZZZZZZZ";
					lcd_state <= rw;
				end if;
			when rw =>
				rsLCD		<= lcd_reg(9);
				rwLCD		<= lcd_reg(8);
				dataLCD	<= lcd_reg(7 downto 0) when lcd_reg(8) = '0' else "ZZZZZZZZ";
				if e_edge = '0' then
					cycle_e <= '1';
					lcd_state <= rw;
				elsif new_data = '1' then 
					cycle_e <= '0';
					lcd_state <= b;
				end if;
			when b =>
				if count /= NUM_CYCLES_1_5MS then
					cycle_e <= '0';
					rwLCD <= '0';
					rsLCD <= '0';
					busy <=  '1';
					lcd_state <= b;
				else
					cycle_e <= '1';
					rwLCD <= '0';
					rsLCD <= '0';
					busy <=  '1';
					lcd_state <= wnd;
				end if;
			end case;
		end if;
	end if;				
end process;


e_proc: process(clk)
begin
	if rising_edge(clk) then
		if rst = '1' then
			cycle_e <= '0';
			enable_state <= e;
		else
			case enable_state is
			when e => 
				if cycle_e = '0' then
					count_e <= 0;
					E			<= '0';
					e_edge 	<= '0';
					enable_state <= e;
				else
					E			<= '1';
					e_edge	<= '0';
					count_e <= 1;
					enable_state <= eh;
				end if;
			when eh =>
				if count_e /= NUM_CYCLES_500NS then
					E 			<= '1';
					e_edge	<= '0';
					count_e <= count_e + 1;
					enable_state <= eh;
				else
					E 			<= '0';
					e_edge	<= '1';
					count_e <= 0;
					enable_state <= el;
				end if;
			when el =>
				if count_e /= NUM_CYCLES_700NS then
					E 			<= '0';
					e_edge	<= '0';
					count_e <= count_e + 1;
					enable_state <= eh;
				else
					E 			<= '0';
					e_edge	<= '0';
					count_e <= 0;
					enable_state <= e;
				end if;
			end case;
		end if;
	end if;
end process;




	process(clk)
	begin
		if clk'event and clk='1' then
			if rst = '1' then
				ack			<= '0';
				lcd_reg		<= (others => '0');
			else
				if wslvi.stb = '1' and wslvi.cyc = '1' then

					if wslvi.we = '1' then
						new_data <= '1';
						lcd_reg	<= dec_wb_dat(wslvi.sel,wslvi.dat)(10 downto 0);
					end if;

					if ack = '0' then
						ack		<= '1';
					else
						ack		<= '0';
					end if;
				else
					ack			<= '0';
					new_data 	<= '0';
				end if;
			end if;
		end if;
	end process;

	wslvo.dat(10 downto 0)	<= lcd_reg when wslvi.adr(2) = '0'
		else "000" & dataLCD when wslvi.adr(2) = '1' and lcd_reg(8) = '1'
		else (others => '0');

	wslvo.dat(31 downto 11)	<= (others=>'0');
	wslvo.wbcfg				<= wb_membar(memaddr, addrmask);
	wslvo.ack				<= ack;

	enableLCD	<= E;

END ARCHITECTURE;
