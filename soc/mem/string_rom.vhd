library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library work;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;


entity string_rom is
        generic(
                memaddr         :       generic_addr_type; --:= CFG_BADR_LED;
                addrmask        :       generic_mask_type --:= CFG_MADR_LED;
        );
        port(
                clk             : in  std_logic;
                rst             : in  std_logic;
                wslvi   :       in      wb_slv_in_type;
                wslvo   :       out     wb_slv_out_type
        );
end string_rom;

architecture Behavioral of string_rom is
signal data : std_logic_vector(7 downto 0);
signal word_reg : std_logic_vector(31 downto 0);
signal word_address : unsigned(7 downto 0);
signal ack : std_logic;
type rom_type is array (0 to 63) of std_logic_vector (31 downto 0);

signal ROM: rom_type := (X"4334204D", X"6964646C", X"65204320", X"00000000", X"4323342F", X"44623420", X"20202020", X"00000000",
 X"44342020", X"20202020", X"20202020", X"00000000", X"4423342F", X"45623420", X"20202020", X"00000000", X"45342020", X"20202020",
 X"20202020", X"00000000", X"46342020", X"20202020", X"20202020", X"00000000", X"4623342F", X"47623420", X"20202020", X"00000000",
 X"47342020", X"20202020", X"20202020", X"00000000", X"4723342F", X"31623420", X"20202020", X"00000000", X"41342041", X"34343020",
 X"20202020", X"00000000", X"3123342F", X"32623420", X"20202020", X"00000000", X"32342020", X"20202020", X"20202020", X"00000000",
 X"43352054", X"656E6F72", X"20432020", X"00000000", X"4323342F", X"44623420", X"20202020", X"00000000", X"44352020", X"20202020",
 X"20202020", X"00000000", X"4423342F", X"45623420", X"20202020", X"00000000");



begin

	word_address <= unsigned(wslvi.adr(9 downto 2));
	word_reg<=ROM(to_integer(word_address));
	process(clk)
	begin
		if(rising_edge(clk)) then
			if rst = '1' then
				ack 	<= '0';
				data <= (others => '0');
			else
				
				if wslvi.stb = '1' and wslvi.cyc = '1' then
					if wslvi.we = '0' then
						data <= dec_wb_dat(wslvi.sel,word_reg)(7 downto 0);
					else
						data<=(others => 'X');
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
	
	wslvo.dat(31 downto 24) <= data;
	wslvo.dat(23 downto 16) <= data;
	wslvo.dat(15 downto 8) <= data;
	wslvo.dat(7 downto 0) <= data;
	
	wslvo.ack 		<= ack;
	wslvo.wbcfg     <= wb_membar(memaddr, addrmask);

end Behavioral;