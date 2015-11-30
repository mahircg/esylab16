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
	constant NUM_CYCLES_1_5MS: natural := 150000;
	constant NUM_CYCLES_500NS: natural := 50;
	constant NUM_CYCLES_700NS: natural := 70;
	
	--Constant definitions: Commands
	constant CMD_FUNC_SET : std_logic_vector(7 downto 0) := X"38";
	constant CMD_ON_OFF : std_logic_vector(7 downto 0) := X"0E";
	constant CMD_CLEAR : std_logic_vector(7 downto 0) := X"01"; 
	constant CMD_ENTRY_SET : std_logic_vector(7 downto 0) := X"06";
	--State definitions for FSMs
	type lcd_fsm_type is (lcd_rst,ifs,w1,fs1,w2,fs2,wnd,rw,b);
	type enable_fsm_type is (enable_rst,e,eh,el);
	
	--State declarations
	signal lcd_ps,lcd_ns				:lcd_fsm_type;
	signal enable_ps,enable_ns		:enable_fsm_type;
	
	--Counter declarations
	signal lcd_counter				: integer range 0 to NUM_CYCLES_40MS;
	signal enable_counter  			: integer range 0 to NUM_CYCLES_700NS;
	
	--Shared signals
	signal e_edge : std_logic;
	signal cycle_e: std_logic;
	
	--LCD controller signals
	
	

	signal lcd_reg	: std_logic_vector(10 downto 0);
	signal ack		: std_logic;

BEGIN


sequential_proc: process(rst,clk)
begin
	if rising_edge(clk) then
		if rst = '1' then
			lcd_ps <= lcd_rst;
			enable_ps <=enable_rst;
		else
			lcd_ps <= lcd_ns;
			enable_ps <= enable_ns;
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
						lcd_reg	<= dec_wb_dat(wslvi.sel,wslvi.dat)(10 downto 0);
					end if;

					if ack = '0' then
						ack		<= '1';
					else
						ack		<= '0';
					end if;
				else
					ack			<= '0';
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

	enableLCD	<= lcd_reg(10);
	rsLCD		<= lcd_reg(9);
	rwLCD		<= lcd_reg(8);
	dataLCD		<= lcd_reg(7 downto 0) when lcd_reg(8) = '0' else "ZZZZZZZZ";

END ARCHITECTURE;
