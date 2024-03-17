## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,e674 linker.cmd package/cfg/stairstep_JTAGStopMode_pe674.oe674

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/stairstep_JTAGStopMode_pe674.xdl
	$(SED) 's"^\"\(package/cfg/stairstep_JTAGStopMode_pe674cfg.cmd\)\"$""\"C:/ti/workspace_v11/UIA_StairBase_StopMode_Template/.config/xconfig_stairstep_JTAGStopMode/\1\""' package/cfg/stairstep_JTAGStopMode_pe674.xdl > $@
	-$(SETDATE) -r:max package/cfg/stairstep_JTAGStopMode_pe674.h compiler.opt compiler.opt.defs
