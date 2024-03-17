################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-201546063:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-201546063-inproc

build-201546063-inproc: ../UIA_StopMode_Template.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"C:/ti/ccs1100/xdctools_3_62_01_16_core/xs" --xdcpath="C:/ti/uia_2_30_01_02/packages;C:/ti/bios_6_76_03_01/packages;C:/ti/ccs1100/ccs/bios_6_76_03_01/packages;" xdc.tools.configuro -o configPkg -t ti.targets.elf.C674 -p ti.platforms.evmOMAPL138 -r release -c "C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11" --compileOptions "-g" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-201546063 ../UIA_StopMode_Template.cfg
configPkg/compiler.opt: build-201546063
configPkg/: build-201546063

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C6000 Compiler'
	"C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/bin/cl6x" -mv6740 --include_path="C:/ti/workspace_v11/UIA_StopMode_Template" --include_path="C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/include" --define=omapl138 -g --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


