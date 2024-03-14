/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.targets.elf package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"C:\ti\workspace_v11\UIA_StopMode_Template\Debug\configPkg\package\cfg\UIA_StopMode_Template_pe674.oe674"
-l"C:\ti\uia_2_30_01_02\packages\ti\uia\sysbios\lib\release\ti.uia.sysbios.ae674"
-l"C:\ti\uia_2_30_01_02\packages\ti\uia\loggers\lib\release\ti.uia.loggers.ae674"
-l"C:\ti\workspace_v11\UIA_StopMode_Template\src\sysbios\sysbios.ae674"
-l"C:\ti\uia_2_30_01_02\packages\ti\uia\services\lib\release\ti.uia.services.ae674"
-l"C:\ti\uia_2_30_01_02\packages\ti\uia\runtime\lib\release\ti.uia.runtime.ae674"
-l"C:\ti\uia_2_30_01_02\packages\ti\uia\events\lib\release\ti.uia.events.ae674"
-l"C:\ti\bios_6_76_03_01\packages\ti\targets\rts6000\lib\ti.targets.rts6000.ae674"
-l"C:\ti\bios_6_76_03_01\packages\ti\targets\rts6000\lib\boot.ae674"

--retain="*(xdc.meta)"


--args 0x0
-heap  0x0
-stack 0x1000

MEMORY
{
    IROM (RX) : org = 0x11700000, len = 0x100000
    IRAM (RWX) : org = 0x11800000, len = 0x40000
    L3_CBA_RAM (RWX) : org = 0x80000000, len = 0x20000
    DDR : org = 0xc3000000, len = 0x1000000
}

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from xdc.rov.runtime (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.elf (null): */

/* Content from ti.targets.rts6000 (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from xdc.services.getset (null): */

/* Content from xdc.rta (null): */

/* Content from ti.uia.events (null): */

/* Content from ti.uia.runtime (null): */

/* Content from xdc.runtime.knl (null): */

/* Content from ti.sysbios.family.c62 (null): */

/* Content from ti.sysbios.family.c64p.primus (null): */

/* Content from ti.uia.services (null): */

/* Content from ti.catalog.c6000 (null): */

/* Content from ti.catalog (null): */

/* Content from ti.catalog.peripherals.hdvicp2 (null): */

/* Content from xdc.platform (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.catalog.arm.peripherals.timers (null): */

/* Content from ti.catalog.arm (null): */

/* Content from ti.platforms.evmOMAPL138 (null): */

/* Content from ti.sysbios.hal (null): */

/* Content from ti.sysbios.family.c64p (ti/sysbios/family/c64p/linkcmd.xdt): */
ti_sysbios_family_c64p_Cache_l1dSize = 32768;
ti_sysbios_family_c64p_Cache_l1pSize = 32768;
ti_sysbios_family_c64p_Cache_l2Size = 0;

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.timers.timer64 (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.rts (null): */

/* Content from ti.sysbios.rts.ti (ti/sysbios/rts/ti/linkcmd.xdt): */

/* Content from ti.sysbios.syncs (null): */

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.heaps (null): */

/* Content from ti.uia.loggers (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from ti.uia.sysbios (null): */

/* Content from configPkg (null): */

/* Content from xdc.services.io (null): */


/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;
xdc_rov_runtime_Mon__checksum = 1;
xdc_rov_runtime_Mon__write = 1;

SECTIONS
{
    .text: load >> DDR
    .ti.decompress: load > DDR
    .stack: load > DDR
    GROUP: load > DDR
    {
        .bss:
        .neardata:
        .rodata:
    }
    .cinit: load > DDR
    .pinit: load >> DDR
    .init_array: load > DDR
    .const: load >> DDR
    .data: load >> DDR
    .fardata: load >> DDR
    .switch: load >> DDR
    .sysmem: load > DDR
    .far: load >> DDR
    .args: load > DDR align = 0x4, fill = 0 {_argsize = 0x0; }
    .cio: load >> DDR
    .ti.handler_table: load > DDR
    .c6xabi.exidx: load > DDR
    .c6xabi.extab: load >> DDR
    .vecs: load > DDR
    xdc.meta: load > DDR, type = COPY

}
