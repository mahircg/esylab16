library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;


entity wb_switch is
        generic(
                memaddr         :       generic_addr_type; --:= CFG_BADR_LED;
                addrmask        :       generic_mask_type --:= CFG_MADR_LED;
        );
        port(
                clk             : in  std_logic;
                rst             : in  std_logic;
                btn             : in  std_logic_vector(6 downto 0);
					 sw             : in  std_logic_vector(7 downto 0);
                wslvi   :       in      wb_slv_in_type;
					 sw_irq	: out std_logic;
                wslvo   :       out     wb_slv_out_type
        );
end wb_switch;

architecture Behavioral of wb_switch is
signal data : std_logic_vector(15 downto 0) ;
signal ack : std_logic;
signal irq_enabled: std_logic_vector(15 downto 0);
signal change: std_logic;
signal irq : std_logic;

signal sw_reg : std_logic_vector(7 downto 0);
signal bt_reg : std_logic_vector(6 downto 0);

begin

	irq_proc: process(clk)
	begin
		if rising_edge(clk) then
			if rst = '1' then
				change <= '0';
			else
				if sw_reg /= sw or bt_reg /= btn then
					change <= '1';
				else
					change <= '0';
				end if;
				sw_reg <= sw;
				bt_reg <= btn;
			end if;
		end if;
	end process;
	
	
	process(clk)
	begin
		if(rising_edge(clk)) then
			if rst = '1' then
				ack 	<= '0';
				data 	<= x"0000";
				irq <= '0';
				irq_enabled <= X"FFFF";
			else
				if change = '1' then
					irq <= '1';
				else
					irq <= '0';
				end if;
				
				if wslvi.stb = '1' and wslvi.cyc = '1' then
					if wslvi.we = '0' then
						data(15 downto 8) <= sw;
						data(7 downto 0) <= '0' & btn;
					else
						irq_enabled <= dec_wb_dat(wslvi.sel,wslvi.dat)(15 downto 0);
					end if;
					if ack = '0' then
						ack     <= '1';
               else
                  ack     <= '0';
               end if;
				else
					ack <= '0';
				end if;
			end if;			
		end if;
	end process;
	
	wslvo.dat(31 downto 16) <= data;
	wslvo.dat(15 downto 0) <= irq_enabled;
	
	wslvo.ack <= ack;
	wslvo.wbcfg     <= wb_membar(memaddr, addrmask);
	
	sw_irq <= irq when irq_enabled = X"FFFF" else '0';

end Behavioral;