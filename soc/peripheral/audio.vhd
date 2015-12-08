------------------------------------------------------
-- Embedded System Lab (preparation)
-- Filename: audio.vhd
-- Functionality: slave component for string synthetizer
-- Author: Jhon Jimenez
-- Created: 27.10.15
-- Last modified: 02.11.15
------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.math_real.all;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;
use work.lt16soc_peripherals.all;

entity audio is
	generic(
		MEMADDR     : generic_addr_type; --:= CFG_BADR_AUDIO;
		ADDRMASK    : generic_mask_type; --:= CFG_MADR_AUDIO;
		DATA_BW     : natural := 16;
		TONE_SEL_BW : natural := 8
	);  
	port(
		clk         : in  std_logic;
		rst         : in  std_logic;

		ac97_bitclk : in  std_logic;
		ac97_sdi    : in  std_logic;
		ac97_sdo    : out std_logic;
		ac97_sync   : out std_logic;
		ac97_rst    : out std_logic;

		wslvi       : in  wb_slv_in_type;
		wslvo       : out wb_slv_out_type
	);
end entity;

architecture Behavioral of audio is

	signal data     : std_logic_vector(7 downto 0);
	signal ack      : std_logic := '0';
	signal pcm_sync : std_logic := '0';
	signal ce       : std_logic := '0';
	signal rst_ac97 : std_logic := '0';
	signal pcm      : std_logic_vector(DATA_BW-1 downto 0);
	signal idx, flg : unsigned(3 downto 0);
	signal tone_sel : std_logic_vector(TONE_SEL_BW-1 downto 0);
	signal new_tone : std_logic := '0';

	-- Add more signals if needed

begin

	bus_interface : process(clk)
	begin
	if rising_edge(clk) then
		if rst = '1' then
			ack  <= '0';
			data <= x"0F";
		else
			if wslvi.stb = '1' then
				if wslvi.we = '1' then
					data <= dec_wb_dat(wslvi.sel,wslvi.dat)(7 downto 0);
				end if;
				ack <= wslvi.stb and wslvi.cyc;
			else
				ack <= '0';
			end if;
		end if;
	end if;
	end process bus_interface;


	wslvo.dat( 7 downto 0) <= data;
	wslvo.dat(31 downto 8) <= (others => '0');
	wslvo.ack              <= ack;
	wslvo.wbcfg            <= wb_membar(MEMADDR, ADDRMASK);

	idx <= unsigned(data(3 downto 0));
	flg <= unsigned(data(7 downto 4));


	tone_selection : process(pcm_sync)
	begin
	if rising_edge(pcm_sync) then
		
		-- Your code here
		
	end if;
	end process tone_selection;


	tone_gen : process(pcm_sync,rst)
	begin
	if rst = '1' then
		pcm  <= (others => '0');
	elsif rising_edge(pcm_sync) then
		
		-- Your code for the tone generation
		
	end if;
	end process tone_gen;


	ac_97 : ac97_controller
		generic map(
			PCM_BW => DATA_BW
		)
		port map(
			clk         => clk,
			rst         => rst,

			pcm_sync    => pcm_sync,
			pcm_valid   => ce,
			pcm_i_left  => pcm,
			pcm_i_right => pcm,

			ac97_bitclk => ac97_bitclk,
			ac97_sdi    => ac97_sdi,
			ac97_sdo    => ac97_sdo,
			ac97_sync   => ac97_sync,
			ac97_rst    => rst_ac97
		);
		
		ac97_rst <= rst_ac97;

end Behavioral;

