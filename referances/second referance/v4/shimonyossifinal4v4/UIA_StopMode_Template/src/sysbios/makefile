#  This is a generated file.
#
#  Do not edit this file. Any modifications to this file
#  will be overwritten whenever makefiles are re-generated.
#
#  template: ti.sysbios/makefile.xdt
#  target: ti.targets.elf.C674

vpath % C:/ti/bios_6_76_03_01/packages/ti/sysbios/
vpath %.c C:/ti/ccs1100/xdctools_3_62_01_16_core/packages/

XOPTS = -I"C:/ti/ccs1100/xdctools_3_62_01_16_core/packages/" -Dxdc_target_types__=C:/ti/bios_6_76_03_01/packages/ti/targets/elf/std.h -Dxdc_target_name__=C674

BIOS_DEFS =  -Dti_sysbios_BIOS_swiEnabled__D=TRUE -Dti_sysbios_BIOS_taskEnabled__D=TRUE -Dti_sysbios_BIOS_clockEnabled__D=TRUE -Dti_sysbios_BIOS_runtimeCreatesEnabled__D=TRUE -Dti_sysbios_knl_Task_moduleStateCheckFlag__D=FALSE -Dti_sysbios_knl_Task_objectCheckFlag__D=FALSE -Dti_sysbios_BIOS_smpEnabled__D=FALSE -Dti_sysbios_BIOS_mpeEnabled__D=FALSE -Dti_sysbios_Build_useHwiMacros -Dti_sysbios_knl_Swi_numPriorities__D=16 -Dti_sysbios_knl_Task_deleteTerminatedTasks__D=FALSE -Dti_sysbios_knl_Task_numPriorities__D=16 -Dti_sysbios_knl_Task_checkStackFlag__D=TRUE -Dti_sysbios_knl_Task_initStackFlag__D=TRUE -Dti_sysbios_knl_Clock_TICK_SOURCE=ti_sysbios_knl_Clock_TickSource_TIMER -Dti_sysbios_knl_Clock_TICK_MODE=ti_sysbios_knl_Clock_TickMode_PERIODIC -Dti_sysbios_hal_Core_delegate_getId=ti_sysbios_hal_CoreNull_getId__E -Dti_sysbios_hal_Core_delegate_interruptCore=ti_sysbios_hal_CoreNull_interruptCore__E -Dti_sysbios_hal_Core_delegate_lock=ti_sysbios_hal_CoreNull_lock__E -Dti_sysbios_hal_Core_delegate_unlock=ti_sysbios_hal_CoreNull_unlock__E -Dti_sysbios_hal_Core_numCores__D=1 -Dti_sysbios_hal_CoreNull_numCores__D=1 -Dti_sysbios_utils_Load_taskEnabled__D=TRUE -Dti_sysbios_utils_Load_swiEnabled__D=TRUE -Dti_sysbios_utils_Load_hwiEnabled__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__D=TRUE -Dti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__D=TRUE -Dti_sysbios_knl_Semaphore_supportsEvents__D=FALSE -Dti_sysbios_knl_Semaphore_supportsPriority__D=TRUE 

CCOPTS = -mv6740 --abi=eabi -q -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110  --program_level_compile -o3 -g  -Dti_sysbios_family_c64p_Exception_enableExternalMPC__D=FALSE -Dti_sysbios_family_c64p_Exception_enablePrint__D=TRUE -Dti_sysbios_knl_Clock_stopCheckNext__D=FALSE -Dti_sysbios_knl_Task_ENABLE_SWITCH_HOOKS -Dti_sysbios_knl_Task_minimizeLatency__D=FALSE

BIOS_INC = -I"C:/ti/bios_6_76_03_01/packages/"
ANNEX_INCS = 
INCS = $(BIOS_INC) $(ANNEX_INCS) -I"C:/ti/uia_2_30_01_02/packages/" -I"C:/ti/bios_6_76_03_01/packages/" -I"C:/ti/ccs1100/ccs/bios_6_76_03_01/packages/" -I"C:/ti/ccs1100/xdctools_3_62_01_16_core/packages/" -I"../" -I"/packages//"  -IC:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/include

CC = C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/bin/cl6x -c $(CCOPTS)
ASM = C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/bin/cl6x -c $(CCOPTS)
AR = C:/ti/ccs1100/ccs/tools/compiler/ti-cgt-c6000_8.3.11/bin/ar6x rq

DEL = C:/ti/ccs1100/xdctools_3_62_01_16_core/packages/../bin/rm -f
CP = C:/ti/ccs1100/xdctools_3_62_01_16_core/packages/../bin/cp -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asme674 $< ...
	@$(ASM) $(BIOS_DEFS) $(XOPTS) $(INCS) $<
endef

all: sysbios.ae674

c64p_Exception_asm.obj: family/c64p/Exception_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Exception_asm.obj

c64p_Hwi_asm.obj: family/c64p/Hwi_asm.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_asm.obj

c64p_Hwi_asm_switch.obj: family/c64p/Hwi_asm_switch.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_asm_switch.obj

c64p_Hwi_disp_always.obj: family/c64p/Hwi_disp_always.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c64p_Hwi_disp_always.obj

ti_tls_get_tp.obj: rts/ti/tls_get_tp.asm makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=ti_tls_get_tp.obj

c62_TaskSupport_asm.obj: family/c62/TaskSupport_asm.s62 makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=c62_TaskSupport_asm.obj

timer64_Timer_asm.obj: timers/timer64/Timer_asm.s64P makefile
	@-$(call RM, $@)
	$(ASSEMBLE) --output_file=timer64_Timer_asm.obj


BIOS.obj: BIOS.c family/c64p/Exception.c family/c64p/Hwi.c family/c64p/Hwi_startup.c family/c64p/TimestampProvider.c family/c64p/Cache.c knl/Clock.c knl/Idle.c knl/Intrinsics.c knl/Event.c knl/Queue.c knl/Semaphore.c knl/Swi.c knl/Task.c hal/Hwi.c hal/Hwi_stack.c hal/Hwi_startup.c hal/Timer.c rts/ti/ThreadLocalStorage.c family/c62/TaskSupport.c family/c62/IntrinsicsSupport.c gates/GateHwi.c gates/GateMutex.c heaps/HeapMem.c utils/Load.c utils/Load_CPU.c timers/timer64/Timer.c family/c64p/primus/TimerSupport.c makefile
	@-$(call RM, $@)
	@echo cle674 $< ...
	@$(CC) $(BIOS_DEFS) $(XOPTS) $(INCS) $(subst makefile,,$^)

sysbios.ae674: BIOS.obj c64p_Exception_asm.obj c64p_Hwi_asm.obj c64p_Hwi_asm_switch.obj c64p_Hwi_disp_always.obj ti_tls_get_tp.obj c62_TaskSupport_asm.obj timer64_Timer_asm.obj
	@-$(call RM, $@)
	@echo are674 $^ ...
	@$(AR) $@ $^


clean:
	@$(DEL) ..\makefile.libs
	@-$(call RM, *)
