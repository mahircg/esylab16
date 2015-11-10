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
                wslvo   :       out     wb_slv_out_type
        );
end wb_switch;

architecture Behavioral of wb_switch is
signal data : std_logic_vector(15 downto 0) ;
signal ack : std_logic;


begin

	process(clk)
	begin
		if(rising_edge(clk)) then
			if rst = '1' then
				ack 	<= '0';
				data 	<= x"0000";
			else
				if wslvi.stb = '1' and wslvi.cyc = '1' then
					if wslvi.we = '0' then
						data(15 downto 8) <= sw;
						data(7 downto 0) <= '0' & btn;
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
	wslvo.dat(15 downto 0) <= (others => '0');
	
	wslvo.ack <= ack;
	wslvo.wbcfg     <= wb_membar(memaddr, addrmask);
	
	

end Behavioral;