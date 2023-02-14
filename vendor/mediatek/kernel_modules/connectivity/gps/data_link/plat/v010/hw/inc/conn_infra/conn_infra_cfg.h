/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */
#ifndef __CONN_INFRA_CFG_REGS_H__
#define __CONN_INFRA_CFG_REGS_H__

#define CONN_INFRA_CFG_BASE                                    0x18001000

#define CONN_INFRA_CFG_CONN_HW_VER_ADDR                        (CONN_INFRA_CFG_BASE + 0x0000)
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_ADDR             (CONN_INFRA_CFG_BASE + 0x0618)
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_ADDR             (CONN_INFRA_CFG_BASE + 0x061C)
#define CONN_INFRA_CFG_PLL_STATUS_ADDR                         (CONN_INFRA_CFG_BASE + 0x0810)
#define CONN_INFRA_CFG_GPS_PWRCTRL0_ADDR                       (CONN_INFRA_CFG_BASE + 0x0878)
#define CONN_INFRA_CFG_CKGEN_BUS_ADDR                          (CONN_INFRA_CFG_BASE + 0x0A00)
#define CONN_INFRA_CFG_EMI_CTL_TOP_ADDR                        (CONN_INFRA_CFG_BASE + 0x0C10)
#define CONN_INFRA_CFG_EMI_CTL_WF_ADDR                         (CONN_INFRA_CFG_BASE + 0x0C14)
#define CONN_INFRA_CFG_EMI_CTL_BT_ADDR                         (CONN_INFRA_CFG_BASE + 0x0C18)
#define CONN_INFRA_CFG_EMI_CTL_GPS_ADDR                        (CONN_INFRA_CFG_BASE + 0x0C1C)


#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_ADDR     CONN_INFRA_CFG_CONN_HW_VER_ADDR
#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_MASK     0xFFFFFFFF
#define CONN_INFRA_CFG_CONN_HW_VER_RO_CONN_HW_VERSION_SHFT     0

#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_EN_ADDR CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_EN_MASK 0x00000001
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_EN_SHFT 0
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_RDY_MASK 0x00000008
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_TX_RDY_SHFT 3
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_EN_ADDR CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_EN_MASK 0x00000010
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_EN_SHFT 4
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_RDY_MASK 0x00000080
#define CONN_INFRA_CFG_GALS_CONN2GPS_SLP_CTRL_R_CONN2GPS_SLP_PROT_RX_RDY_SHFT 7

#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_EN_ADDR CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_EN_MASK 0x00000001
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_EN_SHFT 0
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_RDY_MASK 0x00000008
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_TX_RDY_SHFT 3
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_EN_ADDR CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_EN_MASK 0x00000010
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_EN_SHFT 4
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_RDY_ADDR \
	CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_ADDR
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_RDY_MASK 0x00000080
#define CONN_INFRA_CFG_GALS_GPS2CONN_SLP_CTRL_R_GPS2CONN_SLP_PROT_RX_RDY_SHFT 7

#define CONN_INFRA_CFG_PLL_STATUS_BPLL_RDY_ADDR                CONN_INFRA_CFG_PLL_STATUS_ADDR
#define CONN_INFRA_CFG_PLL_STATUS_BPLL_RDY_MASK                0x00000002
#define CONN_INFRA_CFG_PLL_STATUS_BPLL_RDY_SHFT                1

#define CONN_INFRA_CFG_GPS_PWRCTRL0_GP_FUNCTION_EN_ADDR        CONN_INFRA_CFG_GPS_PWRCTRL0_ADDR
#define CONN_INFRA_CFG_GPS_PWRCTRL0_GP_FUNCTION_EN_MASK        0x00000001
#define CONN_INFRA_CFG_GPS_PWRCTRL0_GP_FUNCTION_EN_SHFT        0

#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_OSC_CKEN_ADDR CONN_INFRA_CFG_CKGEN_BUS_ADDR
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_OSC_CKEN_MASK 0x00000020
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_OSC_CKEN_SHFT 5
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_HCLK_CKEN_ADDR CONN_INFRA_CFG_CKGEN_BUS_ADDR
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_HCLK_CKEN_MASK 0x00000010
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA_HCLK_CKEN_SHFT 4
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_OSC_CKEN_ADDR CONN_INFRA_CFG_CKGEN_BUS_ADDR
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_OSC_CKEN_MASK 0x00000008
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_OSC_CKEN_SHFT 3
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_HCLK_CKEN_ADDR CONN_INFRA_CFG_CKGEN_BUS_ADDR
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_HCLK_CKEN_MASK 0x00000004
#define CONN_INFRA_CFG_CKGEN_BUS_CONN_CO_EXT_UART_PTA5_HCLK_CKEN_SHFT 2

#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_ADDR            CONN_INFRA_CFG_EMI_CTL_TOP_ADDR
#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_MASK            0x00000001
#define CONN_INFRA_CFG_EMI_CTL_TOP_EMI_REQ_TOP_SHFT            0

#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_ADDR            CONN_INFRA_CFG_EMI_CTL_GPS_ADDR
#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_MASK            0x00000001
#define CONN_INFRA_CFG_EMI_CTL_GPS_EMI_REQ_GPS_SHFT            0

#endif /* __CONN_INFRA_CFG_REGS_H__ */
