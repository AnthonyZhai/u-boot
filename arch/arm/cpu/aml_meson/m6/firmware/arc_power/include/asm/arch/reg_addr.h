#ifndef __MACH_MESSON_REG_ADDR_H

#define __MACH_MESSON_REG_ADDR_H

//CBUS REG ADDR
#include "io.h"
#include "register.h"

#include "ao_reg.h"

/** Pin mux convert */
#define P_PERIPHS_PIN_MUX_0      CBUS_REG_ADDR(PERIPHS_PIN_MUX_0 )
#define P_PERIPHS_PIN_MUX_1      CBUS_REG_ADDR(PERIPHS_PIN_MUX_1 )
#define P_PERIPHS_PIN_MUX_2      CBUS_REG_ADDR(PERIPHS_PIN_MUX_2 )
#define P_PERIPHS_PIN_MUX_3      CBUS_REG_ADDR(PERIPHS_PIN_MUX_3 )
#define P_PERIPHS_PIN_MUX_4      CBUS_REG_ADDR(PERIPHS_PIN_MUX_4 )
#define P_PERIPHS_PIN_MUX_5      CBUS_REG_ADDR(PERIPHS_PIN_MUX_5 )
#define P_PERIPHS_PIN_MUX_6      CBUS_REG_ADDR(PERIPHS_PIN_MUX_6 )
#define P_PERIPHS_PIN_MUX_7      CBUS_REG_ADDR(PERIPHS_PIN_MUX_7 )
#define P_PERIPHS_PIN_MUX_8      CBUS_REG_ADDR(PERIPHS_PIN_MUX_8 )
#define P_PERIPHS_PIN_MUX_9      CBUS_REG_ADDR(PERIPHS_PIN_MUX_9 )
#define P_PERIPHS_PIN_MUX_10     CBUS_REG_ADDR(PERIPHS_PIN_MUX_10)
#define P_PERIPHS_PIN_MUX_11     CBUS_REG_ADDR(PERIPHS_PIN_MUX_11)
#define P_PERIPHS_PIN_MUX_12     CBUS_REG_ADDR(PERIPHS_PIN_MUX_12)


#define P_NDMA_AES_CONTROL		 CBUS_REG_ADDR(NDMA_AES_CONTROL)
#define P_PREG_CTLREG0_ADDR      CBUS_REG_ADDR(PREG_CTLREG0_ADDR)

#define P_HHI_JTAG_CONFIG		 CBUS_REG_ADDR(HHI_JTAG_CONFIG)

#define P_HHI_MPEG_CLK_CNTL      CBUS_REG_ADDR(HHI_MPEG_CLK_CNTL)
#define P_HHI_DDR_PLL_CNTL       CBUS_REG_ADDR(HHI_DDR_PLL_CNTL)
#define P_HHI_DDR_PLL_CNTL2       CBUS_REG_ADDR(HHI_DDR_PLL_CNTL2)
#define P_HHI_DDR_PLL_CNTL3       CBUS_REG_ADDR(HHI_DDR_PLL_CNTL3)
#define P_HHI_DDR_PLL_CNTL4       CBUS_REG_ADDR(HHI_DDR_PLL_CNTL4)


#define P_HHI_SYS_PLL_CNTL       CBUS_REG_ADDR(HHI_SYS_PLL_CNTL)
#define P_HHI_SYS_PLL_CNTL2       CBUS_REG_ADDR(HHI_SYS_PLL_CNTL2)
#define P_HHI_SYS_PLL_CNTL3       CBUS_REG_ADDR(HHI_SYS_PLL_CNTL3)
#define P_HHI_SYS_PLL_CNTL4       CBUS_REG_ADDR(HHI_SYS_PLL_CNTL4)


#define P_HHI_SYS_CPU_CLK_CNTL        CBUS_REG_ADDR(HHI_SYS_CPU_CLK_CNTL)   

#define P_HHI_MPLL_CNTL 		CBUS_REG_ADDR(HHI_MPLL_CNTL)
#define P_HHI_MPLL_CNTL2 		CBUS_REG_ADDR(HHI_MPLL_CNTL2)
#define P_HHI_MPLL_CNTL3 		CBUS_REG_ADDR(HHI_MPLL_CNTL3)
#define P_HHI_MPLL_CNTL4 		CBUS_REG_ADDR(HHI_MPLL_CNTL4)
#define P_HHI_MPLL_CNTL5 		CBUS_REG_ADDR(HHI_MPLL_CNTL5)
#define P_HHI_MPLL_CNTL6 		CBUS_REG_ADDR(HHI_MPLL_CNTL6)
#define P_HHI_MPLL_CNTL7 		CBUS_REG_ADDR(HHI_MPLL_CNTL7)
#define P_HHI_MPLL_CNTL8 		CBUS_REG_ADDR(HHI_MPLL_CNTL8)
#define P_HHI_MPLL_CNTL9 		CBUS_REG_ADDR(HHI_MPLL_CNTL9)
#define P_HHI_MPLL_CNTL10 		CBUS_REG_ADDR(HHI_MPLL_CNTL10)

#define P_HHI_VIID_PLL_CNTL4 CBUS_REG_ADDR(HHI_VIID_PLL_CNTL4)
#define P_HHI_VIID_PLL_CNTL CBUS_REG_ADDR(HHI_VIID_PLL_CNTL)
#define P_HHI_VIID_PLL_CNTL2 CBUS_REG_ADDR(HHI_VIID_PLL_CNTL2)
#define P_HHI_VIID_PLL_CNTL3 CBUS_REG_ADDR(HHI_VIID_PLL_CNTL3)

#define P_HHI_VID_PLL_CNTL CBUS_REG_ADDR(HHI_VID_PLL_CNTL)
#define P_HHI_VID_PLL_CNTL2 CBUS_REG_ADDR(HHI_VID_PLL_CNTL2)
#define P_HHI_VID_PLL_CNTL3 CBUS_REG_ADDR(HHI_VID_PLL_CNTL3)
#define P_HHI_VID_PLL_CNTL4 CBUS_REG_ADDR(HHI_VID_PLL_CNTL4)


#define P_MSR_CLK_REG0            CBUS_REG_ADDR(MSR_CLK_REG0)
#define P_MSR_CLK_REG1            CBUS_REG_ADDR(MSR_CLK_REG1)
#define P_MSR_CLK_REG2            CBUS_REG_ADDR(MSR_CLK_REG2)


#define P_SPI_FLASH_CMD                 CBUS_REG_ADDR(SPI_FLASH_CMD   )
#define P_SPI_FLASH_ADDR                CBUS_REG_ADDR(SPI_FLASH_ADDR  )
#define P_SPI_FLASH_CTRL                CBUS_REG_ADDR(SPI_FLASH_CTRL  )
#define P_SPI_FLASH_CTRL1               CBUS_REG_ADDR(SPI_FLASH_CTRL1 )
#define P_SPI_FLASH_STATUS              CBUS_REG_ADDR(SPI_FLASH_STATUS)
#define P_SPI_FLASH_CTRL2               CBUS_REG_ADDR(SPI_FLASH_CTRL2 )
#define P_SPI_FLASH_CLOCK               CBUS_REG_ADDR(SPI_FLASH_CLOCK )
#define P_SPI_FLASH_USER                CBUS_REG_ADDR(SPI_FLASH_USER  )
#define P_SPI_FLASH_USER1               CBUS_REG_ADDR(SPI_FLASH_USER1 )
#define P_SPI_FLASH_USER2               CBUS_REG_ADDR(SPI_FLASH_USER2 )
#define P_SPI_FLASH_USER3               CBUS_REG_ADDR(SPI_FLASH_USER3 )
#define P_SPI_FLASH_USER4               CBUS_REG_ADDR(SPI_FLASH_USER4 )
#define P_SPI_FLASH_SLAVE               CBUS_REG_ADDR(SPI_FLASH_SLAVE )
#define P_SPI_FLASH_SLAVE1              CBUS_REG_ADDR(SPI_FLASH_SLAVE1)
#define P_SPI_FLASH_SLAVE2              CBUS_REG_ADDR(SPI_FLASH_SLAVE2)
#define P_SPI_FLASH_SLAVE3              CBUS_REG_ADDR(SPI_FLASH_SLAVE3)
#define P_SPI_FLASH_C0                  CBUS_REG_ADDR(SPI_FLASH_C0    )
#define P_SPI_FLASH_C1                  CBUS_REG_ADDR(SPI_FLASH_C1    )
#define P_SPI_FLASH_C2                  CBUS_REG_ADDR(SPI_FLASH_C2    )
#define P_SPI_FLASH_C3                  CBUS_REG_ADDR(SPI_FLASH_C3    )
#define P_SPI_FLASH_C4                  CBUS_REG_ADDR(SPI_FLASH_C4    )
#define P_SPI_FLASH_C5                  CBUS_REG_ADDR(SPI_FLASH_C5    )
#define P_SPI_FLASH_C6                  CBUS_REG_ADDR(SPI_FLASH_C6    )
#define P_SPI_FLASH_C7                  CBUS_REG_ADDR(SPI_FLASH_C7    )
#define P_SPI_FLASH_B8                  CBUS_REG_ADDR(SPI_FLASH_B8    )
#define P_SPI_FLASH_B9                  CBUS_REG_ADDR(SPI_FLASH_B9    )
#define P_SPI_FLASH_B10                 CBUS_REG_ADDR(SPI_FLASH_B10   )
#define P_SPI_FLASH_B11                 CBUS_REG_ADDR(SPI_FLASH_B11   )
#define P_SPI_FLASH_B12                 CBUS_REG_ADDR(SPI_FLASH_B12   )
#define P_SPI_FLASH_B13                 CBUS_REG_ADDR(SPI_FLASH_B13   )
#define P_SPI_FLASH_B14                 CBUS_REG_ADDR(SPI_FLASH_B14   )
#define P_SPI_FLASH_B15                 CBUS_REG_ADDR(SPI_FLASH_B15   )


#define P_ISA_TIMER_MUX                 CBUS_REG_ADDR(ISA_TIMER_MUX)
#define P_ISA_TIMERA                    CBUS_REG_ADDR(ISA_TIMERA   )
#define P_ISA_TIMERB                    CBUS_REG_ADDR(ISA_TIMERB   )
#define P_ISA_TIMERC                    CBUS_REG_ADDR(ISA_TIMERC   )
#define P_ISA_TIMERD                    CBUS_REG_ADDR(ISA_TIMERD   )
#define P_ISA_TIMERE                    CBUS_REG_ADDR(ISA_TIMERE   )

#define P_WATCHDOG_TC					CBUS_REG_ADDR(WATCHDOG_TC)
#define P_WATCHDOG_RESET                CBUS_REG_ADDR(WATCHDOG_RESET)

#define P_HHI_DEMOD_PLL_CNTL			CBUS_REG_ADDR(HHI_DEMOD_PLL_CNTL)
#define P_HHI_DEMOD_PLL_CNTL3			CBUS_REG_ADDR(HHI_DEMOD_PLL_CNTL3)


#define P_PCTL_SCFG_ADDR 		APB_REG_ADDR( PCTL_SCFG_ADDR 		)
#define P_PCTL_SCTL_ADDR 		APB_REG_ADDR( PCTL_SCTL_ADDR 		)
#define P_PCTL_STAT_ADDR 		APB_REG_ADDR( PCTL_STAT_ADDR 		)
#define P_PCTL_MCMD_ADDR 		APB_REG_ADDR( PCTL_MCMD_ADDR 		)
#define P_PCTL_POWCTL_ADDR 		APB_REG_ADDR( PCTL_POWCTL_ADDR 		)
#define P_PCTL_POWSTAT_ADDR 	APB_REG_ADDR( PCTL_POWSTAT_ADDR 	)
#define P_PCTL_MCFG_ADDR 		APB_REG_ADDR( PCTL_MCFG_ADDR 		)
#define P_PCTL_PPCFG_ADDR 		APB_REG_ADDR( PCTL_PPCFG_ADDR 		)
#define P_PCTL_MSTAT_ADDR 		APB_REG_ADDR( PCTL_MSTAT_ADDR 		)
#define P_PCTL_ODTCFG_ADDR 		APB_REG_ADDR( PCTL_ODTCFG_ADDR 		)
#define P_PCTL_DQSECFG_ADDR 	APB_REG_ADDR( PCTL_DQSECFG_ADDR 	)
#define P_PCTL_DTUPDES_ADDR 	APB_REG_ADDR( PCTL_DTUPDES_ADDR 	)
#define P_PCTL_DTUNA_ADDR 		APB_REG_ADDR( PCTL_DTUNA_ADDR 		)
#define P_PCTL_DTUNE_ADDR 		APB_REG_ADDR( PCTL_DTUNE_ADDR 		)
#define P_PCTL_DTUPRD0_ADDR 	APB_REG_ADDR( PCTL_DTUPRD0_ADDR 	)
#define P_PCTL_DTUPRD1_ADDR 	APB_REG_ADDR( PCTL_DTUPRD1_ADDR 	)
#define P_PCTL_DTUPRD2_ADDR 	APB_REG_ADDR( PCTL_DTUPRD2_ADDR 	)
#define P_PCTL_DTUPRD3_ADDR 	APB_REG_ADDR( PCTL_DTUPRD3_ADDR 	)
#define P_PCTL_DTUAWDT_ADDR 	APB_REG_ADDR( PCTL_DTUAWDT_ADDR 	)
#define P_PCTL_TOGCNT1U_ADDR 	APB_REG_ADDR( PCTL_TOGCNT1U_ADDR 	)
#define P_PCTL_TINIT_ADDR 		APB_REG_ADDR( PCTL_TINIT_ADDR 		)
#define P_PCTL_TRSTH_ADDR 		APB_REG_ADDR( PCTL_TRSTH_ADDR 		)
#define P_PCTL_TOGCNT100N_ADDR 	APB_REG_ADDR( PCTL_TOGCNT100N_ADDR 	)
#define P_PCTL_TREFI_ADDR 		APB_REG_ADDR( PCTL_TREFI_ADDR 		)
#define P_PCTL_TMRD_ADDR 		APB_REG_ADDR( PCTL_TMRD_ADDR 		)
#define P_PCTL_TRFC_ADDR 		APB_REG_ADDR( PCTL_TRFC_ADDR 		)
#define P_PCTL_TRP_ADDR 		APB_REG_ADDR( PCTL_TRP_ADDR 		)
#define P_PCTL_TRTW_ADDR 		APB_REG_ADDR( PCTL_TRTW_ADDR 		)
#define P_PCTL_TAL_ADDR 		APB_REG_ADDR( PCTL_TAL_ADDR 		)
#define P_PCTL_TCL_ADDR 		APB_REG_ADDR( PCTL_TCL_ADDR 		)
#define P_PCTL_TCWL_ADDR 		APB_REG_ADDR( PCTL_TCWL_ADDR 		)
#define P_PCTL_TRAS_ADDR 		APB_REG_ADDR( PCTL_TRAS_ADDR 		)
#define P_PCTL_TRC_ADDR 		APB_REG_ADDR( PCTL_TRC_ADDR 		)
#define P_PCTL_TRCD_ADDR 		APB_REG_ADDR( PCTL_TRCD_ADDR 		)
#define P_PCTL_TRRD_ADDR 		APB_REG_ADDR( PCTL_TRRD_ADDR 		)
#define P_PCTL_TRTP_ADDR 		APB_REG_ADDR( PCTL_TRTP_ADDR 		)
#define P_PCTL_TWR_ADDR 		APB_REG_ADDR( PCTL_TWR_ADDR 		)
#define P_PCTL_TWTR_ADDR 		APB_REG_ADDR( PCTL_TWTR_ADDR 		)
#define P_PCTL_TEXSR_ADDR 		APB_REG_ADDR( PCTL_TEXSR_ADDR 		)
#define P_PCTL_TXP_ADDR 		APB_REG_ADDR( PCTL_TXP_ADDR 		)
#define P_PCTL_TXPDLL_ADDR 		APB_REG_ADDR( PCTL_TXPDLL_ADDR 		)
#define P_PCTL_TZQCS_ADDR 		APB_REG_ADDR( PCTL_TZQCS_ADDR 		)
#define P_PCTL_TZQCSI_ADDR 		APB_REG_ADDR( PCTL_TZQCSI_ADDR 		)
#define P_PCTL_TDQS_ADDR 		APB_REG_ADDR( PCTL_TDQS_ADDR 		)
#define P_PCTL_TCKSRE_ADDR 		APB_REG_ADDR( PCTL_TCKSRE_ADDR 		)
#define P_PCTL_TCKSRX_ADDR 		APB_REG_ADDR( PCTL_TCKSRX_ADDR 		)
#define P_PCTL_TCKE_ADDR 		APB_REG_ADDR( PCTL_TCKE_ADDR 		)
#define P_PCTL_TMOD_ADDR 		APB_REG_ADDR( PCTL_TMOD_ADDR 		)
#define P_PCTL_TRSTL_ADDR 		APB_REG_ADDR( PCTL_TRSTL_ADDR 		)
#define P_PCTL_TZQCL_ADDR 		APB_REG_ADDR( PCTL_TZQCL_ADDR 		)
#define P_PCTL_DWLCFG0_ADDR 	APB_REG_ADDR( PCTL_DWLCFG0_ADDR 	)
#define P_PCTL_DWLCFG1_ADDR 	APB_REG_ADDR( PCTL_DWLCFG1_ADDR 	)
#define P_PCTL_DWLCFG2_ADDR 	APB_REG_ADDR( PCTL_DWLCFG2_ADDR 	)
#define P_PCTL_DWLCFG3_ADDR 	APB_REG_ADDR( PCTL_DWLCFG3_ADDR 	)
#define P_PCTL_ECCCFG_ADDR 		APB_REG_ADDR( PCTL_ECCCFG_ADDR 		)
#define P_PCTL_ECCTST_ADDR 		APB_REG_ADDR( PCTL_ECCTST_ADDR 		)
#define P_PCTL_ECCCLR_ADDR 		APB_REG_ADDR( PCTL_ECCCLR_ADDR 		)
#define P_PCTL_ECCLOG_ADDR 		APB_REG_ADDR( PCTL_ECCLOG_ADDR 		)
#define P_PCTL_ADDRMAP_ADDR 	APB_REG_ADDR( PCTL_ADDRMAP_ADDR 	)
#define P_PCTL_IDDEC0_ADDR 		APB_REG_ADDR( PCTL_IDDEC0_ADDR 		)
#define P_PCTL_IDDEC1_ADDR 		APB_REG_ADDR( PCTL_IDDEC1_ADDR 		)
#define P_PCTL_DTUWACTL_ADDR 	APB_REG_ADDR( PCTL_DTUWACTL_ADDR 	)
#define P_PCTL_DTURACTL_ADDR 	APB_REG_ADDR( PCTL_DTURACTL_ADDR 	)
#define P_PCTL_DTUCFG_ADDR 		APB_REG_ADDR( PCTL_DTUCFG_ADDR 		)
#define P_PCTL_DTUECTL_ADDR 	APB_REG_ADDR( PCTL_DTUECTL_ADDR 	)
#define P_PCTL_DTUWD0_ADDR 		APB_REG_ADDR( PCTL_DTUWD0_ADDR 		)
#define P_PCTL_DTUWD1_ADDR 		APB_REG_ADDR( PCTL_DTUWD1_ADDR 		)
#define P_PCTL_DTUWD2_ADDR 		APB_REG_ADDR( PCTL_DTUWD2_ADDR 		)
#define P_PCTL_DTUWD3_ADDR 		APB_REG_ADDR( PCTL_DTUWD3_ADDR 		)
#define P_PCTL_DTUWDM_ADDR 		APB_REG_ADDR( PCTL_DTUWDM_ADDR 		)
#define P_PCTL_DTURD0_ADDR 		APB_REG_ADDR( PCTL_DTURD0_ADDR 		)
#define P_PCTL_DTURD1_ADDR 		APB_REG_ADDR( PCTL_DTURD1_ADDR 		)
#define P_PCTL_DTURD2_ADDR 		APB_REG_ADDR( PCTL_DTURD2_ADDR 		)
#define P_PCTL_DTURD3_ADDR 		APB_REG_ADDR( PCTL_DTURD3_ADDR 		)
#define P_PCTL_DTULFSRWD_ADDR 	APB_REG_ADDR( PCTL_DTULFSRWD_ADDR 	)
#define P_PCTL_DTULFSRRD_ADDR 	APB_REG_ADDR( PCTL_DTULFSRRD_ADDR 	)
#define P_PCTL_DTUEAF_ADDR 		APB_REG_ADDR( PCTL_DTUEAF_ADDR 		)
#define P_PCTL_PHYCR_ADDR 		APB_REG_ADDR( PCTL_PHYCR_ADDR 		)
#define P_PCTL_PHYSR_ADDR 		APB_REG_ADDR( PCTL_PHYSR_ADDR 		)
#define P_PCTL_IOCR_ADDR 		APB_REG_ADDR( PCTL_IOCR_ADDR 		)
#define P_PCTL_RSLR0_ADDR 		APB_REG_ADDR( PCTL_RSLR0_ADDR 		)
#define P_PCTL_RSLR1_ADDR 		APB_REG_ADDR( PCTL_RSLR1_ADDR 		)
#define P_PCTL_RSLR2_ADDR 		APB_REG_ADDR( PCTL_RSLR2_ADDR 		)
#define P_PCTL_RSLR3_ADDR 		APB_REG_ADDR( PCTL_RSLR3_ADDR 		)
#define P_PCTL_RDGR0_ADDR 		APB_REG_ADDR( PCTL_RDGR0_ADDR 		)
#define P_PCTL_RDGR1_ADDR 		APB_REG_ADDR( PCTL_RDGR1_ADDR 		)
#define P_PCTL_RDGR2_ADDR 		APB_REG_ADDR( PCTL_RDGR2_ADDR 		)
#define P_PCTL_RDGR3_ADDR 		APB_REG_ADDR( PCTL_RDGR3_ADDR 		)
#define P_PCTL_ZQCR_ADDR 		APB_REG_ADDR( PCTL_ZQCR_ADDR 		)
#define P_PCTL_ZQSR_ADDR 		APB_REG_ADDR( PCTL_ZQSR_ADDR 		)
#define P_PCTL_DLLCR_ADDR 		APB_REG_ADDR( PCTL_DLLCR_ADDR 		)
#define P_PCTL_DLLCR0_ADDR 		APB_REG_ADDR( PCTL_DLLCR0_ADDR 		)
#define P_PCTL_DLLCR1_ADDR 		APB_REG_ADDR( PCTL_DLLCR1_ADDR 		)
#define P_PCTL_DLLCR2_ADDR 		APB_REG_ADDR( PCTL_DLLCR2_ADDR 		)
#define P_PCTL_DLLCR3_ADDR 		APB_REG_ADDR( PCTL_DLLCR3_ADDR 		)
#define P_PCTL_DLLCR4_ADDR 		APB_REG_ADDR( PCTL_DLLCR4_ADDR 		)
#define P_PCTL_DLLCR5_ADDR 		APB_REG_ADDR( PCTL_DLLCR5_ADDR 		)
#define P_PCTL_DLLCR6_ADDR 		APB_REG_ADDR( PCTL_DLLCR6_ADDR 		)
#define P_PCTL_DLLCR7_ADDR 		APB_REG_ADDR( PCTL_DLLCR7_ADDR 		)
#define P_PCTL_DLLCR8_ADDR 		APB_REG_ADDR( PCTL_DLLCR8_ADDR 		)
#define P_PCTL_DLLCR9_ADDR 		APB_REG_ADDR( PCTL_DLLCR9_ADDR 		)
#define P_PCTL_DQTR0_ADDR 		APB_REG_ADDR( PCTL_DQTR0_ADDR 		)
#define P_PCTL_DQTR1_ADDR 		APB_REG_ADDR( PCTL_DQTR1_ADDR 		)
#define P_PCTL_DQTR2_ADDR 		APB_REG_ADDR( PCTL_DQTR2_ADDR 		)
#define P_PCTL_DQTR3_ADDR 		APB_REG_ADDR( PCTL_DQTR3_ADDR 		)
#define P_PCTL_DQTR4_ADDR 		APB_REG_ADDR( PCTL_DQTR4_ADDR 		)
#define P_PCTL_DQTR5_ADDR 		APB_REG_ADDR( PCTL_DQTR5_ADDR 		)
#define P_PCTL_DQTR6_ADDR 		APB_REG_ADDR( PCTL_DQTR6_ADDR 		)
#define P_PCTL_DQTR7_ADDR 		APB_REG_ADDR( PCTL_DQTR7_ADDR 		)
#define P_PCTL_DQTR8_ADDR 		APB_REG_ADDR( PCTL_DQTR8_ADDR 		)
#define P_PCTL_DQSTR_ADDR 		APB_REG_ADDR( PCTL_DQSTR_ADDR 		)
#define P_PCTL_DQSNTR_ADDR 		APB_REG_ADDR( PCTL_DQSNTR_ADDR 		)
#define P_PCTL_PHYPVTCFG_ADDR 	APB_REG_ADDR( PCTL_PHYPVTCFG_ADDR 	)
#define P_PCTL_PHYPVTSTAT_ADDR 	APB_REG_ADDR( PCTL_PHYPVTSTAT_ADDR 	)
#define P_PCTL_PHYTUPDON_ADDR 	APB_REG_ADDR( PCTL_PHYTUPDON_ADDR 	)
#define P_PCTL_PHYTUPDDLY_ADDR 	APB_REG_ADDR( PCTL_PHYTUPDDLY_ADDR 	)
#define P_PCTL_PVTTUPDON_ADDR 	APB_REG_ADDR( PCTL_PVTTUPDON_ADDR 	)
#define P_PCTL_PVTTUPDDLY_ADDR 	APB_REG_ADDR( PCTL_PVTTUPDDLY_ADDR 	)
#define P_PCTL_PHYPVTUPDI_ADDR 	APB_REG_ADDR( PCTL_PHYPVTUPDI_ADDR 	)
#define P_PCTL_SCHCFG_ADDR 		APB_REG_ADDR( PCTL_SCHCFG_ADDR 		)
#define P_PCTL_IPVR_ADDR 		APB_REG_ADDR( PCTL_IPVR_ADDR 		)
#define P_PCTL_IPTR_ADDR 		APB_REG_ADDR( PCTL_IPTR_ADDR 		)


#define P_SDIO_EXTENSION        CBUS_REG_ADDR(SDIO_EXTENSION)
#define P_SDIO_IRQ_CONFIG       CBUS_REG_ADDR(SDIO_IRQ_CONFIG )
#define P_SDIO_CONFIG           CBUS_REG_ADDR(SDIO_CONFIG     )
#define P_SDIO_MULT_CONFIG      CBUS_REG_ADDR(SDIO_MULT_CONFIG)
#define P_CMD_ARGUMENT          CBUS_REG_ADDR(CMD_ARGUMENT    )
#define P_CMD_SEND              CBUS_REG_ADDR(CMD_SEND        )
#define P_SDIO_STATUS_IRQ       CBUS_REG_ADDR(SDIO_STATUS_IRQ )
#define P_SDIO_M_ADDR           CBUS_REG_ADDR(SDIO_M_ADDR)

#define P_PREG_PAD_GPIO0_EN_N                        CBUS_REG_ADDR(0x200c)
#define P_PREG_PAD_GPIO0_O                           CBUS_REG_ADDR(0x200d)
#define P_PREG_PAD_GPIO0_I                           CBUS_REG_ADDR(0x200e)
#define P_PREG_PAD_GPIO1_EN_N                        CBUS_REG_ADDR(0x200f)
#define P_PREG_PAD_GPIO1_O                           CBUS_REG_ADDR(0x2010)
#define P_PREG_PAD_GPIO1_I                           CBUS_REG_ADDR(0x2011)
#define P_PREG_PAD_GPIO2_EN_N                        CBUS_REG_ADDR(0x2012)
#define P_PREG_PAD_GPIO2_O                           CBUS_REG_ADDR(0x2013)
#define P_PREG_PAD_GPIO2_I                           CBUS_REG_ADDR(0x2014)
#define P_PREG_PAD_GPIO3_EN_N                        CBUS_REG_ADDR(0x2015)
#define P_PREG_PAD_GPIO3_O                           CBUS_REG_ADDR(0x2016)
#define P_PREG_PAD_GPIO3_I                           CBUS_REG_ADDR(0x2017)
#define P_PREG_PAD_GPIO4_EN_N                        CBUS_REG_ADDR(0x2018)
#define P_PREG_PAD_GPIO4_O                           CBUS_REG_ADDR(0x2019)
#define P_PREG_PAD_GPIO4_I                           CBUS_REG_ADDR(0x201a)
#define P_PREG_PAD_GPIO5_EN_N                        CBUS_REG_ADDR(0x201b)
#define P_PREG_PAD_GPIO5_O                           CBUS_REG_ADDR(0x201c)
#define P_PREG_PAD_GPIO5_I                           CBUS_REG_ADDR(0x201d)

#define P_NAND_CMD                                CBUS_REG_ADDR(NAND_CMD)
#define P_NAND_CFG                                CBUS_REG_ADDR(NAND_CFG)
#define P_NAND_DADR                               CBUS_REG_ADDR(NAND_DADR)
#define P_NAND_IADR                               CBUS_REG_ADDR(NAND_IADR)
#define P_NAND_BUF                                CBUS_REG_ADDR(NAND_BUF)
#define P_NAND_INFO                               CBUS_REG_ADDR(NAND_INFO)
#define P_NAND_DC                                 CBUS_REG_ADDR(NAND_DC)
#define P_NAND_ADR                                CBUS_REG_ADDR(NAND_ADR)
#define P_NAND_DL                                 CBUS_REG_ADDR(NAND_DL)
#define P_NAND_DH                                 CBUS_REG_ADDR(NAND_DH)
#define P_NAND_CADR                               CBUS_REG_ADDR(NAND_CADR)
#define P_NAND_SADR                               CBUS_REG_ADDR(NAND_SADR)

#define P_AHB_ARBDEC_REG                            CBUS_REG_ADDR(AHB_ARBDEC_REG)
#define P_HHI_GCLK_MPEG1                            CBUS_REG_ADDR(HHI_GCLK_MPEG1)
#define P_RESET6_REGISTER                           CBUS_REG_ADDR(RESET6_REGISTER)
#define P_RESET5_REGISTER                           CBUS_REG_ADDR(RESET5_REGISTER)
#define P_RESET4_REGISTER                           CBUS_REG_ADDR(RESET4_REGISTER)
#define P_RESET3_REGISTER                           CBUS_REG_ADDR(RESET3_REGISTER)
#define P_RESET2_REGISTER                           CBUS_REG_ADDR(RESET2_REGISTER)
#define P_RESET1_REGISTER                           CBUS_REG_ADDR(RESET1_REGISTER)
#define P_RESET0_REGISTER                           CBUS_REG_ADDR(RESET0_REGISTER)


#define P_VGHL_PWM_REG0                              CBUS_REG_ADDR(VGHL_PWM_REG0)


#endif                                                          
