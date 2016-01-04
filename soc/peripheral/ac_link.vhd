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
	signal counter  : unsigned(7 downto 0);
	signal sync : std_logic ;
	

	-- Add more signals if needed

begin



sync_proc : process(ac97_bitclk)
begin
	if rising_edge(ac97_bitclk) then
		if rst = '1'  then
			ac97_rst <= '0';
			ac97_sync <= '0';
			counter <= "11111110";	--initialize to 254
		else
			ac97_rst <= '1';
			if counter = 255 then 
				ac97_sync <= '1';
			end if;
			
			if counter > 13 and counter <= 253 then
				ac97_sync <= '0';
			else
				ac97_sync <= '1';
			end if;
			counter <= counter + 1;
		end if;
	end if;
end process;


steer_proc : process(ac97_bitclk)
begin

	if rising_edge(ac97_bitclk) then
		if rst = '1' then
			ac97_sdo <= '0';
		else
		--start writing data on slots to codec through ac97_sdo
				if counter = 255 then
					ac97_sdo <= tag(tag'left);
				elsif counter < 15 then
					ac97_sdo <= tag(14-to_integer(counter));
				elsif counter < 35 then
					ac97_sdo <= slots(0)(34-to_integer(counter));
				elsif counter < 55 then
					ac97_sdo <= slots(1)(54-to_integer(counter));
				elsif counter < 75 then
					ac97_sdo <= slots(2)(74-to_integer(counter));
				elsif counter < 95 then
					ac97_sdo <= slots(3)(94-to_integer(counter));
				else
					ac97_sdo <= '0';
				end if;
			
		end if;
	end if;
end process;

tag(tag'left)<= pcm_valid or inst_valid;
tag(tag'left-1) <= inst_valid;
tag(tag'left-2) <= inst_valid;
tag(tag'left-3) <= pcm_valid ;
tag(tag'left-4) <= pcm_valid ;
tag(tag'left-5 downto tag'right) <= (others => '0');

--Fill slot 0(addr)
slots(0) <=  inst_addr & X"000";
--Fill slot 1(cmd)
slots(1) <= inst_data & X"0";
--Fill slot 2(pcm_left)
slots(2) <= pcm_i_left & X"0";
--Fill slot 3(pcm_right)
slots(3) <= pcm_i_right & X"0";

--Fill rest of slots with zero
slots(4 to 11) <= (others => (others => '0'));


end Behavioral;