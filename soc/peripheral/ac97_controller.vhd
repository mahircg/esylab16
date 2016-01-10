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


entity ac97_controller is
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
end entity ac97_controller;


architecture Behavioral of ac97_controller is

	

	type state_type is (RESET,SET_3D,SET_PHONE,SET_MASTER, SET_VOL_HP, SET_VOL_PCM, LISTEN);
	signal state      : state_type;
	signal data_sync  : std_logic;
	signal inst_addr  : inst_addr_type;
	signal inst_data  : inst_data_type;
	signal inst_valid : std_logic;
	signal reset_int  : std_logic := '1';
	signal rst_cnt    : unsigned(15 downto 0);
	signal sync_cnt   : unsigned(7 downto 0);
	
	

begin

	-- 48KHz synchronization signal for the PCM data
	pcm_sync <= data_sync;

	cold_reset : process(clk)
	begin
	if rising_edge(clk) then
		if rst = '1' then
			ac97_rst <= '0';
			reset_int <= '1';
			rst_cnt   <= (others => '0');
		
		
		elsif reset_int = '1' then
			rst_cnt <= rst_cnt + 1;
			if rst_cnt = x"0ECD" then 
				reset_int <= '0';
				ac97_rst <= '1';
			end if;
		end if;
	end if;
	end process cold_reset;


	process(ac97_bitclk, reset_int)
	begin
	if reset_int = '1' then
		state      <= RESET;
		inst_addr  <= (others => '0');
		inst_data  <= (others => '0');
		inst_valid <= '0';
		sync_cnt   <= (others => '0');
	elsif rising_edge(ac97_bitclk) then
		sync_cnt <= sync_cnt + 1; 
		
		if sync_cnt > 128 and not(sync_cnt = 255) then
			data_sync <= '1';
		else
			data_sync <= '0';
		end if;
	
		case state is
			when RESET =>
				sync_cnt   <= (others => '0');
				inst_addr  <= x"00"; -- DO NOT SET ANYTHING
				inst_data  <= x"0000";
				inst_valid <= '0';
				state      <= SET_MASTER;
				
				
			when SET_MASTER =>
				if sync_cnt = 255 then
					state     <= SET_VOL_HP;
					inst_addr <= x"02"; -- MASTER OUT
					inst_data <= x"0000";
					inst_valid <= '1';
				end if;

			when SET_VOL_HP =>
				if sync_cnt = 255 then
					state     <= SET_VOL_PCM;
					inst_addr <= x"04"; -- HP OUT
					inst_data <= x"0000";
					inst_valid <= '1';
				end if;

			when SET_VOL_PCM =>
				if sync_cnt = 255 then
					state     <= SET_PHONE;
					inst_addr <= x"18"; -- PCM OUT 
					inst_data <= x"0000";
					inst_valid <= '1';
				end if;
			
			when SET_PHONE =>
				if sync_cnt = 255 then
					state     <= SET_3D;
					inst_addr <= x"0C"; -- PCM OUT 
					inst_data <= x"0008";
					inst_valid <= '1';
				end if;
				
				
			when SET_3D =>
				if sync_cnt = 255 then
					state     <= LISTEN;
					inst_addr <= x"20"; -- 3D
					inst_data <= x"8000";
					inst_valid <= '1';
				end if;

			when LISTEN =>
				if sync_cnt = 255 then
					state     <= LISTEN;
					inst_valid <= '0';
				end if;

		end case;
	end if;
	end process;


	ac_link_inst : ac_link
		generic map(
			PCM_BW => PCM_BW
		)
		port map(
			rst         => reset_int,

			pcm_valid   => pcm_valid,
			pcm_i_left  => pcm_i_left,
			pcm_i_right => pcm_i_right,

			inst_addr   => inst_addr,
			inst_data   => inst_data,
			inst_valid  => inst_valid,

			ac97_bitclk => ac97_bitclk,
			ac97_sdi    => ac97_sdi,
			ac97_sdo    => ac97_sdo,
			ac97_sync   => ac97_sync,
			ac97_rst    => open
		);

end Behavioral;