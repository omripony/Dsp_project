#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/uia_2_30_01_02/packages;C:/ti/bios_6_76_03_01/packages;C:/ti/ccs1100/ccs/bios_6_76_03_01/packages;C:/ti/workspace_v11/UIA_StopMode_Template/.config
override XDCROOT = C:/ti/ccs1100/xdctools_3_62_01_16_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/uia_2_30_01_02/packages;C:/ti/bios_6_76_03_01/packages;C:/ti/ccs1100/ccs/bios_6_76_03_01/packages;C:/ti/workspace_v11/UIA_StopMode_Template/.config;C:/ti/ccs1100/xdctools_3_62_01_16_core/packages;..
HOSTOS = Windows
endif
