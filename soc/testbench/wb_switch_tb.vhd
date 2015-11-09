
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

library work;
use work.wishbone.all;
use work.config.all;
use work.wb_tp.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY wb_switch_tb IS
END wb_switch_tb;
 
ARCHITECTURE behavior OF wb_switch_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT wb_switch
	 GENERIC (
			memaddr : generic_addr_type := CFG_BADR_LED;
			addrmask : generic_mask_type :=  CFG_MADR_LED
	 );
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         btn : IN  std_logic_vector(6 downto 0);
         sw : IN  std_logic_vector(7 downto 0);
         wslvi : IN  wb_slv_in_type;
         wslvo : OUT  wb_slv_out_type
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal btn : std_logic_vector(6 downto 0) := (others => '0');
   signal sw : std_logic_vector(7 downto 0) := (others => '0');
   signal wslvi : wb_slv_in_type;
	signal slvi : wb_mst_out_type;
	signal slave_out_data: std_logic_vector(31 downto 0) := (others => '0');
 	--Outputs
   signal wslvo : wb_slv_out_type;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: wb_switch PORT MAP (
          clk => clk,
          rst => rst,
          btn => btn,
          sw => sw,
          wslvi => wslvi,
          wslvo => wslvo
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
	wslvi.adr <= slvi.adr;
	wslvi.dat <= slvi.dat;
	wslvi.we <= slvi.we;
	wslvi.sel <= slvi.sel;
	wslvi.stb <= slvi.stb;
	wslvi.cyc <= slvi.cyc;
	wslvi.cti <= slvi.cti;
	wslvi.bte <= slvi.bte;
	
   -- Stimulus process
   stim_proc: process
   begin		
      rst <= '1';
      wait for 20 ns;	
		rst <= '0';
		btn <= "1110011";
		sw  <= X"08";
		generate_sync_wb_single_read(slvi,wslvo,clk,slave_out_data);
		wait for 20 ns;
		btn <= "0001100";
		sw  <= X"AB";
		generate_sync_wb_single_read(slvi,wslvo,clk,slave_out_data);
		wait for 60 ns;
		assert false report "Simulation ended" severity failure;
   end process;

END;
