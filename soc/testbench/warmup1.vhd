-- See the file "LICENSE" for the full license governing this code. --
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY warmup1_tb IS
END ENTITY;

ARCHITECTURE sim OF warmup1_tb IS

	constant CLK_PERIOD : time := 10 ns;

	signal clk 	: std_logic := '0';
	signal rst	: std_logic;

	signal led	: std_logic_vector(7 downto 0);
	signal btn	: std_logic_vector(6 downto 0);
	signal sw	: std_logic_vector(7 downto 0) := x"00";

	COMPONENT lt16soc_top IS
		generic(
			programfilename : string := "programs/assignment2code.ram"
		);
		port(
			clk		: in  std_logic;
			rst		: in std_logic;
			led		: out std_logic_vector(7 downto 0);
			btn      : in  std_logic_vector(6 downto 0);
			sw       : in  std_logic_vector(7 downto 0)
		);
	END COMPONENT;

BEGIN

	dut: lt16soc_top port map(
		clk=>clk,
		rst=>rst,
		led=>led,
		btn=>btn,
		sw=>sw
		
	);

	clk_gen: process
	begin
		clk	<= not clk;
		wait for CLK_PERIOD/2;
	end process clk_gen;

	stimuli: process
	begin
		btn <= (others => '0');
		rst	<= '0';
		wait for 2*CLK_PERIOD;
		rst	<= '1';
		wait for 1200*CLK_PERIOD;
		sw <= x"01";
		wait for 1200*CLK_PERIOD;
		sw <= x"02";
		wait for 1200*CLK_PERIOD;
		sw <= x"03";
		wait for 1200*CLK_PERIOD;
		wait for 20000*CLK_PERIOD;
		assert false report "Simulation terminated!" severity failure;
	end process stimuli;


END ARCHITECTURE;
