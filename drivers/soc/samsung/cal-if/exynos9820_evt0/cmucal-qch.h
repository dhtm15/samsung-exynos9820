#ifndef __CMUCAL_QCH_H__
#define __CMUCAL_QCH_H__

#include "../cmucal.h"

enum qch_id {
	APBIF_GPIO_ALIVE_QCH = QCH_TYPE,
	APBIF_PMU_ALIVE_QCH,
	APBIF_RTC_QCH,
	APBIF_TOP_RTC_QCH,
	APM_CMU_APM_QCH,
	DTZPC_APM_QCH,
	GREBEINTEGRATION_QCH_GREBE,
	GREBEINTEGRATION_QCH_DBG,
	GREBEINTEGRATION_DBGCORE_QCH_GREBE,
	GREBEINTEGRATION_DBGCORE_QCH_DBG,
	INTMEM_QCH,
	LHM_AXI_C_MODEM_QCH,
	LHM_AXI_C_VTS_QCH,
	LHM_AXI_P_APM_QCH,
	LHS_AXI_C_CMGP_QCH,
	LHS_AXI_D_APM_QCH,
	LHS_AXI_G_DBGCORE_QCH,
	LHS_AXI_G_SCAN2DRAM_QCH,
	LHS_AXI_LP_VTS_QCH,
	MAILBOX_APM_AP_QCH,
	MAILBOX_APM_CP_QCH,
	MAILBOX_APM_VTS_QCH,
	MAILBOX_AP_CP_QCH,
	MAILBOX_AP_CP_S_QCH,
	MAILBOX_AP_DBGCORE_QCH,
	PEM_QCH,
	PMU_INTR_GEN_QCH,
	RSTNSYNC_CLK_APM_BUS_QCH_GREBE,
	RSTNSYNC_CLK_APM_BUS_QCH_GREBE_DBG,
	SPEEDY_APM_QCH,
	SPEEDY_SUB_APM_QCH,
	SYSREG_APM_QCH,
	VGEN_LITE_APM_QCH,
	WDT_APM_QCH,
	ABOX_QCH_ACLK,
	ABOX_QCH_BCLK_DSIF,
	ABOX_QCH_BCLK0,
	ABOX_QCH_BCLK1,
	ABOX_QCH_BCLK2,
	ABOX_QCH_BCLK3,
	ABOX_DMY_QCH_CPU,
	ABOX_QCH_CCLK_ASB,
	ABOX_DMY_QCH_IRQ,
	ABOX_QCH_CNT,
	AUD_CMU_AUD_QCH,
	BTM_AUD_QCH,
	DFTMUX_AUD_QCH,
	DMIC_QCH,
	GPIO_AUD_QCH,
	LHM_AXI_P_AUD_QCH,
	LHS_ATB_T0_AUD_QCH,
	LHS_ATB_T1_AUD_QCH,
	LHS_AXI_D_AUD_QCH,
	PPMU_AUD_QCH,
	SMMU_AUD_QCH,
	SYSREG_AUD_QCH,
	TREX_AUD_QCH,
	VGEN_LITE_AUD_QCH,
	WDT_AUD_QCH,
	BAAW_P_NPU_QCH,
	BAAW_P_VTS_QCH,
	BUSC_CMU_BUSC_QCH,
	BUSIF_CMUTOPC_QCH,
	BUSIF_HPMBUSC_QCH,
	DIT_QCH,
	D_TZPC_BUSC_QCH,
	LHM_ACEL_D0_DSPM_QCH,
	LHM_ACEL_D0_G2D_QCH,
	LHM_ACEL_D1_DSPM_QCH,
	LHM_ACEL_D1_G2D_QCH,
	LHM_ACEL_D2_G2D_QCH,
	LHM_ACEL_D_FSYS0_QCH,
	LHM_ACEL_D_FSYS1_QCH,
	LHM_ACEL_D_IVA_QCH,
	LHM_AXI_D0_DPU_QCH,
	LHM_AXI_D0_ISPLP_QCH,
	LHM_AXI_D0_MFC_QCH,
	LHM_AXI_D1_DPU_QCH,
	LHM_AXI_D1_ISPLP_QCH,
	LHM_AXI_D1_MFC_QCH,
	LHM_AXI_D2_DPU_QCH,
	LHM_AXI_D_APM_QCH,
	LHM_AXI_D_AUD_QCH,
	LHM_AXI_D_ISPHQ_QCH,
	LHM_AXI_D_ISPPRE_QCH,
	LHM_AXI_D_NPU_QCH,
	LHM_AXI_D_VTS_QCH,
	LHS_AXI_D_IVASC_QCH,
	LHS_AXI_P_AUD_QCH,
	LHS_AXI_P_DPU_QCH,
	LHS_AXI_P_DSPM_QCH,
	LHS_AXI_P_FSYS0_QCH,
	LHS_AXI_P_FSYS1_QCH,
	LHS_AXI_P_G2D_QCH,
	LHS_AXI_P_ISPHQ_QCH,
	LHS_AXI_P_ISPLP_QCH,
	LHS_AXI_P_ISPPRE_QCH,
	LHS_AXI_P_IVA_QCH,
	LHS_AXI_P_MFC_QCH,
	LHS_AXI_P_MIF0_QCH,
	LHS_AXI_P_MIF1_QCH,
	LHS_AXI_P_MIF2_QCH,
	LHS_AXI_P_MIF3_QCH,
	LHS_AXI_P_NPU_QCH,
	LHS_AXI_P_PERIC0_QCH,
	LHS_AXI_P_PERIC1_QCH,
	LHS_AXI_P_PERIS_QCH,
	LHS_AXI_P_VTS_QCH,
	LHS_DBG_G_BUSC_QCH,
	MMCACHE_QCH,
	PDMA0_QCH,
	PPFW_QCH,
	QE_PDMA0_QCH,
	QE_SPDMA_QCH,
	SBIC_QCH,
	SIREX_QCH,
	SPDMA_QCH,
	SYSREG_BUSC_QCH,
	TREX_D0_BUSC_QCH,
	TREX_D1_BUSC_QCH,
	TREX_P_BUSC_QCH,
	TREX_RB_BUSC_QCH,
	VGEN_LITE_BUSC_QCH,
	VGEN_PDMA0_QCH,
	ADC_CMGP_QCH_S0,
	ADC_CMGP_QCH_S1,
	ADC_CMGP_QCH_DMY,
	CMGP_CMU_CMGP_QCH,
	DTZPC_CMGP_QCH,
	GPIO_CMGP_QCH,
	I2C_CMGP0_QCH,
	I2C_CMGP1_QCH,
	I2C_CMGP2_QCH,
	I2C_CMGP3_QCH,
	LHM_AXI_C_CMGP_QCH,
	SYSREG_CMGP_QCH,
	SYSREG_CMGP2APM_QCH,
	SYSREG_CMGP2CP_QCH,
	SYSREG_CMGP2PMU_AP_QCH,
	USI_CMGP0_QCH,
	USI_CMGP1_QCH,
	USI_CMGP2_QCH,
	USI_CMGP3_QCH,
	CMU_CMU_CMUREF_QCH,
	DFTMUX_TOP_QCH_CIS_CLK0,
	DFTMUX_TOP_QCH_CIS_CLK1,
	DFTMUX_TOP_QCH_CIS_CLK2,
	DFTMUX_TOP_QCH_CIS_CLK3,
	DFTMUX_TOP_QCH_CIS_CLK4,
	OTP_QCH,
	BAAW_CP_QCH,
	BDU_QCH,
	BUSIF_HPMCORE_QCH,
	CCI_QCH,
	CORE_CMU_CORE_QCH,
	D_TZPC_CORE_QCH,
	LHM_ACE_D0_CLUSTER0_QCH,
	LHM_ACE_D0_G3D_QCH,
	LHM_ACE_D1_CLUSTER0_QCH,
	LHM_ACE_D1_G3D_QCH,
	LHM_ACE_D2_G3D_QCH,
	LHM_ACE_D3_G3D_QCH,
	LHM_AXI_D0_CP_QCH,
	LHM_AXI_D1_CP_QCH,
	LHM_AXI_G_CSSYS_QCH,
	LHM_AXI_L_CORE_QCH,
	LHS_ATB_T_BDU_QCH,
	LHS_AXI_L_CORE_QCH,
	LHS_AXI_P_APM_QCH,
	LHS_AXI_P_CP_QCH,
	LHS_AXI_P_CPUCL0_QCH,
	LHS_AXI_P_CPUCL2_QCH,
	LHS_AXI_P_G3D_QCH,
	PPCFW_G3D_QCH,
	PPC_CPUCL0_0_QCH,
	PPC_CPUCL0_1_QCH,
	PPC_CPUCL2_0_QCH,
	PPC_CPUCL2_1_QCH,
	PPC_G3D0_QCH,
	PPC_G3D1_QCH,
	PPC_G3D2_QCH,
	PPC_G3D3_QCH,
	PPC_IRPS0_QCH,
	PPC_IRPS1_QCH,
	PPFW_G3D_QCH,
	PPMU_CPUCL0_0_QCH,
	PPMU_CPUCL0_1_QCH,
	PPMU_CPUCL2_0_QCH,
	PPMU_CPUCL2_1_QCH,
	SYSREG_CORE_QCH,
	TREX_D_CORE_QCH,
	TREX_P0_CORE_QCH,
	TREX_P1_CORE_QCH,
	ADM_APB_G_CLUSTER0_QCH,
	BPS_CPUCL0_QCH,
	BUSIF_HPMCPUCL0_QCH,
	CMU_CPUCL0_SHORTSTOP_QCH,
	CPUCL0_QCH_SCLK,
	CPUCL0_QCH_ATCLK,
	CPUCL0_QCH_PDBGCLK,
	CPUCL0_QCH_GIC,
	CPUCL0_QCH_DBG_PD,
	CPUCL0_QCH_PCLK,
	CPUCL0_QCH_PERIPHCLK,
	CPUCL0_CMU_CPUCL0_QCH,
	CSSYS_QCH,
	D_TZPC_CPUCL0_QCH,
	LHM_ATB_T0_AUD_QCH,
	LHM_ATB_T0_CLUSTER0_QCH,
	LHM_ATB_T0_CLUSTER2_QCH,
	LHM_ATB_T1_AUD_QCH,
	LHM_ATB_T1_CLUSTER0_QCH,
	LHM_ATB_T1_CLUSTER2_QCH,
	LHM_ATB_T2_CLUSTER0_QCH,
	LHM_ATB_T3_CLUSTER0_QCH,
	LHM_ATB_T4_CLUSTER0_QCH,
	LHM_ATB_T5_CLUSTER0_QCH,
	LHM_ATB_T_BDU_QCH,
	LHM_AXI_G_DBGCORE_QCH,
	LHM_AXI_G_INT_CSSYS_QCH,
	LHM_AXI_G_INT_DBGCORE_QCH,
	LHM_AXI_G_INT_ETR_QCH,
	LHM_AXI_P_CPUCL0_QCH,
	LHS_ACE_D0_CLUSTER0_QCH,
	LHS_ACE_D1_CLUSTER0_QCH,
	LHS_ATB_T0_CLUSTER0_QCH,
	LHS_ATB_T1_CLUSTER0_QCH,
	LHS_ATB_T2_CLUSTER0_QCH,
	LHS_ATB_T3_CLUSTER0_QCH,
	LHS_ATB_T4_CLUSTER0_QCH,
	LHS_ATB_T5_CLUSTER0_QCH,
	LHS_AXI_G_CSSYS_QCH,
	LHS_AXI_G_INT_CSSYS_QCH,
	LHS_AXI_G_INT_DBGCORE_QCH,
	LHS_AXI_G_INT_ETR_QCH,
	SECJTAG_QCH,
	SYSREG_CPUCL0_QCH,
	TREX_CPUCL0_QCH,
	CMU_CPUCL1_SHORTSTOP_QCH,
	CPUCL1_QCH_MID,
	CPUCL1_CMU_CPUCL1_QCH,
	BUSIF_HPMCPUCL2_QCH,
	CLUSTER2_QCH_CPU,
	CLUSTER2_QCH_LHS_ATB_T0_CLUSTER2,
	CLUSTER2_QCH_LHS_ATB_T1_CLUSTER2,
	CLUSTER2_QCH_PCLKDBG,
	CMU_CPUCL2_SHORTSTOP_QCH,
	CPUCL2_CMU_CPUCL2_QCH,
	D_TZPC_CPUCL2_QCH,
	LHM_AXI_P_CPUCL2_QCH,
	SYSREG_CPUCL2_QCH,
	BTM_DPUD0_QCH,
	BTM_DPUD1_QCH,
	BTM_DPUD2_QCH,
	DPU_QCH_DPU,
	DPU_QCH_DPU_DMA,
	DPU_QCH_DPU_DPP,
	DPU_QCH_DPU_WB_MUX,
	DPU_CMU_DPU_QCH,
	D_TZPC_DPU_QCH,
	LHM_AXI_P_DPU_QCH,
	LHS_AXI_D0_DPU_QCH,
	LHS_AXI_D1_DPU_QCH,
	LHS_AXI_D2_DPU_QCH,
	PPMU_DPUD0_QCH,
	PPMU_DPUD1_QCH,
	PPMU_DPUD2_QCH,
	SYSMMU_DPUD0_QCH,
	SYSMMU_DPUD1_QCH,
	SYSMMU_DPUD2_QCH,
	SYSREG_DPU_QCH,
	ADM_APB_DSPM_QCH,
	BAAW_DSPM_QCH,
	BTM_DSPM0_QCH,
	BTM_DSPM1_QCH,
	DSPM_CMU_DSPM_QCH,
	D_TZPC_DSPM_QCH,
	LHM_AST_ISPHQDSPM_QCH,
	LHM_AST_ISPLPDSPM_QCH,
	LHM_AST_ISPPREDSPM_QCH,
	LHM_AXI_D0_DSPSDSPM_QCH,
	LHM_AXI_P_DSPM_QCH,
	LHM_AXI_P_IVADSPM_QCH,
	LHS_ACEL_D0_DSPM_QCH,
	LHS_ACEL_D1_DSPM_QCH,
	LHS_AST_DSPMISPLP_QCH,
	LHS_AST_DSPMISPPRE_QCH,
	LHS_AXI_D_DSPMNPU0_QCH,
	LHS_AXI_P_DSPMDSPS_QCH,
	LHS_AXI_P_DSPMIVA_QCH,
	PPMU_DSPM0_QCH,
	PPMU_DSPM1_QCH,
	SCORE_TS_II_QCH,
	SYSMMU_DSPM0_QCH,
	SYSMMU_DSPM1_QCH,
	SYSREG_DSPM_QCH,
	VGEN_LITE_DSPM_QCH,
	DSPS_CMU_DSPS_QCH,
	D_TZPC_DSPS_QCH,
	LHM_AXI_D_IVADSPS_QCH,
	LHM_AXI_P_DSPMDSPS_QCH,
	LHS_AXI_D0_DSPSDSPM_QCH,
	LHS_AXI_D_DSPSIVA_QCH,
	SCORE_BARON_QCH,
	SYSREG_DSPS_QCH,
	VGEN_LITE_DSPS_QCH,
	BTM_FSYS0_QCH,
	DP_LINK_QCH,
	DP_LINK_QCH_GTC,
	D_TZPC_FSYS0_QCH,
	FSYS0_CMU_FSYS0_QCH,
	GPIO_FSYS0_QCH,
	LHM_AXI_D_USB_QCH,
	LHM_AXI_P_FSYS0_QCH,
	LHS_ACEL_D_FSYS0_QCH,
	LHS_AXI_P_USB_QCH,
	PCIE_GEN3_QCH_DBI_A,
	PCIE_GEN3_QCH_MSTR_SLV_A,
	PCIE_GEN3_QCH_APB_A,
	PCIE_GEN3_QCH_DBI_B,
	PCIE_GEN3_QCH_MSTR_SLV_B,
	PCIE_GEN3_QCH_APB_B,
	PCIE_GEN3_QCH_SCLK,
	PCIE_GEN3_QCH_PCS_APB,
	PCIE_GEN3_QCH_IF_CMN,
	PCIE_GEN3_QCH_IF_LN0,
	PCIE_GEN3_QCH_IF_LN1,
	PCIE_IA_GEN3A_QCH,
	PCIE_IA_GEN3B_QCH,
	PPMU_FSYS0_QCH,
	SYSMMU_PCIE_GEN3A_QCH,
	SYSMMU_PCIE_GEN3B_QCH,
	SYSREG_FSYS0_QCH,
	VGEN_LITE_FSYS0_QCH,
	FSYS0A_CMU_FSYS0A_QCH,
	LHM_AXI_P_USB_QCH,
	LHS_AXI_D_USB_QCH,
	USB31DRD_QCH_REF,
	USB31DRD_QCH_SLV_CTRL,
	USB31DRD_QCH_SLV_LINK,
	USB31DRD_QCH_APB,
	USB31DRD_QCH_PCS,
	ADM_AHB_SSS_QCH,
	BAAW_SSS_QCH,
	BTM_FSYS1_QCH,
	D_TZPC_FSYS1_QCH,
	FSYS1_CMU_FSYS1_QCH,
	GPIO_FSYS1_QCH,
	LHM_AXI_P_FSYS1_QCH,
	LHS_ACEL_D_FSYS1_QCH,
	MMC_CARD_QCH,
	PCIE_GEN2_QCH_MSTR,
	PCIE_GEN2_QCH_PCS,
	PCIE_GEN2_QCH_PHY,
	PCIE_GEN2_QCH_DBI,
	PCIE_GEN2_QCH_APB,
	PCIE_GEN2_QCH_SOCPLL,
	PCIE_IA_GEN2_QCH,
	PPMU_FSYS1_QCH,
	PUF_QCH,
	QE_RTIC_QCH,
	QE_SSS_QCH,
	RTIC_QCH,
	SSS_QCH,
	SYSMMU_FSYS1_QCH,
	SYSREG_FSYS1_QCH,
	UFS_CARD_QCH,
	UFS_CARD_QCH_FMP,
	UFS_EMBD_QCH,
	UFS_EMBD_QCH_FMP,
	VGEN_LITE_FSYS1_QCH,
	ASTC_QCH,
	BTM_G2DD0_QCH,
	BTM_G2DD1_QCH,
	BTM_G2DD2_QCH,
	D_TZPC_G2D_QCH,
	G2D_QCH,
	G2D_CMU_G2D_QCH,
	JPEG_QCH,
	JSQZ_QCH,
	LHM_AXI_P_G2D_QCH,
	LHS_ACEL_D0_G2D_QCH,
	LHS_ACEL_D1_G2D_QCH,
	LHS_ACEL_D2_G2D_QCH,
	MSCL_QCH,
	PPMU_G2DD0_QCH,
	PPMU_G2DD1_QCH,
	PPMU_G2DD2_QCH,
	QE_ASTC_QCH,
	QE_JPEG_QCH,
	QE_JSQZ_QCH,
	QE_MSCL_QCH,
	SYSMMU_G2DD0_QCH,
	SYSMMU_G2DD1_QCH,
	SYSMMU_G2DD2_QCH,
	SYSREG_G2D_QCH,
	VGEN_LITE_G2D_QCH,
	ASB_G3D_QCH_PPMU_G3D0,
	ASB_G3D_QCH_PPMU_G3D1,
	ASB_G3D_QCH_PPMU_G3D2,
	ASB_G3D_QCH_PPMU_G3D3,
	ASB_G3D_QCH_QE_G3D0,
	ASB_G3D_QCH_QE_G3D1,
	ASB_G3D_QCH_QE_G3D2,
	ASB_G3D_QCH_QE_G3D3,
	BUSIF_HPMG3D_QCH,
	D_TZPC_G3D_QCH,
	G3D_CMU_G3D_QCH,
	GPU_QCH,
	LHM_AXI_G3DSFR_QCH,
	LHM_AXI_P_G3D_QCH,
	LHS_ACE_D0_G3D_QCH,
	LHS_ACE_D1_G3D_QCH,
	LHS_ACE_D2_G3D_QCH,
	LHS_ACE_D3_G3D_QCH,
	LHS_AXI_G3DSFR_QCH,
	SYSREG_G3D_QCH,
	VGEN_LITE_G3D_QCH,
	BTM_ISPHQ_QCH,
	D_TZPC_ISPHQ_QCH,
	ISPHQ_CMU_ISPHQ_QCH,
	IS_ISPHQ_QCH_ISPHQ,
	IS_ISPHQ_QCH_SYSMMU_ISPHQ,
	IS_ISPHQ_QCH_PPMU_ISPHQ,
	IS_ISPHQ_QCH_VGEN_LITE_ISPHQ,
	IS_ISPHQ_QCH_ISPHQ_C2COM,
	LHM_ATB_ISPLPISPHQ_QCH,
	LHM_ATB_ISPPREISPHQ_QCH,
	LHM_AXI_P_ISPHQ_QCH,
	LHS_AST_ISPHQDSPM_QCH,
	LHS_ATB_ISPHQDIP_QCH,
	LHS_ATB_ISPHQISPLP_QCH,
	LHS_AXI_D_ISPHQ_QCH,
	SYSREG_ISPHQ_QCH,
	BTM_ISPLP0_QCH,
	BTM_ISPLP1_QCH,
	D_TZPC_ISPLP_QCH,
	ISPLP_CMU_ISPLP_QCH,
	IS_ISPLP_QCH_MC_SCALER,
	IS_ISPLP_QCH_ISPLP,
	IS_ISPLP_QCH_QE_ISPLP,
	IS_ISPLP_QCH_SYSMMU_ISPLP0,
	IS_ISPLP_QCH_PPMU_ISPLP0,
	IS_ISPLP_QCH_SYSMMU_ISPLP1,
	IS_ISPLP_QCH_PPMU_ISPLP1,
	IS_ISPLP_QCH_GDC,
	IS_ISPLP_QCH_VGEN_LITE,
	IS_ISPLP_QCH_QE_GDC,
	IS_ISPLP_QCH_ISPLP_C2,
	LHM_AST_DSPMISPLP_QCH,
	LHM_ATB_CIPISPLP_QCH,
	LHM_ATB_DIPISPLP_QCH,
	LHM_ATB_ISPHQISPLP_QCH,
	LHM_ATB_ISPPREISPLP_QCH,
	LHM_AXI_D_VRA2ISPLP_QCH,
	LHM_AXI_P_ISPLP_QCH,
	LHS_AST_ISPLPDSPM_QCH,
	LHS_ATB_ISPLPISPHQ_QCH,
	LHS_AXI_D0_ISPLP_QCH,
	LHS_AXI_D1_ISPLP_QCH,
	LHS_AXI_P_ISPLPVRA2_QCH,
	SYSREG_ISPLP_QCH,
	BTM_ISPPRE_QCH,
	BUSIF_HPMISPPRE_QCH,
	D_TZPC_ISPPRE_QCH,
	D_TZPC_ISPPRE1_QCH,
	ISPPRE_CMU_ISPPRE_QCH,
	IS_ISPPRE_QCH_CSIS0,
	IS_ISPPRE_QCH_CSIS1,
	IS_ISPPRE_QCH_CSIS2,
	IS_ISPPRE_QCH_CSIS3,
	IS_ISPPRE_QCH_PPMU_ISPPRE,
	IS_ISPPRE_QCH_PDP_TOP_DMA,
	IS_ISPPRE_QCH_SYSMMU_ISPPRE,
	IS_ISPPRE_QCH_QE_PDP_TOP,
	IS_ISPPRE_QCH_QE_3AA0,
	IS_ISPPRE_QCH_QE_3AA1,
	IS_ISPPRE_QCH_3AA0,
	IS_ISPPRE_QCH_3AA1,
	IS_ISPPRE_QCH_PDP_TOP_CORE_TOP,
	IS_ISPPRE_QCH_CSISX4_PDP_RDMA,
	IS_ISPPRE_QCH_VGEN_LITE,
	IS_ISPPRE_QCH_QE_CSISX4_PDP,
	IS_ISPPRE_QCH_VGEN_LITE1,
	IS_ISPPRE_QCH_QSIS3_1,
	IS_ISPPRE_QCH_CSISX4_PDP_DMA,
	IS_ISPPRE_QCH_VGEN_LITE2,
	IS_ISPPRE_QCH_PAFSTAT0,
	IS_ISPPRE_QCH_PAFSTAT1,
	LHM_AST_DSPMISPPRE_QCH,
	LHM_AXI_P_ISPPRE_QCH,
	LHS_AST_ISPPREDSPM_QCH,
	LHS_ATB_ISPPREISPHQ_QCH,
	LHS_ATB_ISPPREISPLP_QCH,
	LHS_AXI_D_ISPPRE_QCH,
	SYSREG_ISPPRE_QCH_SYSREG,
	ADM_DAP_IVA_QCH,
	BTM_IVA_QCH,
	D_TZPC_IVA_QCH,
	IVA_QCH_IVA,
	IVA_QCH_IVA_DEBUG,
	IVA_CMU_IVA_QCH,
	IVA_INTMEM_QCH,
	LHM_AXI_D_DSPSIVA_QCH,
	LHM_AXI_D_IVASC_QCH,
	LHM_AXI_P_DSPMIVA_QCH,
	LHM_AXI_P_IVA_QCH,
	LHS_ACEL_D_IVA_QCH,
	LHS_AXI_D_IVADSPS_QCH,
	LHS_AXI_P_IVADSPM_QCH,
	PPMU_IVA_QCH,
	QE_IVA_QCH,
	SYSMMU_IVA_QCH,
	SYSREG_IVA_QCH,
	TREX_RB1_IVA_QCH,
	VGEN_LITE_IVA_QCH,
	BTM_MFCD0_QCH,
	BTM_MFCD1_QCH,
	D_TZPC_MFC_QCH,
	LHM_AXI_P_MFC_QCH,
	LHS_AXI_D0_MFC_QCH,
	LHS_AXI_D1_MFC_QCH,
	LH_ATB_MFC_QCH_MI,
	LH_ATB_MFC_QCH_SI,
	MFC_QCH,
	MFC_CMU_MFC_QCH,
	PPMU_MFCD0_QCH,
	PPMU_MFCD1_QCH,
	PPMU_MFCD2_QCH,
	RSTNSYNC_CLK_MFC_BUSD_LH_ATB_MFC_MI_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_BUSD_LH_ATB_MFC_SI_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_BUSD_MFC_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_BUSD_WFD_SW_RESET_QCH,
	SYSMMU_MFCD0_QCH,
	SYSMMU_MFCD1_QCH,
	SYSREG_MFC_QCH,
	VGEN_MFC_QCH,
	WFD_QCH,
	APBBR_DDRPHY_QCH,
	APBBR_DMC_QCH,
	APBBR_DMCTZ_QCH,
	BUSIF_HPMMIF_QCH,
	CMU_MIF_CMUREF_QCH,
	DMC_QCH,
	D_TZPC_MIF_QCH,
	LHM_AXI_P_MIF_QCH,
	MIF_CMU_MIF_QCH,
	QCH_ADAPTER_PPC_DEBUG_QCH,
	QCH_ADAPTER_PPC_DVFS_QCH,
	SYSREG_MIF_QCH,
	APBBR_DDRPHY1_QCH,
	APBBR_DMC1_QCH,
	APBBR_DMCTZ1_QCH,
	BUSIF_HPMMIF1_QCH,
	CMU_MIF1_CMUREF_QCH,
	DMC1_QCH,
	LHM_AXI_P_MIF1_QCH,
	MIF1_CMU_MIF1_QCH,
	QCH_ADAPTER_PPMUPPC_DEBUG1_QCH,
	QCH_ADAPTER_PPMUPPC_DVFS1_QCH,
	SYSREG_MIF1_QCH,
	APBBR_DDRPHY2_QCH,
	APBBR_DMC2_QCH,
	APBBR_DMCTZ2_QCH,
	BUSIF_HPMMIF2_QCH,
	CMU_MIF2_CMUREF_QCH,
	DMC2_QCH,
	LHM_AXI_P_MIF2_QCH,
	MIF2_CMU_MIF2_QCH,
	QCH_ADAPTER_PPMUPPC_DEBUG2_QCH,
	QCH_ADAPTER_PPMUPPC_DVFS2_QCH,
	SYSREG_MIF2_QCH,
	APBBR_DDRPHY3_QCH,
	APBBR_DMC3_QCH,
	APBBR_DMCTZ3_QCH,
	BUSIF_HPMMIF3_QCH,
	CMU_MIF3_CMUREF_QCH,
	DMC3_QCH,
	LHM_AXI_P_MIF3_QCH,
	MIF3_CMU_MIF3_QCH,
	QCH_ADAPTER_PPMUPPC_DEBUG3_QCH,
	QCH_ADAPTER_PPMUPPC_DVFS3_QCH,
	SYSREG_MIF3_QCH,
	BTM_NPU0_QCH,
	D_TZPC_NPU0_QCH,
	LHM_AST_D_NPUD1_D1_0_QCH,
	LHM_AST_D_NPUD1_D1_1_QCH,
	LHM_AST_D_NPUD1_D1_2_QCH,
	LHM_AST_D_NPUD1_D1_3_QCH,
	LHM_AST_D_NPUD1_D1_4_QCH,
	LHM_AST_D_NPUD1_D1_5_QCH,
	LHM_AST_D_NPUD1_D1_6_QCH,
	LHM_AST_D_NPUD1_D1_7_QCH,
	LHM_AST_P_NPU1_DONE_QCH,
	LHM_AXI_D_DSPMNPU0_QCH,
	LHM_AXI_P_NPU_QCH,
	LHS_AST_D_NPUD0_D1_0_QCH,
	LHS_AST_D_NPUD0_D1_1_QCH,
	LHS_AST_D_NPUD0_D1_2_QCH,
	LHS_AST_D_NPUD0_D1_3_QCH,
	LHS_AST_D_NPUD0_D1_4_QCH,
	LHS_AST_D_NPUD0_D1_5_QCH,
	LHS_AST_D_NPUD0_D1_6_QCH,
	LHS_AST_D_NPUD0_D1_7_QCH,
	LHS_AST_P_NPUD1_SETREG_QCH,
	LHS_AXI_D_IDPSRAM1_QCH,
	LHS_AXI_D_IDPSRAM3_QCH,
	LHS_AXI_D_NPU_QCH,
	LHS_AXI_P_NPU1_QCH,
	NPU0_CMU_NPU0_QCH,
	NPUC_QCH,
	NPUD_UNIT0_QCH,
	PPMU_CPUDMA_QCH,
	PPMU_RFM_QCH,
	QE_CPUDMA_QCH,
	QE_RFM_QCH,
	SMMU_NPU0_QCH,
	SYSREG_NPU0_QCH,
	VGEN_LITE_NPU0_QCH,
	D_TZPC_NPU1_QCH,
	LHM_AST_D_NPUD0_D1_0_QCH,
	LHM_AST_D_NPUD0_D1_1_QCH,
	LHM_AST_D_NPUD0_D1_2_QCH,
	LHM_AST_D_NPUD0_D1_3_QCH,
	LHM_AST_D_NPUD0_D1_4_QCH,
	LHM_AST_D_NPUD0_D1_5_QCH,
	LHM_AST_D_NPUD0_D1_6_QCH,
	LHM_AST_D_NPUD0_D1_7_QCH,
	LHM_AST_P_NPUD1_SETREG_QCH,
	LHM_AXI_D_IDPSRAM1_QCH,
	LHM_AXI_D_IDPSRAM3_QCH,
	LHM_AXI_P_NPU1_QCH,
	LHS_AST_D_NPUD1_D1_0_QCH,
	LHS_AST_D_NPUD1_D1_1_QCH,
	LHS_AST_D_NPUD1_D1_2_QCH,
	LHS_AST_D_NPUD1_D1_3_QCH,
	LHS_AST_D_NPUD1_D1_4_QCH,
	LHS_AST_D_NPUD1_D1_5_QCH,
	LHS_AST_D_NPUD1_D1_6_QCH,
	LHS_AST_D_NPUD1_D1_7_QCH,
	LHS_AST_P_NPU1_DONE_QCH,
	NPU1_CMU_NPU1_QCH,
	NPUD_UNIT1_QCH,
	SYSREG_NPU1_QCH,
	D_TZPC_PERIC0_QCH,
	GPIO_PERIC0_QCH,
	LHM_AXI_P_PERIC0_QCH,
	PERIC0_CMU_PERIC0_QCH,
	PWM_QCH,
	SYSREG_PERIC0_QCH,
	UART_DBG_QCH,
	USI00_I2C_QCH,
	USI00_USI_QCH,
	USI01_I2C_QCH,
	USI01_USI_QCH,
	USI02_I2C_QCH,
	USI02_USI_QCH,
	USI03_I2C_QCH,
	USI03_USI_QCH,
	USI04_I2C_QCH,
	USI04_USI_QCH,
	USI05_I2C_QCH,
	USI05_USI_QCH,
	USI12_I2C_QCH,
	USI12_USI_QCH,
	USI13_I2C_QCH,
	USI13_USI_QCH,
	USI14_I2C_QCH,
	USI14_USI_QCH,
	USI15_I2C_QCH,
	USI15_USI_QCH,
	D_TZPC_PERIC1_QCH,
	GPIO_PERIC1_QCH,
	I2C_CAM0_QCH,
	I2C_CAM1_QCH,
	I2C_CAM2_QCH,
	I2C_CAM3_QCH,
	I3C_QCH_I3C,
	I3C_QCH_DMY,
	LHM_AXI_P_PERIC1_QCH,
	PERIC1_CMU_PERIC1_QCH,
	SPI_CAM0_QCH,
	SYSREG_PERIC1_QCH,
	UART_BT_QCH,
	USI06_I2C_QCH,
	USI06_USI_QCH,
	USI07_I2C_QCH,
	USI07_USI_QCH,
	USI08_I2C_QCH,
	USI08_USI_QCH,
	USI09_I2C_QCH,
	USI09_USI_QCH,
	USI10_I2C_QCH,
	USI10_USI_QCH,
	USI11_I2C_QCH,
	USI11_USI_QCH,
	USI16_I3C_QCH_DMY,
	USI16_I3C_QCH_I3C,
	USI16_USI_QCH,
	USI17_I2C_QCH,
	USI17_USI_QCH,
	D_TZPC_PERIS_QCH,
	GIC_QCH,
	LHM_AXI_P_PERIS_QCH,
	MCT_QCH,
	OTP_CON_BIRA_QCH,
	OTP_CON_BISR_QCH,
	OTP_CON_TOP_QCH,
	PERIS_CMU_PERIS_QCH,
	SYSREG_PERIS_QCH,
	TMU_SUB_QCH,
	TMU_TOP_QCH,
	WDT_CLUSTER0_QCH,
	WDT_CLUSTER2_QCH,
	S2D_CMU_S2D_QCH,
	D_TZPC_VRA2_QCH,
	LHM_AXI_P_ISPLPVRA2_QCH,
	LHS_AXI_D_VRA2ISPLP_QCH,
	QE_VRA2_QCH,
	SYSREG_VRA2_QCH,
	VGEN_LITE_VRA2_QCH,
	VRA2_QCH,
	VRA2_CMU_VRA2_QCH,
	BAAW_C_VTS_QCH,
	BAAW_D_VTS_QCH,
	CORTEXM4INTEGRATION_QCH_CPU,
	DMIC_AHB0_QCH_PCLK,
	DMIC_AHB1_QCH_PCLK,
	DMIC_AHB2_QCH_PCLK,
	DMIC_AHB3_QCH_PCLK,
	DMIC_IF_QCH_PCLK,
	DMIC_IF_QCH_DMIC_CLK,
	DMIC_IF_3RD_QCH_PCLK,
	DMIC_IF_3RD_QCH_DMIC_CLK,
	D_TZPC_VTS_QCH,
	GPIO_VTS_QCH,
	HWACG_SYS_DMIC0_QCH,
	HWACG_SYS_DMIC1_QCH,
	HWACG_SYS_DMIC2_QCH,
	HWACG_SYS_DMIC3_QCH,
	LHM_AXI_LP_VTS_QCH,
	LHM_AXI_P_VTS_QCH,
	LHS_AXI_C_VTS_QCH,
	LHS_AXI_D_VTS_QCH,
	MAILBOX_ABOX_VTS_QCH,
	MAILBOX_AP_VTS_QCH,
	SWEEPER_C_VTS_QCH,
	SYSREG_VTS_QCH,
	TIMER_QCH,
	VGEN_LITE_QCH,
	VTS_CMU_VTS_QCH,
	WDT_VTS_QCH,
	U_DMIC_CLK_MUX_QCH,
	end_of_qch,
	num_of_qch = (end_of_qch - QCH_TYPE) & MASK_OF_ID,

};
enum option_id {
	CTRL_OPTION_CMU_APM = OPTION_TYPE,
	CTRL_OPTION_CMU_AUD,
	CTRL_OPTION_CMU_BUSC,
	CTRL_OPTION_CMU_CMGP,
	CTRL_OPTION_CMU_CMU,
	CTRL_OPTION_CMU_CORE,
	CTRL_OPTION_CMU_CPUCL0,
	CTRL_OPTION_EMBEDDED_CMU_CPUCL0,
	CTRL_OPTION_CMU_CPUCL1,
	CTRL_OPTION_CMU_CPUCL2,
	CTRL_OPTION_EMBEDDED_CMU_CPUCL2,
	CTRL_OPTION_CMU_DPU,
	CTRL_OPTION_CMU_DSPM,
	CTRL_OPTION_CMU_DSPS,
	CTRL_OPTION_CMU_FSYS0,
	CTRL_OPTION_CMU_FSYS0A,
	CTRL_OPTION_CMU_FSYS1,
	CTRL_OPTION_CMU_G2D,
	CTRL_OPTION_CMU_G3D,
	CTRL_OPTION_EMBEDDED_CMU_G3D,
	CTRL_OPTION_CMU_ISPHQ,
	CTRL_OPTION_CMU_ISPLP,
	CTRL_OPTION_CMU_ISPPRE,
	CTRL_OPTION_CMU_IVA,
	CTRL_OPTION_CMU_MFC,
	CTRL_OPTION_CMU_MIF,
	CTRL_OPTION_CMU_MIF1,
	CTRL_OPTION_CMU_MIF2,
	CTRL_OPTION_CMU_MIF3,
	CTRL_OPTION_CMU_NPU0,
	CTRL_OPTION_CMU_NPU1,
	CTRL_OPTION_CMU_PERIC0,
	CTRL_OPTION_CMU_PERIC1,
	CTRL_OPTION_CMU_PERIS,
	CTRL_OPTION_CMU_S2D,
	CTRL_OPTION_CMU_VRA2,
	CTRL_OPTION_CMU_VTS,
	end_of_option,
	num_of_option = (end_of_option - OPTION_TYPE) & MASK_OF_ID,

};
#endif
