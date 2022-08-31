/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_ANORAK_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_ANORAK_H

#define MASTER_GPU_TCU				0
#define MASTER_SYS_TCU				1
#define MASTER_APPSS_PROC				2
#define MASTER_LLCC				3
#define MASTER_CNOC_LPASS_AG_NOC				4
#define MASTER_GIC_AHB				5
#define MASTER_CDSP_NOC_CFG				6
#define MASTER_QDSS_BAM				7
#define MASTER_QUP_0				8
#define MASTER_QUP_1				9
#define MASTER_A1NOC_CFG				10
#define MASTER_A2NOC_CFG				11
#define MASTER_A1NOC_SNOC				12
#define MASTER_A2NOC_SNOC				13
#define MASTER_CAMNOC_HF				14
#define MASTER_CAMNOC_ICP				15
#define MASTER_CAMNOC_SF				16
#define MASTER_GEM_NOC_CNOC				17
#define MASTER_GFX3D				18
#define MASTER_LPASS_ANOC				19
#define MASTER_MDP0				20
#define MASTER_MDP1				21
#define MASTER_MDP_CORE1_0				22
#define MASTER_MDP_CORE1_1				23
#define MASTER_CNOC_MNOC_CFG				24
#define MASTER_MNOC_HF_MEM_NOC				25
#define MASTER_MNOC_SF_MEM_NOC				26
#define MASTER_COMPUTE_NOC				27
#define MASTER_ANOC_PCIE_GEM_NOC				28
#define MASTER_PCIE_ANOC_CFG				29
#define MASTER_SNOC_CFG				30
#define MASTER_SNOC_GC_MEM_NOC				31
#define MASTER_SNOC_SF_MEM_NOC				32
#define MASTER_CDSP_HCP				33
#define MASTER_VIDEO				34
#define MASTER_VIDEO_CV_PROC				35
#define MASTER_VIDEO_PROC				36
#define MASTER_VIDEO_V_PROC				37
#define MASTER_QUP_CORE_0				38
#define MASTER_QUP_CORE_1				39
#define MASTER_CRYPTO				40
#define MASTER_IPA				41
#define MASTER_LPASS_PROC				42
#define MASTER_CDSP_PROC				43
#define MASTER_SP				44
#define MASTER_GIC				45
#define MASTER_PCIE_0				46
#define MASTER_PCIE_1				47
#define MASTER_PCIE_4				48
#define MASTER_QDSS_ETR				49
#define MASTER_QDSS_ETR_1				50
#define MASTER_SDCC_2				51
#define MASTER_UFS_MEM				52
#define MASTER_USB3_0				53
#define SLAVE_EBI1				512
#define SLAVE_AHB2PHY_SOUTH				513
#define SLAVE_AHB2PHY_NORTH				514
#define SLAVE_AOSS				515
#define SLAVE_CAMERA_CFG				516
#define SLAVE_CLK_CTL				517
#define SLAVE_CDSP_CFG				518
#define SLAVE_RBCPR_CX_CFG				519
#define SLAVE_RBCPR_MMCX_CFG				520
#define SLAVE_RBCPR_MXA_CFG				521
#define SLAVE_RBCPR_MXC_CFG				522
#define SLAVE_CRYPTO_0_CFG				523
#define SLAVE_CX_RDPM				524
#define SLAVE_DISPLAY_CFG				525
#define SLAVE_DISPLAY1_CFG				526
#define SLAVE_GFX3D_CFG				527
#define SLAVE_IMEM_CFG				528
#define SLAVE_IPA_CFG				529
#define SLAVE_IPC_ROUTER_CFG				530
#define SLAVE_LPASS				531
#define SLAVE_LPASS_CORE_CFG				532
#define SLAVE_LPASS_LPI_CFG				533
#define SLAVE_LPASS_MPU_CFG				534
#define SLAVE_LPASS_TOP_CFG				535
#define SLAVE_MX_RDPM				536
#define SLAVE_PDM				537
#define SLAVE_PRNG				538
#define SLAVE_QDSS_CFG				539
#define SLAVE_QUP_0				540
#define SLAVE_QUP_1				541
#define SLAVE_SDCC_2				542
#define SLAVE_SPSS_CFG				543
#define SLAVE_TCSR				544
#define SLAVE_TLMM				545
#define SLAVE_TME_CFG				546
#define SLAVE_UFS_MEM_CFG				547
#define SLAVE_USB3_0				548
#define SLAVE_VENUS_CFG				549
#define SLAVE_VSENSE_CTRL_CFG				550
#define SLAVE_A1NOC_CFG				551
#define SLAVE_A1NOC_SNOC				552
#define SLAVE_A2NOC_CFG				553
#define SLAVE_A2NOC_SNOC				554
#define SLAVE_DDRSS_CFG				555
#define SLAVE_GEM_NOC_CNOC				556
#define SLAVE_SNOC_GEM_NOC_GC				557
#define SLAVE_SNOC_GEM_NOC_SF				558
#define SLAVE_LLCC				559
#define SLAVE_MNOC_HF_MEM_NOC				560
#define SLAVE_MNOC_SF_MEM_NOC				561
#define SLAVE_CNOC_MNOC_CFG				562
#define SLAVE_CDSP_MEM_NOC				563
#define SLAVE_PCIE_ANOC_CFG				564
#define SLAVE_ANOC_PCIE_GEM_NOC				565
#define SLAVE_SNOC_CFG				566
#define SLAVE_LPASS_SNOC				567
#define SLAVE_QUP_CORE_0				568
#define SLAVE_QUP_CORE_1				569
#define SLAVE_IMEM				570
#define SLAVE_SERVICE_NSP_NOC				571
#define SLAVE_SERVICE_A1NOC				572
#define SLAVE_SERVICE_A2NOC				573
#define SLAVE_SERVICE_CNOC				574
#define SLAVE_SERVICE_MNOC				575
#define SLAVE_SERVICES_LPASS_AML_NOC				576
#define SLAVE_SERVICE_LPASS_AG_NOC				577
#define SLAVE_SERVICE_PCIE_ANOC				578
#define SLAVE_SERVICE_SNOC				579
#define SLAVE_QDSS_STM				580
#define SLAVE_TCU				581
#define MASTER_LLCC_DISP				1000
#define MASTER_MDP0_DISP				1001
#define MASTER_MDP1_DISP				1002
#define MASTER_MNOC_HF_MEM_NOC_DISP				1003
#define MASTER_ANOC_PCIE_GEM_NOC_DISP				1004
#define SLAVE_EBI1_DISP				1512
#define SLAVE_LLCC_DISP				1513
#define SLAVE_MNOC_HF_MEM_NOC_DISP				1514

#endif
