-- See the file "LICENSE" for the full license governing this code. --
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

library work;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;

ENTITY warmup1_tb IS
END ENTITY;

ARCHITECTURE sim OF warmup1_tb IS

	constant CLK_PERIOD : time := 10 ns;
	constant ac97_period : time := 81.4 ns;

	signal clk 	: std_logic := '0';
	signal rst	: std_logic;

	signal led	: std_logic_vector(7 downto 0);
	signal btn	: std_logic_vector(6 downto 0);
	signal enableLCD	:std_logic;
	signal rsLCD	: std_logic;
	signal rwLCD	: std_logic;
	signal dataLCD	: std_logic_vector(7 downto 0);
	signal sw	: std_logic_vector(7 downto 0) := x"00";
	signal ac97_bitclk : std_logic;
	signal ac97_sdi : std_logic;
	signal ac97_sdo : std_logic;
	signal ac97_sync : std_logic;
	signal ac97_rst : std_logic;
	

	COMPONENT lt16soc_top IS
		generic(
			programfilename : string := "C:\Users\Mahircan\Ders\embedded_systems_lab\lt16lab\programs\project.ram"
		);
		port(
			clk		: in  std_logic;
			rst		: in std_logic;
			led		: out std_logic_vector(7 downto 0);
			btn      : in  std_logic_vector(6 downto 0);
			enableLCD: out std_logic;
			rsLCD		: out std_logic;
			rwLCD		: out std_logic;
			dataLCD	: inout std_logic_vector(7 downto 0);
			sw       : in  std_logic_vector(7 downto 0);
			ac97_bitclk : in  std_logic;
			ac97_sdi    : in  std_logic;
			ac97_sdo    : out std_logic;
			ac97_sync   : out std_logic;
			ac97_rst    : out std_logic
		);
	END COMPONENT;

BEGIN

	dut: lt16soc_top port map(
		clk=>clk,
		rst=>rst,
		led=>led,
		btn=>btn,
		enableLCD => enableLCD,
		rwLCD => rwLCD,
		rsLCD => rsLCD,
		dataLCD => dataLCD,
		sw=>sw,
		ac97_bitclk => ac97_bitclk,
		ac97_sdi => ac97_sdi,
		ac97_sdo => ac97_sdo,
		ac97_sync => ac97_sync,
		ac97_rst => ac97_rst
		
	);

	clk_gen: process
	begin
		clk	<= not clk;
		wait for CLK_PERIOD/2;
	end process clk_gen;
	
	ac97_clk_process :process
   begin
		ac97_bitclk <= '0';
		wait for ac97_period/2;
		ac97_bitclk <= '1';
		wait for ac97_period/2;
   end process;

	stimuli: process
	begin
		rst <= '0';
		btn <="0000000";
		wait for 2*CLK_PERIOD;
		rst <= '1';
		
		wait for 5 ms;
		for I in 0 to 14 loop
			btn <="0000100";
			wait for 3 ms;
			btn <="0000000";
			wait for 10 ms;
			
			
			btn <="0000000";
			wait for 1 us;
			btn <="0001000";
			wait for 1 us;
			btn <="0000000";
			wait for 20 ms;
		end loop;
		assert false report "Simulation terminated!" severity failure;
	end process stimuli;


END ARCHITECTURE;
