-- See the file "LICENSE" for the full license governing this code. --

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

library work;
use work.lt16x32_internal.all;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;

package lt16soc_peripherals is

	component wb_led is
	generic(
		memaddr		:	generic_addr_type;-- := CFG_BADR_LED;
		addrmask	:	generic_mask_type-- := CFG_MADR_LED;
	);
	port(
		clk		: in  std_logic;
		rst		: in  std_logic;
		led		: out  std_logic_vector(7 downto 0);
		wslvi	:	in	wb_slv_in_type;
		wslvo	:	out	wb_slv_out_type
	);
	end component;
	
	component wb_switch is
        generic(
                memaddr         :       generic_addr_type; 
                addrmask        :       generic_mask_type 
        );
        port(
                clk             : in  std_logic;
                rst             : in  std_logic;
                btn             : in  std_logic_vector(6 downto 0);
					 sw             : in  std_logic_vector(7 downto 0);
                wslvi   :       in      wb_slv_in_type;
					 sw_irq			: out std_logic;
                wslvo   :       out     wb_slv_out_type
        );
	end component;
	
	component wb_lcd_adv is 
			generic(
				memaddr		: generic_addr_type;
				addrmask		: generic_mask_type
			);
			port(
				clk			: in std_logic;
				rst			: in std_logic;

				dataLCD		: inout std_logic_vector(7 downto 0);
				enableLCD	: out std_logic;
				rsLCD		: out std_logic;
				rwLCD		: out std_logic;

				wslvi		: in wb_slv_in_type;
				wslvo		: out wb_slv_out_type
			);
		end component;	
		
	component debounce is
		generic(
		 counter_size  :  INTEGER );
		port(
		 clk     : in  STD_LOGIC;  --input clock
		 button  : in  STD_LOGIC;  --input signal to be debounced
		 result  : out STD_LOGIC); --debounced signal
	end component;
	
	subtype tag_type is std_logic_vector(15 downto 0);
	subtype inst_addr_type is std_logic_vector(7 downto 0);
	subtype inst_data_type is std_logic_vector(15 downto 0);
	subtype slot_type is std_logic_vector(19 downto 0);

	component ac_link is
		generic(
			PCM_BW : natural := 16
		);
		port(
			rst         : in  std_ulogic;

			pcm_valid   : in  std_logic;
			pcm_i_left  : in  std_logic_vector(PCM_BW-1 downto 0);
			pcm_i_right : in  std_logic_vector(PCM_BW-1 downto 0);

			inst_addr   : in  inst_addr_type;
			inst_data   : in  inst_data_type;
			inst_valid  : in  std_logic;

			ac97_bitclk : in  std_ulogic;
			ac97_sdi    : in  std_logic;
			ac97_sdo    : out std_logic;
			ac97_sync   : out std_logic;
			ac97_rst    : out std_ulogic
		);
	end component;

	component ac97_controller is
		generic(
			PCM_BW : natural := 16
		);
		port(
			clk         : in  std_ulogic;
			rst         : in  std_ulogic;

			pcm_sync    : out std_logic;
			pcm_valid   : in  std_logic;
			pcm_i_left  : in  std_logic_vector(PCM_BW-1 downto 0);
			pcm_i_right : in  std_logic_vector(PCM_BW-1 downto 0);

			ac97_bitclk : in  std_ulogic;
			ac97_sdi    : in  std_logic;
			ac97_sdo    : out std_logic;
			ac97_sync   : out std_logic;
			ac97_rst    : out std_ulogic
		);
 	end component;
-- END AUDIO Components -----------------------------------------------

end lt16soc_peripherals;

package body lt16soc_peripherals is

	--insert function bodies

end lt16soc_peripherals;

