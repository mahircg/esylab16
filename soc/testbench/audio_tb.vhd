-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;
  USE work.lt16soc_peripherals.ALL;
  USE work.config.ALL;
  USE work.wb_tp.ALL;
  USE work.wishbone.ALL;

  ENTITY audio_tb IS
  END audio_tb;

  ARCHITECTURE behavior OF audio_tb IS 

  
          COMPONENT audio
          generic(
				MEMADDR     : generic_addr_type := CFG_BADR_AUDIO; 
				ADDRMASK    : generic_mask_type := CFG_MADR_AUDIO
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
          END COMPONENT;

          
			 --Constants
			 constant clk_period : time := 10 ns;
			 constant ac97_period : time := 81.38 ns;
			 
			 --Inputs
			 signal clk: std_logic := '0';
			 signal rst: std_logic := '0';
			 signal ac97_bitclk: std_logic := '0';
			 signal ac97_sdi: std_logic := '0';
			 signal wslvi : wb_slv_in_type;
			 signal wslvo : wb_slv_out_type;
			 
			 --Outputs
			 signal ac97_sdo: std_logic := '0';
			 signal ac97_sync: std_logic := '0';
			 signal ac97_rst: std_logic := '0';
			 signal wmsto : wb_mst_out_type;
			 
			 
			 --Misc
			 signal datawritten: std_logic_vector(31 downto 0) := (others => '0');

			 
          

  BEGIN

  -- Component Instantiation
          uut: audio PORT MAP(
                  clk => clk,
						rst => rst,
						ac97_bitclk => ac97_bitclk,
						ac97_sdi => ac97_sdi,
						wslvi => wslvi,
						ac97_sdo => ac97_sdo,
						ac97_sync => ac97_sync,
						ac97_rst => ac97_rst,
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
	
	ac97_clk_process :process
   begin
		ac97_bitclk <= '0';
		wait for ac97_period/2;
		ac97_bitclk <= '1';
		wait for ac97_period/2;
   end process;
	
	wslvi.adr <= wmsto.adr;
	wslvi.dat <= wmsto.dat;
	wslvi.we <= wmsto.we;
	wslvi.sel <= wmsto.sel;
	wslvi.stb <= wmsto.stb;
	wslvi.cyc <= wmsto.cyc;
	wslvi.cti <= wmsto.cti;
	wslvi.bte <= wmsto.bte;
	
	stim_proc: process
   begin		
      rst <= '1';
      wait for 20 ns;	
		rst <= '0';
		datawritten <= X"0000000F";
		generate_sync_wb_single_write(wmsto,wslvo,clk,datawritten);
		wait for 1000 ms;
--		datawritten <= X"0000000E";
--		generate_sync_wb_single_write(wmsto,wslvo,clk,datawritten);
--		wait for 60 ns;
		assert false report "Simulation ended" severity failure;
   end process;
	

  END;
