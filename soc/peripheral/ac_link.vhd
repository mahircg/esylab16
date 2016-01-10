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

	signal counter  : unsigned(7 downto 0);
	
	signal latch_tag      : tag_type := (others => '0');
	signal latch_left_data	: std_logic_vector(19 downto 0);
	signal latch_right_data : std_logic_vector(19 downto 0);
	signal latch_cmd_addr   : std_logic_vector(19 downto 0);		
	signal latch_cmd_data   : std_logic_vector(19  downto 0);
	
	-- Add more signals if needed

begin



sync_proc : process(counter,ac97_bitclk,rst)
begin
	if rst = '1'  then
			counter <= "11111110";	--initialize to 254
			
	elsif rising_edge(ac97_bitclk) then
			if counter = 255 then 			--For asserting ac97_sync after reset
				ac97_sync <= '1';
			end if;
			
			if counter = 254 then		--Latch data on rising edge of ac97_sync
				latch_cmd_addr   <= inst_addr & "000000000000";
				latch_cmd_data   <= inst_data & "0000";
				latch_left_data  <= X"0" & pcm_i_left ;
				latch_right_data <= X"0" & pcm_i_right  ;
				latch_tag(latch_tag'left)<= pcm_valid or inst_valid;
				latch_tag(latch_tag'left-1) <= inst_valid;
				latch_tag(latch_tag'left-2) <= inst_valid;
				latch_tag(latch_tag'left-3) <= pcm_valid ;
				latch_tag(latch_tag'left-4) <= pcm_valid ;
				latch_tag(latch_tag'left-5 downto latch_tag'right) <= (others => '0');
			end if;
			
			if counter > 13 and counter <= 253 then
				ac97_sync <= '0';
			else
				ac97_sync <= '1';
			end if;
			counter <= counter + 1;
	end if;
	
end process;


steer_proc : process(ac97_bitclk)
begin

	if rising_edge(ac97_bitclk) then
		if rst = '1' then
			null;
		else
				if counter = 255 then
					ac97_sdo <= latch_tag(latch_tag'left);
				elsif counter < 15 then
					ac97_sdo <= latch_tag(14-to_integer(counter));
				elsif counter < 35 then
					ac97_sdo <= latch_cmd_addr(34-to_integer(counter));
				elsif counter < 55 then
					ac97_sdo <= latch_cmd_data(54-to_integer(counter));
				elsif counter < 75 then
					ac97_sdo <= latch_left_data(74-to_integer(counter));
				elsif counter < 95 then
					ac97_sdo <= latch_right_data(94-to_integer(counter));
				else
					ac97_sdo <= '0';
				end if;
			
		end if;
	end if;
end process;





end Behavioral;