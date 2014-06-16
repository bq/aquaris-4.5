/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __ASM_ARCH_OMAP_FPGA_H
#define __ASM_ARCH_OMAP_FPGA_H
#define omap1510_fpga_init_irq() (0)
#define fpga_read(reg) __raw_readb(reg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define fpga_write(val, reg) __raw_writeb(val, reg)
#define H2P2_DBG_FPGA_BASE 0xE8000000  
#define H2P2_DBG_FPGA_SIZE SZ_4K  
#define H2P2_DBG_FPGA_START 0x04000000  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define H2P2_DBG_FPGA_ETHR_START (H2P2_DBG_FPGA_START + 0x300)
#define H2P2_DBG_FPGA_FPGA_REV (H2P2_DBG_FPGA_BASE + 0x10)  
#define H2P2_DBG_FPGA_BOARD_REV (H2P2_DBG_FPGA_BASE + 0x12)  
#define H2P2_DBG_FPGA_GPIO (H2P2_DBG_FPGA_BASE + 0x14)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define H2P2_DBG_FPGA_LEDS (H2P2_DBG_FPGA_BASE + 0x16)  
#define H2P2_DBG_FPGA_MISC_INPUTS (H2P2_DBG_FPGA_BASE + 0x18)  
#define H2P2_DBG_FPGA_LAN_STATUS (H2P2_DBG_FPGA_BASE + 0x1A)  
#define H2P2_DBG_FPGA_LAN_RESET (H2P2_DBG_FPGA_BASE + 0x1C)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct h2p2_dbg_fpga {
 u16 smc91x[8];
 u16 fpga_rev;
 u16 board_rev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 gpio_outputs;
 u16 leds;
 u16 misc_inputs;
 u16 lan_status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 lan_reset;
 u16 reserved0;
 u16 ps2_data;
 u16 ps2_ctrl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define H2P2_DBG_FPGA_LED_GREEN (1 << 15)
#define H2P2_DBG_FPGA_LED_AMBER (1 << 14)
#define H2P2_DBG_FPGA_LED_RED (1 << 13)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define H2P2_DBG_FPGA_LED_BLUE (1 << 12)
#define H2P2_DBG_FPGA_LOAD_METER (1 << 0) 
#define H2P2_DBG_FPGA_LOAD_METER_SIZE 11
#define H2P2_DBG_FPGA_LOAD_METER_MASK ((1 << H2P2_DBG_FPGA_LOAD_METER_SIZE) - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define H2P2_DBG_FPGA_P2_LED_TIMER (1 << 0)
#define H2P2_DBG_FPGA_P2_LED_IDLE (1 << 1)
#define OMAP1510_FPGA_BASE 0xE8000000  
#define OMAP1510_FPGA_SIZE SZ_4K
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_START 0x08000000  
#define OMAP1510_FPGA_REV_LOW (OMAP1510_FPGA_BASE + 0x0)
#define OMAP1510_FPGA_REV_HIGH (OMAP1510_FPGA_BASE + 0x1)
#define OMAP1510_FPGA_LCD_PANEL_CONTROL (OMAP1510_FPGA_BASE + 0x2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_LED_DIGIT (OMAP1510_FPGA_BASE + 0x3)
#define INNOVATOR_FPGA_HID_SPI (OMAP1510_FPGA_BASE + 0x4)
#define OMAP1510_FPGA_POWER (OMAP1510_FPGA_BASE + 0x5)
#define OMAP1510_FPGA_ISR_LO (OMAP1510_FPGA_BASE + 0x6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_ISR_HI (OMAP1510_FPGA_BASE + 0x7)
#define OMAP1510_FPGA_IMR_LO (OMAP1510_FPGA_BASE + 0x8)
#define OMAP1510_FPGA_IMR_HI (OMAP1510_FPGA_BASE + 0x9)
#define OMAP1510_FPGA_HOST_RESET (OMAP1510_FPGA_BASE + 0xa)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_RST (OMAP1510_FPGA_BASE + 0xb)
#define OMAP1510_FPGA_AUDIO (OMAP1510_FPGA_BASE + 0xc)
#define OMAP1510_FPGA_DIP (OMAP1510_FPGA_BASE + 0xe)
#define OMAP1510_FPGA_FPGA_IO (OMAP1510_FPGA_BASE + 0xf)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_UART1 (OMAP1510_FPGA_BASE + 0x14)
#define OMAP1510_FPGA_UART2 (OMAP1510_FPGA_BASE + 0x15)
#define OMAP1510_FPGA_OMAP1510_STATUS (OMAP1510_FPGA_BASE + 0x16)
#define OMAP1510_FPGA_BOARD_REV (OMAP1510_FPGA_BASE + 0x18)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510P1_PPT_DATA (OMAP1510_FPGA_BASE + 0x100)
#define OMAP1510P1_PPT_STATUS (OMAP1510_FPGA_BASE + 0x101)
#define OMAP1510P1_PPT_CONTROL (OMAP1510_FPGA_BASE + 0x102)
#define OMAP1510_FPGA_TOUCHSCREEN (OMAP1510_FPGA_BASE + 0x204)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INNOVATOR_FPGA_INFO (OMAP1510_FPGA_BASE + 0x205)
#define INNOVATOR_FPGA_LCD_BRIGHT_LO (OMAP1510_FPGA_BASE + 0x206)
#define INNOVATOR_FPGA_LCD_BRIGHT_HI (OMAP1510_FPGA_BASE + 0x207)
#define INNOVATOR_FPGA_LED_GRN_LO (OMAP1510_FPGA_BASE + 0x208)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INNOVATOR_FPGA_LED_GRN_HI (OMAP1510_FPGA_BASE + 0x209)
#define INNOVATOR_FPGA_LED_RED_LO (OMAP1510_FPGA_BASE + 0x20a)
#define INNOVATOR_FPGA_LED_RED_HI (OMAP1510_FPGA_BASE + 0x20b)
#define INNOVATOR_FPGA_CAM_USB_CONTROL (OMAP1510_FPGA_BASE + 0x20c)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INNOVATOR_FPGA_EXP_CONTROL (OMAP1510_FPGA_BASE + 0x20d)
#define INNOVATOR_FPGA_ISR2 (OMAP1510_FPGA_BASE + 0x20e)
#define INNOVATOR_FPGA_IMR2 (OMAP1510_FPGA_BASE + 0x210)
#define OMAP1510_FPGA_ETHR_START (OMAP1510_FPGA_START + 0x300)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_RESET_VALUE 0x42
#define OMAP1510_FPGA_PCR_IF_PD0 (1 << 7)
#define OMAP1510_FPGA_PCR_COM2_EN (1 << 6)
#define OMAP1510_FPGA_PCR_COM1_EN (1 << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_PCR_EXP_PD0 (1 << 4)
#define OMAP1510_FPGA_PCR_EXP_PD1 (1 << 3)
#define OMAP1510_FPGA_PCR_48MHZ_CLK (1 << 2)
#define OMAP1510_FPGA_PCR_4MHZ_CLK (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_PCR_RSRVD_BIT0 (1 << 0)
#define OMAP1510_FPGA_HID_SCLK (1<<0)  
#define OMAP1510_FPGA_HID_MOSI (1<<1)  
#define OMAP1510_FPGA_HID_nSS (1<<2)  
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_HID_nHSUS (1<<3)  
#define OMAP1510_FPGA_HID_MISO (1<<4)  
#define OMAP1510_FPGA_HID_ATN (1<<5)  
#define OMAP1510_FPGA_HID_rsrvd (1<<6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_FPGA_HID_RESETn (1<<7)  
#define OMAP1510_INT_FPGA (IH_GPIO_BASE + 13)
#define OMAP1510_IH_FPGA_BASE IH_BOARD_BASE
#define OMAP1510_INT_FPGA_ATN (OMAP1510_IH_FPGA_BASE + 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_FPGA_ACK (OMAP1510_IH_FPGA_BASE + 1)
#define OMAP1510_INT_FPGA2 (OMAP1510_IH_FPGA_BASE + 2)
#define OMAP1510_INT_FPGA3 (OMAP1510_IH_FPGA_BASE + 3)
#define OMAP1510_INT_FPGA4 (OMAP1510_IH_FPGA_BASE + 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_FPGA5 (OMAP1510_IH_FPGA_BASE + 5)
#define OMAP1510_INT_FPGA6 (OMAP1510_IH_FPGA_BASE + 6)
#define OMAP1510_INT_FPGA7 (OMAP1510_IH_FPGA_BASE + 7)
#define OMAP1510_INT_FPGA8 (OMAP1510_IH_FPGA_BASE + 8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_FPGA9 (OMAP1510_IH_FPGA_BASE + 9)
#define OMAP1510_INT_FPGA10 (OMAP1510_IH_FPGA_BASE + 10)
#define OMAP1510_INT_FPGA11 (OMAP1510_IH_FPGA_BASE + 11)
#define OMAP1510_INT_FPGA12 (OMAP1510_IH_FPGA_BASE + 12)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_ETHER (OMAP1510_IH_FPGA_BASE + 13)
#define OMAP1510_INT_FPGAUART1 (OMAP1510_IH_FPGA_BASE + 14)
#define OMAP1510_INT_FPGAUART2 (OMAP1510_IH_FPGA_BASE + 15)
#define OMAP1510_INT_FPGA_TS (OMAP1510_IH_FPGA_BASE + 16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_FPGA17 (OMAP1510_IH_FPGA_BASE + 17)
#define OMAP1510_INT_FPGA_CAM (OMAP1510_IH_FPGA_BASE + 18)
#define OMAP1510_INT_FPGA_RTC_A (OMAP1510_IH_FPGA_BASE + 19)
#define OMAP1510_INT_FPGA_RTC_B (OMAP1510_IH_FPGA_BASE + 20)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OMAP1510_INT_FPGA_CD (OMAP1510_IH_FPGA_BASE + 21)
#define OMAP1510_INT_FPGA22 (OMAP1510_IH_FPGA_BASE + 22)
#define OMAP1510_INT_FPGA23 (OMAP1510_IH_FPGA_BASE + 23)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */