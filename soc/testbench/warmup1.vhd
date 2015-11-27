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

	signal clk 	: std_logic := '0';
	signal rst	: std_logic;

	signal led	: std_logic_vector(7 downto 0);
	signal btn	: std_logic_vector(6 downto 0);
	signal enableLCD	:std_logic;
	signal rsLCD	: std_logic;
	signal rwLCD	: std_logic;
	signal dataLCD	: std_logic_vector(7 downto 0);
	signal sw	: std_logic_vector(7 downto 0) := x"00";

	COMPONENT lt16soc_top IS
		generic(
			programfilename : string := "programs/assignment31code.ram"
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
			sw       : in  std_logic_vector(7 downto 0)
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
		sw=>sw
		
	);

	clk_gen: process
	begin
		clk	<= not clk;
		wait for CLK_PERIOD/2;
	end process clk_gen;

	stimuli: process
	begin
		rst <= '0';
		wait for 2*CLK_PERIOD;
		rst <= '1';
		wait for 100 ms;
		assert false report "Simulation terminated!" severity failure;
	end process stimuli;


END ARCHITECTURE;
