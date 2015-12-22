------------------------------------------------------
-- Embedded System Lab (preparation)
-- Filename: ac_link.vhd
-- Functionality: Sends data to AC'97 Codec via AC-Link
-- Author: Jhon Jimenez
-- Created: 27.10.15
-- Last modified: 27.10.15
------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

use work.lt16soc_peripherals.all;

entity ac_link is
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
end entity ac_link;

architecture Behavioral of ac_link is

	type slots_t is array (0 to 11) of slot_type;
	signal slots    : slots_t := (others => (others => '0'));
	signal tag      : tag_type := (others => '0');

	-- Add more signals if needed

begin

	-- Your code here

end Behavioral;
