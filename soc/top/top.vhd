-- See the file "LICENSE" for the full license governing this code. --

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

library work;
use work.lt16x32_internal.all;
use work.lt16x32_global.all;
use work.wishbone.all;
use work.config.all;
use work.lt16soc_memories.all;
use work.lt16soc_peripherals.all;

entity lt16soc_top is
generic(
	programfilename : string := "C:\Users\Mahircan\Ders\embedded_systems_lab\lt16lab\programs\project.ram" -- see "Synthesize XST" process properties for actual value ("-generics" in .xst file)!
);
port(
	-- clock signal
	clk		: in  std_logic;
	-- external reset button
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
end entity lt16soc_top;


architecture RTL of lt16soc_top is
	--//////////////////////////////////////////////////////
	-- constant & signal
	--//////////////////////////////////////////////////////

	signal rst_gen	: std_logic;
	
	constant slv_mask_vector : std_logic_vector(0 to NWBSLV-1) := b"1111_1110_0000_0000";
	constant mst_mask_vector : std_logic_vector(0 to NWBMST-1) := b"1000";
	
	signal slvo	: wb_slv_out_vector := (others=> wbs_out_none);
	signal msto	: wb_mst_out_vector := (others=> wbm_out_none);
	
	signal slvi	: wb_slv_in_vector := (others=> wbs_in_none);
	signal msti	: wb_mst_in_vector := (others=> wbm_in_none);

	signal core2mem		: core_imem;
	signal mem2core		: imem_core;

	signal irq2core   : irq_core;
	signal core2irq   : core_irq;
	
	signal btn_debounced: std_logic_vector(6 downto 0);

	signal irq_lines  : std_logic_vector((2 ** irq_num_width) - 1 downto 0) := (others=>'0');

	--//////////////////////////////////////////////////////
	-- components
	--//////////////////////////////////////////////////////

	component corewrapper
	port(
		clk       : in  std_logic;
		rst       : in  std_logic;

		in_imem   : in	imem_core;
		out_imem  : out	core_imem;

		in_proc   : in  irq_core;
		out_proc  : out core_irq;

		hardfault : out std_logic;

		wmsti	:	in	wb_mst_in_type;
		wmsto	:	out	wb_mst_out_type
	);
	end component;

	component irq_controller
	port(
		clk       : in  std_logic;
		rst       : in  std_logic;

		in_proc   : in  core_irq;
		out_proc  : out irq_core;

		irq_lines : in  std_logic_vector((2 ** irq_num_width) - 1 downto 0)
	);
	end component;

	component wb_intercon
	generic(
		slv_mask_vector : std_logic_vector(0 to NWBSLV-1) := b"0000_0000_0000_0000";
		mst_mask_vector : std_logic_vector(0 to NWBMST-1) := b"0000"
	);
	port(
		clk		: in  std_logic;
		rst		: in  std_logic;
		msti	: out wb_mst_in_vector;
		msto	: in  wb_mst_out_vector;
		slvi	: out wb_slv_in_vector;
		slvo	: in  wb_slv_out_vector
	);
	end component;

begin

	with RST_ACTIVE_HIGH select rst_gen	<=
		rst when true,
		not rst when others;

	--//////////////////////////////////////////////////////
	-- Instantiate
	--//////////////////////////////////////////////////////

	corewrap_inst: corewrapper
	port map(
		clk => clk,
        rst => rst_gen,

		in_imem		=> mem2core,
		out_imem	=> core2mem,

		in_proc		=> irq2core,
		out_proc	=> core2irq,

		hardfault	=> irq_lines(1),
		wmsti		=> msti(CFG_LT16),
		wmsto		=> msto(CFG_LT16)

	);

	irqcontr_inst: irq_controller
	port map(
		clk			=>	clk,
		rst			=>	rst_gen,
		in_proc		=>	core2irq,
		out_proc	=>	irq2core,
		irq_lines	=>	irq_lines
	);

	wbicn_inst: wb_intercon
	generic map(
		slv_mask_vector => slv_mask_vector,
		mst_mask_vector => mst_mask_vector
	)
	port map(
          clk => clk,
          rst => rst_gen,
          msti => msti,
          msto => msto,
          slvi => slvi,
          slvo => slvo
	);

	memwrap_inst: memwrapper
	generic map(
		memaddr		=> CFG_BADR_MEM,
		addrmask	=> CFG_MADR_MEM,
		filename	=> programfilename,
		size		=> IMEMSZ
	)
	port map(
		clk 		=> clk,
        rst 		=> rst_gen,
		in_imem		=> core2mem,
		out_imem	=> mem2core,

		fault		=> irq_lines(2),
		wslvi		=> slvi(CFG_MEM),
		wslvo		=> slvo(CFG_MEM)
	);

	dmem : wb_dmem
	generic map(
		memaddr=>CFG_BADR_DMEM,
		addrmask=>CFG_MADR_DMEM)
	port map(clk,rst_gen,slvi(CFG_DMEM),slvo(CFG_DMEM));

	leddev : wb_led
	generic map(
		CFG_BADR_LED,CFG_MADR_LED
	)
	port map(
		clk,rst_gen,led,slvi(CFG_LED),slvo(CFG_LED)
	);
	
	switchdev : wb_switch
	generic map (
		CFG_BADR_SWITCH,CFG_MADR_SWITCH
	)
	port map(
	clk,rst_gen,btn_debounced,sw,slvi(CFG_SWITCH),irq_lines(3),slvo(CFG_SWITCH)
	);
	
	lcddev : wb_lcd_adv
	generic map (
			CFG_BADR_LCD, CFG_MADR_LCD
		)
	port map(
	clk,rst_gen,dataLCD,enableLCD,rsLCD,rwLCD,slvi(CFG_LCD),slvo(CFG_LCD)
	);
	
	str_rom : string_rom
	generic map(
		memaddr => CFG_BADR_STR_ROM,
		addrmask => CFG_MADR_STR_ROM )
	port map(
		clk,rst_gen,slvi(CFG_STR_ROM),slvo(CFG_STR_ROM) );
		
	audiodev: audio
	generic map(
		memaddr => CFG_BADR_AUDIO,
		addrmask => CFG_MADR_AUDIO )
	port map(
	clk,rst_gen,ac97_bitclk,ac97_sdi,ac97_sdo,ac97_sync,ac97_rst,slvi(CFG_AUDIO),slvo(CFG_AUDIO) );
	
	GEN_DEBOUNCER:
	for i in 0 to 6 generate
	begin
		debouncer_X : debounce generic map(counter_size => 19) port map(clk,btn(i),btn_debounced(i));
	end generate GEN_DEBOUNCER;

end architecture RTL;
