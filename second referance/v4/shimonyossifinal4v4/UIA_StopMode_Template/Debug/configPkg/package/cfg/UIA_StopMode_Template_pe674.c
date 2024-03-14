/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-K04
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c62/IntrinsicsSupport.h>
#include <ti/sysbios/family/c62/TaskSupport.h>
#include <ti/sysbios/family/c64p/Cache.h>
#include <ti/sysbios/family/c64p/Exception.h>
#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/TimestampProvider.h>
#include <ti/sysbios/family/c64p/primus/TimerSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/rts/ti/ThreadLocalStorage.h>
#include <ti/sysbios/timers/timer64/Timer.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#if defined(__ti__) && !defined(__clang__)
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

#if !(defined(__GNUC__))
#if !(defined(__TI_GNU_ATTRIBUTE_SUPPORT__) || defined(__IAR_SYSTEMS_ICC__)) || defined(__ARP32__)
#define __attribute__(x)
#endif
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c64p_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c64p_Hwi_Object__ {
    const ti_sysbios_family_c64p_Hwi_Fxns__ *__fxns;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_UArg arg;
    ti_sysbios_family_c64p_Hwi_FuncPtr fxn;
    ti_sysbios_family_c64p_Hwi_Irp irp;
    __TA_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c64p_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c64p_Hwi_Object__ obj;
} ti_sysbios_family_c64p_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.primus.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c64p_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_timer64_Timer_Object__ {
    const ti_sysbios_timers_timer64_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_timers_timer64_Timer_Half half;
    xdc_UInt tcrInit;
    xdc_UInt emumgtInit;
    xdc_UInt gpioIntEn;
    xdc_UInt gpioDatDir;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt prescalar;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
    xdc_UInt intCtl;
} ti_sysbios_timers_timer64_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_timer64_Timer_Object__ obj;
} ti_sysbios_timers_timer64_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_timer64_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {&xdc_runtime_ITimestampClient_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x803a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    &ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803c, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    &xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    &xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Cache DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Cache_Module_State__ {
    volatile xdc_UInt32 *emifAddr;
} ti_sysbios_family_c64p_Cache_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Exception_Module_State__ {
    xdc_Bits32 efr;
    xdc_Bits32 nrp;
    xdc_Bits32 ntsr;
    xdc_Bits32 ierr;
    ti_sysbios_family_c64p_Exception_FuncPtr returnHook;
    ti_sysbios_family_c64p_Exception_Context *excContext;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__scratch scratch;
    xdc_Char *excPtr;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__contextBuf contextBuf;
} ti_sysbios_family_c64p_Exception_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Hwi DECLARATIONS ========
 */

/* --> timerISR */
extern xdc_Void timerISR(xdc_UArg f_arg0);

/* --> ti_sysbios_family_c64p_Hwi_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv ti_sysbios_family_c64p_Hwi_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_family_c64p_Hwi_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv ti_sysbios_family_c64p_Hwi_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module_State__ {
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__intEvents intEvents;
    xdc_Bits16 ierMask;
    volatile xdc_Int intNum;
    xdc_Char *taskSP;
    xdc_Char *isrStack;
    xdc_Ptr vectorTableBase;
    xdc_Ptr bss;
    xdc_Int scw;
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_c64p_Hwi_Module_State__;

/* --> ti_sysbios_family_c64p_Hwi0 */
extern void* ti_sysbios_family_c64p_Hwi0;

/* --> __TI_STATIC_BASE */
extern void* __TI_STATIC_BASE;

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_family_c64p_Hwi_hooks__A */
const __T1_ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__A[1];


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.primus.TimerSupport DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_primus_TimerSupport_Module_State__ {
    __TA_ti_sysbios_family_c64p_primus_TimerSupport_Module_State__suspSrc suspSrc;
} ti_sysbios_family_c64p_primus_TimerSupport_Module_State__;

/* --> ti_sysbios_family_c64p_primus_TimerSupport_Module_State_0_suspSrc__A */
__T1_ti_sysbios_family_c64p_primus_TimerSupport_Module_State__suspSrc ti_sysbios_family_c64p_primus_TimerSupport_Module_State_0_suspSrc__A[2];

/* Module__state__V */
ti_sysbios_family_c64p_primus_TimerSupport_Module_State__ ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V;

/* --> ti_sysbios_family_c64p_primus_TimerSupport_timer__A */
const __T1_ti_sysbios_family_c64p_primus_TimerSupport_timer ti_sysbios_family_c64p_primus_TimerSupport_timer__A[2];


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[65536];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[65536] __attribute__ ((aligned(8)));
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* --> swi_ISR */
extern xdc_Void swi_ISR(xdc_UArg f_arg0,xdc_UArg f_arg1);

/* --> ti_sysbios_knl_Swi_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Swi_Instance_State__hookEnv ti_sysbios_knl_Swi_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Swi_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Swi_Instance_State__hookEnv ti_sysbios_knl_Swi_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Swi_hooks__A */
const __T1_ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__A[1];

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".far:taskStackSection"), aligned(8)));
#endif

/* --> Algorithm_task */
extern xdc_Void Algorithm_task(xdc_UArg f_arg0,xdc_UArg f_arg1);

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".far:taskStackSection"), aligned(8)));
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ {
    xdc_Ptr currentTP;
    xdc_UInt contextId;
    xdc_runtime_IHeap_Handle heapHandle;
} ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__;

/* Module__state__V */
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V;


/*
 * ======== ti.sysbios.timers.timer64.Timer DECLARATIONS ========
 */

/* --> timerISR */
extern xdc_Void timerISR(xdc_UArg f_arg0);

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__gctrl gctrl;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__handles handles;
    xdc_Bits32 availMaskHigh;
} ti_sysbios_timers_timer64_Timer_Module_State__;

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[4];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[4];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[8];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[8];

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V;

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[4];


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[1024];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[32768];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[32768] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[32768];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[32768] __attribute__ ((aligned(128)));
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c64p_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c64p_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c64p_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_c64p_Cache_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Cache_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_timers_timer64_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8289];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[68];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__,Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/ti/workspace_v11/UIA_StopMode_Template/Debug/configPkg/package/cfg/UIA_StopMode_Template_pe674");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 674");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.evmOMAPL138");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.elf.C674");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32799, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32803, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0);
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[11] < 0);
}
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[12] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * attribute, whole program optimizers would otherwise optimize-out this
 * function.
 */
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[13];
    xdc_runtime_Startup_startModsFxn__C(state, 13);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
/* REQ_TAG(SYSBIOS-1072) */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int out, const char *buffer, unsigned count);
#elif (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined))
extern int _write(int out, char *buffer, int count);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;

    while (size != 0U) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= (xdc_UInt)printCount;
        buf = buf + printCount;
    }
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.sysbios.family.c64p.Hwi TEMPLATE ========
 */


asm("           .sect \".vecs\"         ");
asm("           .align 0x400            ");
asm("           .nocmp                  ");
asm("           .global ti_sysbios_family_c64p_Hwi0          ");
asm("ti_sysbios_family_c64p_Hwi0:                            ");
asm("           .global ti_sysbios_family_c64p_Hwi_int0         ");
asm("           .global _c_int00         ");
asm("ti_sysbios_family_c64p_Hwi_int0:                           ");
asm("           nop                     ");
asm("           nop                     ");
asm("           nop                     ");
asm("           mvkl    _c_int00, b0     ");
asm("           mvkh    _c_int00, b0     ");
asm("           b       b0              ");
asm("           nop                     ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int1         ");
asm("           .global ti_sysbios_family_c64p_Exception_dispatch__E         ");
asm("ti_sysbios_family_c64p_Hwi_int1:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     1, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("ti_sysbios_family_c64p_Hwi_int2:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     2, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("ti_sysbios_family_c64p_Hwi_int3:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     3, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int4         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int4:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     4, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("ti_sysbios_family_c64p_Hwi_int5:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     5, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("ti_sysbios_family_c64p_Hwi_int6:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     6, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int7         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int7         ");
asm("ti_sysbios_family_c64p_Hwi_int7:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     7, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int8         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int8         ");
asm("ti_sysbios_family_c64p_Hwi_int8:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     8, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int9         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int9         ");
asm("ti_sysbios_family_c64p_Hwi_int9:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     9, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int10         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int10         ");
asm("ti_sysbios_family_c64p_Hwi_int10:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     10, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("ti_sysbios_family_c64p_Hwi_int11:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     11, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("ti_sysbios_family_c64p_Hwi_int12:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     12, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("ti_sysbios_family_c64p_Hwi_int13:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     13, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int14         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int14:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     14, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("ti_sysbios_family_c64p_Hwi_int15:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     15, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_BIOS_registerRTSLock(Void);
extern Void ti_sysbios_timers_timer64_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_timers_timer64_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_utils_Load_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock(Void)
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock(Void)
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0U) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I(Void)
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}

/*
 *  ======== Load_hwiBeginHook ========
 */
Void ti_sysbios_utils_Load_hwiBeginHook__E(ti_sysbios_interfaces_IHwi_Handle hwi)
{
    ti_sysbios_utils_Load_HookContext *pTaskEnv;
    UInt32 delta;
    UInt coreId;
    UInt key;

    coreId = 0;

    key = ti_sysbios_hal_Hwi_disable();

    if (++(ti_sysbios_utils_Load_Module__state__V.hwiCnt) == 1) {   /* If first Hwi */

        /* Get the interrupt time */
        UInt32 intrTime = xdc_runtime_Timestamp_get32();

        if (ti_sysbios_utils_Load_Module__state__V.swiCnt == 0) {  /* we were in a Task */
            /* Update the total time the task has run */
            delta = intrTime - ti_sysbios_utils_Load_Module__state__V.taskStartTime[coreId];

            /*
             * may be NULL if interrupt happened early before first task
             * switch, or if task monitoring is disabled.
             */
            if (ti_sysbios_utils_Load_Module__state__V.runningTask[coreId] != NULL) {
                pTaskEnv = (ti_sysbios_utils_Load_HookContext *)ti_sysbios_knl_Task_getHookContext(
                    ti_sysbios_utils_Load_Module__state__V.runningTask[coreId],
                    ti_sysbios_utils_Load_Module__state__V.taskHId);

                /* record time, if task has been registered */
                if (pTaskEnv != NULL) {
                    pTaskEnv->nextTotalTime += delta;
                }
            }
        }
        else {  /* we were in a Swi */
            /* Update the total time the task has run */
            delta = intrTime - ti_sysbios_utils_Load_Module__state__V.swiStartTime;

            /* record it */
            ti_sysbios_utils_Load_Module__state__V.swiEnv.nextTotalTime += delta;
        }

        /* Update the start time for next hwi */
        ti_sysbios_utils_Load_Module__state__V.hwiStartTime = intrTime;
    }

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x11e1a300U,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0U,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".const:ti_sysbios_BIOS_mpeEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0U,  /* hi */
    (xdc_Bits32)0x11e1a300U,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".const:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".const:ti_sysbios_BIOS_kernelHeapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".const:ti_sysbios_BIOS_kernelHeapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x10000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__id ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8035U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__count ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__heap ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__table ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.c62.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj ti_sysbios_family_c62_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__id__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__id ti_sysbios_family_c62_TaskSupport_Module__id__C = (xdc_Bits16)0x8034U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerDefined ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__count__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__count ti_sysbios_family_c62_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__heap ti_sysbios_family_c62_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__sizeof ti_sysbios_family_c62_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__table__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__table ti_sysbios_family_c62_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_defaultStackSize ti_sysbios_family_c62_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_stackAlignment ti_sysbios_family_c62_TaskSupport_stackAlignment__C = (xdc_UInt)0x8U;


/*
 * ======== ti.sysbios.family.c64p.Cache INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Cache_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Cache_Module__state__V")));
#endif
ti_sysbios_family_c64p_Cache_Module_State__ ti_sysbios_family_c64p_Cache_Module__state__V = {
    ((xdc_UInt32*)NULL),  /* emifAddr */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsEnabled ti_sysbios_family_c64p_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsIncluded ti_sysbios_family_c64p_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Cache_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__diagsMask ti_sysbios_family_c64p_Cache_Module__diagsMask__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gateObj ti_sysbios_family_c64p_Cache_Module__gateObj__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Cache_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__gatePrms ti_sysbios_family_c64p_Cache_Module__gatePrms__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__id__C, ".const:ti_sysbios_family_c64p_Cache_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__id ti_sysbios_family_c64p_Cache_Module__id__C = (xdc_Bits16)0x8019U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerDefined ti_sysbios_family_c64p_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerObj ti_sysbios_family_c64p_Cache_Module__loggerObj__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0 ti_sysbios_family_c64p_Cache_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1 ti_sysbios_family_c64p_Cache_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2 ti_sysbios_family_c64p_Cache_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4 ti_sysbios_family_c64p_Cache_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8 ti_sysbios_family_c64p_Cache_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c64p_Cache_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__count__C, ".const:ti_sysbios_family_c64p_Cache_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__count ti_sysbios_family_c64p_Cache_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__heap__C, ".const:ti_sysbios_family_c64p_Cache_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__heap ti_sysbios_family_c64p_Cache_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Cache_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__sizeof ti_sysbios_family_c64p_Cache_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_Object__table__C, ".const:ti_sysbios_family_c64p_Cache_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_Object__table ti_sysbios_family_c64p_Cache_Object__table__C = NULL;

/* enableCache__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_enableCache__C, ".const:ti_sysbios_family_c64p_Cache_enableCache__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_enableCache ti_sysbios_family_c64p_Cache_enableCache__C = 1;

/* initSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_initSize__C, ".const:ti_sysbios_family_c64p_Cache_initSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_initSize ti_sysbios_family_c64p_Cache_initSize__C = {
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1pSize */
    ti_sysbios_family_c64p_Cache_L1Size_32K,  /* l1dSize */
    ti_sysbios_family_c64p_Cache_L2Size_0K,  /* l2Size */
};

/* EMIFA_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG ti_sysbios_family_c64p_Cache_EMIFA_CFG__C = ((const CT__ti_sysbios_family_c64p_Cache_EMIFA_CFG)((void*)0x68000000));

/* EMIFA_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_BASE ti_sysbios_family_c64p_Cache_EMIFA_BASE__C = (xdc_UInt)0x40000000U;

/* EMIFA_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFA_LENGTH ti_sysbios_family_c64p_Cache_EMIFA_LENGTH__C = (xdc_UInt)0x28000000U;

/* EMIFB_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG ti_sysbios_family_c64p_Cache_EMIFB_CFG__C = ((const CT__ti_sysbios_family_c64p_Cache_EMIFB_CFG)((void*)0xb0000000));

/* EMIFB_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_BASE ti_sysbios_family_c64p_Cache_EMIFB_BASE__C = (xdc_UInt)0xc0000000U;

/* EMIFB_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFB_LENGTH ti_sysbios_family_c64p_Cache_EMIFB_LENGTH__C = (xdc_UInt)0x20000000U;

/* EMIFC_CFG__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_CFG__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_CFG__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG ti_sysbios_family_c64p_Cache_EMIFC_CFG__C = ((const CT__ti_sysbios_family_c64p_Cache_EMIFC_CFG)NULL);

/* EMIFC_BASE__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_BASE__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_BASE__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_BASE ti_sysbios_family_c64p_Cache_EMIFC_BASE__C = (xdc_UInt)0x0U;

/* EMIFC_LENGTH__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C, ".const:ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_EMIFC_LENGTH ti_sysbios_family_c64p_Cache_EMIFC_LENGTH__C = (xdc_UInt)0x0U;

/* MAR0_31__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR0_31__C, ".const:ti_sysbios_family_c64p_Cache_MAR0_31__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR0_31 ti_sysbios_family_c64p_Cache_MAR0_31__C = (xdc_UInt32)0x20000U;

/* MAR32_63__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR32_63__C, ".const:ti_sysbios_family_c64p_Cache_MAR32_63__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR32_63 ti_sysbios_family_c64p_Cache_MAR32_63__C = (xdc_UInt32)0x0U;

/* MAR64_95__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR64_95__C, ".const:ti_sysbios_family_c64p_Cache_MAR64_95__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR64_95 ti_sysbios_family_c64p_Cache_MAR64_95__C = (xdc_UInt32)0x0U;

/* MAR96_127__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR96_127__C, ".const:ti_sysbios_family_c64p_Cache_MAR96_127__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR96_127 ti_sysbios_family_c64p_Cache_MAR96_127__C = (xdc_UInt32)0x0U;

/* MAR128_159__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR128_159__C, ".const:ti_sysbios_family_c64p_Cache_MAR128_159__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR128_159 ti_sysbios_family_c64p_Cache_MAR128_159__C = (xdc_UInt32)0x1U;

/* MAR160_191__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR160_191__C, ".const:ti_sysbios_family_c64p_Cache_MAR160_191__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR160_191 ti_sysbios_family_c64p_Cache_MAR160_191__C = (xdc_UInt32)0x0U;

/* MAR192_223__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR192_223__C, ".const:ti_sysbios_family_c64p_Cache_MAR192_223__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR192_223 ti_sysbios_family_c64p_Cache_MAR192_223__C = (xdc_UInt32)0x8U;

/* MAR224_255__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_MAR224_255__C, ".const:ti_sysbios_family_c64p_Cache_MAR224_255__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_MAR224_255 ti_sysbios_family_c64p_Cache_MAR224_255__C = (xdc_UInt32)0x0U;

/* E_invalidL1CacheSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C, ".const:ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize ti_sysbios_family_c64p_Cache_E_invalidL1CacheSize__C = (((xdc_runtime_Error_Id)4484) << 16 | 0U);

/* E_invalidL2CacheSize__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C, ".const:ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C");
__FAR__ const CT__ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize ti_sysbios_family_c64p_Cache_E_invalidL2CacheSize__C = (((xdc_runtime_Error_Id)4531) << 16 | 0U);


/*
 * ======== ti.sysbios.family.c64p.Exception INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Exception_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Exception_Module__state__V")));
#endif
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V = {
    (xdc_Bits32)0x0U,  /* efr */
    (xdc_Bits32)0x0U,  /* nrp */
    (xdc_Bits32)0x0U,  /* ntsr */
    (xdc_Bits32)0x0U,  /* ierr */
    ((xdc_Void(*)(xdc_Void))NULL),  /* returnHook */
    ((ti_sysbios_family_c64p_Exception_Context*)NULL),  /* excContext */
    {
        (xdc_Char)0x0,  /* [0] */
        (xdc_Char)0x0,  /* [1] */
        (xdc_Char)0x0,  /* [2] */
        (xdc_Char)0x0,  /* [3] */
        (xdc_Char)0x0,  /* [4] */
        (xdc_Char)0x0,  /* [5] */
        (xdc_Char)0x0,  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x0,  /* [8] */
        (xdc_Char)0x0,  /* [9] */
        (xdc_Char)0x0,  /* [10] */
        (xdc_Char)0x0,  /* [11] */
        (xdc_Char)0x0,  /* [12] */
        (xdc_Char)0x0,  /* [13] */
        (xdc_Char)0x0,  /* [14] */
        (xdc_Char)0x0,  /* [15] */
    },  /* scratch */
    ((xdc_Char*)NULL),  /* excPtr */
    ((void*)0),  /* contextBuf */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsEnabled ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x190U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsIncluded ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x190U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask ti_sysbios_family_c64p_Exception_Module__diagsMask__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gateObj ti_sysbios_family_c64p_Exception_Module__gateObj__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms ti_sysbios_family_c64p_Exception_Module__gatePrms__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__id__C, ".const:ti_sysbios_family_c64p_Exception_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__id ti_sysbios_family_c64p_Exception_Module__id__C = (xdc_Bits16)0x8016U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerDefined ti_sysbios_family_c64p_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj ti_sysbios_family_c64p_Exception_Module__loggerObj__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0 ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1 ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2 ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4 ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8 ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__count__C, ".const:ti_sysbios_family_c64p_Exception_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__count ti_sysbios_family_c64p_Exception_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__heap__C, ".const:ti_sysbios_family_c64p_Exception_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__heap ti_sysbios_family_c64p_Exception_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__sizeof ti_sysbios_family_c64p_Exception_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__table__C, ".const:ti_sysbios_family_c64p_Exception_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__table ti_sysbios_family_c64p_Exception_Object__table__C = NULL;

/* E_exceptionMin__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMin__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMin ti_sysbios_family_c64p_Exception_E_exceptionMin__C = (((xdc_runtime_Error_Id)4059) << 16 | 0U);

/* E_exceptionMax__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMax__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMax ti_sysbios_family_c64p_Exception_E_exceptionMax__C = (((xdc_runtime_Error_Id)4201) << 16 | 0U);

/* useInternalBuffer__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_useInternalBuffer__C, ".const:ti_sysbios_family_c64p_Exception_useInternalBuffer__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_useInternalBuffer ti_sysbios_family_c64p_Exception_useInternalBuffer__C = 0;

/* enableExternalMPC__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enableExternalMPC__C, ".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enableExternalMPC ti_sysbios_family_c64p_Exception_enableExternalMPC__C = 0;

/* enablePrint__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enablePrint__C, ".const:ti_sysbios_family_c64p_Exception_enablePrint__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enablePrint ti_sysbios_family_c64p_Exception_enablePrint__C = 1;

/* exceptionHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_exceptionHook__C, ".const:ti_sysbios_family_c64p_Exception_exceptionHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_exceptionHook ti_sysbios_family_c64p_Exception_exceptionHook__C = ((const CT__ti_sysbios_family_c64p_Exception_exceptionHook)NULL);

/* internalHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_internalHook__C, ".const:ti_sysbios_family_c64p_Exception_internalHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_internalHook ti_sysbios_family_c64p_Exception_internalHook__C = ((const CT__ti_sysbios_family_c64p_Exception_internalHook)NULL);

/* externalHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_externalHook__C, ".const:ti_sysbios_family_c64p_Exception_externalHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_externalHook ti_sysbios_family_c64p_Exception_externalHook__C = ((const CT__ti_sysbios_family_c64p_Exception_externalHook)NULL);

/* nmiHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_nmiHook__C, ".const:ti_sysbios_family_c64p_Exception_nmiHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_nmiHook ti_sysbios_family_c64p_Exception_nmiHook__C = ((const CT__ti_sysbios_family_c64p_Exception_nmiHook)NULL);

/* returnHook__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_returnHook__C, ".const:ti_sysbios_family_c64p_Exception_returnHook__C");
__FAR__ const CT__ti_sysbios_family_c64p_Exception_returnHook ti_sysbios_family_c64p_Exception_returnHook__C = ((const CT__ti_sysbios_family_c64p_Exception_returnHook)NULL);


/*
 * ======== ti.sysbios.family.c64p.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_c64p_Hwi_Params ti_sysbios_family_c64p_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c64p_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0U,  /* disableMask */
    (xdc_Bits16)0x0U,  /* restoreMask */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_family_c64p_Hwi_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv ti_sysbios_family_c64p_Hwi_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_family_c64p_Hwi_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv ti_sysbios_family_c64p_Hwi_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V = {
    {&ti_sysbios_family_c64p_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        (xdc_Bits16)0x4000U,  /* disableMask */
        (xdc_Bits16)0x4000U,  /* restoreMask */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(timerISR)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)ti_sysbios_family_c64p_Hwi_Instance_State_0_hookEnv__A),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        (xdc_Bits16)0x10U,  /* disableMask */
        (xdc_Bits16)0x10U,  /* restoreMask */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)NULL),  /* irp */
        ((void*)ti_sysbios_family_c64p_Hwi_Instance_State_1_hookEnv__A),  /* hookEnv */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_Hwi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_Hwi_Module__state__V")));
#endif
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V = {
    {
        (xdc_Char)(-0x0 - 1),  /* [0] */
        (xdc_Char)(-0x0 - 1),  /* [1] */
        (xdc_Char)(-0x0 - 1),  /* [2] */
        (xdc_Char)(-0x0 - 1),  /* [3] */
        (xdc_Char)0x40,  /* [4] */
        (xdc_Char)(-0x0 - 1),  /* [5] */
        (xdc_Char)(-0x0 - 1),  /* [6] */
        (xdc_Char)(-0x0 - 1),  /* [7] */
        (xdc_Char)(-0x0 - 1),  /* [8] */
        (xdc_Char)(-0x0 - 1),  /* [9] */
        (xdc_Char)(-0x0 - 1),  /* [10] */
        (xdc_Char)(-0x0 - 1),  /* [11] */
        (xdc_Char)(-0x0 - 1),  /* [12] */
        (xdc_Char)(-0x0 - 1),  /* [13] */
        (xdc_Char)0x4,  /* [14] */
        (xdc_Char)(-0x0 - 1),  /* [15] */
    },  /* intEvents */
    (xdc_Bits16)0x4013U,  /* ierMask */
    (xdc_Int)0x0,  /* intNum */
    ((xdc_Char*)NULL),  /* taskSP */
    ((xdc_Char*)NULL),  /* isrStack */
    ((xdc_Ptr)((void*)&ti_sysbios_family_c64p_Hwi0)),  /* vectorTableBase */
    ((xdc_Ptr)((void*)&__TI_STATIC_BASE)),  /* bss */
    (xdc_Int)0x0,  /* scw */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[1],  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        0,  /* [7] */
        0,  /* [8] */
        0,  /* [9] */
        0,  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* [14] */
        0,  /* [15] */
    },  /* dispatchTable */
};

/* --> ti_sysbios_family_c64p_Hwi_hooks__A */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__A, ".const:ti_sysbios_family_c64p_Hwi_hooks__A");
const __T1_ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_interfaces_IHwi_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))NULL),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_interfaces_IHwi_Handle f_arg0))(ti_sysbios_utils_Load_hwiBeginHook__E)),  /* beginFxn */
        ((xdc_Void(*)(ti_sysbios_interfaces_IHwi_Handle f_arg0))(ti_sysbios_utils_Load_hwiEndHook__E)),  /* endFxn */
        ((xdc_Void(*)(ti_sysbios_interfaces_IHwi_Handle f_arg0))NULL),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask ti_sysbios_family_c64p_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj ti_sysbios_family_c64p_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms ti_sysbios_family_c64p_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__id__C, ".const:ti_sysbios_family_c64p_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__id ti_sysbios_family_c64p_Hwi_Module__id__C = (xdc_Bits16)0x8017U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj ti_sysbios_family_c64p_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__count__C, ".const:ti_sysbios_family_c64p_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__count ti_sysbios_family_c64p_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__heap__C, ".const:ti_sysbios_family_c64p_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__heap ti_sysbios_family_c64p_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__sizeof ti_sysbios_family_c64p_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c64p_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__table__C, ".const:ti_sysbios_family_c64p_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__table ti_sysbios_family_c64p_Hwi_Object__table__C = ti_sysbios_family_c64p_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_alreadyDefined ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4243) << 16 | 0U);

/* E_handleNotFound__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_handleNotFound ti_sysbios_family_c64p_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)4291) << 16 | 0U);

/* E_allocSCFailed__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C, ".const:ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_allocSCFailed ti_sysbios_family_c64p_Hwi_E_allocSCFailed__C = (((xdc_runtime_Error_Id)4336) << 16 | 0U);

/* E_registerSCFailed__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C, ".const:ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_registerSCFailed ti_sysbios_family_c64p_Hwi_E_registerSCFailed__C = (((xdc_runtime_Error_Id)4381) << 16 | 0U);

/* E_invalidIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C, ".const:ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_invalidIntNum ti_sysbios_family_c64p_Hwi_E_invalidIntNum__C = (((xdc_runtime_Error_Id)4432) << 16 | 0U);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LM_begin__C, ".const:ti_sysbios_family_c64p_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LM_begin ti_sysbios_family_c64p_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)5468) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LD_end__C, ".const:ti_sysbios_family_c64p_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LD_end ti_sysbios_family_c64p_Hwi_LD_end__C = (((xdc_runtime_Log_Event)5538) << 16 | 512);

/* enableException__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_enableException__C, ".const:ti_sysbios_family_c64p_Hwi_enableException__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_enableException ti_sysbios_family_c64p_Hwi_enableException__C = 1;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiDisable__C, ".const:ti_sysbios_family_c64p_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiDisable ti_sysbios_family_c64p_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_c64p_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskDisable__C, ".const:ti_sysbios_family_c64p_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskDisable ti_sysbios_family_c64p_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_c64p_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__C, ".const:ti_sysbios_family_c64p_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__C = {1, ((__T1_ti_sysbios_family_c64p_Hwi_hooks const  *)ti_sysbios_family_c64p_Hwi_hooks__A)};


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled ti_sysbios_family_c64p_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded ti_sysbios_family_c64p_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj ti_sysbios_family_c64p_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__id ti_sysbios_family_c64p_TimestampProvider_Module__id__C = (xdc_Bits16)0x8018U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined ti_sysbios_family_c64p_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c64p_TimestampProvider_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__count ti_sysbios_family_c64p_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__heap ti_sysbios_family_c64p_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__sizeof ti_sysbios_family_c64p_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_c64p_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_TimestampProvider_Object__table ti_sysbios_family_c64p_TimestampProvider_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.c64p.primus.TimerSupport INITIALIZERS ========
 */

/* --> ti_sysbios_family_c64p_primus_TimerSupport_Module_State_0_suspSrc__A */
__T1_ti_sysbios_family_c64p_primus_TimerSupport_Module_State__suspSrc ti_sysbios_family_c64p_primus_TimerSupport_Module_State_0_suspSrc__A[2] = {
    ti_sysbios_family_c64p_primus_TimerSupport_SuspSrc_DSP,  /* [0] */
    ti_sysbios_family_c64p_primus_TimerSupport_SuspSrc_DSP,  /* [1] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_c64p_primus_TimerSupport_Module_State__ ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_c64p_primus_TimerSupport_Module_State__ ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V")));
#endif
ti_sysbios_family_c64p_primus_TimerSupport_Module_State__ ti_sysbios_family_c64p_primus_TimerSupport_Module__state__V = {
    ((void*)ti_sysbios_family_c64p_primus_TimerSupport_Module_State_0_suspSrc__A),  /* suspSrc */
};

/* --> ti_sysbios_family_c64p_primus_TimerSupport_timer__A */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_timer__A, ".const:ti_sysbios_family_c64p_primus_TimerSupport_timer__A");
const __T1_ti_sysbios_family_c64p_primus_TimerSupport_timer ti_sysbios_family_c64p_primus_TimerSupport_timer__A[2] = {
    {
        ti_sysbios_family_c64p_primus_TimerSupport_SuspSrc_DSP,  /* suspSrc */
    },  /* [0] */
    {
        ti_sysbios_family_c64p_primus_TimerSupport_SuspSrc_DSP,  /* suspSrc */
    },  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsEnabled ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsIncluded ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsMask ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__gateObj ti_sysbios_family_c64p_primus_TimerSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__gatePrms ti_sysbios_family_c64p_primus_TimerSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__id__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__id ti_sysbios_family_c64p_primus_TimerSupport_Module__id__C = (xdc_Bits16)0x8043U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerDefined ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerObj ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn0 ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn1 ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn2 ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn4 ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn8 ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Object__count__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Object__count ti_sysbios_family_c64p_primus_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Object__heap ti_sysbios_family_c64p_primus_TimerSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Object__sizeof ti_sysbios_family_c64p_primus_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_Object__table__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_Object__table ti_sysbios_family_c64p_primus_TimerSupport_Object__table__C = NULL;

/* timer__C */
#pragma DATA_SECTION(ti_sysbios_family_c64p_primus_TimerSupport_timer__C, ".const:ti_sysbios_family_c64p_primus_TimerSupport_timer__C");
__FAR__ const CT__ti_sysbios_family_c64p_primus_TimerSupport_timer ti_sysbios_family_c64p_primus_TimerSupport_timer__C = ((const CT__ti_sysbios_family_c64p_primus_TimerSupport_timer)ti_sysbios_family_c64p_primus_TimerSupport_timer__A);


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8037U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8038U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2698) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* pi */
    },
    {/* instance#1 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[1],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8025U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4996) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((const CT__ti_sysbios_hal_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8026U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Timer_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[65536];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x10000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x803aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)3384) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3420) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3465) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5123) << 16 | 0U);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)3356) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)NULL);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)NULL);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0U,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0U,  /* ticks */
    (xdc_UInt)0x0U,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[1],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[1],  /* swi */
    (xdc_UInt)0x1U,  /* numTickSkip */
    (xdc_UInt32)0x1U,  /* nextScheduledTick */
    (xdc_UInt32)0x0U,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x790U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x790U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801cU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5556) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5578) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5596) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)445) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)526) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0U;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8U;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5628) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5682) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)596) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)643) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)682) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)725) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)788) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0U,  /* [0] */
    (xdc_UInt)0x0U,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8020U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1U,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[1] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1U,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0U,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8021U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5763) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5793) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)936) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)991) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)725) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1056) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1110) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4578) << 16 | 0U);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0U,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Swi_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Swi_Instance_State__hookEnv ti_sysbios_knl_Swi_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Swi_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Swi_Instance_State__hookEnv ti_sysbios_knl_Swi_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(swi_ISR)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xfU,  /* priority */
        (xdc_UInt)0x8000U,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0U,  /* initTrigger */
        (xdc_UInt)0x0U,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)ti_sysbios_knl_Swi_Instance_State_0_hookEnv__A),  /* hookEnv */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xfU,  /* priority */
        (xdc_UInt)0x8000U,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0U,  /* initTrigger */
        (xdc_UInt)0x0U,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)ti_sysbios_knl_Swi_Instance_State_1_hookEnv__A),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    (xdc_UInt)0x0U,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* --> ti_sysbios_knl_Swi_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__A, ".const:ti_sysbios_knl_Swi_hooks__A");
const __T1_ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Swi_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))NULL),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Swi_Handle f_arg0))NULL),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Swi_Handle f_arg0))(ti_sysbios_utils_Load_swiBeginHook__E)),  /* beginFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Swi_Handle f_arg0))(ti_sysbios_utils_Load_swiEndHook__E)),  /* endFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Swi_Handle f_arg0))NULL),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8022U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5836) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5883) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5901) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1204) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1261) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10U;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {1, ((__T1_ti_sysbios_knl_Swi_hooks const  *)ti_sysbios_knl_Swi_hooks__A)};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0U;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0U,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)NULL),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_1_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(Algorithm_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0U,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8205) /* __name */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)NULL),  /* domain */
        (xdc_UInt32)0x0U,  /* checkValue */
        ((xdc_Ptr)NULL),  /* tls */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8211) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2U,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))(ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,ti_sysbios_knl_Task_Handle f_arg1))(ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))(ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8023U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5941) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6009) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)6054) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)6095) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)6127) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)6175) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6231) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)6262) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6345) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6431) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4657) << 16 | 0U);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4700) << 16 | 0U);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4751) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4782) << 16 | 0U);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4855) << 16 | 0U);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4922) << 16 | 0U);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1310) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1379) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1433) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1487) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1550) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1600) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1635) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1668) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1752) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10U;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks const  *)ti_sysbios_knl_Task_hooks__A)};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0U;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V __attribute__ ((section(".data:ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V __attribute__ ((section(".data_ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V")));
#endif
ti_sysbios_rts_ti_ThreadLocalStorage_Module_State__ ti_sysbios_rts_ti_ThreadLocalStorage_Module__state__V = {
    ((xdc_Ptr)((void*)"&__TI_TLS_MAIN_THREAD_Base")),  /* currentTP */
    (xdc_UInt)(-0x0 - 1),  /* contextId */
    0,  /* heapHandle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__id ti_sysbios_rts_ti_ThreadLocalStorage_Module__id__C = (xdc_Bits16)0x8032U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8 ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8__C = ((const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__count ti_sysbios_rts_ti_ThreadLocalStorage_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap ti_sysbios_rts_ti_ThreadLocalStorage_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof ti_sysbios_rts_ti_ThreadLocalStorage_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_Object__table ti_sysbios_rts_ti_ThreadLocalStorage_Object__table__C = NULL;

/* heapHandle__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle ti_sysbios_rts_ti_ThreadLocalStorage_heapHandle__C = 0;

/* enableTLSSupport__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport ti_sysbios_rts_ti_ThreadLocalStorage_enableTLSSupport__C = 0;

/* TItlsSectMemory__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory ti_sysbios_rts_ti_ThreadLocalStorage_TItlsSectMemory__C = 0;

/* TItls_initSectMemory__C */
#pragma DATA_SECTION(ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C, ".const:ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C");
__FAR__ const CT__ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory ti_sysbios_rts_ti_ThreadLocalStorage_TItls_initSectMemory__C = 0;


/*
 * ======== ti.sysbios.timers.timer64.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_timers_timer64_Timer_Params ti_sysbios_timers_timer64_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_timer64_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0U,  /* tien */
        (xdc_Bits8)0x0U,  /* invout */
        (xdc_Bits8)0x0U,  /* invin */
        (xdc_UInt8)0x1U,  /* pwid */
        (xdc_Bits8)0x0U,  /* cp */
    },  /* controlInit */
    {
        0,  /* free */
        0,  /* soft */
    },  /* emuMgtInit */
    {
        (xdc_Bits8)0x0U,  /* gpint12_eni */
        (xdc_Bits8)0x0U,  /* gpint12_eno */
        (xdc_Bits8)0x0U,  /* gpint12_invi */
        (xdc_Bits8)0x0U,  /* gpint12_invo */
        (xdc_Bits8)0x0U,  /* gpint34_eni */
        (xdc_Bits8)0x0U,  /* gpint34_eno */
        (xdc_Bits8)0x0U,  /* gpint34_invi */
        (xdc_Bits8)0x0U,  /* gpint34_invo */
        (xdc_Bits8)0x0U,  /* gpio_eni12 */
        (xdc_Bits8)0x0U,  /* gpio_eno12 */
        (xdc_Bits8)0x0U,  /* gpio_eni34 */
        (xdc_Bits8)0x0U,  /* gpio_eno34 */
    },  /* gpioIntEn */
    {
        (xdc_Bits8)0x0U,  /* gpio_dati12 */
        (xdc_Bits8)0x0U,  /* gpio_dato12 */
        (xdc_Bits8)0x0U,  /* gpio_dati34 */
        (xdc_Bits8)0x0U,  /* gpio_dato34 */
        (xdc_Bits8)0x0U,  /* gpio_diri12 */
        (xdc_Bits8)0x0U,  /* gpio_diro12 */
        (xdc_Bits8)0x0U,  /* gpio_diri34 */
        (xdc_Bits8)0x0U,  /* gpio_diro34 */
    },  /* gpioDatDir */
    {
        1,  /* prdinten_hi */
        1,  /* prdinten_lo */
    },  /* intCtl */
    ti_sysbios_timers_timer64_Timer_Half_DEFAULT,  /* half */
    ((ti_sysbios_hal_Hwi_Params*)NULL),  /* hwiParams */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_UInt)0x0U,  /* prescalar */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V = {
    {&ti_sysbios_timers_timer64_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_timers_timer64_Timer_Half_LOWER,  /* half */
        (xdc_UInt)0x10U,  /* tcrInit */
        (xdc_UInt)0x0U,  /* emumgtInit */
        (xdc_UInt)0x0U,  /* gpioIntEn */
        (xdc_UInt)0x0U,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x4e2U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0U,  /* prescalar */
        (xdc_UInt)0xeU,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(timerISR)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x10001U,  /* intCtl */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_timers_timer64_Timer_Half_UPPER,  /* half */
        (xdc_UInt)0x10U,  /* tcrInit */
        (xdc_UInt)0x0U,  /* emumgtInit */
        (xdc_UInt)0x0U,  /* gpioIntEn */
        (xdc_UInt)0x0U,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0U,  /* prescalar */
        (xdc_UInt)0x4U,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0x10001U,  /* intCtl */
    },
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[4] = {
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x16e3600U,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x16e3600U,  /* lo */
    },  /* [1] */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x8f0d180U,  /* lo */
    },  /* [2] */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x8f0d180U,  /* lo */
    },  /* [3] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[4] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [3] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[8] = {
    {
        (xdc_UInt)0xeU,  /* intNum */
        (xdc_UInt)0x4U,  /* eventId */
        ((xdc_Ptr)((void*)0x1c20000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x4U,  /* intNum */
        (xdc_UInt)0x40U,  /* eventId */
        ((xdc_Ptr)((void*)0x1c20000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0xfU,  /* intNum */
        (xdc_UInt)0x28U,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x5U,  /* intNum */
        (xdc_UInt)0x30U,  /* eventId */
        ((xdc_Ptr)((void*)0x1c21000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x6U,  /* intNum */
        (xdc_UInt)0x19U,  /* eventId */
        ((xdc_Ptr)((void*)0x1f0c000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6U,  /* intNum */
        (xdc_UInt)0x19U,  /* eventId */
        ((xdc_Ptr)((void*)0x1f0c000)),  /* baseAddr */
    },  /* [5] */
    {
        (xdc_UInt)0x7U,  /* intNum */
        (xdc_UInt)0x56U,  /* eventId */
        ((xdc_Ptr)((void*)0x1f0d000)),  /* baseAddr */
    },  /* [6] */
    {
        (xdc_UInt)0x7U,  /* intNum */
        (xdc_UInt)0x56U,  /* eventId */
        ((xdc_Ptr)((void*)0x1f0d000)),  /* baseAddr */
    },  /* [7] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[8] = {
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_timers_timer64_Timer_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_timers_timer64_Timer_Module__state__V")));
#endif
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V = {
    (xdc_Bits32)0xfcU,  /* availMask */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A),  /* gctrl */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A),  /* handles */
    (xdc_Bits32)0x0U,  /* availMaskHigh */
};

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__A, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__A");
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[4] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_CHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0U,  /* ownerCoreId */
    },  /* [3] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsEnabled ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsIncluded ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask ti_sysbios_timers_timer64_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj ti_sysbios_timers_timer64_Timer_Module__gateObj__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms ti_sysbios_timers_timer64_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__id__C, ".const:ti_sysbios_timers_timer64_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__id ti_sysbios_timers_timer64_Timer_Module__id__C = (xdc_Bits16)0x8041U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerDefined ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj ti_sysbios_timers_timer64_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__count__C, ".const:ti_sysbios_timers_timer64_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__count ti_sysbios_timers_timer64_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__heap__C, ".const:ti_sysbios_timers_timer64_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__heap ti_sysbios_timers_timer64_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__sizeof ti_sysbios_timers_timer64_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_timer64_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__table__C, ".const:ti_sysbios_timers_timer64_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__table ti_sysbios_timers_timer64_Timer_Object__table__C = ti_sysbios_timers_timer64_Timer_Object__table__V;

/* A_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_A_notAvailable ti_sysbios_timers_timer64_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)3727) << 16 | 16);

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_invalidTimer ti_sysbios_timers_timer64_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)5159) << 16 | 0U);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_notAvailable ti_sysbios_timers_timer64_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5195) << 16 | 0U);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_cannotSupport ti_sysbios_timers_timer64_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5234) << 16 | 0U);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMask__C, ".const:ti_sysbios_timers_timer64_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMask ti_sysbios_timers_timer64_Timer_anyMask__C = (xdc_Bits32)0xffU;

/* anyMaskHigh__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMaskHigh__C, ".const:ti_sysbios_timers_timer64_Timer_anyMaskHigh__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMaskHigh ti_sysbios_timers_timer64_Timer_anyMaskHigh__C = (xdc_Bits32)0x0U;

/* defaultHalf__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_defaultHalf__C, ".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_defaultHalf ti_sysbios_timers_timer64_Timer_defaultHalf__C = ti_sysbios_timers_timer64_Timer_Half_LOWER;

/* timerSettings__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__C, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__C = ((const CT__ti_sysbios_timers_timer64_Timer_timerSettings)ti_sysbios_timers_timer64_Timer_timerSettings__A);

/* useTimer64pRegMap__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_useTimer64pRegMap__C, ".const:ti_sysbios_timers_timer64_Timer_useTimer64pRegMap__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_useTimer64pRegMap ti_sysbios_timers_timer64_Timer_useTimer64pRegMap__C = 0;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_startupNeeded__C, ".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_startupNeeded ti_sysbios_timers_timer64_Timer_startupNeeded__C = 1;

/* freqDivisor__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_freqDivisor__C, ".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_freqDivisor ti_sysbios_timers_timer64_Timer_freqDivisor__C = (xdc_UInt)0x0U;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numTimerDevices ti_sysbios_timers_timer64_Timer_numTimerDevices__C = (xdc_Int)0x8;

/* numLocalTimers__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numLocalTimers__C, ".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numLocalTimers ti_sysbios_timers_timer64_Timer_numLocalTimers__C = (xdc_Int)0x0;

/* localTimerBaseId__C */
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_localTimerBaseId__C, ".const:ti_sysbios_timers_timer64_Timer_localTimerBaseId__C");
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_localTimerBaseId ti_sysbios_timers_timer64_Timer_localTimerBaseId__C = (xdc_UInt8)0x0U;


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0U,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[2] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* [1] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data:ti_sysbios_utils_Load_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0U,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0U,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0U,  /* swiCnt */
    (xdc_UInt32)0x0U,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0U,  /* hwiCnt */
    (xdc_UInt32)0x0U,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffffU,  /* minLoop */
    (xdc_UInt32)0x0U,  /* minIdle */
    (xdc_UInt32)0x0U,  /* t0 */
    (xdc_UInt32)0x0U,  /* idleCnt */
    (xdc_UInt32)0x0U,  /* cpuLoad */
    (xdc_UInt32)0x2U,  /* taskEnvLen */
    (xdc_UInt32)0x0U,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0U,  /* idleStartTime */
    (xdc_UInt32)0x0U,  /* busyStartTime */
    (xdc_UInt32)0x0U,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((const CT__ti_sysbios_utils_Load_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((const CT__ti_sysbios_utils_Load_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((const CT__ti_sysbios_utils_Load_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x803eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((const CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = NULL;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7599) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7616) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7634) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7652) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((const CT__ti_sysbios_utils_Load_postUpdate)NULL);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4U;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((const CT__ti_uia_events_DvtTypes_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((const CT__ti_uia_events_DvtTypes_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((const CT__ti_uia_events_DvtTypes_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8029U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = NULL;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((const CT__ti_uia_events_UIAErr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((const CT__ti_uia_events_UIAErr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((const CT__ti_uia_events_UIAErr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x802aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((const CT__ti_uia_events_UIAErr_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = NULL;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6501) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6523) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6550) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6575) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6605) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6633) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6666) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6697) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6733) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6758) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6792) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6830) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6866) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6912) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6946) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6978) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)7012) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)7058) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)7123) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)7162) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)7206) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)7243) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)7292) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)7328) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((const CT__ti_uia_events_UIAEvt_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((const CT__ti_uia_events_UIAEvt_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((const CT__ti_uia_events_UIAEvt_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x802bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = NULL;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)7391) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)7415) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)7444) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7466) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7493) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7516) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7545) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[32768];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[32768];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x400U,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x8000U,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x8000U,  /* bufSize */
        ((xdc_UInt32*)NULL),  /* buffer */
        ((xdc_UInt32*)NULL),  /* write */
        ((xdc_UInt32*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data:ti_uia_loggers_LoggerStopMode_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0U,  /* level1 */
    (xdc_Bits16)0x0U,  /* level2 */
    (xdc_Bits16)0x0U,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803cU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0U;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0U;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0U;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87U;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7579) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3846) << 16 | 0U);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((const CT__ti_uia_runtime_EventHdr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((const CT__ti_uia_runtime_EventHdr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x802dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data:ti_uia_runtime_QueueDescriptor_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)NULL),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0U,  /* mUpdateCount */
    (xdc_UInt32)0x5555U,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x802eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x802fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3778) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0U,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3800) << 16 | 0U);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3804) << 16 | 0U);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3838) << 16 | 0U);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10U;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5292) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5316) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5337) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5356) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5373) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5387) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5403) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5410) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5421) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5431) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5450) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fffU,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[13] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c64p_Exception_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c64p_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c64p_TimestampProvider_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_c64p_Cache_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Timer_Module_startup__E)),  /* [10] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [11] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_timers_timer64_Timer_Module_startup__E)),  /* [12] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[13] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    1,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    1,  /* [11] */
    0,  /* [12] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800cU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
#ifdef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0U,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [2] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [3] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [4] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [5] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [6] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [7] */
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8289] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x69,  /* [402] */
    (xdc_Char)0x6e,  /* [403] */
    (xdc_Char)0x76,  /* [404] */
    (xdc_Char)0x61,  /* [405] */
    (xdc_Char)0x6c,  /* [406] */
    (xdc_Char)0x69,  /* [407] */
    (xdc_Char)0x64,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x76,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x6e,  /* [412] */
    (xdc_Char)0x74,  /* [413] */
    (xdc_Char)0x49,  /* [414] */
    (xdc_Char)0x64,  /* [415] */
    (xdc_Char)0x3a,  /* [416] */
    (xdc_Char)0x20,  /* [417] */
    (xdc_Char)0x49,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x76,  /* [420] */
    (xdc_Char)0x61,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x65,  /* [426] */
    (xdc_Char)0x76,  /* [427] */
    (xdc_Char)0x65,  /* [428] */
    (xdc_Char)0x6e,  /* [429] */
    (xdc_Char)0x74,  /* [430] */
    (xdc_Char)0x20,  /* [431] */
    (xdc_Char)0x49,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x20,  /* [434] */
    (xdc_Char)0x73,  /* [435] */
    (xdc_Char)0x70,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x63,  /* [438] */
    (xdc_Char)0x69,  /* [439] */
    (xdc_Char)0x66,  /* [440] */
    (xdc_Char)0x69,  /* [441] */
    (xdc_Char)0x65,  /* [442] */
    (xdc_Char)0x64,  /* [443] */
    (xdc_Char)0x0,  /* [444] */
    (xdc_Char)0x41,  /* [445] */
    (xdc_Char)0x5f,  /* [446] */
    (xdc_Char)0x63,  /* [447] */
    (xdc_Char)0x6c,  /* [448] */
    (xdc_Char)0x6f,  /* [449] */
    (xdc_Char)0x63,  /* [450] */
    (xdc_Char)0x6b,  /* [451] */
    (xdc_Char)0x44,  /* [452] */
    (xdc_Char)0x69,  /* [453] */
    (xdc_Char)0x73,  /* [454] */
    (xdc_Char)0x61,  /* [455] */
    (xdc_Char)0x62,  /* [456] */
    (xdc_Char)0x6c,  /* [457] */
    (xdc_Char)0x65,  /* [458] */
    (xdc_Char)0x64,  /* [459] */
    (xdc_Char)0x3a,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x6e,  /* [464] */
    (xdc_Char)0x6e,  /* [465] */
    (xdc_Char)0x6f,  /* [466] */
    (xdc_Char)0x74,  /* [467] */
    (xdc_Char)0x20,  /* [468] */
    (xdc_Char)0x63,  /* [469] */
    (xdc_Char)0x72,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x61,  /* [472] */
    (xdc_Char)0x74,  /* [473] */
    (xdc_Char)0x65,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x61,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x63,  /* [478] */
    (xdc_Char)0x6c,  /* [479] */
    (xdc_Char)0x6f,  /* [480] */
    (xdc_Char)0x63,  /* [481] */
    (xdc_Char)0x6b,  /* [482] */
    (xdc_Char)0x20,  /* [483] */
    (xdc_Char)0x69,  /* [484] */
    (xdc_Char)0x6e,  /* [485] */
    (xdc_Char)0x73,  /* [486] */
    (xdc_Char)0x74,  /* [487] */
    (xdc_Char)0x61,  /* [488] */
    (xdc_Char)0x6e,  /* [489] */
    (xdc_Char)0x63,  /* [490] */
    (xdc_Char)0x65,  /* [491] */
    (xdc_Char)0x20,  /* [492] */
    (xdc_Char)0x77,  /* [493] */
    (xdc_Char)0x68,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x6e,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x49,  /* [499] */
    (xdc_Char)0x4f,  /* [500] */
    (xdc_Char)0x53,  /* [501] */
    (xdc_Char)0x2e,  /* [502] */
    (xdc_Char)0x63,  /* [503] */
    (xdc_Char)0x6c,  /* [504] */
    (xdc_Char)0x6f,  /* [505] */
    (xdc_Char)0x63,  /* [506] */
    (xdc_Char)0x6b,  /* [507] */
    (xdc_Char)0x45,  /* [508] */
    (xdc_Char)0x6e,  /* [509] */
    (xdc_Char)0x61,  /* [510] */
    (xdc_Char)0x62,  /* [511] */
    (xdc_Char)0x6c,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x64,  /* [514] */
    (xdc_Char)0x20,  /* [515] */
    (xdc_Char)0x69,  /* [516] */
    (xdc_Char)0x73,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x66,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x6c,  /* [521] */
    (xdc_Char)0x73,  /* [522] */
    (xdc_Char)0x65,  /* [523] */
    (xdc_Char)0x2e,  /* [524] */
    (xdc_Char)0x0,  /* [525] */
    (xdc_Char)0x41,  /* [526] */
    (xdc_Char)0x5f,  /* [527] */
    (xdc_Char)0x62,  /* [528] */
    (xdc_Char)0x61,  /* [529] */
    (xdc_Char)0x64,  /* [530] */
    (xdc_Char)0x54,  /* [531] */
    (xdc_Char)0x68,  /* [532] */
    (xdc_Char)0x72,  /* [533] */
    (xdc_Char)0x65,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x64,  /* [536] */
    (xdc_Char)0x54,  /* [537] */
    (xdc_Char)0x79,  /* [538] */
    (xdc_Char)0x70,  /* [539] */
    (xdc_Char)0x65,  /* [540] */
    (xdc_Char)0x3a,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x43,  /* [543] */
    (xdc_Char)0x61,  /* [544] */
    (xdc_Char)0x6e,  /* [545] */
    (xdc_Char)0x6e,  /* [546] */
    (xdc_Char)0x6f,  /* [547] */
    (xdc_Char)0x74,  /* [548] */
    (xdc_Char)0x20,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x72,  /* [551] */
    (xdc_Char)0x65,  /* [552] */
    (xdc_Char)0x61,  /* [553] */
    (xdc_Char)0x74,  /* [554] */
    (xdc_Char)0x65,  /* [555] */
    (xdc_Char)0x2f,  /* [556] */
    (xdc_Char)0x64,  /* [557] */
    (xdc_Char)0x65,  /* [558] */
    (xdc_Char)0x6c,  /* [559] */
    (xdc_Char)0x65,  /* [560] */
    (xdc_Char)0x74,  /* [561] */
    (xdc_Char)0x65,  /* [562] */
    (xdc_Char)0x20,  /* [563] */
    (xdc_Char)0x61,  /* [564] */
    (xdc_Char)0x20,  /* [565] */
    (xdc_Char)0x43,  /* [566] */
    (xdc_Char)0x6c,  /* [567] */
    (xdc_Char)0x6f,  /* [568] */
    (xdc_Char)0x63,  /* [569] */
    (xdc_Char)0x6b,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x66,  /* [572] */
    (xdc_Char)0x72,  /* [573] */
    (xdc_Char)0x6f,  /* [574] */
    (xdc_Char)0x6d,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x48,  /* [577] */
    (xdc_Char)0x77,  /* [578] */
    (xdc_Char)0x69,  /* [579] */
    (xdc_Char)0x20,  /* [580] */
    (xdc_Char)0x6f,  /* [581] */
    (xdc_Char)0x72,  /* [582] */
    (xdc_Char)0x20,  /* [583] */
    (xdc_Char)0x53,  /* [584] */
    (xdc_Char)0x77,  /* [585] */
    (xdc_Char)0x69,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x74,  /* [588] */
    (xdc_Char)0x68,  /* [589] */
    (xdc_Char)0x72,  /* [590] */
    (xdc_Char)0x65,  /* [591] */
    (xdc_Char)0x61,  /* [592] */
    (xdc_Char)0x64,  /* [593] */
    (xdc_Char)0x2e,  /* [594] */
    (xdc_Char)0x0,  /* [595] */
    (xdc_Char)0x41,  /* [596] */
    (xdc_Char)0x5f,  /* [597] */
    (xdc_Char)0x6e,  /* [598] */
    (xdc_Char)0x75,  /* [599] */
    (xdc_Char)0x6c,  /* [600] */
    (xdc_Char)0x6c,  /* [601] */
    (xdc_Char)0x45,  /* [602] */
    (xdc_Char)0x76,  /* [603] */
    (xdc_Char)0x65,  /* [604] */
    (xdc_Char)0x6e,  /* [605] */
    (xdc_Char)0x74,  /* [606] */
    (xdc_Char)0x4d,  /* [607] */
    (xdc_Char)0x61,  /* [608] */
    (xdc_Char)0x73,  /* [609] */
    (xdc_Char)0x6b,  /* [610] */
    (xdc_Char)0x73,  /* [611] */
    (xdc_Char)0x3a,  /* [612] */
    (xdc_Char)0x20,  /* [613] */
    (xdc_Char)0x6f,  /* [614] */
    (xdc_Char)0x72,  /* [615] */
    (xdc_Char)0x4d,  /* [616] */
    (xdc_Char)0x61,  /* [617] */
    (xdc_Char)0x73,  /* [618] */
    (xdc_Char)0x6b,  /* [619] */
    (xdc_Char)0x20,  /* [620] */
    (xdc_Char)0x61,  /* [621] */
    (xdc_Char)0x6e,  /* [622] */
    (xdc_Char)0x64,  /* [623] */
    (xdc_Char)0x20,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x6e,  /* [626] */
    (xdc_Char)0x64,  /* [627] */
    (xdc_Char)0x4d,  /* [628] */
    (xdc_Char)0x61,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x6b,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x72,  /* [634] */
    (xdc_Char)0x65,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x6e,  /* [637] */
    (xdc_Char)0x75,  /* [638] */
    (xdc_Char)0x6c,  /* [639] */
    (xdc_Char)0x6c,  /* [640] */
    (xdc_Char)0x2e,  /* [641] */
    (xdc_Char)0x0,  /* [642] */
    (xdc_Char)0x41,  /* [643] */
    (xdc_Char)0x5f,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x75,  /* [646] */
    (xdc_Char)0x6c,  /* [647] */
    (xdc_Char)0x6c,  /* [648] */
    (xdc_Char)0x45,  /* [649] */
    (xdc_Char)0x76,  /* [650] */
    (xdc_Char)0x65,  /* [651] */
    (xdc_Char)0x6e,  /* [652] */
    (xdc_Char)0x74,  /* [653] */
    (xdc_Char)0x49,  /* [654] */
    (xdc_Char)0x64,  /* [655] */
    (xdc_Char)0x3a,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x70,  /* [658] */
    (xdc_Char)0x6f,  /* [659] */
    (xdc_Char)0x73,  /* [660] */
    (xdc_Char)0x74,  /* [661] */
    (xdc_Char)0x65,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x20,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x76,  /* [666] */
    (xdc_Char)0x65,  /* [667] */
    (xdc_Char)0x6e,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x49,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x20,  /* [672] */
    (xdc_Char)0x69,  /* [673] */
    (xdc_Char)0x73,  /* [674] */
    (xdc_Char)0x20,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x75,  /* [677] */
    (xdc_Char)0x6c,  /* [678] */
    (xdc_Char)0x6c,  /* [679] */
    (xdc_Char)0x2e,  /* [680] */
    (xdc_Char)0x0,  /* [681] */
    (xdc_Char)0x41,  /* [682] */
    (xdc_Char)0x5f,  /* [683] */
    (xdc_Char)0x65,  /* [684] */
    (xdc_Char)0x76,  /* [685] */
    (xdc_Char)0x65,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x49,  /* [689] */
    (xdc_Char)0x6e,  /* [690] */
    (xdc_Char)0x55,  /* [691] */
    (xdc_Char)0x73,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x3a,  /* [694] */
    (xdc_Char)0x20,  /* [695] */
    (xdc_Char)0x45,  /* [696] */
    (xdc_Char)0x76,  /* [697] */
    (xdc_Char)0x65,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x74,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x6f,  /* [702] */
    (xdc_Char)0x62,  /* [703] */
    (xdc_Char)0x6a,  /* [704] */
    (xdc_Char)0x65,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x74,  /* [707] */
    (xdc_Char)0x20,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x6c,  /* [710] */
    (xdc_Char)0x72,  /* [711] */
    (xdc_Char)0x65,  /* [712] */
    (xdc_Char)0x61,  /* [713] */
    (xdc_Char)0x64,  /* [714] */
    (xdc_Char)0x79,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x69,  /* [717] */
    (xdc_Char)0x6e,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x75,  /* [720] */
    (xdc_Char)0x73,  /* [721] */
    (xdc_Char)0x65,  /* [722] */
    (xdc_Char)0x2e,  /* [723] */
    (xdc_Char)0x0,  /* [724] */
    (xdc_Char)0x41,  /* [725] */
    (xdc_Char)0x5f,  /* [726] */
    (xdc_Char)0x62,  /* [727] */
    (xdc_Char)0x61,  /* [728] */
    (xdc_Char)0x64,  /* [729] */
    (xdc_Char)0x43,  /* [730] */
    (xdc_Char)0x6f,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x74,  /* [733] */
    (xdc_Char)0x65,  /* [734] */
    (xdc_Char)0x78,  /* [735] */
    (xdc_Char)0x74,  /* [736] */
    (xdc_Char)0x3a,  /* [737] */
    (xdc_Char)0x20,  /* [738] */
    (xdc_Char)0x62,  /* [739] */
    (xdc_Char)0x61,  /* [740] */
    (xdc_Char)0x64,  /* [741] */
    (xdc_Char)0x20,  /* [742] */
    (xdc_Char)0x63,  /* [743] */
    (xdc_Char)0x61,  /* [744] */
    (xdc_Char)0x6c,  /* [745] */
    (xdc_Char)0x6c,  /* [746] */
    (xdc_Char)0x69,  /* [747] */
    (xdc_Char)0x6e,  /* [748] */
    (xdc_Char)0x67,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x6f,  /* [752] */
    (xdc_Char)0x6e,  /* [753] */
    (xdc_Char)0x74,  /* [754] */
    (xdc_Char)0x65,  /* [755] */
    (xdc_Char)0x78,  /* [756] */
    (xdc_Char)0x74,  /* [757] */
    (xdc_Char)0x2e,  /* [758] */
    (xdc_Char)0x20,  /* [759] */
    (xdc_Char)0x4d,  /* [760] */
    (xdc_Char)0x75,  /* [761] */
    (xdc_Char)0x73,  /* [762] */
    (xdc_Char)0x74,  /* [763] */
    (xdc_Char)0x20,  /* [764] */
    (xdc_Char)0x62,  /* [765] */
    (xdc_Char)0x65,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x63,  /* [768] */
    (xdc_Char)0x61,  /* [769] */
    (xdc_Char)0x6c,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x65,  /* [772] */
    (xdc_Char)0x64,  /* [773] */
    (xdc_Char)0x20,  /* [774] */
    (xdc_Char)0x66,  /* [775] */
    (xdc_Char)0x72,  /* [776] */
    (xdc_Char)0x6f,  /* [777] */
    (xdc_Char)0x6d,  /* [778] */
    (xdc_Char)0x20,  /* [779] */
    (xdc_Char)0x61,  /* [780] */
    (xdc_Char)0x20,  /* [781] */
    (xdc_Char)0x54,  /* [782] */
    (xdc_Char)0x61,  /* [783] */
    (xdc_Char)0x73,  /* [784] */
    (xdc_Char)0x6b,  /* [785] */
    (xdc_Char)0x2e,  /* [786] */
    (xdc_Char)0x0,  /* [787] */
    (xdc_Char)0x41,  /* [788] */
    (xdc_Char)0x5f,  /* [789] */
    (xdc_Char)0x70,  /* [790] */
    (xdc_Char)0x65,  /* [791] */
    (xdc_Char)0x6e,  /* [792] */
    (xdc_Char)0x64,  /* [793] */
    (xdc_Char)0x54,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x73,  /* [796] */
    (xdc_Char)0x6b,  /* [797] */
    (xdc_Char)0x44,  /* [798] */
    (xdc_Char)0x69,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x61,  /* [801] */
    (xdc_Char)0x62,  /* [802] */
    (xdc_Char)0x6c,  /* [803] */
    (xdc_Char)0x65,  /* [804] */
    (xdc_Char)0x64,  /* [805] */
    (xdc_Char)0x3a,  /* [806] */
    (xdc_Char)0x20,  /* [807] */
    (xdc_Char)0x43,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x6e,  /* [810] */
    (xdc_Char)0x6e,  /* [811] */
    (xdc_Char)0x6f,  /* [812] */
    (xdc_Char)0x74,  /* [813] */
    (xdc_Char)0x20,  /* [814] */
    (xdc_Char)0x63,  /* [815] */
    (xdc_Char)0x61,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x20,  /* [819] */
    (xdc_Char)0x45,  /* [820] */
    (xdc_Char)0x76,  /* [821] */
    (xdc_Char)0x65,  /* [822] */
    (xdc_Char)0x6e,  /* [823] */
    (xdc_Char)0x74,  /* [824] */
    (xdc_Char)0x5f,  /* [825] */
    (xdc_Char)0x70,  /* [826] */
    (xdc_Char)0x65,  /* [827] */
    (xdc_Char)0x6e,  /* [828] */
    (xdc_Char)0x64,  /* [829] */
    (xdc_Char)0x28,  /* [830] */
    (xdc_Char)0x29,  /* [831] */
    (xdc_Char)0x20,  /* [832] */
    (xdc_Char)0x77,  /* [833] */
    (xdc_Char)0x68,  /* [834] */
    (xdc_Char)0x69,  /* [835] */
    (xdc_Char)0x6c,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x20,  /* [838] */
    (xdc_Char)0x74,  /* [839] */
    (xdc_Char)0x68,  /* [840] */
    (xdc_Char)0x65,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x54,  /* [843] */
    (xdc_Char)0x61,  /* [844] */
    (xdc_Char)0x73,  /* [845] */
    (xdc_Char)0x6b,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x6f,  /* [848] */
    (xdc_Char)0x72,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x53,  /* [851] */
    (xdc_Char)0x77,  /* [852] */
    (xdc_Char)0x69,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x73,  /* [855] */
    (xdc_Char)0x63,  /* [856] */
    (xdc_Char)0x68,  /* [857] */
    (xdc_Char)0x65,  /* [858] */
    (xdc_Char)0x64,  /* [859] */
    (xdc_Char)0x75,  /* [860] */
    (xdc_Char)0x6c,  /* [861] */
    (xdc_Char)0x65,  /* [862] */
    (xdc_Char)0x72,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x69,  /* [865] */
    (xdc_Char)0x73,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x64,  /* [868] */
    (xdc_Char)0x69,  /* [869] */
    (xdc_Char)0x73,  /* [870] */
    (xdc_Char)0x61,  /* [871] */
    (xdc_Char)0x62,  /* [872] */
    (xdc_Char)0x6c,  /* [873] */
    (xdc_Char)0x65,  /* [874] */
    (xdc_Char)0x64,  /* [875] */
    (xdc_Char)0x2e,  /* [876] */
    (xdc_Char)0x0,  /* [877] */
    (xdc_Char)0x4d,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x69,  /* [880] */
    (xdc_Char)0x6c,  /* [881] */
    (xdc_Char)0x62,  /* [882] */
    (xdc_Char)0x6f,  /* [883] */
    (xdc_Char)0x78,  /* [884] */
    (xdc_Char)0x5f,  /* [885] */
    (xdc_Char)0x63,  /* [886] */
    (xdc_Char)0x72,  /* [887] */
    (xdc_Char)0x65,  /* [888] */
    (xdc_Char)0x61,  /* [889] */
    (xdc_Char)0x74,  /* [890] */
    (xdc_Char)0x65,  /* [891] */
    (xdc_Char)0x27,  /* [892] */
    (xdc_Char)0x73,  /* [893] */
    (xdc_Char)0x20,  /* [894] */
    (xdc_Char)0x62,  /* [895] */
    (xdc_Char)0x75,  /* [896] */
    (xdc_Char)0x66,  /* [897] */
    (xdc_Char)0x53,  /* [898] */
    (xdc_Char)0x69,  /* [899] */
    (xdc_Char)0x7a,  /* [900] */
    (xdc_Char)0x65,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x70,  /* [903] */
    (xdc_Char)0x61,  /* [904] */
    (xdc_Char)0x72,  /* [905] */
    (xdc_Char)0x61,  /* [906] */
    (xdc_Char)0x6d,  /* [907] */
    (xdc_Char)0x65,  /* [908] */
    (xdc_Char)0x74,  /* [909] */
    (xdc_Char)0x65,  /* [910] */
    (xdc_Char)0x72,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x69,  /* [913] */
    (xdc_Char)0x73,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x69,  /* [916] */
    (xdc_Char)0x6e,  /* [917] */
    (xdc_Char)0x76,  /* [918] */
    (xdc_Char)0x61,  /* [919] */
    (xdc_Char)0x6c,  /* [920] */
    (xdc_Char)0x69,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x28,  /* [924] */
    (xdc_Char)0x74,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x6f,  /* [927] */
    (xdc_Char)0x20,  /* [928] */
    (xdc_Char)0x73,  /* [929] */
    (xdc_Char)0x6d,  /* [930] */
    (xdc_Char)0x61,  /* [931] */
    (xdc_Char)0x6c,  /* [932] */
    (xdc_Char)0x6c,  /* [933] */
    (xdc_Char)0x29,  /* [934] */
    (xdc_Char)0x0,  /* [935] */
    (xdc_Char)0x41,  /* [936] */
    (xdc_Char)0x5f,  /* [937] */
    (xdc_Char)0x6e,  /* [938] */
    (xdc_Char)0x6f,  /* [939] */
    (xdc_Char)0x45,  /* [940] */
    (xdc_Char)0x76,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x6e,  /* [943] */
    (xdc_Char)0x74,  /* [944] */
    (xdc_Char)0x73,  /* [945] */
    (xdc_Char)0x3a,  /* [946] */
    (xdc_Char)0x20,  /* [947] */
    (xdc_Char)0x54,  /* [948] */
    (xdc_Char)0x68,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x45,  /* [952] */
    (xdc_Char)0x76,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x6e,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x2e,  /* [957] */
    (xdc_Char)0x73,  /* [958] */
    (xdc_Char)0x75,  /* [959] */
    (xdc_Char)0x70,  /* [960] */
    (xdc_Char)0x70,  /* [961] */
    (xdc_Char)0x6f,  /* [962] */
    (xdc_Char)0x72,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x73,  /* [965] */
    (xdc_Char)0x45,  /* [966] */
    (xdc_Char)0x76,  /* [967] */
    (xdc_Char)0x65,  /* [968] */
    (xdc_Char)0x6e,  /* [969] */
    (xdc_Char)0x74,  /* [970] */
    (xdc_Char)0x73,  /* [971] */
    (xdc_Char)0x20,  /* [972] */
    (xdc_Char)0x66,  /* [973] */
    (xdc_Char)0x6c,  /* [974] */
    (xdc_Char)0x61,  /* [975] */
    (xdc_Char)0x67,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x69,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x64,  /* [981] */
    (xdc_Char)0x69,  /* [982] */
    (xdc_Char)0x73,  /* [983] */
    (xdc_Char)0x61,  /* [984] */
    (xdc_Char)0x62,  /* [985] */
    (xdc_Char)0x6c,  /* [986] */
    (xdc_Char)0x65,  /* [987] */
    (xdc_Char)0x64,  /* [988] */
    (xdc_Char)0x2e,  /* [989] */
    (xdc_Char)0x0,  /* [990] */
    (xdc_Char)0x41,  /* [991] */
    (xdc_Char)0x5f,  /* [992] */
    (xdc_Char)0x69,  /* [993] */
    (xdc_Char)0x6e,  /* [994] */
    (xdc_Char)0x76,  /* [995] */
    (xdc_Char)0x54,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x6d,  /* [998] */
    (xdc_Char)0x65,  /* [999] */
    (xdc_Char)0x6f,  /* [1000] */
    (xdc_Char)0x75,  /* [1001] */
    (xdc_Char)0x74,  /* [1002] */
    (xdc_Char)0x3a,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x43,  /* [1005] */
    (xdc_Char)0x61,  /* [1006] */
    (xdc_Char)0x6e,  /* [1007] */
    (xdc_Char)0x27,  /* [1008] */
    (xdc_Char)0x74,  /* [1009] */
    (xdc_Char)0x20,  /* [1010] */
    (xdc_Char)0x75,  /* [1011] */
    (xdc_Char)0x73,  /* [1012] */
    (xdc_Char)0x65,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x42,  /* [1015] */
    (xdc_Char)0x49,  /* [1016] */
    (xdc_Char)0x4f,  /* [1017] */
    (xdc_Char)0x53,  /* [1018] */
    (xdc_Char)0x5f,  /* [1019] */
    (xdc_Char)0x45,  /* [1020] */
    (xdc_Char)0x56,  /* [1021] */
    (xdc_Char)0x45,  /* [1022] */
    (xdc_Char)0x4e,  /* [1023] */
    (xdc_Char)0x54,  /* [1024] */
    (xdc_Char)0x5f,  /* [1025] */
    (xdc_Char)0x41,  /* [1026] */
    (xdc_Char)0x43,  /* [1027] */
    (xdc_Char)0x51,  /* [1028] */
    (xdc_Char)0x55,  /* [1029] */
    (xdc_Char)0x49,  /* [1030] */
    (xdc_Char)0x52,  /* [1031] */
    (xdc_Char)0x45,  /* [1032] */
    (xdc_Char)0x44,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x77,  /* [1035] */
    (xdc_Char)0x69,  /* [1036] */
    (xdc_Char)0x74,  /* [1037] */
    (xdc_Char)0x68,  /* [1038] */
    (xdc_Char)0x20,  /* [1039] */
    (xdc_Char)0x74,  /* [1040] */
    (xdc_Char)0x68,  /* [1041] */
    (xdc_Char)0x69,  /* [1042] */
    (xdc_Char)0x73,  /* [1043] */
    (xdc_Char)0x20,  /* [1044] */
    (xdc_Char)0x53,  /* [1045] */
    (xdc_Char)0x65,  /* [1046] */
    (xdc_Char)0x6d,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x70,  /* [1049] */
    (xdc_Char)0x68,  /* [1050] */
    (xdc_Char)0x6f,  /* [1051] */
    (xdc_Char)0x72,  /* [1052] */
    (xdc_Char)0x65,  /* [1053] */
    (xdc_Char)0x2e,  /* [1054] */
    (xdc_Char)0x0,  /* [1055] */
    (xdc_Char)0x41,  /* [1056] */
    (xdc_Char)0x5f,  /* [1057] */
    (xdc_Char)0x6f,  /* [1058] */
    (xdc_Char)0x76,  /* [1059] */
    (xdc_Char)0x65,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x66,  /* [1062] */
    (xdc_Char)0x6c,  /* [1063] */
    (xdc_Char)0x6f,  /* [1064] */
    (xdc_Char)0x77,  /* [1065] */
    (xdc_Char)0x3a,  /* [1066] */
    (xdc_Char)0x20,  /* [1067] */
    (xdc_Char)0x43,  /* [1068] */
    (xdc_Char)0x6f,  /* [1069] */
    (xdc_Char)0x75,  /* [1070] */
    (xdc_Char)0x6e,  /* [1071] */
    (xdc_Char)0x74,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x68,  /* [1074] */
    (xdc_Char)0x61,  /* [1075] */
    (xdc_Char)0x73,  /* [1076] */
    (xdc_Char)0x20,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x78,  /* [1079] */
    (xdc_Char)0x63,  /* [1080] */
    (xdc_Char)0x65,  /* [1081] */
    (xdc_Char)0x65,  /* [1082] */
    (xdc_Char)0x64,  /* [1083] */
    (xdc_Char)0x65,  /* [1084] */
    (xdc_Char)0x64,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x36,  /* [1087] */
    (xdc_Char)0x35,  /* [1088] */
    (xdc_Char)0x35,  /* [1089] */
    (xdc_Char)0x33,  /* [1090] */
    (xdc_Char)0x35,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x61,  /* [1093] */
    (xdc_Char)0x6e,  /* [1094] */
    (xdc_Char)0x64,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x72,  /* [1097] */
    (xdc_Char)0x6f,  /* [1098] */
    (xdc_Char)0x6c,  /* [1099] */
    (xdc_Char)0x6c,  /* [1100] */
    (xdc_Char)0x65,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x20,  /* [1103] */
    (xdc_Char)0x6f,  /* [1104] */
    (xdc_Char)0x76,  /* [1105] */
    (xdc_Char)0x65,  /* [1106] */
    (xdc_Char)0x72,  /* [1107] */
    (xdc_Char)0x2e,  /* [1108] */
    (xdc_Char)0x0,  /* [1109] */
    (xdc_Char)0x41,  /* [1110] */
    (xdc_Char)0x5f,  /* [1111] */
    (xdc_Char)0x70,  /* [1112] */
    (xdc_Char)0x65,  /* [1113] */
    (xdc_Char)0x6e,  /* [1114] */
    (xdc_Char)0x64,  /* [1115] */
    (xdc_Char)0x54,  /* [1116] */
    (xdc_Char)0x61,  /* [1117] */
    (xdc_Char)0x73,  /* [1118] */
    (xdc_Char)0x6b,  /* [1119] */
    (xdc_Char)0x44,  /* [1120] */
    (xdc_Char)0x69,  /* [1121] */
    (xdc_Char)0x73,  /* [1122] */
    (xdc_Char)0x61,  /* [1123] */
    (xdc_Char)0x62,  /* [1124] */
    (xdc_Char)0x6c,  /* [1125] */
    (xdc_Char)0x65,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x3a,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x43,  /* [1130] */
    (xdc_Char)0x61,  /* [1131] */
    (xdc_Char)0x6e,  /* [1132] */
    (xdc_Char)0x6e,  /* [1133] */
    (xdc_Char)0x6f,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x20,  /* [1136] */
    (xdc_Char)0x63,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x6c,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x20,  /* [1141] */
    (xdc_Char)0x53,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x6d,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x70,  /* [1146] */
    (xdc_Char)0x68,  /* [1147] */
    (xdc_Char)0x6f,  /* [1148] */
    (xdc_Char)0x72,  /* [1149] */
    (xdc_Char)0x65,  /* [1150] */
    (xdc_Char)0x5f,  /* [1151] */
    (xdc_Char)0x70,  /* [1152] */
    (xdc_Char)0x65,  /* [1153] */
    (xdc_Char)0x6e,  /* [1154] */
    (xdc_Char)0x64,  /* [1155] */
    (xdc_Char)0x28,  /* [1156] */
    (xdc_Char)0x29,  /* [1157] */
    (xdc_Char)0x20,  /* [1158] */
    (xdc_Char)0x77,  /* [1159] */
    (xdc_Char)0x68,  /* [1160] */
    (xdc_Char)0x69,  /* [1161] */
    (xdc_Char)0x6c,  /* [1162] */
    (xdc_Char)0x65,  /* [1163] */
    (xdc_Char)0x20,  /* [1164] */
    (xdc_Char)0x74,  /* [1165] */
    (xdc_Char)0x68,  /* [1166] */
    (xdc_Char)0x65,  /* [1167] */
    (xdc_Char)0x20,  /* [1168] */
    (xdc_Char)0x54,  /* [1169] */
    (xdc_Char)0x61,  /* [1170] */
    (xdc_Char)0x73,  /* [1171] */
    (xdc_Char)0x6b,  /* [1172] */
    (xdc_Char)0x20,  /* [1173] */
    (xdc_Char)0x6f,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x53,  /* [1177] */
    (xdc_Char)0x77,  /* [1178] */
    (xdc_Char)0x69,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x73,  /* [1181] */
    (xdc_Char)0x63,  /* [1182] */
    (xdc_Char)0x68,  /* [1183] */
    (xdc_Char)0x65,  /* [1184] */
    (xdc_Char)0x64,  /* [1185] */
    (xdc_Char)0x75,  /* [1186] */
    (xdc_Char)0x6c,  /* [1187] */
    (xdc_Char)0x65,  /* [1188] */
    (xdc_Char)0x72,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x69,  /* [1191] */
    (xdc_Char)0x73,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x64,  /* [1194] */
    (xdc_Char)0x69,  /* [1195] */
    (xdc_Char)0x73,  /* [1196] */
    (xdc_Char)0x61,  /* [1197] */
    (xdc_Char)0x62,  /* [1198] */
    (xdc_Char)0x6c,  /* [1199] */
    (xdc_Char)0x65,  /* [1200] */
    (xdc_Char)0x64,  /* [1201] */
    (xdc_Char)0x2e,  /* [1202] */
    (xdc_Char)0x0,  /* [1203] */
    (xdc_Char)0x41,  /* [1204] */
    (xdc_Char)0x5f,  /* [1205] */
    (xdc_Char)0x73,  /* [1206] */
    (xdc_Char)0x77,  /* [1207] */
    (xdc_Char)0x69,  /* [1208] */
    (xdc_Char)0x44,  /* [1209] */
    (xdc_Char)0x69,  /* [1210] */
    (xdc_Char)0x73,  /* [1211] */
    (xdc_Char)0x61,  /* [1212] */
    (xdc_Char)0x62,  /* [1213] */
    (xdc_Char)0x6c,  /* [1214] */
    (xdc_Char)0x65,  /* [1215] */
    (xdc_Char)0x64,  /* [1216] */
    (xdc_Char)0x3a,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x43,  /* [1219] */
    (xdc_Char)0x61,  /* [1220] */
    (xdc_Char)0x6e,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x6f,  /* [1223] */
    (xdc_Char)0x74,  /* [1224] */
    (xdc_Char)0x20,  /* [1225] */
    (xdc_Char)0x63,  /* [1226] */
    (xdc_Char)0x72,  /* [1227] */
    (xdc_Char)0x65,  /* [1228] */
    (xdc_Char)0x61,  /* [1229] */
    (xdc_Char)0x74,  /* [1230] */
    (xdc_Char)0x65,  /* [1231] */
    (xdc_Char)0x20,  /* [1232] */
    (xdc_Char)0x61,  /* [1233] */
    (xdc_Char)0x20,  /* [1234] */
    (xdc_Char)0x53,  /* [1235] */
    (xdc_Char)0x77,  /* [1236] */
    (xdc_Char)0x69,  /* [1237] */
    (xdc_Char)0x20,  /* [1238] */
    (xdc_Char)0x77,  /* [1239] */
    (xdc_Char)0x68,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x6e,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x53,  /* [1244] */
    (xdc_Char)0x77,  /* [1245] */
    (xdc_Char)0x69,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x69,  /* [1248] */
    (xdc_Char)0x73,  /* [1249] */
    (xdc_Char)0x20,  /* [1250] */
    (xdc_Char)0x64,  /* [1251] */
    (xdc_Char)0x69,  /* [1252] */
    (xdc_Char)0x73,  /* [1253] */
    (xdc_Char)0x61,  /* [1254] */
    (xdc_Char)0x62,  /* [1255] */
    (xdc_Char)0x6c,  /* [1256] */
    (xdc_Char)0x65,  /* [1257] */
    (xdc_Char)0x64,  /* [1258] */
    (xdc_Char)0x2e,  /* [1259] */
    (xdc_Char)0x0,  /* [1260] */
    (xdc_Char)0x41,  /* [1261] */
    (xdc_Char)0x5f,  /* [1262] */
    (xdc_Char)0x62,  /* [1263] */
    (xdc_Char)0x61,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x50,  /* [1266] */
    (xdc_Char)0x72,  /* [1267] */
    (xdc_Char)0x69,  /* [1268] */
    (xdc_Char)0x6f,  /* [1269] */
    (xdc_Char)0x72,  /* [1270] */
    (xdc_Char)0x69,  /* [1271] */
    (xdc_Char)0x74,  /* [1272] */
    (xdc_Char)0x79,  /* [1273] */
    (xdc_Char)0x3a,  /* [1274] */
    (xdc_Char)0x20,  /* [1275] */
    (xdc_Char)0x41,  /* [1276] */
    (xdc_Char)0x6e,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x6e,  /* [1280] */
    (xdc_Char)0x76,  /* [1281] */
    (xdc_Char)0x61,  /* [1282] */
    (xdc_Char)0x6c,  /* [1283] */
    (xdc_Char)0x69,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x20,  /* [1286] */
    (xdc_Char)0x53,  /* [1287] */
    (xdc_Char)0x77,  /* [1288] */
    (xdc_Char)0x69,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x70,  /* [1291] */
    (xdc_Char)0x72,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x6f,  /* [1294] */
    (xdc_Char)0x72,  /* [1295] */
    (xdc_Char)0x69,  /* [1296] */
    (xdc_Char)0x74,  /* [1297] */
    (xdc_Char)0x79,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x77,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x73,  /* [1302] */
    (xdc_Char)0x20,  /* [1303] */
    (xdc_Char)0x75,  /* [1304] */
    (xdc_Char)0x73,  /* [1305] */
    (xdc_Char)0x65,  /* [1306] */
    (xdc_Char)0x64,  /* [1307] */
    (xdc_Char)0x2e,  /* [1308] */
    (xdc_Char)0x0,  /* [1309] */
    (xdc_Char)0x41,  /* [1310] */
    (xdc_Char)0x5f,  /* [1311] */
    (xdc_Char)0x62,  /* [1312] */
    (xdc_Char)0x61,  /* [1313] */
    (xdc_Char)0x64,  /* [1314] */
    (xdc_Char)0x54,  /* [1315] */
    (xdc_Char)0x68,  /* [1316] */
    (xdc_Char)0x72,  /* [1317] */
    (xdc_Char)0x65,  /* [1318] */
    (xdc_Char)0x61,  /* [1319] */
    (xdc_Char)0x64,  /* [1320] */
    (xdc_Char)0x54,  /* [1321] */
    (xdc_Char)0x79,  /* [1322] */
    (xdc_Char)0x70,  /* [1323] */
    (xdc_Char)0x65,  /* [1324] */
    (xdc_Char)0x3a,  /* [1325] */
    (xdc_Char)0x20,  /* [1326] */
    (xdc_Char)0x43,  /* [1327] */
    (xdc_Char)0x61,  /* [1328] */
    (xdc_Char)0x6e,  /* [1329] */
    (xdc_Char)0x6e,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x74,  /* [1332] */
    (xdc_Char)0x20,  /* [1333] */
    (xdc_Char)0x63,  /* [1334] */
    (xdc_Char)0x72,  /* [1335] */
    (xdc_Char)0x65,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x74,  /* [1338] */
    (xdc_Char)0x65,  /* [1339] */
    (xdc_Char)0x2f,  /* [1340] */
    (xdc_Char)0x64,  /* [1341] */
    (xdc_Char)0x65,  /* [1342] */
    (xdc_Char)0x6c,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x74,  /* [1345] */
    (xdc_Char)0x65,  /* [1346] */
    (xdc_Char)0x20,  /* [1347] */
    (xdc_Char)0x61,  /* [1348] */
    (xdc_Char)0x20,  /* [1349] */
    (xdc_Char)0x74,  /* [1350] */
    (xdc_Char)0x61,  /* [1351] */
    (xdc_Char)0x73,  /* [1352] */
    (xdc_Char)0x6b,  /* [1353] */
    (xdc_Char)0x20,  /* [1354] */
    (xdc_Char)0x66,  /* [1355] */
    (xdc_Char)0x72,  /* [1356] */
    (xdc_Char)0x6f,  /* [1357] */
    (xdc_Char)0x6d,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x48,  /* [1360] */
    (xdc_Char)0x77,  /* [1361] */
    (xdc_Char)0x69,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x6f,  /* [1364] */
    (xdc_Char)0x72,  /* [1365] */
    (xdc_Char)0x20,  /* [1366] */
    (xdc_Char)0x53,  /* [1367] */
    (xdc_Char)0x77,  /* [1368] */
    (xdc_Char)0x69,  /* [1369] */
    (xdc_Char)0x20,  /* [1370] */
    (xdc_Char)0x74,  /* [1371] */
    (xdc_Char)0x68,  /* [1372] */
    (xdc_Char)0x72,  /* [1373] */
    (xdc_Char)0x65,  /* [1374] */
    (xdc_Char)0x61,  /* [1375] */
    (xdc_Char)0x64,  /* [1376] */
    (xdc_Char)0x2e,  /* [1377] */
    (xdc_Char)0x0,  /* [1378] */
    (xdc_Char)0x41,  /* [1379] */
    (xdc_Char)0x5f,  /* [1380] */
    (xdc_Char)0x62,  /* [1381] */
    (xdc_Char)0x61,  /* [1382] */
    (xdc_Char)0x64,  /* [1383] */
    (xdc_Char)0x54,  /* [1384] */
    (xdc_Char)0x61,  /* [1385] */
    (xdc_Char)0x73,  /* [1386] */
    (xdc_Char)0x6b,  /* [1387] */
    (xdc_Char)0x53,  /* [1388] */
    (xdc_Char)0x74,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x74,  /* [1391] */
    (xdc_Char)0x65,  /* [1392] */
    (xdc_Char)0x3a,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x43,  /* [1395] */
    (xdc_Char)0x61,  /* [1396] */
    (xdc_Char)0x6e,  /* [1397] */
    (xdc_Char)0x27,  /* [1398] */
    (xdc_Char)0x74,  /* [1399] */
    (xdc_Char)0x20,  /* [1400] */
    (xdc_Char)0x64,  /* [1401] */
    (xdc_Char)0x65,  /* [1402] */
    (xdc_Char)0x6c,  /* [1403] */
    (xdc_Char)0x65,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x65,  /* [1406] */
    (xdc_Char)0x20,  /* [1407] */
    (xdc_Char)0x61,  /* [1408] */
    (xdc_Char)0x20,  /* [1409] */
    (xdc_Char)0x74,  /* [1410] */
    (xdc_Char)0x61,  /* [1411] */
    (xdc_Char)0x73,  /* [1412] */
    (xdc_Char)0x6b,  /* [1413] */
    (xdc_Char)0x20,  /* [1414] */
    (xdc_Char)0x69,  /* [1415] */
    (xdc_Char)0x6e,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x52,  /* [1418] */
    (xdc_Char)0x55,  /* [1419] */
    (xdc_Char)0x4e,  /* [1420] */
    (xdc_Char)0x4e,  /* [1421] */
    (xdc_Char)0x49,  /* [1422] */
    (xdc_Char)0x4e,  /* [1423] */
    (xdc_Char)0x47,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x73,  /* [1426] */
    (xdc_Char)0x74,  /* [1427] */
    (xdc_Char)0x61,  /* [1428] */
    (xdc_Char)0x74,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x2e,  /* [1431] */
    (xdc_Char)0x0,  /* [1432] */
    (xdc_Char)0x41,  /* [1433] */
    (xdc_Char)0x5f,  /* [1434] */
    (xdc_Char)0x6e,  /* [1435] */
    (xdc_Char)0x6f,  /* [1436] */
    (xdc_Char)0x50,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x6e,  /* [1439] */
    (xdc_Char)0x64,  /* [1440] */
    (xdc_Char)0x45,  /* [1441] */
    (xdc_Char)0x6c,  /* [1442] */
    (xdc_Char)0x65,  /* [1443] */
    (xdc_Char)0x6d,  /* [1444] */
    (xdc_Char)0x3a,  /* [1445] */
    (xdc_Char)0x20,  /* [1446] */
    (xdc_Char)0x4e,  /* [1447] */
    (xdc_Char)0x6f,  /* [1448] */
    (xdc_Char)0x74,  /* [1449] */
    (xdc_Char)0x20,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x6e,  /* [1452] */
    (xdc_Char)0x6f,  /* [1453] */
    (xdc_Char)0x75,  /* [1454] */
    (xdc_Char)0x67,  /* [1455] */
    (xdc_Char)0x68,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x69,  /* [1458] */
    (xdc_Char)0x6e,  /* [1459] */
    (xdc_Char)0x66,  /* [1460] */
    (xdc_Char)0x6f,  /* [1461] */
    (xdc_Char)0x20,  /* [1462] */
    (xdc_Char)0x74,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x64,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x6c,  /* [1468] */
    (xdc_Char)0x65,  /* [1469] */
    (xdc_Char)0x74,  /* [1470] */
    (xdc_Char)0x65,  /* [1471] */
    (xdc_Char)0x20,  /* [1472] */
    (xdc_Char)0x42,  /* [1473] */
    (xdc_Char)0x4c,  /* [1474] */
    (xdc_Char)0x4f,  /* [1475] */
    (xdc_Char)0x43,  /* [1476] */
    (xdc_Char)0x4b,  /* [1477] */
    (xdc_Char)0x45,  /* [1478] */
    (xdc_Char)0x44,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x74,  /* [1481] */
    (xdc_Char)0x61,  /* [1482] */
    (xdc_Char)0x73,  /* [1483] */
    (xdc_Char)0x6b,  /* [1484] */
    (xdc_Char)0x2e,  /* [1485] */
    (xdc_Char)0x0,  /* [1486] */
    (xdc_Char)0x41,  /* [1487] */
    (xdc_Char)0x5f,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x73,  /* [1491] */
    (xdc_Char)0x6b,  /* [1492] */
    (xdc_Char)0x44,  /* [1493] */
    (xdc_Char)0x69,  /* [1494] */
    (xdc_Char)0x73,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x62,  /* [1497] */
    (xdc_Char)0x6c,  /* [1498] */
    (xdc_Char)0x65,  /* [1499] */
    (xdc_Char)0x64,  /* [1500] */
    (xdc_Char)0x3a,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x43,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x6e,  /* [1506] */
    (xdc_Char)0x6f,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x20,  /* [1509] */
    (xdc_Char)0x63,  /* [1510] */
    (xdc_Char)0x72,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x61,  /* [1513] */
    (xdc_Char)0x74,  /* [1514] */
    (xdc_Char)0x65,  /* [1515] */
    (xdc_Char)0x20,  /* [1516] */
    (xdc_Char)0x61,  /* [1517] */
    (xdc_Char)0x20,  /* [1518] */
    (xdc_Char)0x74,  /* [1519] */
    (xdc_Char)0x61,  /* [1520] */
    (xdc_Char)0x73,  /* [1521] */
    (xdc_Char)0x6b,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x77,  /* [1524] */
    (xdc_Char)0x68,  /* [1525] */
    (xdc_Char)0x65,  /* [1526] */
    (xdc_Char)0x6e,  /* [1527] */
    (xdc_Char)0x20,  /* [1528] */
    (xdc_Char)0x74,  /* [1529] */
    (xdc_Char)0x61,  /* [1530] */
    (xdc_Char)0x73,  /* [1531] */
    (xdc_Char)0x6b,  /* [1532] */
    (xdc_Char)0x69,  /* [1533] */
    (xdc_Char)0x6e,  /* [1534] */
    (xdc_Char)0x67,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x69,  /* [1537] */
    (xdc_Char)0x73,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x64,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x73,  /* [1542] */
    (xdc_Char)0x61,  /* [1543] */
    (xdc_Char)0x62,  /* [1544] */
    (xdc_Char)0x6c,  /* [1545] */
    (xdc_Char)0x65,  /* [1546] */
    (xdc_Char)0x64,  /* [1547] */
    (xdc_Char)0x2e,  /* [1548] */
    (xdc_Char)0x0,  /* [1549] */
    (xdc_Char)0x41,  /* [1550] */
    (xdc_Char)0x5f,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x61,  /* [1553] */
    (xdc_Char)0x64,  /* [1554] */
    (xdc_Char)0x50,  /* [1555] */
    (xdc_Char)0x72,  /* [1556] */
    (xdc_Char)0x69,  /* [1557] */
    (xdc_Char)0x6f,  /* [1558] */
    (xdc_Char)0x72,  /* [1559] */
    (xdc_Char)0x69,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x79,  /* [1562] */
    (xdc_Char)0x3a,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x41,  /* [1565] */
    (xdc_Char)0x6e,  /* [1566] */
    (xdc_Char)0x20,  /* [1567] */
    (xdc_Char)0x69,  /* [1568] */
    (xdc_Char)0x6e,  /* [1569] */
    (xdc_Char)0x76,  /* [1570] */
    (xdc_Char)0x61,  /* [1571] */
    (xdc_Char)0x6c,  /* [1572] */
    (xdc_Char)0x69,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x74,  /* [1576] */
    (xdc_Char)0x61,  /* [1577] */
    (xdc_Char)0x73,  /* [1578] */
    (xdc_Char)0x6b,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x70,  /* [1581] */
    (xdc_Char)0x72,  /* [1582] */
    (xdc_Char)0x69,  /* [1583] */
    (xdc_Char)0x6f,  /* [1584] */
    (xdc_Char)0x72,  /* [1585] */
    (xdc_Char)0x69,  /* [1586] */
    (xdc_Char)0x74,  /* [1587] */
    (xdc_Char)0x79,  /* [1588] */
    (xdc_Char)0x20,  /* [1589] */
    (xdc_Char)0x77,  /* [1590] */
    (xdc_Char)0x61,  /* [1591] */
    (xdc_Char)0x73,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x75,  /* [1594] */
    (xdc_Char)0x73,  /* [1595] */
    (xdc_Char)0x65,  /* [1596] */
    (xdc_Char)0x64,  /* [1597] */
    (xdc_Char)0x2e,  /* [1598] */
    (xdc_Char)0x0,  /* [1599] */
    (xdc_Char)0x41,  /* [1600] */
    (xdc_Char)0x5f,  /* [1601] */
    (xdc_Char)0x62,  /* [1602] */
    (xdc_Char)0x61,  /* [1603] */
    (xdc_Char)0x64,  /* [1604] */
    (xdc_Char)0x54,  /* [1605] */
    (xdc_Char)0x69,  /* [1606] */
    (xdc_Char)0x6d,  /* [1607] */
    (xdc_Char)0x65,  /* [1608] */
    (xdc_Char)0x6f,  /* [1609] */
    (xdc_Char)0x75,  /* [1610] */
    (xdc_Char)0x74,  /* [1611] */
    (xdc_Char)0x3a,  /* [1612] */
    (xdc_Char)0x20,  /* [1613] */
    (xdc_Char)0x43,  /* [1614] */
    (xdc_Char)0x61,  /* [1615] */
    (xdc_Char)0x6e,  /* [1616] */
    (xdc_Char)0x27,  /* [1617] */
    (xdc_Char)0x74,  /* [1618] */
    (xdc_Char)0x20,  /* [1619] */
    (xdc_Char)0x73,  /* [1620] */
    (xdc_Char)0x6c,  /* [1621] */
    (xdc_Char)0x65,  /* [1622] */
    (xdc_Char)0x65,  /* [1623] */
    (xdc_Char)0x70,  /* [1624] */
    (xdc_Char)0x20,  /* [1625] */
    (xdc_Char)0x46,  /* [1626] */
    (xdc_Char)0x4f,  /* [1627] */
    (xdc_Char)0x52,  /* [1628] */
    (xdc_Char)0x45,  /* [1629] */
    (xdc_Char)0x56,  /* [1630] */
    (xdc_Char)0x45,  /* [1631] */
    (xdc_Char)0x52,  /* [1632] */
    (xdc_Char)0x2e,  /* [1633] */
    (xdc_Char)0x0,  /* [1634] */
    (xdc_Char)0x41,  /* [1635] */
    (xdc_Char)0x5f,  /* [1636] */
    (xdc_Char)0x62,  /* [1637] */
    (xdc_Char)0x61,  /* [1638] */
    (xdc_Char)0x64,  /* [1639] */
    (xdc_Char)0x41,  /* [1640] */
    (xdc_Char)0x66,  /* [1641] */
    (xdc_Char)0x66,  /* [1642] */
    (xdc_Char)0x69,  /* [1643] */
    (xdc_Char)0x6e,  /* [1644] */
    (xdc_Char)0x69,  /* [1645] */
    (xdc_Char)0x74,  /* [1646] */
    (xdc_Char)0x79,  /* [1647] */
    (xdc_Char)0x3a,  /* [1648] */
    (xdc_Char)0x20,  /* [1649] */
    (xdc_Char)0x49,  /* [1650] */
    (xdc_Char)0x6e,  /* [1651] */
    (xdc_Char)0x76,  /* [1652] */
    (xdc_Char)0x61,  /* [1653] */
    (xdc_Char)0x6c,  /* [1654] */
    (xdc_Char)0x69,  /* [1655] */
    (xdc_Char)0x64,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x61,  /* [1658] */
    (xdc_Char)0x66,  /* [1659] */
    (xdc_Char)0x66,  /* [1660] */
    (xdc_Char)0x69,  /* [1661] */
    (xdc_Char)0x6e,  /* [1662] */
    (xdc_Char)0x69,  /* [1663] */
    (xdc_Char)0x74,  /* [1664] */
    (xdc_Char)0x79,  /* [1665] */
    (xdc_Char)0x2e,  /* [1666] */
    (xdc_Char)0x0,  /* [1667] */
    (xdc_Char)0x41,  /* [1668] */
    (xdc_Char)0x5f,  /* [1669] */
    (xdc_Char)0x73,  /* [1670] */
    (xdc_Char)0x6c,  /* [1671] */
    (xdc_Char)0x65,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x70,  /* [1674] */
    (xdc_Char)0x54,  /* [1675] */
    (xdc_Char)0x61,  /* [1676] */
    (xdc_Char)0x73,  /* [1677] */
    (xdc_Char)0x6b,  /* [1678] */
    (xdc_Char)0x44,  /* [1679] */
    (xdc_Char)0x69,  /* [1680] */
    (xdc_Char)0x73,  /* [1681] */
    (xdc_Char)0x61,  /* [1682] */
    (xdc_Char)0x62,  /* [1683] */
    (xdc_Char)0x6c,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x64,  /* [1686] */
    (xdc_Char)0x3a,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x43,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x6e,  /* [1691] */
    (xdc_Char)0x6e,  /* [1692] */
    (xdc_Char)0x6f,  /* [1693] */
    (xdc_Char)0x74,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x63,  /* [1696] */
    (xdc_Char)0x61,  /* [1697] */
    (xdc_Char)0x6c,  /* [1698] */
    (xdc_Char)0x6c,  /* [1699] */
    (xdc_Char)0x20,  /* [1700] */
    (xdc_Char)0x54,  /* [1701] */
    (xdc_Char)0x61,  /* [1702] */
    (xdc_Char)0x73,  /* [1703] */
    (xdc_Char)0x6b,  /* [1704] */
    (xdc_Char)0x5f,  /* [1705] */
    (xdc_Char)0x73,  /* [1706] */
    (xdc_Char)0x6c,  /* [1707] */
    (xdc_Char)0x65,  /* [1708] */
    (xdc_Char)0x65,  /* [1709] */
    (xdc_Char)0x70,  /* [1710] */
    (xdc_Char)0x28,  /* [1711] */
    (xdc_Char)0x29,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x77,  /* [1714] */
    (xdc_Char)0x68,  /* [1715] */
    (xdc_Char)0x69,  /* [1716] */
    (xdc_Char)0x6c,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x20,  /* [1719] */
    (xdc_Char)0x74,  /* [1720] */
    (xdc_Char)0x68,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x20,  /* [1723] */
    (xdc_Char)0x54,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x73,  /* [1726] */
    (xdc_Char)0x6b,  /* [1727] */
    (xdc_Char)0x20,  /* [1728] */
    (xdc_Char)0x73,  /* [1729] */
    (xdc_Char)0x63,  /* [1730] */
    (xdc_Char)0x68,  /* [1731] */
    (xdc_Char)0x65,  /* [1732] */
    (xdc_Char)0x64,  /* [1733] */
    (xdc_Char)0x75,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x72,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x69,  /* [1739] */
    (xdc_Char)0x73,  /* [1740] */
    (xdc_Char)0x20,  /* [1741] */
    (xdc_Char)0x64,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x73,  /* [1744] */
    (xdc_Char)0x61,  /* [1745] */
    (xdc_Char)0x62,  /* [1746] */
    (xdc_Char)0x6c,  /* [1747] */
    (xdc_Char)0x65,  /* [1748] */
    (xdc_Char)0x64,  /* [1749] */
    (xdc_Char)0x2e,  /* [1750] */
    (xdc_Char)0x0,  /* [1751] */
    (xdc_Char)0x41,  /* [1752] */
    (xdc_Char)0x5f,  /* [1753] */
    (xdc_Char)0x69,  /* [1754] */
    (xdc_Char)0x6e,  /* [1755] */
    (xdc_Char)0x76,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x6c,  /* [1758] */
    (xdc_Char)0x69,  /* [1759] */
    (xdc_Char)0x64,  /* [1760] */
    (xdc_Char)0x43,  /* [1761] */
    (xdc_Char)0x6f,  /* [1762] */
    (xdc_Char)0x72,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x49,  /* [1765] */
    (xdc_Char)0x64,  /* [1766] */
    (xdc_Char)0x3a,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x43,  /* [1769] */
    (xdc_Char)0x61,  /* [1770] */
    (xdc_Char)0x6e,  /* [1771] */
    (xdc_Char)0x6e,  /* [1772] */
    (xdc_Char)0x6f,  /* [1773] */
    (xdc_Char)0x74,  /* [1774] */
    (xdc_Char)0x20,  /* [1775] */
    (xdc_Char)0x70,  /* [1776] */
    (xdc_Char)0x61,  /* [1777] */
    (xdc_Char)0x73,  /* [1778] */
    (xdc_Char)0x73,  /* [1779] */
    (xdc_Char)0x20,  /* [1780] */
    (xdc_Char)0x61,  /* [1781] */
    (xdc_Char)0x20,  /* [1782] */
    (xdc_Char)0x6e,  /* [1783] */
    (xdc_Char)0x6f,  /* [1784] */
    (xdc_Char)0x6e,  /* [1785] */
    (xdc_Char)0x2d,  /* [1786] */
    (xdc_Char)0x7a,  /* [1787] */
    (xdc_Char)0x65,  /* [1788] */
    (xdc_Char)0x72,  /* [1789] */
    (xdc_Char)0x6f,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x43,  /* [1792] */
    (xdc_Char)0x6f,  /* [1793] */
    (xdc_Char)0x72,  /* [1794] */
    (xdc_Char)0x65,  /* [1795] */
    (xdc_Char)0x49,  /* [1796] */
    (xdc_Char)0x64,  /* [1797] */
    (xdc_Char)0x20,  /* [1798] */
    (xdc_Char)0x69,  /* [1799] */
    (xdc_Char)0x6e,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x61,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x6e,  /* [1804] */
    (xdc_Char)0x6f,  /* [1805] */
    (xdc_Char)0x6e,  /* [1806] */
    (xdc_Char)0x2d,  /* [1807] */
    (xdc_Char)0x53,  /* [1808] */
    (xdc_Char)0x4d,  /* [1809] */
    (xdc_Char)0x50,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x61,  /* [1812] */
    (xdc_Char)0x70,  /* [1813] */
    (xdc_Char)0x70,  /* [1814] */
    (xdc_Char)0x6c,  /* [1815] */
    (xdc_Char)0x69,  /* [1816] */
    (xdc_Char)0x63,  /* [1817] */
    (xdc_Char)0x61,  /* [1818] */
    (xdc_Char)0x74,  /* [1819] */
    (xdc_Char)0x69,  /* [1820] */
    (xdc_Char)0x6f,  /* [1821] */
    (xdc_Char)0x6e,  /* [1822] */
    (xdc_Char)0x2e,  /* [1823] */
    (xdc_Char)0x0,  /* [1824] */
    (xdc_Char)0x41,  /* [1825] */
    (xdc_Char)0x5f,  /* [1826] */
    (xdc_Char)0x69,  /* [1827] */
    (xdc_Char)0x70,  /* [1828] */
    (xdc_Char)0x63,  /* [1829] */
    (xdc_Char)0x46,  /* [1830] */
    (xdc_Char)0x61,  /* [1831] */
    (xdc_Char)0x69,  /* [1832] */
    (xdc_Char)0x6c,  /* [1833] */
    (xdc_Char)0x65,  /* [1834] */
    (xdc_Char)0x64,  /* [1835] */
    (xdc_Char)0x3a,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x55,  /* [1838] */
    (xdc_Char)0x6e,  /* [1839] */
    (xdc_Char)0x65,  /* [1840] */
    (xdc_Char)0x78,  /* [1841] */
    (xdc_Char)0x70,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x63,  /* [1844] */
    (xdc_Char)0x74,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x64,  /* [1847] */
    (xdc_Char)0x20,  /* [1848] */
    (xdc_Char)0x4d,  /* [1849] */
    (xdc_Char)0x65,  /* [1850] */
    (xdc_Char)0x73,  /* [1851] */
    (xdc_Char)0x73,  /* [1852] */
    (xdc_Char)0x61,  /* [1853] */
    (xdc_Char)0x67,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x51,  /* [1856] */
    (xdc_Char)0x20,  /* [1857] */
    (xdc_Char)0x66,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x69,  /* [1860] */
    (xdc_Char)0x6c,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x64,  /* [1863] */
    (xdc_Char)0x0,  /* [1864] */
    (xdc_Char)0x41,  /* [1865] */
    (xdc_Char)0x5f,  /* [1866] */
    (xdc_Char)0x69,  /* [1867] */
    (xdc_Char)0x6e,  /* [1868] */
    (xdc_Char)0x76,  /* [1869] */
    (xdc_Char)0x61,  /* [1870] */
    (xdc_Char)0x6c,  /* [1871] */
    (xdc_Char)0x69,  /* [1872] */
    (xdc_Char)0x64,  /* [1873] */
    (xdc_Char)0x48,  /* [1874] */
    (xdc_Char)0x64,  /* [1875] */
    (xdc_Char)0x72,  /* [1876] */
    (xdc_Char)0x54,  /* [1877] */
    (xdc_Char)0x79,  /* [1878] */
    (xdc_Char)0x70,  /* [1879] */
    (xdc_Char)0x65,  /* [1880] */
    (xdc_Char)0x3a,  /* [1881] */
    (xdc_Char)0x20,  /* [1882] */
    (xdc_Char)0x49,  /* [1883] */
    (xdc_Char)0x6e,  /* [1884] */
    (xdc_Char)0x76,  /* [1885] */
    (xdc_Char)0x61,  /* [1886] */
    (xdc_Char)0x6c,  /* [1887] */
    (xdc_Char)0x69,  /* [1888] */
    (xdc_Char)0x64,  /* [1889] */
    (xdc_Char)0x20,  /* [1890] */
    (xdc_Char)0x48,  /* [1891] */
    (xdc_Char)0x64,  /* [1892] */
    (xdc_Char)0x72,  /* [1893] */
    (xdc_Char)0x54,  /* [1894] */
    (xdc_Char)0x79,  /* [1895] */
    (xdc_Char)0x70,  /* [1896] */
    (xdc_Char)0x65,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x73,  /* [1899] */
    (xdc_Char)0x70,  /* [1900] */
    (xdc_Char)0x65,  /* [1901] */
    (xdc_Char)0x63,  /* [1902] */
    (xdc_Char)0x69,  /* [1903] */
    (xdc_Char)0x66,  /* [1904] */
    (xdc_Char)0x69,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x64,  /* [1907] */
    (xdc_Char)0x0,  /* [1908] */
    (xdc_Char)0x41,  /* [1909] */
    (xdc_Char)0x5f,  /* [1910] */
    (xdc_Char)0x69,  /* [1911] */
    (xdc_Char)0x6e,  /* [1912] */
    (xdc_Char)0x76,  /* [1913] */
    (xdc_Char)0x61,  /* [1914] */
    (xdc_Char)0x6c,  /* [1915] */
    (xdc_Char)0x69,  /* [1916] */
    (xdc_Char)0x64,  /* [1917] */
    (xdc_Char)0x53,  /* [1918] */
    (xdc_Char)0x65,  /* [1919] */
    (xdc_Char)0x72,  /* [1920] */
    (xdc_Char)0x76,  /* [1921] */
    (xdc_Char)0x69,  /* [1922] */
    (xdc_Char)0x63,  /* [1923] */
    (xdc_Char)0x65,  /* [1924] */
    (xdc_Char)0x49,  /* [1925] */
    (xdc_Char)0x64,  /* [1926] */
    (xdc_Char)0x3a,  /* [1927] */
    (xdc_Char)0x20,  /* [1928] */
    (xdc_Char)0x53,  /* [1929] */
    (xdc_Char)0x65,  /* [1930] */
    (xdc_Char)0x72,  /* [1931] */
    (xdc_Char)0x76,  /* [1932] */
    (xdc_Char)0x69,  /* [1933] */
    (xdc_Char)0x63,  /* [1934] */
    (xdc_Char)0x65,  /* [1935] */
    (xdc_Char)0x49,  /* [1936] */
    (xdc_Char)0x64,  /* [1937] */
    (xdc_Char)0x20,  /* [1938] */
    (xdc_Char)0x6f,  /* [1939] */
    (xdc_Char)0x75,  /* [1940] */
    (xdc_Char)0x74,  /* [1941] */
    (xdc_Char)0x20,  /* [1942] */
    (xdc_Char)0x6f,  /* [1943] */
    (xdc_Char)0x66,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x72,  /* [1946] */
    (xdc_Char)0x61,  /* [1947] */
    (xdc_Char)0x6e,  /* [1948] */
    (xdc_Char)0x67,  /* [1949] */
    (xdc_Char)0x65,  /* [1950] */
    (xdc_Char)0x0,  /* [1951] */
    (xdc_Char)0x41,  /* [1952] */
    (xdc_Char)0x5f,  /* [1953] */
    (xdc_Char)0x69,  /* [1954] */
    (xdc_Char)0x6e,  /* [1955] */
    (xdc_Char)0x76,  /* [1956] */
    (xdc_Char)0x61,  /* [1957] */
    (xdc_Char)0x6c,  /* [1958] */
    (xdc_Char)0x69,  /* [1959] */
    (xdc_Char)0x64,  /* [1960] */
    (xdc_Char)0x50,  /* [1961] */
    (xdc_Char)0x72,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x63,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x73,  /* [1966] */
    (xdc_Char)0x73,  /* [1967] */
    (xdc_Char)0x43,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x6c,  /* [1970] */
    (xdc_Char)0x6c,  /* [1971] */
    (xdc_Char)0x62,  /* [1972] */
    (xdc_Char)0x61,  /* [1973] */
    (xdc_Char)0x63,  /* [1974] */
    (xdc_Char)0x6b,  /* [1975] */
    (xdc_Char)0x46,  /* [1976] */
    (xdc_Char)0x78,  /* [1977] */
    (xdc_Char)0x6e,  /* [1978] */
    (xdc_Char)0x3a,  /* [1979] */
    (xdc_Char)0x20,  /* [1980] */
    (xdc_Char)0x43,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x6c,  /* [1983] */
    (xdc_Char)0x6c,  /* [1984] */
    (xdc_Char)0x62,  /* [1985] */
    (xdc_Char)0x61,  /* [1986] */
    (xdc_Char)0x63,  /* [1987] */
    (xdc_Char)0x6b,  /* [1988] */
    (xdc_Char)0x20,  /* [1989] */
    (xdc_Char)0x63,  /* [1990] */
    (xdc_Char)0x61,  /* [1991] */
    (xdc_Char)0x6e,  /* [1992] */
    (xdc_Char)0x6e,  /* [1993] */
    (xdc_Char)0x6f,  /* [1994] */
    (xdc_Char)0x74,  /* [1995] */
    (xdc_Char)0x20,  /* [1996] */
    (xdc_Char)0x62,  /* [1997] */
    (xdc_Char)0x65,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x4e,  /* [2000] */
    (xdc_Char)0x55,  /* [2001] */
    (xdc_Char)0x4c,  /* [2002] */
    (xdc_Char)0x4c,  /* [2003] */
    (xdc_Char)0x0,  /* [2004] */
    (xdc_Char)0x41,  /* [2005] */
    (xdc_Char)0x5f,  /* [2006] */
    (xdc_Char)0x7a,  /* [2007] */
    (xdc_Char)0x65,  /* [2008] */
    (xdc_Char)0x72,  /* [2009] */
    (xdc_Char)0x6f,  /* [2010] */
    (xdc_Char)0x54,  /* [2011] */
    (xdc_Char)0x69,  /* [2012] */
    (xdc_Char)0x6d,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x6f,  /* [2015] */
    (xdc_Char)0x75,  /* [2016] */
    (xdc_Char)0x74,  /* [2017] */
    (xdc_Char)0x3a,  /* [2018] */
    (xdc_Char)0x20,  /* [2019] */
    (xdc_Char)0x54,  /* [2020] */
    (xdc_Char)0x69,  /* [2021] */
    (xdc_Char)0x6d,  /* [2022] */
    (xdc_Char)0x65,  /* [2023] */
    (xdc_Char)0x6f,  /* [2024] */
    (xdc_Char)0x75,  /* [2025] */
    (xdc_Char)0x74,  /* [2026] */
    (xdc_Char)0x20,  /* [2027] */
    (xdc_Char)0x76,  /* [2028] */
    (xdc_Char)0x61,  /* [2029] */
    (xdc_Char)0x6c,  /* [2030] */
    (xdc_Char)0x75,  /* [2031] */
    (xdc_Char)0x65,  /* [2032] */
    (xdc_Char)0x20,  /* [2033] */
    (xdc_Char)0x61,  /* [2034] */
    (xdc_Char)0x6e,  /* [2035] */
    (xdc_Char)0x6e,  /* [2036] */
    (xdc_Char)0x6f,  /* [2037] */
    (xdc_Char)0x74,  /* [2038] */
    (xdc_Char)0x20,  /* [2039] */
    (xdc_Char)0x62,  /* [2040] */
    (xdc_Char)0x65,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x7a,  /* [2043] */
    (xdc_Char)0x65,  /* [2044] */
    (xdc_Char)0x72,  /* [2045] */
    (xdc_Char)0x6f,  /* [2046] */
    (xdc_Char)0x0,  /* [2047] */
    (xdc_Char)0x41,  /* [2048] */
    (xdc_Char)0x5f,  /* [2049] */
    (xdc_Char)0x69,  /* [2050] */
    (xdc_Char)0x6e,  /* [2051] */
    (xdc_Char)0x76,  /* [2052] */
    (xdc_Char)0x61,  /* [2053] */
    (xdc_Char)0x6c,  /* [2054] */
    (xdc_Char)0x69,  /* [2055] */
    (xdc_Char)0x64,  /* [2056] */
    (xdc_Char)0x4b,  /* [2057] */
    (xdc_Char)0x65,  /* [2058] */
    (xdc_Char)0x79,  /* [2059] */
    (xdc_Char)0x3a,  /* [2060] */
    (xdc_Char)0x20,  /* [2061] */
    (xdc_Char)0x74,  /* [2062] */
    (xdc_Char)0x68,  /* [2063] */
    (xdc_Char)0x65,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x6b,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x79,  /* [2068] */
    (xdc_Char)0x20,  /* [2069] */
    (xdc_Char)0x6d,  /* [2070] */
    (xdc_Char)0x75,  /* [2071] */
    (xdc_Char)0x73,  /* [2072] */
    (xdc_Char)0x74,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x62,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x20,  /* [2077] */
    (xdc_Char)0x73,  /* [2078] */
    (xdc_Char)0x65,  /* [2079] */
    (xdc_Char)0x74,  /* [2080] */
    (xdc_Char)0x20,  /* [2081] */
    (xdc_Char)0x74,  /* [2082] */
    (xdc_Char)0x6f,  /* [2083] */
    (xdc_Char)0x20,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x6e,  /* [2087] */
    (xdc_Char)0x6f,  /* [2088] */
    (xdc_Char)0x6e,  /* [2089] */
    (xdc_Char)0x2d,  /* [2090] */
    (xdc_Char)0x64,  /* [2091] */
    (xdc_Char)0x65,  /* [2092] */
    (xdc_Char)0x66,  /* [2093] */
    (xdc_Char)0x61,  /* [2094] */
    (xdc_Char)0x75,  /* [2095] */
    (xdc_Char)0x6c,  /* [2096] */
    (xdc_Char)0x74,  /* [2097] */
    (xdc_Char)0x20,  /* [2098] */
    (xdc_Char)0x76,  /* [2099] */
    (xdc_Char)0x61,  /* [2100] */
    (xdc_Char)0x6c,  /* [2101] */
    (xdc_Char)0x75,  /* [2102] */
    (xdc_Char)0x65,  /* [2103] */
    (xdc_Char)0x0,  /* [2104] */
    (xdc_Char)0x41,  /* [2105] */
    (xdc_Char)0x5f,  /* [2106] */
    (xdc_Char)0x6e,  /* [2107] */
    (xdc_Char)0x75,  /* [2108] */
    (xdc_Char)0x6c,  /* [2109] */
    (xdc_Char)0x6c,  /* [2110] */
    (xdc_Char)0x48,  /* [2111] */
    (xdc_Char)0x61,  /* [2112] */
    (xdc_Char)0x6e,  /* [2113] */
    (xdc_Char)0x64,  /* [2114] */
    (xdc_Char)0x6c,  /* [2115] */
    (xdc_Char)0x65,  /* [2116] */
    (xdc_Char)0x3a,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x4e,  /* [2119] */
    (xdc_Char)0x75,  /* [2120] */
    (xdc_Char)0x6c,  /* [2121] */
    (xdc_Char)0x6c,  /* [2122] */
    (xdc_Char)0x20,  /* [2123] */
    (xdc_Char)0x68,  /* [2124] */
    (xdc_Char)0x61,  /* [2125] */
    (xdc_Char)0x6e,  /* [2126] */
    (xdc_Char)0x64,  /* [2127] */
    (xdc_Char)0x6c,  /* [2128] */
    (xdc_Char)0x65,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x70,  /* [2131] */
    (xdc_Char)0x61,  /* [2132] */
    (xdc_Char)0x73,  /* [2133] */
    (xdc_Char)0x73,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x64,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x74,  /* [2138] */
    (xdc_Char)0x6f,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x63,  /* [2141] */
    (xdc_Char)0x72,  /* [2142] */
    (xdc_Char)0x65,  /* [2143] */
    (xdc_Char)0x61,  /* [2144] */
    (xdc_Char)0x74,  /* [2145] */
    (xdc_Char)0x65,  /* [2146] */
    (xdc_Char)0x0,  /* [2147] */
    (xdc_Char)0x41,  /* [2148] */
    (xdc_Char)0x5f,  /* [2149] */
    (xdc_Char)0x49,  /* [2150] */
    (xdc_Char)0x70,  /* [2151] */
    (xdc_Char)0x63,  /* [2152] */
    (xdc_Char)0x4d,  /* [2153] */
    (xdc_Char)0x50,  /* [2154] */
    (xdc_Char)0x46,  /* [2155] */
    (xdc_Char)0x61,  /* [2156] */
    (xdc_Char)0x69,  /* [2157] */
    (xdc_Char)0x6c,  /* [2158] */
    (xdc_Char)0x75,  /* [2159] */
    (xdc_Char)0x72,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x3a,  /* [2162] */
    (xdc_Char)0x20,  /* [2163] */
    (xdc_Char)0x55,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x65,  /* [2166] */
    (xdc_Char)0x78,  /* [2167] */
    (xdc_Char)0x70,  /* [2168] */
    (xdc_Char)0x65,  /* [2169] */
    (xdc_Char)0x63,  /* [2170] */
    (xdc_Char)0x74,  /* [2171] */
    (xdc_Char)0x65,  /* [2172] */
    (xdc_Char)0x64,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x66,  /* [2175] */
    (xdc_Char)0x61,  /* [2176] */
    (xdc_Char)0x69,  /* [2177] */
    (xdc_Char)0x6c,  /* [2178] */
    (xdc_Char)0x75,  /* [2179] */
    (xdc_Char)0x72,  /* [2180] */
    (xdc_Char)0x65,  /* [2181] */
    (xdc_Char)0x20,  /* [2182] */
    (xdc_Char)0x77,  /* [2183] */
    (xdc_Char)0x69,  /* [2184] */
    (xdc_Char)0x74,  /* [2185] */
    (xdc_Char)0x68,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x74,  /* [2188] */
    (xdc_Char)0x68,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x20,  /* [2191] */
    (xdc_Char)0x49,  /* [2192] */
    (xdc_Char)0x70,  /* [2193] */
    (xdc_Char)0x63,  /* [2194] */
    (xdc_Char)0x4d,  /* [2195] */
    (xdc_Char)0x50,  /* [2196] */
    (xdc_Char)0x0,  /* [2197] */
    (xdc_Char)0x4c,  /* [2198] */
    (xdc_Char)0x6f,  /* [2199] */
    (xdc_Char)0x67,  /* [2200] */
    (xdc_Char)0x67,  /* [2201] */
    (xdc_Char)0x65,  /* [2202] */
    (xdc_Char)0x72,  /* [2203] */
    (xdc_Char)0x53,  /* [2204] */
    (xdc_Char)0x74,  /* [2205] */
    (xdc_Char)0x72,  /* [2206] */
    (xdc_Char)0x65,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x6d,  /* [2209] */
    (xdc_Char)0x65,  /* [2210] */
    (xdc_Char)0x72,  /* [2211] */
    (xdc_Char)0x32,  /* [2212] */
    (xdc_Char)0x5f,  /* [2213] */
    (xdc_Char)0x63,  /* [2214] */
    (xdc_Char)0x72,  /* [2215] */
    (xdc_Char)0x65,  /* [2216] */
    (xdc_Char)0x61,  /* [2217] */
    (xdc_Char)0x74,  /* [2218] */
    (xdc_Char)0x65,  /* [2219] */
    (xdc_Char)0x27,  /* [2220] */
    (xdc_Char)0x73,  /* [2221] */
    (xdc_Char)0x20,  /* [2222] */
    (xdc_Char)0x62,  /* [2223] */
    (xdc_Char)0x75,  /* [2224] */
    (xdc_Char)0x66,  /* [2225] */
    (xdc_Char)0x66,  /* [2226] */
    (xdc_Char)0x65,  /* [2227] */
    (xdc_Char)0x72,  /* [2228] */
    (xdc_Char)0x20,  /* [2229] */
    (xdc_Char)0x72,  /* [2230] */
    (xdc_Char)0x65,  /* [2231] */
    (xdc_Char)0x74,  /* [2232] */
    (xdc_Char)0x75,  /* [2233] */
    (xdc_Char)0x72,  /* [2234] */
    (xdc_Char)0x6e,  /* [2235] */
    (xdc_Char)0x65,  /* [2236] */
    (xdc_Char)0x64,  /* [2237] */
    (xdc_Char)0x20,  /* [2238] */
    (xdc_Char)0x62,  /* [2239] */
    (xdc_Char)0x79,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x70,  /* [2242] */
    (xdc_Char)0x72,  /* [2243] */
    (xdc_Char)0x69,  /* [2244] */
    (xdc_Char)0x6d,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x46,  /* [2247] */
    (xdc_Char)0x78,  /* [2248] */
    (xdc_Char)0x6e,  /* [2249] */
    (xdc_Char)0x20,  /* [2250] */
    (xdc_Char)0x69,  /* [2251] */
    (xdc_Char)0x73,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x4e,  /* [2254] */
    (xdc_Char)0x55,  /* [2255] */
    (xdc_Char)0x4c,  /* [2256] */
    (xdc_Char)0x4c,  /* [2257] */
    (xdc_Char)0x0,  /* [2258] */
    (xdc_Char)0x41,  /* [2259] */
    (xdc_Char)0x5f,  /* [2260] */
    (xdc_Char)0x62,  /* [2261] */
    (xdc_Char)0x61,  /* [2262] */
    (xdc_Char)0x64,  /* [2263] */
    (xdc_Char)0x54,  /* [2264] */
    (xdc_Char)0x68,  /* [2265] */
    (xdc_Char)0x72,  /* [2266] */
    (xdc_Char)0x65,  /* [2267] */
    (xdc_Char)0x61,  /* [2268] */
    (xdc_Char)0x64,  /* [2269] */
    (xdc_Char)0x54,  /* [2270] */
    (xdc_Char)0x79,  /* [2271] */
    (xdc_Char)0x70,  /* [2272] */
    (xdc_Char)0x65,  /* [2273] */
    (xdc_Char)0x3a,  /* [2274] */
    (xdc_Char)0x20,  /* [2275] */
    (xdc_Char)0x43,  /* [2276] */
    (xdc_Char)0x61,  /* [2277] */
    (xdc_Char)0x6e,  /* [2278] */
    (xdc_Char)0x6e,  /* [2279] */
    (xdc_Char)0x6f,  /* [2280] */
    (xdc_Char)0x74,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x63,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x6c,  /* [2285] */
    (xdc_Char)0x6c,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x61,  /* [2288] */
    (xdc_Char)0x20,  /* [2289] */
    (xdc_Char)0x43,  /* [2290] */
    (xdc_Char)0x20,  /* [2291] */
    (xdc_Char)0x72,  /* [2292] */
    (xdc_Char)0x75,  /* [2293] */
    (xdc_Char)0x6e,  /* [2294] */
    (xdc_Char)0x74,  /* [2295] */
    (xdc_Char)0x69,  /* [2296] */
    (xdc_Char)0x6d,  /* [2297] */
    (xdc_Char)0x65,  /* [2298] */
    (xdc_Char)0x20,  /* [2299] */
    (xdc_Char)0x6c,  /* [2300] */
    (xdc_Char)0x69,  /* [2301] */
    (xdc_Char)0x62,  /* [2302] */
    (xdc_Char)0x72,  /* [2303] */
    (xdc_Char)0x61,  /* [2304] */
    (xdc_Char)0x72,  /* [2305] */
    (xdc_Char)0x79,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x41,  /* [2308] */
    (xdc_Char)0x50,  /* [2309] */
    (xdc_Char)0x49,  /* [2310] */
    (xdc_Char)0x20,  /* [2311] */
    (xdc_Char)0x66,  /* [2312] */
    (xdc_Char)0x72,  /* [2313] */
    (xdc_Char)0x6f,  /* [2314] */
    (xdc_Char)0x6d,  /* [2315] */
    (xdc_Char)0x20,  /* [2316] */
    (xdc_Char)0x61,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x48,  /* [2319] */
    (xdc_Char)0x77,  /* [2320] */
    (xdc_Char)0x69,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x6f,  /* [2323] */
    (xdc_Char)0x72,  /* [2324] */
    (xdc_Char)0x20,  /* [2325] */
    (xdc_Char)0x53,  /* [2326] */
    (xdc_Char)0x77,  /* [2327] */
    (xdc_Char)0x69,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x74,  /* [2330] */
    (xdc_Char)0x68,  /* [2331] */
    (xdc_Char)0x72,  /* [2332] */
    (xdc_Char)0x65,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x64,  /* [2335] */
    (xdc_Char)0x2e,  /* [2336] */
    (xdc_Char)0x0,  /* [2337] */
    (xdc_Char)0x41,  /* [2338] */
    (xdc_Char)0x5f,  /* [2339] */
    (xdc_Char)0x62,  /* [2340] */
    (xdc_Char)0x61,  /* [2341] */
    (xdc_Char)0x64,  /* [2342] */
    (xdc_Char)0x43,  /* [2343] */
    (xdc_Char)0x6f,  /* [2344] */
    (xdc_Char)0x6e,  /* [2345] */
    (xdc_Char)0x74,  /* [2346] */
    (xdc_Char)0x65,  /* [2347] */
    (xdc_Char)0x78,  /* [2348] */
    (xdc_Char)0x74,  /* [2349] */
    (xdc_Char)0x3a,  /* [2350] */
    (xdc_Char)0x20,  /* [2351] */
    (xdc_Char)0x62,  /* [2352] */
    (xdc_Char)0x61,  /* [2353] */
    (xdc_Char)0x64,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x63,  /* [2356] */
    (xdc_Char)0x61,  /* [2357] */
    (xdc_Char)0x6c,  /* [2358] */
    (xdc_Char)0x6c,  /* [2359] */
    (xdc_Char)0x69,  /* [2360] */
    (xdc_Char)0x6e,  /* [2361] */
    (xdc_Char)0x67,  /* [2362] */
    (xdc_Char)0x20,  /* [2363] */
    (xdc_Char)0x63,  /* [2364] */
    (xdc_Char)0x6f,  /* [2365] */
    (xdc_Char)0x6e,  /* [2366] */
    (xdc_Char)0x74,  /* [2367] */
    (xdc_Char)0x65,  /* [2368] */
    (xdc_Char)0x78,  /* [2369] */
    (xdc_Char)0x74,  /* [2370] */
    (xdc_Char)0x2e,  /* [2371] */
    (xdc_Char)0x20,  /* [2372] */
    (xdc_Char)0x4d,  /* [2373] */
    (xdc_Char)0x61,  /* [2374] */
    (xdc_Char)0x79,  /* [2375] */
    (xdc_Char)0x20,  /* [2376] */
    (xdc_Char)0x6e,  /* [2377] */
    (xdc_Char)0x6f,  /* [2378] */
    (xdc_Char)0x74,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x62,  /* [2381] */
    (xdc_Char)0x65,  /* [2382] */
    (xdc_Char)0x20,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x6e,  /* [2385] */
    (xdc_Char)0x74,  /* [2386] */
    (xdc_Char)0x65,  /* [2387] */
    (xdc_Char)0x72,  /* [2388] */
    (xdc_Char)0x65,  /* [2389] */
    (xdc_Char)0x64,  /* [2390] */
    (xdc_Char)0x20,  /* [2391] */
    (xdc_Char)0x66,  /* [2392] */
    (xdc_Char)0x72,  /* [2393] */
    (xdc_Char)0x6f,  /* [2394] */
    (xdc_Char)0x6d,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x61,  /* [2397] */
    (xdc_Char)0x20,  /* [2398] */
    (xdc_Char)0x68,  /* [2399] */
    (xdc_Char)0x61,  /* [2400] */
    (xdc_Char)0x72,  /* [2401] */
    (xdc_Char)0x64,  /* [2402] */
    (xdc_Char)0x77,  /* [2403] */
    (xdc_Char)0x61,  /* [2404] */
    (xdc_Char)0x72,  /* [2405] */
    (xdc_Char)0x65,  /* [2406] */
    (xdc_Char)0x20,  /* [2407] */
    (xdc_Char)0x69,  /* [2408] */
    (xdc_Char)0x6e,  /* [2409] */
    (xdc_Char)0x74,  /* [2410] */
    (xdc_Char)0x65,  /* [2411] */
    (xdc_Char)0x72,  /* [2412] */
    (xdc_Char)0x72,  /* [2413] */
    (xdc_Char)0x75,  /* [2414] */
    (xdc_Char)0x70,  /* [2415] */
    (xdc_Char)0x74,  /* [2416] */
    (xdc_Char)0x20,  /* [2417] */
    (xdc_Char)0x74,  /* [2418] */
    (xdc_Char)0x68,  /* [2419] */
    (xdc_Char)0x72,  /* [2420] */
    (xdc_Char)0x65,  /* [2421] */
    (xdc_Char)0x61,  /* [2422] */
    (xdc_Char)0x64,  /* [2423] */
    (xdc_Char)0x2e,  /* [2424] */
    (xdc_Char)0x0,  /* [2425] */
    (xdc_Char)0x41,  /* [2426] */
    (xdc_Char)0x5f,  /* [2427] */
    (xdc_Char)0x62,  /* [2428] */
    (xdc_Char)0x61,  /* [2429] */
    (xdc_Char)0x64,  /* [2430] */
    (xdc_Char)0x43,  /* [2431] */
    (xdc_Char)0x6f,  /* [2432] */
    (xdc_Char)0x6e,  /* [2433] */
    (xdc_Char)0x74,  /* [2434] */
    (xdc_Char)0x65,  /* [2435] */
    (xdc_Char)0x78,  /* [2436] */
    (xdc_Char)0x74,  /* [2437] */
    (xdc_Char)0x3a,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x62,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x64,  /* [2442] */
    (xdc_Char)0x20,  /* [2443] */
    (xdc_Char)0x63,  /* [2444] */
    (xdc_Char)0x61,  /* [2445] */
    (xdc_Char)0x6c,  /* [2446] */
    (xdc_Char)0x6c,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x6e,  /* [2449] */
    (xdc_Char)0x67,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x63,  /* [2452] */
    (xdc_Char)0x6f,  /* [2453] */
    (xdc_Char)0x6e,  /* [2454] */
    (xdc_Char)0x74,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x78,  /* [2457] */
    (xdc_Char)0x74,  /* [2458] */
    (xdc_Char)0x2e,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x4d,  /* [2461] */
    (xdc_Char)0x61,  /* [2462] */
    (xdc_Char)0x79,  /* [2463] */
    (xdc_Char)0x20,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x6f,  /* [2466] */
    (xdc_Char)0x74,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x62,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x65,  /* [2472] */
    (xdc_Char)0x6e,  /* [2473] */
    (xdc_Char)0x74,  /* [2474] */
    (xdc_Char)0x65,  /* [2475] */
    (xdc_Char)0x72,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x64,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x66,  /* [2480] */
    (xdc_Char)0x72,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x6d,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x61,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x73,  /* [2487] */
    (xdc_Char)0x6f,  /* [2488] */
    (xdc_Char)0x66,  /* [2489] */
    (xdc_Char)0x74,  /* [2490] */
    (xdc_Char)0x77,  /* [2491] */
    (xdc_Char)0x61,  /* [2492] */
    (xdc_Char)0x72,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x6f,  /* [2496] */
    (xdc_Char)0x72,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x68,  /* [2499] */
    (xdc_Char)0x61,  /* [2500] */
    (xdc_Char)0x72,  /* [2501] */
    (xdc_Char)0x64,  /* [2502] */
    (xdc_Char)0x77,  /* [2503] */
    (xdc_Char)0x61,  /* [2504] */
    (xdc_Char)0x72,  /* [2505] */
    (xdc_Char)0x65,  /* [2506] */
    (xdc_Char)0x20,  /* [2507] */
    (xdc_Char)0x69,  /* [2508] */
    (xdc_Char)0x6e,  /* [2509] */
    (xdc_Char)0x74,  /* [2510] */
    (xdc_Char)0x65,  /* [2511] */
    (xdc_Char)0x72,  /* [2512] */
    (xdc_Char)0x72,  /* [2513] */
    (xdc_Char)0x75,  /* [2514] */
    (xdc_Char)0x70,  /* [2515] */
    (xdc_Char)0x74,  /* [2516] */
    (xdc_Char)0x20,  /* [2517] */
    (xdc_Char)0x74,  /* [2518] */
    (xdc_Char)0x68,  /* [2519] */
    (xdc_Char)0x72,  /* [2520] */
    (xdc_Char)0x65,  /* [2521] */
    (xdc_Char)0x61,  /* [2522] */
    (xdc_Char)0x64,  /* [2523] */
    (xdc_Char)0x2e,  /* [2524] */
    (xdc_Char)0x0,  /* [2525] */
    (xdc_Char)0x41,  /* [2526] */
    (xdc_Char)0x5f,  /* [2527] */
    (xdc_Char)0x62,  /* [2528] */
    (xdc_Char)0x61,  /* [2529] */
    (xdc_Char)0x64,  /* [2530] */
    (xdc_Char)0x43,  /* [2531] */
    (xdc_Char)0x6f,  /* [2532] */
    (xdc_Char)0x6e,  /* [2533] */
    (xdc_Char)0x74,  /* [2534] */
    (xdc_Char)0x65,  /* [2535] */
    (xdc_Char)0x78,  /* [2536] */
    (xdc_Char)0x74,  /* [2537] */
    (xdc_Char)0x3a,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x62,  /* [2540] */
    (xdc_Char)0x61,  /* [2541] */
    (xdc_Char)0x64,  /* [2542] */
    (xdc_Char)0x20,  /* [2543] */
    (xdc_Char)0x63,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x6c,  /* [2546] */
    (xdc_Char)0x6c,  /* [2547] */
    (xdc_Char)0x69,  /* [2548] */
    (xdc_Char)0x6e,  /* [2549] */
    (xdc_Char)0x67,  /* [2550] */
    (xdc_Char)0x20,  /* [2551] */
    (xdc_Char)0x63,  /* [2552] */
    (xdc_Char)0x6f,  /* [2553] */
    (xdc_Char)0x6e,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x65,  /* [2556] */
    (xdc_Char)0x78,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x2e,  /* [2559] */
    (xdc_Char)0x20,  /* [2560] */
    (xdc_Char)0x53,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x65,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x47,  /* [2565] */
    (xdc_Char)0x61,  /* [2566] */
    (xdc_Char)0x74,  /* [2567] */
    (xdc_Char)0x65,  /* [2568] */
    (xdc_Char)0x4d,  /* [2569] */
    (xdc_Char)0x75,  /* [2570] */
    (xdc_Char)0x74,  /* [2571] */
    (xdc_Char)0x65,  /* [2572] */
    (xdc_Char)0x78,  /* [2573] */
    (xdc_Char)0x50,  /* [2574] */
    (xdc_Char)0x72,  /* [2575] */
    (xdc_Char)0x69,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x41,  /* [2578] */
    (xdc_Char)0x50,  /* [2579] */
    (xdc_Char)0x49,  /* [2580] */
    (xdc_Char)0x20,  /* [2581] */
    (xdc_Char)0x64,  /* [2582] */
    (xdc_Char)0x6f,  /* [2583] */
    (xdc_Char)0x63,  /* [2584] */
    (xdc_Char)0x20,  /* [2585] */
    (xdc_Char)0x66,  /* [2586] */
    (xdc_Char)0x6f,  /* [2587] */
    (xdc_Char)0x72,  /* [2588] */
    (xdc_Char)0x20,  /* [2589] */
    (xdc_Char)0x64,  /* [2590] */
    (xdc_Char)0x65,  /* [2591] */
    (xdc_Char)0x74,  /* [2592] */
    (xdc_Char)0x61,  /* [2593] */
    (xdc_Char)0x69,  /* [2594] */
    (xdc_Char)0x6c,  /* [2595] */
    (xdc_Char)0x73,  /* [2596] */
    (xdc_Char)0x2e,  /* [2597] */
    (xdc_Char)0x0,  /* [2598] */
    (xdc_Char)0x41,  /* [2599] */
    (xdc_Char)0x5f,  /* [2600] */
    (xdc_Char)0x65,  /* [2601] */
    (xdc_Char)0x6e,  /* [2602] */
    (xdc_Char)0x74,  /* [2603] */
    (xdc_Char)0x65,  /* [2604] */
    (xdc_Char)0x72,  /* [2605] */
    (xdc_Char)0x54,  /* [2606] */
    (xdc_Char)0x61,  /* [2607] */
    (xdc_Char)0x73,  /* [2608] */
    (xdc_Char)0x6b,  /* [2609] */
    (xdc_Char)0x44,  /* [2610] */
    (xdc_Char)0x69,  /* [2611] */
    (xdc_Char)0x73,  /* [2612] */
    (xdc_Char)0x61,  /* [2613] */
    (xdc_Char)0x62,  /* [2614] */
    (xdc_Char)0x6c,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x64,  /* [2617] */
    (xdc_Char)0x3a,  /* [2618] */
    (xdc_Char)0x20,  /* [2619] */
    (xdc_Char)0x43,  /* [2620] */
    (xdc_Char)0x61,  /* [2621] */
    (xdc_Char)0x6e,  /* [2622] */
    (xdc_Char)0x6e,  /* [2623] */
    (xdc_Char)0x6f,  /* [2624] */
    (xdc_Char)0x74,  /* [2625] */
    (xdc_Char)0x20,  /* [2626] */
    (xdc_Char)0x63,  /* [2627] */
    (xdc_Char)0x61,  /* [2628] */
    (xdc_Char)0x6c,  /* [2629] */
    (xdc_Char)0x6c,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x47,  /* [2632] */
    (xdc_Char)0x61,  /* [2633] */
    (xdc_Char)0x74,  /* [2634] */
    (xdc_Char)0x65,  /* [2635] */
    (xdc_Char)0x4d,  /* [2636] */
    (xdc_Char)0x75,  /* [2637] */
    (xdc_Char)0x74,  /* [2638] */
    (xdc_Char)0x65,  /* [2639] */
    (xdc_Char)0x78,  /* [2640] */
    (xdc_Char)0x50,  /* [2641] */
    (xdc_Char)0x72,  /* [2642] */
    (xdc_Char)0x69,  /* [2643] */
    (xdc_Char)0x5f,  /* [2644] */
    (xdc_Char)0x65,  /* [2645] */
    (xdc_Char)0x6e,  /* [2646] */
    (xdc_Char)0x74,  /* [2647] */
    (xdc_Char)0x65,  /* [2648] */
    (xdc_Char)0x72,  /* [2649] */
    (xdc_Char)0x28,  /* [2650] */
    (xdc_Char)0x29,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x77,  /* [2653] */
    (xdc_Char)0x68,  /* [2654] */
    (xdc_Char)0x69,  /* [2655] */
    (xdc_Char)0x6c,  /* [2656] */
    (xdc_Char)0x65,  /* [2657] */
    (xdc_Char)0x20,  /* [2658] */
    (xdc_Char)0x74,  /* [2659] */
    (xdc_Char)0x68,  /* [2660] */
    (xdc_Char)0x65,  /* [2661] */
    (xdc_Char)0x20,  /* [2662] */
    (xdc_Char)0x54,  /* [2663] */
    (xdc_Char)0x61,  /* [2664] */
    (xdc_Char)0x73,  /* [2665] */
    (xdc_Char)0x6b,  /* [2666] */
    (xdc_Char)0x20,  /* [2667] */
    (xdc_Char)0x6f,  /* [2668] */
    (xdc_Char)0x72,  /* [2669] */
    (xdc_Char)0x20,  /* [2670] */
    (xdc_Char)0x53,  /* [2671] */
    (xdc_Char)0x77,  /* [2672] */
    (xdc_Char)0x69,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x73,  /* [2675] */
    (xdc_Char)0x63,  /* [2676] */
    (xdc_Char)0x68,  /* [2677] */
    (xdc_Char)0x65,  /* [2678] */
    (xdc_Char)0x64,  /* [2679] */
    (xdc_Char)0x75,  /* [2680] */
    (xdc_Char)0x6c,  /* [2681] */
    (xdc_Char)0x65,  /* [2682] */
    (xdc_Char)0x72,  /* [2683] */
    (xdc_Char)0x20,  /* [2684] */
    (xdc_Char)0x69,  /* [2685] */
    (xdc_Char)0x73,  /* [2686] */
    (xdc_Char)0x20,  /* [2687] */
    (xdc_Char)0x64,  /* [2688] */
    (xdc_Char)0x69,  /* [2689] */
    (xdc_Char)0x73,  /* [2690] */
    (xdc_Char)0x61,  /* [2691] */
    (xdc_Char)0x62,  /* [2692] */
    (xdc_Char)0x6c,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x64,  /* [2695] */
    (xdc_Char)0x2e,  /* [2696] */
    (xdc_Char)0x0,  /* [2697] */
    (xdc_Char)0x41,  /* [2698] */
    (xdc_Char)0x5f,  /* [2699] */
    (xdc_Char)0x62,  /* [2700] */
    (xdc_Char)0x61,  /* [2701] */
    (xdc_Char)0x64,  /* [2702] */
    (xdc_Char)0x43,  /* [2703] */
    (xdc_Char)0x6f,  /* [2704] */
    (xdc_Char)0x6e,  /* [2705] */
    (xdc_Char)0x74,  /* [2706] */
    (xdc_Char)0x65,  /* [2707] */
    (xdc_Char)0x78,  /* [2708] */
    (xdc_Char)0x74,  /* [2709] */
    (xdc_Char)0x3a,  /* [2710] */
    (xdc_Char)0x20,  /* [2711] */
    (xdc_Char)0x62,  /* [2712] */
    (xdc_Char)0x61,  /* [2713] */
    (xdc_Char)0x64,  /* [2714] */
    (xdc_Char)0x20,  /* [2715] */
    (xdc_Char)0x63,  /* [2716] */
    (xdc_Char)0x61,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x6c,  /* [2719] */
    (xdc_Char)0x69,  /* [2720] */
    (xdc_Char)0x6e,  /* [2721] */
    (xdc_Char)0x67,  /* [2722] */
    (xdc_Char)0x20,  /* [2723] */
    (xdc_Char)0x63,  /* [2724] */
    (xdc_Char)0x6f,  /* [2725] */
    (xdc_Char)0x6e,  /* [2726] */
    (xdc_Char)0x74,  /* [2727] */
    (xdc_Char)0x65,  /* [2728] */
    (xdc_Char)0x78,  /* [2729] */
    (xdc_Char)0x74,  /* [2730] */
    (xdc_Char)0x2e,  /* [2731] */
    (xdc_Char)0x20,  /* [2732] */
    (xdc_Char)0x53,  /* [2733] */
    (xdc_Char)0x65,  /* [2734] */
    (xdc_Char)0x65,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x47,  /* [2737] */
    (xdc_Char)0x61,  /* [2738] */
    (xdc_Char)0x74,  /* [2739] */
    (xdc_Char)0x65,  /* [2740] */
    (xdc_Char)0x4d,  /* [2741] */
    (xdc_Char)0x75,  /* [2742] */
    (xdc_Char)0x74,  /* [2743] */
    (xdc_Char)0x65,  /* [2744] */
    (xdc_Char)0x78,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x41,  /* [2747] */
    (xdc_Char)0x50,  /* [2748] */
    (xdc_Char)0x49,  /* [2749] */
    (xdc_Char)0x20,  /* [2750] */
    (xdc_Char)0x64,  /* [2751] */
    (xdc_Char)0x6f,  /* [2752] */
    (xdc_Char)0x63,  /* [2753] */
    (xdc_Char)0x20,  /* [2754] */
    (xdc_Char)0x66,  /* [2755] */
    (xdc_Char)0x6f,  /* [2756] */
    (xdc_Char)0x72,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x64,  /* [2759] */
    (xdc_Char)0x65,  /* [2760] */
    (xdc_Char)0x74,  /* [2761] */
    (xdc_Char)0x61,  /* [2762] */
    (xdc_Char)0x69,  /* [2763] */
    (xdc_Char)0x6c,  /* [2764] */
    (xdc_Char)0x73,  /* [2765] */
    (xdc_Char)0x2e,  /* [2766] */
    (xdc_Char)0x0,  /* [2767] */
    (xdc_Char)0x41,  /* [2768] */
    (xdc_Char)0x5f,  /* [2769] */
    (xdc_Char)0x62,  /* [2770] */
    (xdc_Char)0x61,  /* [2771] */
    (xdc_Char)0x64,  /* [2772] */
    (xdc_Char)0x43,  /* [2773] */
    (xdc_Char)0x6f,  /* [2774] */
    (xdc_Char)0x6e,  /* [2775] */
    (xdc_Char)0x74,  /* [2776] */
    (xdc_Char)0x65,  /* [2777] */
    (xdc_Char)0x78,  /* [2778] */
    (xdc_Char)0x74,  /* [2779] */
    (xdc_Char)0x3a,  /* [2780] */
    (xdc_Char)0x20,  /* [2781] */
    (xdc_Char)0x62,  /* [2782] */
    (xdc_Char)0x61,  /* [2783] */
    (xdc_Char)0x64,  /* [2784] */
    (xdc_Char)0x20,  /* [2785] */
    (xdc_Char)0x63,  /* [2786] */
    (xdc_Char)0x61,  /* [2787] */
    (xdc_Char)0x6c,  /* [2788] */
    (xdc_Char)0x6c,  /* [2789] */
    (xdc_Char)0x69,  /* [2790] */
    (xdc_Char)0x6e,  /* [2791] */
    (xdc_Char)0x67,  /* [2792] */
    (xdc_Char)0x20,  /* [2793] */
    (xdc_Char)0x63,  /* [2794] */
    (xdc_Char)0x6f,  /* [2795] */
    (xdc_Char)0x6e,  /* [2796] */
    (xdc_Char)0x74,  /* [2797] */
    (xdc_Char)0x65,  /* [2798] */
    (xdc_Char)0x78,  /* [2799] */
    (xdc_Char)0x74,  /* [2800] */
    (xdc_Char)0x2e,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x53,  /* [2803] */
    (xdc_Char)0x65,  /* [2804] */
    (xdc_Char)0x65,  /* [2805] */
    (xdc_Char)0x20,  /* [2806] */
    (xdc_Char)0x47,  /* [2807] */
    (xdc_Char)0x61,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x65,  /* [2810] */
    (xdc_Char)0x53,  /* [2811] */
    (xdc_Char)0x70,  /* [2812] */
    (xdc_Char)0x69,  /* [2813] */
    (xdc_Char)0x6e,  /* [2814] */
    (xdc_Char)0x6c,  /* [2815] */
    (xdc_Char)0x6f,  /* [2816] */
    (xdc_Char)0x63,  /* [2817] */
    (xdc_Char)0x6b,  /* [2818] */
    (xdc_Char)0x20,  /* [2819] */
    (xdc_Char)0x41,  /* [2820] */
    (xdc_Char)0x50,  /* [2821] */
    (xdc_Char)0x49,  /* [2822] */
    (xdc_Char)0x20,  /* [2823] */
    (xdc_Char)0x64,  /* [2824] */
    (xdc_Char)0x6f,  /* [2825] */
    (xdc_Char)0x63,  /* [2826] */
    (xdc_Char)0x20,  /* [2827] */
    (xdc_Char)0x66,  /* [2828] */
    (xdc_Char)0x6f,  /* [2829] */
    (xdc_Char)0x72,  /* [2830] */
    (xdc_Char)0x20,  /* [2831] */
    (xdc_Char)0x64,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x74,  /* [2834] */
    (xdc_Char)0x61,  /* [2835] */
    (xdc_Char)0x69,  /* [2836] */
    (xdc_Char)0x6c,  /* [2837] */
    (xdc_Char)0x73,  /* [2838] */
    (xdc_Char)0x2e,  /* [2839] */
    (xdc_Char)0x0,  /* [2840] */
    (xdc_Char)0x41,  /* [2841] */
    (xdc_Char)0x5f,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x6e,  /* [2844] */
    (xdc_Char)0x76,  /* [2845] */
    (xdc_Char)0x61,  /* [2846] */
    (xdc_Char)0x6c,  /* [2847] */
    (xdc_Char)0x69,  /* [2848] */
    (xdc_Char)0x64,  /* [2849] */
    (xdc_Char)0x51,  /* [2850] */
    (xdc_Char)0x75,  /* [2851] */
    (xdc_Char)0x61,  /* [2852] */
    (xdc_Char)0x6c,  /* [2853] */
    (xdc_Char)0x69,  /* [2854] */
    (xdc_Char)0x74,  /* [2855] */
    (xdc_Char)0x79,  /* [2856] */
    (xdc_Char)0x3a,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x53,  /* [2859] */
    (xdc_Char)0x65,  /* [2860] */
    (xdc_Char)0x65,  /* [2861] */
    (xdc_Char)0x20,  /* [2862] */
    (xdc_Char)0x47,  /* [2863] */
    (xdc_Char)0x61,  /* [2864] */
    (xdc_Char)0x74,  /* [2865] */
    (xdc_Char)0x65,  /* [2866] */
    (xdc_Char)0x53,  /* [2867] */
    (xdc_Char)0x70,  /* [2868] */
    (xdc_Char)0x69,  /* [2869] */
    (xdc_Char)0x6e,  /* [2870] */
    (xdc_Char)0x6c,  /* [2871] */
    (xdc_Char)0x6f,  /* [2872] */
    (xdc_Char)0x63,  /* [2873] */
    (xdc_Char)0x6b,  /* [2874] */
    (xdc_Char)0x20,  /* [2875] */
    (xdc_Char)0x41,  /* [2876] */
    (xdc_Char)0x50,  /* [2877] */
    (xdc_Char)0x49,  /* [2878] */
    (xdc_Char)0x20,  /* [2879] */
    (xdc_Char)0x64,  /* [2880] */
    (xdc_Char)0x6f,  /* [2881] */
    (xdc_Char)0x63,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x66,  /* [2884] */
    (xdc_Char)0x6f,  /* [2885] */
    (xdc_Char)0x72,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x64,  /* [2888] */
    (xdc_Char)0x65,  /* [2889] */
    (xdc_Char)0x74,  /* [2890] */
    (xdc_Char)0x61,  /* [2891] */
    (xdc_Char)0x69,  /* [2892] */
    (xdc_Char)0x6c,  /* [2893] */
    (xdc_Char)0x73,  /* [2894] */
    (xdc_Char)0x2e,  /* [2895] */
    (xdc_Char)0x0,  /* [2896] */
    (xdc_Char)0x62,  /* [2897] */
    (xdc_Char)0x75,  /* [2898] */
    (xdc_Char)0x66,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x70,  /* [2901] */
    (xdc_Char)0x61,  /* [2902] */
    (xdc_Char)0x72,  /* [2903] */
    (xdc_Char)0x61,  /* [2904] */
    (xdc_Char)0x6d,  /* [2905] */
    (xdc_Char)0x65,  /* [2906] */
    (xdc_Char)0x74,  /* [2907] */
    (xdc_Char)0x65,  /* [2908] */
    (xdc_Char)0x72,  /* [2909] */
    (xdc_Char)0x20,  /* [2910] */
    (xdc_Char)0x63,  /* [2911] */
    (xdc_Char)0x61,  /* [2912] */
    (xdc_Char)0x6e,  /* [2913] */
    (xdc_Char)0x6e,  /* [2914] */
    (xdc_Char)0x6f,  /* [2915] */
    (xdc_Char)0x74,  /* [2916] */
    (xdc_Char)0x20,  /* [2917] */
    (xdc_Char)0x62,  /* [2918] */
    (xdc_Char)0x65,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x6e,  /* [2921] */
    (xdc_Char)0x75,  /* [2922] */
    (xdc_Char)0x6c,  /* [2923] */
    (xdc_Char)0x6c,  /* [2924] */
    (xdc_Char)0x0,  /* [2925] */
    (xdc_Char)0x62,  /* [2926] */
    (xdc_Char)0x75,  /* [2927] */
    (xdc_Char)0x66,  /* [2928] */
    (xdc_Char)0x20,  /* [2929] */
    (xdc_Char)0x6e,  /* [2930] */
    (xdc_Char)0x6f,  /* [2931] */
    (xdc_Char)0x74,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x70,  /* [2934] */
    (xdc_Char)0x72,  /* [2935] */
    (xdc_Char)0x6f,  /* [2936] */
    (xdc_Char)0x70,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x72,  /* [2939] */
    (xdc_Char)0x6c,  /* [2940] */
    (xdc_Char)0x79,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x61,  /* [2943] */
    (xdc_Char)0x6c,  /* [2944] */
    (xdc_Char)0x69,  /* [2945] */
    (xdc_Char)0x67,  /* [2946] */
    (xdc_Char)0x6e,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x64,  /* [2949] */
    (xdc_Char)0x0,  /* [2950] */
    (xdc_Char)0x61,  /* [2951] */
    (xdc_Char)0x6c,  /* [2952] */
    (xdc_Char)0x69,  /* [2953] */
    (xdc_Char)0x67,  /* [2954] */
    (xdc_Char)0x6e,  /* [2955] */
    (xdc_Char)0x20,  /* [2956] */
    (xdc_Char)0x70,  /* [2957] */
    (xdc_Char)0x61,  /* [2958] */
    (xdc_Char)0x72,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x6d,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x74,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x72,  /* [2965] */
    (xdc_Char)0x20,  /* [2966] */
    (xdc_Char)0x6d,  /* [2967] */
    (xdc_Char)0x75,  /* [2968] */
    (xdc_Char)0x73,  /* [2969] */
    (xdc_Char)0x74,  /* [2970] */
    (xdc_Char)0x20,  /* [2971] */
    (xdc_Char)0x62,  /* [2972] */
    (xdc_Char)0x65,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x30,  /* [2975] */
    (xdc_Char)0x20,  /* [2976] */
    (xdc_Char)0x6f,  /* [2977] */
    (xdc_Char)0x72,  /* [2978] */
    (xdc_Char)0x20,  /* [2979] */
    (xdc_Char)0x61,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x70,  /* [2982] */
    (xdc_Char)0x6f,  /* [2983] */
    (xdc_Char)0x77,  /* [2984] */
    (xdc_Char)0x65,  /* [2985] */
    (xdc_Char)0x72,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x6f,  /* [2988] */
    (xdc_Char)0x66,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x32,  /* [2991] */
    (xdc_Char)0x20,  /* [2992] */
    (xdc_Char)0x3e,  /* [2993] */
    (xdc_Char)0x3d,  /* [2994] */
    (xdc_Char)0x20,  /* [2995] */
    (xdc_Char)0x74,  /* [2996] */
    (xdc_Char)0x68,  /* [2997] */
    (xdc_Char)0x65,  /* [2998] */
    (xdc_Char)0x20,  /* [2999] */
    (xdc_Char)0x76,  /* [3000] */
    (xdc_Char)0x61,  /* [3001] */
    (xdc_Char)0x6c,  /* [3002] */
    (xdc_Char)0x75,  /* [3003] */
    (xdc_Char)0x65,  /* [3004] */
    (xdc_Char)0x20,  /* [3005] */
    (xdc_Char)0x6f,  /* [3006] */
    (xdc_Char)0x66,  /* [3007] */
    (xdc_Char)0x20,  /* [3008] */
    (xdc_Char)0x4d,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x6d,  /* [3011] */
    (xdc_Char)0x6f,  /* [3012] */
    (xdc_Char)0x72,  /* [3013] */
    (xdc_Char)0x79,  /* [3014] */
    (xdc_Char)0x5f,  /* [3015] */
    (xdc_Char)0x67,  /* [3016] */
    (xdc_Char)0x65,  /* [3017] */
    (xdc_Char)0x74,  /* [3018] */
    (xdc_Char)0x4d,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x78,  /* [3021] */
    (xdc_Char)0x44,  /* [3022] */
    (xdc_Char)0x65,  /* [3023] */
    (xdc_Char)0x66,  /* [3024] */
    (xdc_Char)0x61,  /* [3025] */
    (xdc_Char)0x75,  /* [3026] */
    (xdc_Char)0x6c,  /* [3027] */
    (xdc_Char)0x74,  /* [3028] */
    (xdc_Char)0x54,  /* [3029] */
    (xdc_Char)0x79,  /* [3030] */
    (xdc_Char)0x70,  /* [3031] */
    (xdc_Char)0x65,  /* [3032] */
    (xdc_Char)0x41,  /* [3033] */
    (xdc_Char)0x6c,  /* [3034] */
    (xdc_Char)0x69,  /* [3035] */
    (xdc_Char)0x67,  /* [3036] */
    (xdc_Char)0x6e,  /* [3037] */
    (xdc_Char)0x28,  /* [3038] */
    (xdc_Char)0x29,  /* [3039] */
    (xdc_Char)0x0,  /* [3040] */
    (xdc_Char)0x61,  /* [3041] */
    (xdc_Char)0x6c,  /* [3042] */
    (xdc_Char)0x69,  /* [3043] */
    (xdc_Char)0x67,  /* [3044] */
    (xdc_Char)0x6e,  /* [3045] */
    (xdc_Char)0x20,  /* [3046] */
    (xdc_Char)0x70,  /* [3047] */
    (xdc_Char)0x61,  /* [3048] */
    (xdc_Char)0x72,  /* [3049] */
    (xdc_Char)0x61,  /* [3050] */
    (xdc_Char)0x6d,  /* [3051] */
    (xdc_Char)0x65,  /* [3052] */
    (xdc_Char)0x74,  /* [3053] */
    (xdc_Char)0x65,  /* [3054] */
    (xdc_Char)0x72,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x31,  /* [3057] */
    (xdc_Char)0x29,  /* [3058] */
    (xdc_Char)0x20,  /* [3059] */
    (xdc_Char)0x6d,  /* [3060] */
    (xdc_Char)0x75,  /* [3061] */
    (xdc_Char)0x73,  /* [3062] */
    (xdc_Char)0x74,  /* [3063] */
    (xdc_Char)0x20,  /* [3064] */
    (xdc_Char)0x62,  /* [3065] */
    (xdc_Char)0x65,  /* [3066] */
    (xdc_Char)0x20,  /* [3067] */
    (xdc_Char)0x30,  /* [3068] */
    (xdc_Char)0x20,  /* [3069] */
    (xdc_Char)0x6f,  /* [3070] */
    (xdc_Char)0x72,  /* [3071] */
    (xdc_Char)0x20,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x20,  /* [3074] */
    (xdc_Char)0x70,  /* [3075] */
    (xdc_Char)0x6f,  /* [3076] */
    (xdc_Char)0x77,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x72,  /* [3079] */
    (xdc_Char)0x20,  /* [3080] */
    (xdc_Char)0x6f,  /* [3081] */
    (xdc_Char)0x66,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x32,  /* [3084] */
    (xdc_Char)0x20,  /* [3085] */
    (xdc_Char)0x61,  /* [3086] */
    (xdc_Char)0x6e,  /* [3087] */
    (xdc_Char)0x64,  /* [3088] */
    (xdc_Char)0x20,  /* [3089] */
    (xdc_Char)0x32,  /* [3090] */
    (xdc_Char)0x29,  /* [3091] */
    (xdc_Char)0x20,  /* [3092] */
    (xdc_Char)0x6e,  /* [3093] */
    (xdc_Char)0x6f,  /* [3094] */
    (xdc_Char)0x74,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x67,  /* [3097] */
    (xdc_Char)0x72,  /* [3098] */
    (xdc_Char)0x65,  /* [3099] */
    (xdc_Char)0x61,  /* [3100] */
    (xdc_Char)0x74,  /* [3101] */
    (xdc_Char)0x65,  /* [3102] */
    (xdc_Char)0x72,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x74,  /* [3105] */
    (xdc_Char)0x68,  /* [3106] */
    (xdc_Char)0x61,  /* [3107] */
    (xdc_Char)0x6e,  /* [3108] */
    (xdc_Char)0x20,  /* [3109] */
    (xdc_Char)0x74,  /* [3110] */
    (xdc_Char)0x68,  /* [3111] */
    (xdc_Char)0x65,  /* [3112] */
    (xdc_Char)0x20,  /* [3113] */
    (xdc_Char)0x68,  /* [3114] */
    (xdc_Char)0x65,  /* [3115] */
    (xdc_Char)0x61,  /* [3116] */
    (xdc_Char)0x70,  /* [3117] */
    (xdc_Char)0x73,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x61,  /* [3120] */
    (xdc_Char)0x6c,  /* [3121] */
    (xdc_Char)0x69,  /* [3122] */
    (xdc_Char)0x67,  /* [3123] */
    (xdc_Char)0x6e,  /* [3124] */
    (xdc_Char)0x6d,  /* [3125] */
    (xdc_Char)0x65,  /* [3126] */
    (xdc_Char)0x6e,  /* [3127] */
    (xdc_Char)0x74,  /* [3128] */
    (xdc_Char)0x0,  /* [3129] */
    (xdc_Char)0x62,  /* [3130] */
    (xdc_Char)0x6c,  /* [3131] */
    (xdc_Char)0x6f,  /* [3132] */
    (xdc_Char)0x63,  /* [3133] */
    (xdc_Char)0x6b,  /* [3134] */
    (xdc_Char)0x53,  /* [3135] */
    (xdc_Char)0x69,  /* [3136] */
    (xdc_Char)0x7a,  /* [3137] */
    (xdc_Char)0x65,  /* [3138] */
    (xdc_Char)0x20,  /* [3139] */
    (xdc_Char)0x6d,  /* [3140] */
    (xdc_Char)0x75,  /* [3141] */
    (xdc_Char)0x73,  /* [3142] */
    (xdc_Char)0x74,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x62,  /* [3145] */
    (xdc_Char)0x65,  /* [3146] */
    (xdc_Char)0x20,  /* [3147] */
    (xdc_Char)0x6c,  /* [3148] */
    (xdc_Char)0x61,  /* [3149] */
    (xdc_Char)0x72,  /* [3150] */
    (xdc_Char)0x67,  /* [3151] */
    (xdc_Char)0x65,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x65,  /* [3154] */
    (xdc_Char)0x6e,  /* [3155] */
    (xdc_Char)0x6f,  /* [3156] */
    (xdc_Char)0x75,  /* [3157] */
    (xdc_Char)0x67,  /* [3158] */
    (xdc_Char)0x68,  /* [3159] */
    (xdc_Char)0x20,  /* [3160] */
    (xdc_Char)0x74,  /* [3161] */
    (xdc_Char)0x6f,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x68,  /* [3164] */
    (xdc_Char)0x6f,  /* [3165] */
    (xdc_Char)0x6c,  /* [3166] */
    (xdc_Char)0x64,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x61,  /* [3169] */
    (xdc_Char)0x74,  /* [3170] */
    (xdc_Char)0x6c,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x73,  /* [3174] */
    (xdc_Char)0x74,  /* [3175] */
    (xdc_Char)0x20,  /* [3176] */
    (xdc_Char)0x74,  /* [3177] */
    (xdc_Char)0x77,  /* [3178] */
    (xdc_Char)0x6f,  /* [3179] */
    (xdc_Char)0x20,  /* [3180] */
    (xdc_Char)0x70,  /* [3181] */
    (xdc_Char)0x6f,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x6e,  /* [3184] */
    (xdc_Char)0x74,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x72,  /* [3187] */
    (xdc_Char)0x73,  /* [3188] */
    (xdc_Char)0x0,  /* [3189] */
    (xdc_Char)0x6e,  /* [3190] */
    (xdc_Char)0x75,  /* [3191] */
    (xdc_Char)0x6d,  /* [3192] */
    (xdc_Char)0x42,  /* [3193] */
    (xdc_Char)0x6c,  /* [3194] */
    (xdc_Char)0x6f,  /* [3195] */
    (xdc_Char)0x63,  /* [3196] */
    (xdc_Char)0x6b,  /* [3197] */
    (xdc_Char)0x73,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x63,  /* [3200] */
    (xdc_Char)0x61,  /* [3201] */
    (xdc_Char)0x6e,  /* [3202] */
    (xdc_Char)0x6e,  /* [3203] */
    (xdc_Char)0x6f,  /* [3204] */
    (xdc_Char)0x74,  /* [3205] */
    (xdc_Char)0x20,  /* [3206] */
    (xdc_Char)0x62,  /* [3207] */
    (xdc_Char)0x65,  /* [3208] */
    (xdc_Char)0x20,  /* [3209] */
    (xdc_Char)0x7a,  /* [3210] */
    (xdc_Char)0x65,  /* [3211] */
    (xdc_Char)0x72,  /* [3212] */
    (xdc_Char)0x6f,  /* [3213] */
    (xdc_Char)0x0,  /* [3214] */
    (xdc_Char)0x62,  /* [3215] */
    (xdc_Char)0x75,  /* [3216] */
    (xdc_Char)0x66,  /* [3217] */
    (xdc_Char)0x53,  /* [3218] */
    (xdc_Char)0x69,  /* [3219] */
    (xdc_Char)0x7a,  /* [3220] */
    (xdc_Char)0x65,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x63,  /* [3223] */
    (xdc_Char)0x61,  /* [3224] */
    (xdc_Char)0x6e,  /* [3225] */
    (xdc_Char)0x6e,  /* [3226] */
    (xdc_Char)0x6f,  /* [3227] */
    (xdc_Char)0x74,  /* [3228] */
    (xdc_Char)0x20,  /* [3229] */
    (xdc_Char)0x62,  /* [3230] */
    (xdc_Char)0x65,  /* [3231] */
    (xdc_Char)0x20,  /* [3232] */
    (xdc_Char)0x7a,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x72,  /* [3235] */
    (xdc_Char)0x6f,  /* [3236] */
    (xdc_Char)0x0,  /* [3237] */
    (xdc_Char)0x48,  /* [3238] */
    (xdc_Char)0x65,  /* [3239] */
    (xdc_Char)0x61,  /* [3240] */
    (xdc_Char)0x70,  /* [3241] */
    (xdc_Char)0x42,  /* [3242] */
    (xdc_Char)0x75,  /* [3243] */
    (xdc_Char)0x66,  /* [3244] */
    (xdc_Char)0x5f,  /* [3245] */
    (xdc_Char)0x63,  /* [3246] */
    (xdc_Char)0x72,  /* [3247] */
    (xdc_Char)0x65,  /* [3248] */
    (xdc_Char)0x61,  /* [3249] */
    (xdc_Char)0x74,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x27,  /* [3252] */
    (xdc_Char)0x73,  /* [3253] */
    (xdc_Char)0x20,  /* [3254] */
    (xdc_Char)0x62,  /* [3255] */
    (xdc_Char)0x75,  /* [3256] */
    (xdc_Char)0x66,  /* [3257] */
    (xdc_Char)0x53,  /* [3258] */
    (xdc_Char)0x69,  /* [3259] */
    (xdc_Char)0x7a,  /* [3260] */
    (xdc_Char)0x65,  /* [3261] */
    (xdc_Char)0x20,  /* [3262] */
    (xdc_Char)0x70,  /* [3263] */
    (xdc_Char)0x61,  /* [3264] */
    (xdc_Char)0x72,  /* [3265] */
    (xdc_Char)0x61,  /* [3266] */
    (xdc_Char)0x6d,  /* [3267] */
    (xdc_Char)0x65,  /* [3268] */
    (xdc_Char)0x74,  /* [3269] */
    (xdc_Char)0x65,  /* [3270] */
    (xdc_Char)0x72,  /* [3271] */
    (xdc_Char)0x20,  /* [3272] */
    (xdc_Char)0x69,  /* [3273] */
    (xdc_Char)0x73,  /* [3274] */
    (xdc_Char)0x20,  /* [3275] */
    (xdc_Char)0x69,  /* [3276] */
    (xdc_Char)0x6e,  /* [3277] */
    (xdc_Char)0x76,  /* [3278] */
    (xdc_Char)0x61,  /* [3279] */
    (xdc_Char)0x6c,  /* [3280] */
    (xdc_Char)0x69,  /* [3281] */
    (xdc_Char)0x64,  /* [3282] */
    (xdc_Char)0x20,  /* [3283] */
    (xdc_Char)0x28,  /* [3284] */
    (xdc_Char)0x74,  /* [3285] */
    (xdc_Char)0x6f,  /* [3286] */
    (xdc_Char)0x6f,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x73,  /* [3289] */
    (xdc_Char)0x6d,  /* [3290] */
    (xdc_Char)0x61,  /* [3291] */
    (xdc_Char)0x6c,  /* [3292] */
    (xdc_Char)0x6c,  /* [3293] */
    (xdc_Char)0x29,  /* [3294] */
    (xdc_Char)0x0,  /* [3295] */
    (xdc_Char)0x43,  /* [3296] */
    (xdc_Char)0x61,  /* [3297] */
    (xdc_Char)0x6e,  /* [3298] */
    (xdc_Char)0x6e,  /* [3299] */
    (xdc_Char)0x6f,  /* [3300] */
    (xdc_Char)0x74,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x63,  /* [3303] */
    (xdc_Char)0x61,  /* [3304] */
    (xdc_Char)0x6c,  /* [3305] */
    (xdc_Char)0x6c,  /* [3306] */
    (xdc_Char)0x20,  /* [3307] */
    (xdc_Char)0x48,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x61,  /* [3310] */
    (xdc_Char)0x70,  /* [3311] */
    (xdc_Char)0x42,  /* [3312] */
    (xdc_Char)0x75,  /* [3313] */
    (xdc_Char)0x66,  /* [3314] */
    (xdc_Char)0x5f,  /* [3315] */
    (xdc_Char)0x66,  /* [3316] */
    (xdc_Char)0x72,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x65,  /* [3319] */
    (xdc_Char)0x20,  /* [3320] */
    (xdc_Char)0x77,  /* [3321] */
    (xdc_Char)0x68,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x6e,  /* [3324] */
    (xdc_Char)0x20,  /* [3325] */
    (xdc_Char)0x6e,  /* [3326] */
    (xdc_Char)0x6f,  /* [3327] */
    (xdc_Char)0x20,  /* [3328] */
    (xdc_Char)0x62,  /* [3329] */
    (xdc_Char)0x6c,  /* [3330] */
    (xdc_Char)0x6f,  /* [3331] */
    (xdc_Char)0x63,  /* [3332] */
    (xdc_Char)0x6b,  /* [3333] */
    (xdc_Char)0x73,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x68,  /* [3336] */
    (xdc_Char)0x61,  /* [3337] */
    (xdc_Char)0x76,  /* [3338] */
    (xdc_Char)0x65,  /* [3339] */
    (xdc_Char)0x20,  /* [3340] */
    (xdc_Char)0x62,  /* [3341] */
    (xdc_Char)0x65,  /* [3342] */
    (xdc_Char)0x65,  /* [3343] */
    (xdc_Char)0x6e,  /* [3344] */
    (xdc_Char)0x20,  /* [3345] */
    (xdc_Char)0x61,  /* [3346] */
    (xdc_Char)0x6c,  /* [3347] */
    (xdc_Char)0x6c,  /* [3348] */
    (xdc_Char)0x6f,  /* [3349] */
    (xdc_Char)0x63,  /* [3350] */
    (xdc_Char)0x61,  /* [3351] */
    (xdc_Char)0x74,  /* [3352] */
    (xdc_Char)0x65,  /* [3353] */
    (xdc_Char)0x64,  /* [3354] */
    (xdc_Char)0x0,  /* [3355] */
    (xdc_Char)0x41,  /* [3356] */
    (xdc_Char)0x5f,  /* [3357] */
    (xdc_Char)0x69,  /* [3358] */
    (xdc_Char)0x6e,  /* [3359] */
    (xdc_Char)0x76,  /* [3360] */
    (xdc_Char)0x61,  /* [3361] */
    (xdc_Char)0x6c,  /* [3362] */
    (xdc_Char)0x69,  /* [3363] */
    (xdc_Char)0x64,  /* [3364] */
    (xdc_Char)0x46,  /* [3365] */
    (xdc_Char)0x72,  /* [3366] */
    (xdc_Char)0x65,  /* [3367] */
    (xdc_Char)0x65,  /* [3368] */
    (xdc_Char)0x3a,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x49,  /* [3371] */
    (xdc_Char)0x6e,  /* [3372] */
    (xdc_Char)0x76,  /* [3373] */
    (xdc_Char)0x61,  /* [3374] */
    (xdc_Char)0x6c,  /* [3375] */
    (xdc_Char)0x69,  /* [3376] */
    (xdc_Char)0x64,  /* [3377] */
    (xdc_Char)0x20,  /* [3378] */
    (xdc_Char)0x66,  /* [3379] */
    (xdc_Char)0x72,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x0,  /* [3383] */
    (xdc_Char)0x41,  /* [3384] */
    (xdc_Char)0x5f,  /* [3385] */
    (xdc_Char)0x7a,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x72,  /* [3388] */
    (xdc_Char)0x6f,  /* [3389] */
    (xdc_Char)0x42,  /* [3390] */
    (xdc_Char)0x6c,  /* [3391] */
    (xdc_Char)0x6f,  /* [3392] */
    (xdc_Char)0x63,  /* [3393] */
    (xdc_Char)0x6b,  /* [3394] */
    (xdc_Char)0x3a,  /* [3395] */
    (xdc_Char)0x20,  /* [3396] */
    (xdc_Char)0x43,  /* [3397] */
    (xdc_Char)0x61,  /* [3398] */
    (xdc_Char)0x6e,  /* [3399] */
    (xdc_Char)0x6e,  /* [3400] */
    (xdc_Char)0x6f,  /* [3401] */
    (xdc_Char)0x74,  /* [3402] */
    (xdc_Char)0x20,  /* [3403] */
    (xdc_Char)0x61,  /* [3404] */
    (xdc_Char)0x6c,  /* [3405] */
    (xdc_Char)0x6c,  /* [3406] */
    (xdc_Char)0x6f,  /* [3407] */
    (xdc_Char)0x63,  /* [3408] */
    (xdc_Char)0x61,  /* [3409] */
    (xdc_Char)0x74,  /* [3410] */
    (xdc_Char)0x65,  /* [3411] */
    (xdc_Char)0x20,  /* [3412] */
    (xdc_Char)0x73,  /* [3413] */
    (xdc_Char)0x69,  /* [3414] */
    (xdc_Char)0x7a,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x30,  /* [3418] */
    (xdc_Char)0x0,  /* [3419] */
    (xdc_Char)0x41,  /* [3420] */
    (xdc_Char)0x5f,  /* [3421] */
    (xdc_Char)0x68,  /* [3422] */
    (xdc_Char)0x65,  /* [3423] */
    (xdc_Char)0x61,  /* [3424] */
    (xdc_Char)0x70,  /* [3425] */
    (xdc_Char)0x53,  /* [3426] */
    (xdc_Char)0x69,  /* [3427] */
    (xdc_Char)0x7a,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x3a,  /* [3430] */
    (xdc_Char)0x20,  /* [3431] */
    (xdc_Char)0x52,  /* [3432] */
    (xdc_Char)0x65,  /* [3433] */
    (xdc_Char)0x71,  /* [3434] */
    (xdc_Char)0x75,  /* [3435] */
    (xdc_Char)0x65,  /* [3436] */
    (xdc_Char)0x73,  /* [3437] */
    (xdc_Char)0x74,  /* [3438] */
    (xdc_Char)0x65,  /* [3439] */
    (xdc_Char)0x64,  /* [3440] */
    (xdc_Char)0x20,  /* [3441] */
    (xdc_Char)0x68,  /* [3442] */
    (xdc_Char)0x65,  /* [3443] */
    (xdc_Char)0x61,  /* [3444] */
    (xdc_Char)0x70,  /* [3445] */
    (xdc_Char)0x20,  /* [3446] */
    (xdc_Char)0x73,  /* [3447] */
    (xdc_Char)0x69,  /* [3448] */
    (xdc_Char)0x7a,  /* [3449] */
    (xdc_Char)0x65,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x69,  /* [3452] */
    (xdc_Char)0x73,  /* [3453] */
    (xdc_Char)0x20,  /* [3454] */
    (xdc_Char)0x74,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x6f,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x73,  /* [3459] */
    (xdc_Char)0x6d,  /* [3460] */
    (xdc_Char)0x61,  /* [3461] */
    (xdc_Char)0x6c,  /* [3462] */
    (xdc_Char)0x6c,  /* [3463] */
    (xdc_Char)0x0,  /* [3464] */
    (xdc_Char)0x41,  /* [3465] */
    (xdc_Char)0x5f,  /* [3466] */
    (xdc_Char)0x61,  /* [3467] */
    (xdc_Char)0x6c,  /* [3468] */
    (xdc_Char)0x69,  /* [3469] */
    (xdc_Char)0x67,  /* [3470] */
    (xdc_Char)0x6e,  /* [3471] */
    (xdc_Char)0x3a,  /* [3472] */
    (xdc_Char)0x20,  /* [3473] */
    (xdc_Char)0x52,  /* [3474] */
    (xdc_Char)0x65,  /* [3475] */
    (xdc_Char)0x71,  /* [3476] */
    (xdc_Char)0x75,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x73,  /* [3479] */
    (xdc_Char)0x74,  /* [3480] */
    (xdc_Char)0x65,  /* [3481] */
    (xdc_Char)0x64,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x61,  /* [3484] */
    (xdc_Char)0x6c,  /* [3485] */
    (xdc_Char)0x69,  /* [3486] */
    (xdc_Char)0x67,  /* [3487] */
    (xdc_Char)0x6e,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x69,  /* [3490] */
    (xdc_Char)0x73,  /* [3491] */
    (xdc_Char)0x20,  /* [3492] */
    (xdc_Char)0x6e,  /* [3493] */
    (xdc_Char)0x6f,  /* [3494] */
    (xdc_Char)0x74,  /* [3495] */
    (xdc_Char)0x20,  /* [3496] */
    (xdc_Char)0x61,  /* [3497] */
    (xdc_Char)0x20,  /* [3498] */
    (xdc_Char)0x70,  /* [3499] */
    (xdc_Char)0x6f,  /* [3500] */
    (xdc_Char)0x77,  /* [3501] */
    (xdc_Char)0x65,  /* [3502] */
    (xdc_Char)0x72,  /* [3503] */
    (xdc_Char)0x20,  /* [3504] */
    (xdc_Char)0x6f,  /* [3505] */
    (xdc_Char)0x66,  /* [3506] */
    (xdc_Char)0x20,  /* [3507] */
    (xdc_Char)0x32,  /* [3508] */
    (xdc_Char)0x0,  /* [3509] */
    (xdc_Char)0x49,  /* [3510] */
    (xdc_Char)0x6e,  /* [3511] */
    (xdc_Char)0x76,  /* [3512] */
    (xdc_Char)0x61,  /* [3513] */
    (xdc_Char)0x6c,  /* [3514] */
    (xdc_Char)0x69,  /* [3515] */
    (xdc_Char)0x64,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x62,  /* [3518] */
    (xdc_Char)0x6c,  /* [3519] */
    (xdc_Char)0x6f,  /* [3520] */
    (xdc_Char)0x63,  /* [3521] */
    (xdc_Char)0x6b,  /* [3522] */
    (xdc_Char)0x20,  /* [3523] */
    (xdc_Char)0x61,  /* [3524] */
    (xdc_Char)0x64,  /* [3525] */
    (xdc_Char)0x64,  /* [3526] */
    (xdc_Char)0x72,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x73,  /* [3529] */
    (xdc_Char)0x73,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x6f,  /* [3532] */
    (xdc_Char)0x6e,  /* [3533] */
    (xdc_Char)0x20,  /* [3534] */
    (xdc_Char)0x74,  /* [3535] */
    (xdc_Char)0x68,  /* [3536] */
    (xdc_Char)0x65,  /* [3537] */
    (xdc_Char)0x20,  /* [3538] */
    (xdc_Char)0x66,  /* [3539] */
    (xdc_Char)0x72,  /* [3540] */
    (xdc_Char)0x65,  /* [3541] */
    (xdc_Char)0x65,  /* [3542] */
    (xdc_Char)0x2e,  /* [3543] */
    (xdc_Char)0x20,  /* [3544] */
    (xdc_Char)0x46,  /* [3545] */
    (xdc_Char)0x61,  /* [3546] */
    (xdc_Char)0x69,  /* [3547] */
    (xdc_Char)0x6c,  /* [3548] */
    (xdc_Char)0x65,  /* [3549] */
    (xdc_Char)0x64,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x74,  /* [3552] */
    (xdc_Char)0x6f,  /* [3553] */
    (xdc_Char)0x20,  /* [3554] */
    (xdc_Char)0x66,  /* [3555] */
    (xdc_Char)0x72,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x65,  /* [3558] */
    (xdc_Char)0x20,  /* [3559] */
    (xdc_Char)0x62,  /* [3560] */
    (xdc_Char)0x6c,  /* [3561] */
    (xdc_Char)0x6f,  /* [3562] */
    (xdc_Char)0x63,  /* [3563] */
    (xdc_Char)0x6b,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x62,  /* [3566] */
    (xdc_Char)0x61,  /* [3567] */
    (xdc_Char)0x63,  /* [3568] */
    (xdc_Char)0x6b,  /* [3569] */
    (xdc_Char)0x20,  /* [3570] */
    (xdc_Char)0x74,  /* [3571] */
    (xdc_Char)0x6f,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x68,  /* [3574] */
    (xdc_Char)0x65,  /* [3575] */
    (xdc_Char)0x61,  /* [3576] */
    (xdc_Char)0x70,  /* [3577] */
    (xdc_Char)0x2e,  /* [3578] */
    (xdc_Char)0x0,  /* [3579] */
    (xdc_Char)0x41,  /* [3580] */
    (xdc_Char)0x5f,  /* [3581] */
    (xdc_Char)0x64,  /* [3582] */
    (xdc_Char)0x6f,  /* [3583] */
    (xdc_Char)0x75,  /* [3584] */
    (xdc_Char)0x62,  /* [3585] */
    (xdc_Char)0x6c,  /* [3586] */
    (xdc_Char)0x65,  /* [3587] */
    (xdc_Char)0x46,  /* [3588] */
    (xdc_Char)0x72,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x65,  /* [3591] */
    (xdc_Char)0x3a,  /* [3592] */
    (xdc_Char)0x20,  /* [3593] */
    (xdc_Char)0x42,  /* [3594] */
    (xdc_Char)0x75,  /* [3595] */
    (xdc_Char)0x66,  /* [3596] */
    (xdc_Char)0x66,  /* [3597] */
    (xdc_Char)0x65,  /* [3598] */
    (xdc_Char)0x72,  /* [3599] */
    (xdc_Char)0x20,  /* [3600] */
    (xdc_Char)0x61,  /* [3601] */
    (xdc_Char)0x6c,  /* [3602] */
    (xdc_Char)0x72,  /* [3603] */
    (xdc_Char)0x65,  /* [3604] */
    (xdc_Char)0x61,  /* [3605] */
    (xdc_Char)0x64,  /* [3606] */
    (xdc_Char)0x79,  /* [3607] */
    (xdc_Char)0x20,  /* [3608] */
    (xdc_Char)0x66,  /* [3609] */
    (xdc_Char)0x72,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x65,  /* [3612] */
    (xdc_Char)0x0,  /* [3613] */
    (xdc_Char)0x41,  /* [3614] */
    (xdc_Char)0x5f,  /* [3615] */
    (xdc_Char)0x62,  /* [3616] */
    (xdc_Char)0x75,  /* [3617] */
    (xdc_Char)0x66,  /* [3618] */
    (xdc_Char)0x4f,  /* [3619] */
    (xdc_Char)0x76,  /* [3620] */
    (xdc_Char)0x65,  /* [3621] */
    (xdc_Char)0x72,  /* [3622] */
    (xdc_Char)0x66,  /* [3623] */
    (xdc_Char)0x6c,  /* [3624] */
    (xdc_Char)0x6f,  /* [3625] */
    (xdc_Char)0x77,  /* [3626] */
    (xdc_Char)0x3a,  /* [3627] */
    (xdc_Char)0x20,  /* [3628] */
    (xdc_Char)0x42,  /* [3629] */
    (xdc_Char)0x75,  /* [3630] */
    (xdc_Char)0x66,  /* [3631] */
    (xdc_Char)0x66,  /* [3632] */
    (xdc_Char)0x65,  /* [3633] */
    (xdc_Char)0x72,  /* [3634] */
    (xdc_Char)0x20,  /* [3635] */
    (xdc_Char)0x6f,  /* [3636] */
    (xdc_Char)0x76,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x72,  /* [3639] */
    (xdc_Char)0x66,  /* [3640] */
    (xdc_Char)0x6c,  /* [3641] */
    (xdc_Char)0x6f,  /* [3642] */
    (xdc_Char)0x77,  /* [3643] */
    (xdc_Char)0x0,  /* [3644] */
    (xdc_Char)0x41,  /* [3645] */
    (xdc_Char)0x5f,  /* [3646] */
    (xdc_Char)0x6e,  /* [3647] */
    (xdc_Char)0x6f,  /* [3648] */
    (xdc_Char)0x74,  /* [3649] */
    (xdc_Char)0x45,  /* [3650] */
    (xdc_Char)0x6d,  /* [3651] */
    (xdc_Char)0x70,  /* [3652] */
    (xdc_Char)0x74,  /* [3653] */
    (xdc_Char)0x79,  /* [3654] */
    (xdc_Char)0x3a,  /* [3655] */
    (xdc_Char)0x20,  /* [3656] */
    (xdc_Char)0x48,  /* [3657] */
    (xdc_Char)0x65,  /* [3658] */
    (xdc_Char)0x61,  /* [3659] */
    (xdc_Char)0x70,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x6e,  /* [3662] */
    (xdc_Char)0x6f,  /* [3663] */
    (xdc_Char)0x74,  /* [3664] */
    (xdc_Char)0x20,  /* [3665] */
    (xdc_Char)0x65,  /* [3666] */
    (xdc_Char)0x6d,  /* [3667] */
    (xdc_Char)0x70,  /* [3668] */
    (xdc_Char)0x74,  /* [3669] */
    (xdc_Char)0x79,  /* [3670] */
    (xdc_Char)0x0,  /* [3671] */
    (xdc_Char)0x41,  /* [3672] */
    (xdc_Char)0x5f,  /* [3673] */
    (xdc_Char)0x6e,  /* [3674] */
    (xdc_Char)0x75,  /* [3675] */
    (xdc_Char)0x6c,  /* [3676] */
    (xdc_Char)0x6c,  /* [3677] */
    (xdc_Char)0x4f,  /* [3678] */
    (xdc_Char)0x62,  /* [3679] */
    (xdc_Char)0x6a,  /* [3680] */
    (xdc_Char)0x65,  /* [3681] */
    (xdc_Char)0x63,  /* [3682] */
    (xdc_Char)0x74,  /* [3683] */
    (xdc_Char)0x3a,  /* [3684] */
    (xdc_Char)0x20,  /* [3685] */
    (xdc_Char)0x48,  /* [3686] */
    (xdc_Char)0x65,  /* [3687] */
    (xdc_Char)0x61,  /* [3688] */
    (xdc_Char)0x70,  /* [3689] */
    (xdc_Char)0x54,  /* [3690] */
    (xdc_Char)0x72,  /* [3691] */
    (xdc_Char)0x61,  /* [3692] */
    (xdc_Char)0x63,  /* [3693] */
    (xdc_Char)0x6b,  /* [3694] */
    (xdc_Char)0x5f,  /* [3695] */
    (xdc_Char)0x70,  /* [3696] */
    (xdc_Char)0x72,  /* [3697] */
    (xdc_Char)0x69,  /* [3698] */
    (xdc_Char)0x6e,  /* [3699] */
    (xdc_Char)0x74,  /* [3700] */
    (xdc_Char)0x48,  /* [3701] */
    (xdc_Char)0x65,  /* [3702] */
    (xdc_Char)0x61,  /* [3703] */
    (xdc_Char)0x70,  /* [3704] */
    (xdc_Char)0x20,  /* [3705] */
    (xdc_Char)0x63,  /* [3706] */
    (xdc_Char)0x61,  /* [3707] */
    (xdc_Char)0x6c,  /* [3708] */
    (xdc_Char)0x6c,  /* [3709] */
    (xdc_Char)0x65,  /* [3710] */
    (xdc_Char)0x64,  /* [3711] */
    (xdc_Char)0x20,  /* [3712] */
    (xdc_Char)0x77,  /* [3713] */
    (xdc_Char)0x69,  /* [3714] */
    (xdc_Char)0x74,  /* [3715] */
    (xdc_Char)0x68,  /* [3716] */
    (xdc_Char)0x20,  /* [3717] */
    (xdc_Char)0x6e,  /* [3718] */
    (xdc_Char)0x75,  /* [3719] */
    (xdc_Char)0x6c,  /* [3720] */
    (xdc_Char)0x6c,  /* [3721] */
    (xdc_Char)0x20,  /* [3722] */
    (xdc_Char)0x6f,  /* [3723] */
    (xdc_Char)0x62,  /* [3724] */
    (xdc_Char)0x6a,  /* [3725] */
    (xdc_Char)0x0,  /* [3726] */
    (xdc_Char)0x41,  /* [3727] */
    (xdc_Char)0x5f,  /* [3728] */
    (xdc_Char)0x6e,  /* [3729] */
    (xdc_Char)0x6f,  /* [3730] */
    (xdc_Char)0x74,  /* [3731] */
    (xdc_Char)0x41,  /* [3732] */
    (xdc_Char)0x76,  /* [3733] */
    (xdc_Char)0x61,  /* [3734] */
    (xdc_Char)0x69,  /* [3735] */
    (xdc_Char)0x6c,  /* [3736] */
    (xdc_Char)0x61,  /* [3737] */
    (xdc_Char)0x62,  /* [3738] */
    (xdc_Char)0x6c,  /* [3739] */
    (xdc_Char)0x65,  /* [3740] */
    (xdc_Char)0x3a,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x73,  /* [3743] */
    (xdc_Char)0x74,  /* [3744] */
    (xdc_Char)0x61,  /* [3745] */
    (xdc_Char)0x74,  /* [3746] */
    (xdc_Char)0x69,  /* [3747] */
    (xdc_Char)0x63,  /* [3748] */
    (xdc_Char)0x20,  /* [3749] */
    (xdc_Char)0x63,  /* [3750] */
    (xdc_Char)0x72,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x61,  /* [3753] */
    (xdc_Char)0x74,  /* [3754] */
    (xdc_Char)0x65,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x20,  /* [3757] */
    (xdc_Char)0x74,  /* [3758] */
    (xdc_Char)0x69,  /* [3759] */
    (xdc_Char)0x6d,  /* [3760] */
    (xdc_Char)0x65,  /* [3761] */
    (xdc_Char)0x72,  /* [3762] */
    (xdc_Char)0x20,  /* [3763] */
    (xdc_Char)0x6e,  /* [3764] */
    (xdc_Char)0x6f,  /* [3765] */
    (xdc_Char)0x74,  /* [3766] */
    (xdc_Char)0x20,  /* [3767] */
    (xdc_Char)0x61,  /* [3768] */
    (xdc_Char)0x76,  /* [3769] */
    (xdc_Char)0x61,  /* [3770] */
    (xdc_Char)0x69,  /* [3771] */
    (xdc_Char)0x6c,  /* [3772] */
    (xdc_Char)0x61,  /* [3773] */
    (xdc_Char)0x62,  /* [3774] */
    (xdc_Char)0x6c,  /* [3775] */
    (xdc_Char)0x65,  /* [3776] */
    (xdc_Char)0x0,  /* [3777] */
    (xdc_Char)0x61,  /* [3778] */
    (xdc_Char)0x73,  /* [3779] */
    (xdc_Char)0x73,  /* [3780] */
    (xdc_Char)0x65,  /* [3781] */
    (xdc_Char)0x72,  /* [3782] */
    (xdc_Char)0x74,  /* [3783] */
    (xdc_Char)0x69,  /* [3784] */
    (xdc_Char)0x6f,  /* [3785] */
    (xdc_Char)0x6e,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x66,  /* [3788] */
    (xdc_Char)0x61,  /* [3789] */
    (xdc_Char)0x69,  /* [3790] */
    (xdc_Char)0x6c,  /* [3791] */
    (xdc_Char)0x75,  /* [3792] */
    (xdc_Char)0x72,  /* [3793] */
    (xdc_Char)0x65,  /* [3794] */
    (xdc_Char)0x25,  /* [3795] */
    (xdc_Char)0x73,  /* [3796] */
    (xdc_Char)0x25,  /* [3797] */
    (xdc_Char)0x73,  /* [3798] */
    (xdc_Char)0x0,  /* [3799] */
    (xdc_Char)0x25,  /* [3800] */
    (xdc_Char)0x24,  /* [3801] */
    (xdc_Char)0x53,  /* [3802] */
    (xdc_Char)0x0,  /* [3803] */
    (xdc_Char)0x6f,  /* [3804] */
    (xdc_Char)0x75,  /* [3805] */
    (xdc_Char)0x74,  /* [3806] */
    (xdc_Char)0x20,  /* [3807] */
    (xdc_Char)0x6f,  /* [3808] */
    (xdc_Char)0x66,  /* [3809] */
    (xdc_Char)0x20,  /* [3810] */
    (xdc_Char)0x6d,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x6d,  /* [3813] */
    (xdc_Char)0x6f,  /* [3814] */
    (xdc_Char)0x72,  /* [3815] */
    (xdc_Char)0x79,  /* [3816] */
    (xdc_Char)0x3a,  /* [3817] */
    (xdc_Char)0x20,  /* [3818] */
    (xdc_Char)0x68,  /* [3819] */
    (xdc_Char)0x65,  /* [3820] */
    (xdc_Char)0x61,  /* [3821] */
    (xdc_Char)0x70,  /* [3822] */
    (xdc_Char)0x3d,  /* [3823] */
    (xdc_Char)0x30,  /* [3824] */
    (xdc_Char)0x78,  /* [3825] */
    (xdc_Char)0x25,  /* [3826] */
    (xdc_Char)0x78,  /* [3827] */
    (xdc_Char)0x2c,  /* [3828] */
    (xdc_Char)0x20,  /* [3829] */
    (xdc_Char)0x73,  /* [3830] */
    (xdc_Char)0x69,  /* [3831] */
    (xdc_Char)0x7a,  /* [3832] */
    (xdc_Char)0x65,  /* [3833] */
    (xdc_Char)0x3d,  /* [3834] */
    (xdc_Char)0x25,  /* [3835] */
    (xdc_Char)0x75,  /* [3836] */
    (xdc_Char)0x0,  /* [3837] */
    (xdc_Char)0x25,  /* [3838] */
    (xdc_Char)0x73,  /* [3839] */
    (xdc_Char)0x20,  /* [3840] */
    (xdc_Char)0x30,  /* [3841] */
    (xdc_Char)0x78,  /* [3842] */
    (xdc_Char)0x25,  /* [3843] */
    (xdc_Char)0x78,  /* [3844] */
    (xdc_Char)0x0,  /* [3845] */
    (xdc_Char)0x45,  /* [3846] */
    (xdc_Char)0x5f,  /* [3847] */
    (xdc_Char)0x62,  /* [3848] */
    (xdc_Char)0x61,  /* [3849] */
    (xdc_Char)0x64,  /* [3850] */
    (xdc_Char)0x4c,  /* [3851] */
    (xdc_Char)0x65,  /* [3852] */
    (xdc_Char)0x76,  /* [3853] */
    (xdc_Char)0x65,  /* [3854] */
    (xdc_Char)0x6c,  /* [3855] */
    (xdc_Char)0x3a,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x42,  /* [3858] */
    (xdc_Char)0x61,  /* [3859] */
    (xdc_Char)0x64,  /* [3860] */
    (xdc_Char)0x20,  /* [3861] */
    (xdc_Char)0x66,  /* [3862] */
    (xdc_Char)0x69,  /* [3863] */
    (xdc_Char)0x6c,  /* [3864] */
    (xdc_Char)0x74,  /* [3865] */
    (xdc_Char)0x65,  /* [3866] */
    (xdc_Char)0x72,  /* [3867] */
    (xdc_Char)0x20,  /* [3868] */
    (xdc_Char)0x6c,  /* [3869] */
    (xdc_Char)0x65,  /* [3870] */
    (xdc_Char)0x76,  /* [3871] */
    (xdc_Char)0x65,  /* [3872] */
    (xdc_Char)0x6c,  /* [3873] */
    (xdc_Char)0x20,  /* [3874] */
    (xdc_Char)0x76,  /* [3875] */
    (xdc_Char)0x61,  /* [3876] */
    (xdc_Char)0x6c,  /* [3877] */
    (xdc_Char)0x75,  /* [3878] */
    (xdc_Char)0x65,  /* [3879] */
    (xdc_Char)0x3a,  /* [3880] */
    (xdc_Char)0x20,  /* [3881] */
    (xdc_Char)0x25,  /* [3882] */
    (xdc_Char)0x64,  /* [3883] */
    (xdc_Char)0x0,  /* [3884] */
    (xdc_Char)0x66,  /* [3885] */
    (xdc_Char)0x72,  /* [3886] */
    (xdc_Char)0x65,  /* [3887] */
    (xdc_Char)0x65,  /* [3888] */
    (xdc_Char)0x28,  /* [3889] */
    (xdc_Char)0x29,  /* [3890] */
    (xdc_Char)0x20,  /* [3891] */
    (xdc_Char)0x69,  /* [3892] */
    (xdc_Char)0x6e,  /* [3893] */
    (xdc_Char)0x76,  /* [3894] */
    (xdc_Char)0x61,  /* [3895] */
    (xdc_Char)0x6c,  /* [3896] */
    (xdc_Char)0x69,  /* [3897] */
    (xdc_Char)0x64,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x69,  /* [3900] */
    (xdc_Char)0x6e,  /* [3901] */
    (xdc_Char)0x20,  /* [3902] */
    (xdc_Char)0x67,  /* [3903] */
    (xdc_Char)0x72,  /* [3904] */
    (xdc_Char)0x6f,  /* [3905] */
    (xdc_Char)0x77,  /* [3906] */
    (xdc_Char)0x74,  /* [3907] */
    (xdc_Char)0x68,  /* [3908] */
    (xdc_Char)0x2d,  /* [3909] */
    (xdc_Char)0x6f,  /* [3910] */
    (xdc_Char)0x6e,  /* [3911] */
    (xdc_Char)0x6c,  /* [3912] */
    (xdc_Char)0x79,  /* [3913] */
    (xdc_Char)0x20,  /* [3914] */
    (xdc_Char)0x48,  /* [3915] */
    (xdc_Char)0x65,  /* [3916] */
    (xdc_Char)0x61,  /* [3917] */
    (xdc_Char)0x70,  /* [3918] */
    (xdc_Char)0x4d,  /* [3919] */
    (xdc_Char)0x69,  /* [3920] */
    (xdc_Char)0x6e,  /* [3921] */
    (xdc_Char)0x0,  /* [3922] */
    (xdc_Char)0x54,  /* [3923] */
    (xdc_Char)0x68,  /* [3924] */
    (xdc_Char)0x65,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x52,  /* [3927] */
    (xdc_Char)0x54,  /* [3928] */
    (xdc_Char)0x53,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x68,  /* [3931] */
    (xdc_Char)0x65,  /* [3932] */
    (xdc_Char)0x61,  /* [3933] */
    (xdc_Char)0x70,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x69,  /* [3936] */
    (xdc_Char)0x73,  /* [3937] */
    (xdc_Char)0x20,  /* [3938] */
    (xdc_Char)0x75,  /* [3939] */
    (xdc_Char)0x73,  /* [3940] */
    (xdc_Char)0x65,  /* [3941] */
    (xdc_Char)0x64,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x75,  /* [3944] */
    (xdc_Char)0x70,  /* [3945] */
    (xdc_Char)0x2e,  /* [3946] */
    (xdc_Char)0x20,  /* [3947] */
    (xdc_Char)0x45,  /* [3948] */
    (xdc_Char)0x78,  /* [3949] */
    (xdc_Char)0x61,  /* [3950] */
    (xdc_Char)0x6d,  /* [3951] */
    (xdc_Char)0x69,  /* [3952] */
    (xdc_Char)0x6e,  /* [3953] */
    (xdc_Char)0x65,  /* [3954] */
    (xdc_Char)0x20,  /* [3955] */
    (xdc_Char)0x50,  /* [3956] */
    (xdc_Char)0x72,  /* [3957] */
    (xdc_Char)0x6f,  /* [3958] */
    (xdc_Char)0x67,  /* [3959] */
    (xdc_Char)0x72,  /* [3960] */
    (xdc_Char)0x61,  /* [3961] */
    (xdc_Char)0x6d,  /* [3962] */
    (xdc_Char)0x2e,  /* [3963] */
    (xdc_Char)0x68,  /* [3964] */
    (xdc_Char)0x65,  /* [3965] */
    (xdc_Char)0x61,  /* [3966] */
    (xdc_Char)0x70,  /* [3967] */
    (xdc_Char)0x2e,  /* [3968] */
    (xdc_Char)0x0,  /* [3969] */
    (xdc_Char)0x45,  /* [3970] */
    (xdc_Char)0x5f,  /* [3971] */
    (xdc_Char)0x62,  /* [3972] */
    (xdc_Char)0x61,  /* [3973] */
    (xdc_Char)0x64,  /* [3974] */
    (xdc_Char)0x43,  /* [3975] */
    (xdc_Char)0x6f,  /* [3976] */
    (xdc_Char)0x6d,  /* [3977] */
    (xdc_Char)0x6d,  /* [3978] */
    (xdc_Char)0x61,  /* [3979] */
    (xdc_Char)0x6e,  /* [3980] */
    (xdc_Char)0x64,  /* [3981] */
    (xdc_Char)0x3a,  /* [3982] */
    (xdc_Char)0x20,  /* [3983] */
    (xdc_Char)0x52,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x63,  /* [3986] */
    (xdc_Char)0x65,  /* [3987] */
    (xdc_Char)0x69,  /* [3988] */
    (xdc_Char)0x76,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x64,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x69,  /* [3993] */
    (xdc_Char)0x6e,  /* [3994] */
    (xdc_Char)0x76,  /* [3995] */
    (xdc_Char)0x61,  /* [3996] */
    (xdc_Char)0x6c,  /* [3997] */
    (xdc_Char)0x69,  /* [3998] */
    (xdc_Char)0x64,  /* [3999] */
    (xdc_Char)0x20,  /* [4000] */
    (xdc_Char)0x63,  /* [4001] */
    (xdc_Char)0x6f,  /* [4002] */
    (xdc_Char)0x6d,  /* [4003] */
    (xdc_Char)0x6d,  /* [4004] */
    (xdc_Char)0x61,  /* [4005] */
    (xdc_Char)0x6e,  /* [4006] */
    (xdc_Char)0x64,  /* [4007] */
    (xdc_Char)0x2c,  /* [4008] */
    (xdc_Char)0x20,  /* [4009] */
    (xdc_Char)0x69,  /* [4010] */
    (xdc_Char)0x64,  /* [4011] */
    (xdc_Char)0x3a,  /* [4012] */
    (xdc_Char)0x20,  /* [4013] */
    (xdc_Char)0x25,  /* [4014] */
    (xdc_Char)0x64,  /* [4015] */
    (xdc_Char)0x2e,  /* [4016] */
    (xdc_Char)0x0,  /* [4017] */
    (xdc_Char)0x45,  /* [4018] */
    (xdc_Char)0x5f,  /* [4019] */
    (xdc_Char)0x75,  /* [4020] */
    (xdc_Char)0x6e,  /* [4021] */
    (xdc_Char)0x70,  /* [4022] */
    (xdc_Char)0x6c,  /* [4023] */
    (xdc_Char)0x75,  /* [4024] */
    (xdc_Char)0x67,  /* [4025] */
    (xdc_Char)0x67,  /* [4026] */
    (xdc_Char)0x65,  /* [4027] */
    (xdc_Char)0x64,  /* [4028] */
    (xdc_Char)0x45,  /* [4029] */
    (xdc_Char)0x76,  /* [4030] */
    (xdc_Char)0x65,  /* [4031] */
    (xdc_Char)0x6e,  /* [4032] */
    (xdc_Char)0x74,  /* [4033] */
    (xdc_Char)0x3a,  /* [4034] */
    (xdc_Char)0x20,  /* [4035] */
    (xdc_Char)0x45,  /* [4036] */
    (xdc_Char)0x76,  /* [4037] */
    (xdc_Char)0x65,  /* [4038] */
    (xdc_Char)0x6e,  /* [4039] */
    (xdc_Char)0x74,  /* [4040] */
    (xdc_Char)0x23,  /* [4041] */
    (xdc_Char)0x20,  /* [4042] */
    (xdc_Char)0x25,  /* [4043] */
    (xdc_Char)0x64,  /* [4044] */
    (xdc_Char)0x20,  /* [4045] */
    (xdc_Char)0x69,  /* [4046] */
    (xdc_Char)0x73,  /* [4047] */
    (xdc_Char)0x20,  /* [4048] */
    (xdc_Char)0x75,  /* [4049] */
    (xdc_Char)0x6e,  /* [4050] */
    (xdc_Char)0x70,  /* [4051] */
    (xdc_Char)0x6c,  /* [4052] */
    (xdc_Char)0x75,  /* [4053] */
    (xdc_Char)0x67,  /* [4054] */
    (xdc_Char)0x67,  /* [4055] */
    (xdc_Char)0x65,  /* [4056] */
    (xdc_Char)0x64,  /* [4057] */
    (xdc_Char)0x0,  /* [4058] */
    (xdc_Char)0x45,  /* [4059] */
    (xdc_Char)0x5f,  /* [4060] */
    (xdc_Char)0x65,  /* [4061] */
    (xdc_Char)0x78,  /* [4062] */
    (xdc_Char)0x63,  /* [4063] */
    (xdc_Char)0x65,  /* [4064] */
    (xdc_Char)0x70,  /* [4065] */
    (xdc_Char)0x74,  /* [4066] */
    (xdc_Char)0x69,  /* [4067] */
    (xdc_Char)0x6f,  /* [4068] */
    (xdc_Char)0x6e,  /* [4069] */
    (xdc_Char)0x4d,  /* [4070] */
    (xdc_Char)0x69,  /* [4071] */
    (xdc_Char)0x6e,  /* [4072] */
    (xdc_Char)0x3a,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x70,  /* [4075] */
    (xdc_Char)0x63,  /* [4076] */
    (xdc_Char)0x20,  /* [4077] */
    (xdc_Char)0x3d,  /* [4078] */
    (xdc_Char)0x20,  /* [4079] */
    (xdc_Char)0x30,  /* [4080] */
    (xdc_Char)0x78,  /* [4081] */
    (xdc_Char)0x25,  /* [4082] */
    (xdc_Char)0x30,  /* [4083] */
    (xdc_Char)0x38,  /* [4084] */
    (xdc_Char)0x78,  /* [4085] */
    (xdc_Char)0x2c,  /* [4086] */
    (xdc_Char)0x20,  /* [4087] */
    (xdc_Char)0x73,  /* [4088] */
    (xdc_Char)0x70,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x3d,  /* [4091] */
    (xdc_Char)0x20,  /* [4092] */
    (xdc_Char)0x30,  /* [4093] */
    (xdc_Char)0x78,  /* [4094] */
    (xdc_Char)0x25,  /* [4095] */
    (xdc_Char)0x30,  /* [4096] */
    (xdc_Char)0x38,  /* [4097] */
    (xdc_Char)0x78,  /* [4098] */
    (xdc_Char)0x2e,  /* [4099] */
    (xdc_Char)0xa,  /* [4100] */
    (xdc_Char)0x54,  /* [4101] */
    (xdc_Char)0x6f,  /* [4102] */
    (xdc_Char)0x20,  /* [4103] */
    (xdc_Char)0x73,  /* [4104] */
    (xdc_Char)0x65,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x20,  /* [4107] */
    (xdc_Char)0x6d,  /* [4108] */
    (xdc_Char)0x6f,  /* [4109] */
    (xdc_Char)0x72,  /* [4110] */
    (xdc_Char)0x65,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x65,  /* [4113] */
    (xdc_Char)0x78,  /* [4114] */
    (xdc_Char)0x63,  /* [4115] */
    (xdc_Char)0x65,  /* [4116] */
    (xdc_Char)0x70,  /* [4117] */
    (xdc_Char)0x74,  /* [4118] */
    (xdc_Char)0x69,  /* [4119] */
    (xdc_Char)0x6f,  /* [4120] */
    (xdc_Char)0x6e,  /* [4121] */
    (xdc_Char)0x20,  /* [4122] */
    (xdc_Char)0x64,  /* [4123] */
    (xdc_Char)0x65,  /* [4124] */
    (xdc_Char)0x74,  /* [4125] */
    (xdc_Char)0x61,  /* [4126] */
    (xdc_Char)0x69,  /* [4127] */
    (xdc_Char)0x6c,  /* [4128] */
    (xdc_Char)0x2c,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x75,  /* [4131] */
    (xdc_Char)0x73,  /* [4132] */
    (xdc_Char)0x65,  /* [4133] */
    (xdc_Char)0x20,  /* [4134] */
    (xdc_Char)0x52,  /* [4135] */
    (xdc_Char)0x4f,  /* [4136] */
    (xdc_Char)0x56,  /* [4137] */
    (xdc_Char)0x20,  /* [4138] */
    (xdc_Char)0x6f,  /* [4139] */
    (xdc_Char)0x72,  /* [4140] */
    (xdc_Char)0x20,  /* [4141] */
    (xdc_Char)0x73,  /* [4142] */
    (xdc_Char)0x65,  /* [4143] */
    (xdc_Char)0x74,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x27,  /* [4146] */
    (xdc_Char)0x74,  /* [4147] */
    (xdc_Char)0x69,  /* [4148] */
    (xdc_Char)0x2e,  /* [4149] */
    (xdc_Char)0x73,  /* [4150] */
    (xdc_Char)0x79,  /* [4151] */
    (xdc_Char)0x73,  /* [4152] */
    (xdc_Char)0x62,  /* [4153] */
    (xdc_Char)0x69,  /* [4154] */
    (xdc_Char)0x6f,  /* [4155] */
    (xdc_Char)0x73,  /* [4156] */
    (xdc_Char)0x2e,  /* [4157] */
    (xdc_Char)0x66,  /* [4158] */
    (xdc_Char)0x61,  /* [4159] */
    (xdc_Char)0x6d,  /* [4160] */
    (xdc_Char)0x69,  /* [4161] */
    (xdc_Char)0x6c,  /* [4162] */
    (xdc_Char)0x79,  /* [4163] */
    (xdc_Char)0x2e,  /* [4164] */
    (xdc_Char)0x63,  /* [4165] */
    (xdc_Char)0x36,  /* [4166] */
    (xdc_Char)0x34,  /* [4167] */
    (xdc_Char)0x70,  /* [4168] */
    (xdc_Char)0x2e,  /* [4169] */
    (xdc_Char)0x45,  /* [4170] */
    (xdc_Char)0x78,  /* [4171] */
    (xdc_Char)0x63,  /* [4172] */
    (xdc_Char)0x65,  /* [4173] */
    (xdc_Char)0x70,  /* [4174] */
    (xdc_Char)0x74,  /* [4175] */
    (xdc_Char)0x69,  /* [4176] */
    (xdc_Char)0x6f,  /* [4177] */
    (xdc_Char)0x6e,  /* [4178] */
    (xdc_Char)0x2e,  /* [4179] */
    (xdc_Char)0x65,  /* [4180] */
    (xdc_Char)0x6e,  /* [4181] */
    (xdc_Char)0x61,  /* [4182] */
    (xdc_Char)0x62,  /* [4183] */
    (xdc_Char)0x6c,  /* [4184] */
    (xdc_Char)0x65,  /* [4185] */
    (xdc_Char)0x50,  /* [4186] */
    (xdc_Char)0x72,  /* [4187] */
    (xdc_Char)0x69,  /* [4188] */
    (xdc_Char)0x6e,  /* [4189] */
    (xdc_Char)0x74,  /* [4190] */
    (xdc_Char)0x20,  /* [4191] */
    (xdc_Char)0x3d,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x74,  /* [4194] */
    (xdc_Char)0x72,  /* [4195] */
    (xdc_Char)0x75,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x3b,  /* [4198] */
    (xdc_Char)0x27,  /* [4199] */
    (xdc_Char)0x0,  /* [4200] */
    (xdc_Char)0x45,  /* [4201] */
    (xdc_Char)0x5f,  /* [4202] */
    (xdc_Char)0x65,  /* [4203] */
    (xdc_Char)0x78,  /* [4204] */
    (xdc_Char)0x63,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x70,  /* [4207] */
    (xdc_Char)0x74,  /* [4208] */
    (xdc_Char)0x69,  /* [4209] */
    (xdc_Char)0x6f,  /* [4210] */
    (xdc_Char)0x6e,  /* [4211] */
    (xdc_Char)0x4d,  /* [4212] */
    (xdc_Char)0x61,  /* [4213] */
    (xdc_Char)0x78,  /* [4214] */
    (xdc_Char)0x3a,  /* [4215] */
    (xdc_Char)0x20,  /* [4216] */
    (xdc_Char)0x70,  /* [4217] */
    (xdc_Char)0x63,  /* [4218] */
    (xdc_Char)0x20,  /* [4219] */
    (xdc_Char)0x3d,  /* [4220] */
    (xdc_Char)0x20,  /* [4221] */
    (xdc_Char)0x30,  /* [4222] */
    (xdc_Char)0x78,  /* [4223] */
    (xdc_Char)0x25,  /* [4224] */
    (xdc_Char)0x30,  /* [4225] */
    (xdc_Char)0x38,  /* [4226] */
    (xdc_Char)0x78,  /* [4227] */
    (xdc_Char)0x2c,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x73,  /* [4230] */
    (xdc_Char)0x70,  /* [4231] */
    (xdc_Char)0x20,  /* [4232] */
    (xdc_Char)0x3d,  /* [4233] */
    (xdc_Char)0x20,  /* [4234] */
    (xdc_Char)0x30,  /* [4235] */
    (xdc_Char)0x78,  /* [4236] */
    (xdc_Char)0x25,  /* [4237] */
    (xdc_Char)0x30,  /* [4238] */
    (xdc_Char)0x38,  /* [4239] */
    (xdc_Char)0x78,  /* [4240] */
    (xdc_Char)0x2e,  /* [4241] */
    (xdc_Char)0x0,  /* [4242] */
    (xdc_Char)0x45,  /* [4243] */
    (xdc_Char)0x5f,  /* [4244] */
    (xdc_Char)0x61,  /* [4245] */
    (xdc_Char)0x6c,  /* [4246] */
    (xdc_Char)0x72,  /* [4247] */
    (xdc_Char)0x65,  /* [4248] */
    (xdc_Char)0x61,  /* [4249] */
    (xdc_Char)0x64,  /* [4250] */
    (xdc_Char)0x79,  /* [4251] */
    (xdc_Char)0x44,  /* [4252] */
    (xdc_Char)0x65,  /* [4253] */
    (xdc_Char)0x66,  /* [4254] */
    (xdc_Char)0x69,  /* [4255] */
    (xdc_Char)0x6e,  /* [4256] */
    (xdc_Char)0x65,  /* [4257] */
    (xdc_Char)0x64,  /* [4258] */
    (xdc_Char)0x3a,  /* [4259] */
    (xdc_Char)0x20,  /* [4260] */
    (xdc_Char)0x48,  /* [4261] */
    (xdc_Char)0x77,  /* [4262] */
    (xdc_Char)0x69,  /* [4263] */
    (xdc_Char)0x20,  /* [4264] */
    (xdc_Char)0x61,  /* [4265] */
    (xdc_Char)0x6c,  /* [4266] */
    (xdc_Char)0x72,  /* [4267] */
    (xdc_Char)0x65,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x64,  /* [4270] */
    (xdc_Char)0x79,  /* [4271] */
    (xdc_Char)0x20,  /* [4272] */
    (xdc_Char)0x64,  /* [4273] */
    (xdc_Char)0x65,  /* [4274] */
    (xdc_Char)0x66,  /* [4275] */
    (xdc_Char)0x69,  /* [4276] */
    (xdc_Char)0x6e,  /* [4277] */
    (xdc_Char)0x65,  /* [4278] */
    (xdc_Char)0x64,  /* [4279] */
    (xdc_Char)0x3a,  /* [4280] */
    (xdc_Char)0x20,  /* [4281] */
    (xdc_Char)0x69,  /* [4282] */
    (xdc_Char)0x6e,  /* [4283] */
    (xdc_Char)0x74,  /* [4284] */
    (xdc_Char)0x72,  /* [4285] */
    (xdc_Char)0x23,  /* [4286] */
    (xdc_Char)0x20,  /* [4287] */
    (xdc_Char)0x25,  /* [4288] */
    (xdc_Char)0x64,  /* [4289] */
    (xdc_Char)0x0,  /* [4290] */
    (xdc_Char)0x45,  /* [4291] */
    (xdc_Char)0x5f,  /* [4292] */
    (xdc_Char)0x68,  /* [4293] */
    (xdc_Char)0x61,  /* [4294] */
    (xdc_Char)0x6e,  /* [4295] */
    (xdc_Char)0x64,  /* [4296] */
    (xdc_Char)0x6c,  /* [4297] */
    (xdc_Char)0x65,  /* [4298] */
    (xdc_Char)0x4e,  /* [4299] */
    (xdc_Char)0x6f,  /* [4300] */
    (xdc_Char)0x74,  /* [4301] */
    (xdc_Char)0x46,  /* [4302] */
    (xdc_Char)0x6f,  /* [4303] */
    (xdc_Char)0x75,  /* [4304] */
    (xdc_Char)0x6e,  /* [4305] */
    (xdc_Char)0x64,  /* [4306] */
    (xdc_Char)0x3a,  /* [4307] */
    (xdc_Char)0x20,  /* [4308] */
    (xdc_Char)0x48,  /* [4309] */
    (xdc_Char)0x77,  /* [4310] */
    (xdc_Char)0x69,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x68,  /* [4313] */
    (xdc_Char)0x61,  /* [4314] */
    (xdc_Char)0x6e,  /* [4315] */
    (xdc_Char)0x64,  /* [4316] */
    (xdc_Char)0x6c,  /* [4317] */
    (xdc_Char)0x65,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x6e,  /* [4320] */
    (xdc_Char)0x6f,  /* [4321] */
    (xdc_Char)0x74,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x66,  /* [4324] */
    (xdc_Char)0x6f,  /* [4325] */
    (xdc_Char)0x75,  /* [4326] */
    (xdc_Char)0x6e,  /* [4327] */
    (xdc_Char)0x64,  /* [4328] */
    (xdc_Char)0x3a,  /* [4329] */
    (xdc_Char)0x20,  /* [4330] */
    (xdc_Char)0x30,  /* [4331] */
    (xdc_Char)0x78,  /* [4332] */
    (xdc_Char)0x25,  /* [4333] */
    (xdc_Char)0x78,  /* [4334] */
    (xdc_Char)0x0,  /* [4335] */
    (xdc_Char)0x45,  /* [4336] */
    (xdc_Char)0x5f,  /* [4337] */
    (xdc_Char)0x61,  /* [4338] */
    (xdc_Char)0x6c,  /* [4339] */
    (xdc_Char)0x6c,  /* [4340] */
    (xdc_Char)0x6f,  /* [4341] */
    (xdc_Char)0x63,  /* [4342] */
    (xdc_Char)0x53,  /* [4343] */
    (xdc_Char)0x43,  /* [4344] */
    (xdc_Char)0x46,  /* [4345] */
    (xdc_Char)0x61,  /* [4346] */
    (xdc_Char)0x69,  /* [4347] */
    (xdc_Char)0x6c,  /* [4348] */
    (xdc_Char)0x65,  /* [4349] */
    (xdc_Char)0x64,  /* [4350] */
    (xdc_Char)0x3a,  /* [4351] */
    (xdc_Char)0x20,  /* [4352] */
    (xdc_Char)0x41,  /* [4353] */
    (xdc_Char)0x6c,  /* [4354] */
    (xdc_Char)0x6c,  /* [4355] */
    (xdc_Char)0x6f,  /* [4356] */
    (xdc_Char)0x63,  /* [4357] */
    (xdc_Char)0x20,  /* [4358] */
    (xdc_Char)0x73,  /* [4359] */
    (xdc_Char)0x65,  /* [4360] */
    (xdc_Char)0x63,  /* [4361] */
    (xdc_Char)0x75,  /* [4362] */
    (xdc_Char)0x72,  /* [4363] */
    (xdc_Char)0x65,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x63,  /* [4366] */
    (xdc_Char)0x6f,  /* [4367] */
    (xdc_Char)0x6e,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x65,  /* [4370] */
    (xdc_Char)0x78,  /* [4371] */
    (xdc_Char)0x74,  /* [4372] */
    (xdc_Char)0x20,  /* [4373] */
    (xdc_Char)0x66,  /* [4374] */
    (xdc_Char)0x61,  /* [4375] */
    (xdc_Char)0x69,  /* [4376] */
    (xdc_Char)0x6c,  /* [4377] */
    (xdc_Char)0x65,  /* [4378] */
    (xdc_Char)0x64,  /* [4379] */
    (xdc_Char)0x0,  /* [4380] */
    (xdc_Char)0x45,  /* [4381] */
    (xdc_Char)0x5f,  /* [4382] */
    (xdc_Char)0x72,  /* [4383] */
    (xdc_Char)0x65,  /* [4384] */
    (xdc_Char)0x67,  /* [4385] */
    (xdc_Char)0x69,  /* [4386] */
    (xdc_Char)0x73,  /* [4387] */
    (xdc_Char)0x74,  /* [4388] */
    (xdc_Char)0x65,  /* [4389] */
    (xdc_Char)0x72,  /* [4390] */
    (xdc_Char)0x53,  /* [4391] */
    (xdc_Char)0x43,  /* [4392] */
    (xdc_Char)0x46,  /* [4393] */
    (xdc_Char)0x61,  /* [4394] */
    (xdc_Char)0x69,  /* [4395] */
    (xdc_Char)0x6c,  /* [4396] */
    (xdc_Char)0x65,  /* [4397] */
    (xdc_Char)0x64,  /* [4398] */
    (xdc_Char)0x3a,  /* [4399] */
    (xdc_Char)0x20,  /* [4400] */
    (xdc_Char)0x52,  /* [4401] */
    (xdc_Char)0x65,  /* [4402] */
    (xdc_Char)0x67,  /* [4403] */
    (xdc_Char)0x69,  /* [4404] */
    (xdc_Char)0x73,  /* [4405] */
    (xdc_Char)0x74,  /* [4406] */
    (xdc_Char)0x65,  /* [4407] */
    (xdc_Char)0x72,  /* [4408] */
    (xdc_Char)0x20,  /* [4409] */
    (xdc_Char)0x73,  /* [4410] */
    (xdc_Char)0x65,  /* [4411] */
    (xdc_Char)0x63,  /* [4412] */
    (xdc_Char)0x75,  /* [4413] */
    (xdc_Char)0x72,  /* [4414] */
    (xdc_Char)0x65,  /* [4415] */
    (xdc_Char)0x20,  /* [4416] */
    (xdc_Char)0x63,  /* [4417] */
    (xdc_Char)0x6f,  /* [4418] */
    (xdc_Char)0x6e,  /* [4419] */
    (xdc_Char)0x74,  /* [4420] */
    (xdc_Char)0x65,  /* [4421] */
    (xdc_Char)0x78,  /* [4422] */
    (xdc_Char)0x74,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x66,  /* [4425] */
    (xdc_Char)0x61,  /* [4426] */
    (xdc_Char)0x69,  /* [4427] */
    (xdc_Char)0x6c,  /* [4428] */
    (xdc_Char)0x65,  /* [4429] */
    (xdc_Char)0x64,  /* [4430] */
    (xdc_Char)0x0,  /* [4431] */
    (xdc_Char)0x45,  /* [4432] */
    (xdc_Char)0x5f,  /* [4433] */
    (xdc_Char)0x69,  /* [4434] */
    (xdc_Char)0x6e,  /* [4435] */
    (xdc_Char)0x76,  /* [4436] */
    (xdc_Char)0x61,  /* [4437] */
    (xdc_Char)0x6c,  /* [4438] */
    (xdc_Char)0x69,  /* [4439] */
    (xdc_Char)0x64,  /* [4440] */
    (xdc_Char)0x49,  /* [4441] */
    (xdc_Char)0x6e,  /* [4442] */
    (xdc_Char)0x74,  /* [4443] */
    (xdc_Char)0x4e,  /* [4444] */
    (xdc_Char)0x75,  /* [4445] */
    (xdc_Char)0x6d,  /* [4446] */
    (xdc_Char)0x3a,  /* [4447] */
    (xdc_Char)0x20,  /* [4448] */
    (xdc_Char)0x49,  /* [4449] */
    (xdc_Char)0x6e,  /* [4450] */
    (xdc_Char)0x76,  /* [4451] */
    (xdc_Char)0x61,  /* [4452] */
    (xdc_Char)0x6c,  /* [4453] */
    (xdc_Char)0x69,  /* [4454] */
    (xdc_Char)0x64,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x69,  /* [4457] */
    (xdc_Char)0x6e,  /* [4458] */
    (xdc_Char)0x74,  /* [4459] */
    (xdc_Char)0x65,  /* [4460] */
    (xdc_Char)0x72,  /* [4461] */
    (xdc_Char)0x72,  /* [4462] */
    (xdc_Char)0x75,  /* [4463] */
    (xdc_Char)0x70,  /* [4464] */
    (xdc_Char)0x74,  /* [4465] */
    (xdc_Char)0x20,  /* [4466] */
    (xdc_Char)0x6e,  /* [4467] */
    (xdc_Char)0x75,  /* [4468] */
    (xdc_Char)0x6d,  /* [4469] */
    (xdc_Char)0x62,  /* [4470] */
    (xdc_Char)0x65,  /* [4471] */
    (xdc_Char)0x72,  /* [4472] */
    (xdc_Char)0x3a,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x69,  /* [4475] */
    (xdc_Char)0x6e,  /* [4476] */
    (xdc_Char)0x74,  /* [4477] */
    (xdc_Char)0x72,  /* [4478] */
    (xdc_Char)0x23,  /* [4479] */
    (xdc_Char)0x20,  /* [4480] */
    (xdc_Char)0x25,  /* [4481] */
    (xdc_Char)0x64,  /* [4482] */
    (xdc_Char)0x0,  /* [4483] */
    (xdc_Char)0x45,  /* [4484] */
    (xdc_Char)0x5f,  /* [4485] */
    (xdc_Char)0x69,  /* [4486] */
    (xdc_Char)0x6e,  /* [4487] */
    (xdc_Char)0x76,  /* [4488] */
    (xdc_Char)0x61,  /* [4489] */
    (xdc_Char)0x6c,  /* [4490] */
    (xdc_Char)0x69,  /* [4491] */
    (xdc_Char)0x64,  /* [4492] */
    (xdc_Char)0x4c,  /* [4493] */
    (xdc_Char)0x31,  /* [4494] */
    (xdc_Char)0x43,  /* [4495] */
    (xdc_Char)0x61,  /* [4496] */
    (xdc_Char)0x63,  /* [4497] */
    (xdc_Char)0x68,  /* [4498] */
    (xdc_Char)0x65,  /* [4499] */
    (xdc_Char)0x53,  /* [4500] */
    (xdc_Char)0x69,  /* [4501] */
    (xdc_Char)0x7a,  /* [4502] */
    (xdc_Char)0x65,  /* [4503] */
    (xdc_Char)0x3a,  /* [4504] */
    (xdc_Char)0x20,  /* [4505] */
    (xdc_Char)0x49,  /* [4506] */
    (xdc_Char)0x6e,  /* [4507] */
    (xdc_Char)0x76,  /* [4508] */
    (xdc_Char)0x61,  /* [4509] */
    (xdc_Char)0x6c,  /* [4510] */
    (xdc_Char)0x69,  /* [4511] */
    (xdc_Char)0x64,  /* [4512] */
    (xdc_Char)0x20,  /* [4513] */
    (xdc_Char)0x4c,  /* [4514] */
    (xdc_Char)0x31,  /* [4515] */
    (xdc_Char)0x20,  /* [4516] */
    (xdc_Char)0x63,  /* [4517] */
    (xdc_Char)0x61,  /* [4518] */
    (xdc_Char)0x63,  /* [4519] */
    (xdc_Char)0x68,  /* [4520] */
    (xdc_Char)0x65,  /* [4521] */
    (xdc_Char)0x20,  /* [4522] */
    (xdc_Char)0x73,  /* [4523] */
    (xdc_Char)0x69,  /* [4524] */
    (xdc_Char)0x7a,  /* [4525] */
    (xdc_Char)0x65,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x25,  /* [4528] */
    (xdc_Char)0x64,  /* [4529] */
    (xdc_Char)0x0,  /* [4530] */
    (xdc_Char)0x45,  /* [4531] */
    (xdc_Char)0x5f,  /* [4532] */
    (xdc_Char)0x69,  /* [4533] */
    (xdc_Char)0x6e,  /* [4534] */
    (xdc_Char)0x76,  /* [4535] */
    (xdc_Char)0x61,  /* [4536] */
    (xdc_Char)0x6c,  /* [4537] */
    (xdc_Char)0x69,  /* [4538] */
    (xdc_Char)0x64,  /* [4539] */
    (xdc_Char)0x4c,  /* [4540] */
    (xdc_Char)0x32,  /* [4541] */
    (xdc_Char)0x43,  /* [4542] */
    (xdc_Char)0x61,  /* [4543] */
    (xdc_Char)0x63,  /* [4544] */
    (xdc_Char)0x68,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x53,  /* [4547] */
    (xdc_Char)0x69,  /* [4548] */
    (xdc_Char)0x7a,  /* [4549] */
    (xdc_Char)0x65,  /* [4550] */
    (xdc_Char)0x3a,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x49,  /* [4553] */
    (xdc_Char)0x6e,  /* [4554] */
    (xdc_Char)0x76,  /* [4555] */
    (xdc_Char)0x61,  /* [4556] */
    (xdc_Char)0x6c,  /* [4557] */
    (xdc_Char)0x69,  /* [4558] */
    (xdc_Char)0x64,  /* [4559] */
    (xdc_Char)0x20,  /* [4560] */
    (xdc_Char)0x4c,  /* [4561] */
    (xdc_Char)0x32,  /* [4562] */
    (xdc_Char)0x20,  /* [4563] */
    (xdc_Char)0x63,  /* [4564] */
    (xdc_Char)0x61,  /* [4565] */
    (xdc_Char)0x63,  /* [4566] */
    (xdc_Char)0x68,  /* [4567] */
    (xdc_Char)0x65,  /* [4568] */
    (xdc_Char)0x20,  /* [4569] */
    (xdc_Char)0x73,  /* [4570] */
    (xdc_Char)0x69,  /* [4571] */
    (xdc_Char)0x7a,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x20,  /* [4574] */
    (xdc_Char)0x25,  /* [4575] */
    (xdc_Char)0x64,  /* [4576] */
    (xdc_Char)0x0,  /* [4577] */
    (xdc_Char)0x45,  /* [4578] */
    (xdc_Char)0x5f,  /* [4579] */
    (xdc_Char)0x6f,  /* [4580] */
    (xdc_Char)0x62,  /* [4581] */
    (xdc_Char)0x6a,  /* [4582] */
    (xdc_Char)0x65,  /* [4583] */
    (xdc_Char)0x63,  /* [4584] */
    (xdc_Char)0x74,  /* [4585] */
    (xdc_Char)0x4e,  /* [4586] */
    (xdc_Char)0x6f,  /* [4587] */
    (xdc_Char)0x74,  /* [4588] */
    (xdc_Char)0x49,  /* [4589] */
    (xdc_Char)0x6e,  /* [4590] */
    (xdc_Char)0x4b,  /* [4591] */
    (xdc_Char)0x65,  /* [4592] */
    (xdc_Char)0x72,  /* [4593] */
    (xdc_Char)0x6e,  /* [4594] */
    (xdc_Char)0x65,  /* [4595] */
    (xdc_Char)0x6c,  /* [4596] */
    (xdc_Char)0x53,  /* [4597] */
    (xdc_Char)0x70,  /* [4598] */
    (xdc_Char)0x61,  /* [4599] */
    (xdc_Char)0x63,  /* [4600] */
    (xdc_Char)0x65,  /* [4601] */
    (xdc_Char)0x3a,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x53,  /* [4604] */
    (xdc_Char)0x65,  /* [4605] */
    (xdc_Char)0x6d,  /* [4606] */
    (xdc_Char)0x61,  /* [4607] */
    (xdc_Char)0x70,  /* [4608] */
    (xdc_Char)0x68,  /* [4609] */
    (xdc_Char)0x6f,  /* [4610] */
    (xdc_Char)0x72,  /* [4611] */
    (xdc_Char)0x65,  /* [4612] */
    (xdc_Char)0x20,  /* [4613] */
    (xdc_Char)0x6f,  /* [4614] */
    (xdc_Char)0x62,  /* [4615] */
    (xdc_Char)0x6a,  /* [4616] */
    (xdc_Char)0x65,  /* [4617] */
    (xdc_Char)0x63,  /* [4618] */
    (xdc_Char)0x74,  /* [4619] */
    (xdc_Char)0x20,  /* [4620] */
    (xdc_Char)0x70,  /* [4621] */
    (xdc_Char)0x61,  /* [4622] */
    (xdc_Char)0x73,  /* [4623] */
    (xdc_Char)0x73,  /* [4624] */
    (xdc_Char)0x65,  /* [4625] */
    (xdc_Char)0x64,  /* [4626] */
    (xdc_Char)0x20,  /* [4627] */
    (xdc_Char)0x6e,  /* [4628] */
    (xdc_Char)0x6f,  /* [4629] */
    (xdc_Char)0x74,  /* [4630] */
    (xdc_Char)0x20,  /* [4631] */
    (xdc_Char)0x69,  /* [4632] */
    (xdc_Char)0x6e,  /* [4633] */
    (xdc_Char)0x20,  /* [4634] */
    (xdc_Char)0x4b,  /* [4635] */
    (xdc_Char)0x65,  /* [4636] */
    (xdc_Char)0x72,  /* [4637] */
    (xdc_Char)0x6e,  /* [4638] */
    (xdc_Char)0x65,  /* [4639] */
    (xdc_Char)0x6c,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x61,  /* [4642] */
    (xdc_Char)0x64,  /* [4643] */
    (xdc_Char)0x64,  /* [4644] */
    (xdc_Char)0x72,  /* [4645] */
    (xdc_Char)0x65,  /* [4646] */
    (xdc_Char)0x73,  /* [4647] */
    (xdc_Char)0x73,  /* [4648] */
    (xdc_Char)0x20,  /* [4649] */
    (xdc_Char)0x73,  /* [4650] */
    (xdc_Char)0x70,  /* [4651] */
    (xdc_Char)0x61,  /* [4652] */
    (xdc_Char)0x63,  /* [4653] */
    (xdc_Char)0x65,  /* [4654] */
    (xdc_Char)0x2e,  /* [4655] */
    (xdc_Char)0x0,  /* [4656] */
    (xdc_Char)0x45,  /* [4657] */
    (xdc_Char)0x5f,  /* [4658] */
    (xdc_Char)0x73,  /* [4659] */
    (xdc_Char)0x74,  /* [4660] */
    (xdc_Char)0x61,  /* [4661] */
    (xdc_Char)0x63,  /* [4662] */
    (xdc_Char)0x6b,  /* [4663] */
    (xdc_Char)0x4f,  /* [4664] */
    (xdc_Char)0x76,  /* [4665] */
    (xdc_Char)0x65,  /* [4666] */
    (xdc_Char)0x72,  /* [4667] */
    (xdc_Char)0x66,  /* [4668] */
    (xdc_Char)0x6c,  /* [4669] */
    (xdc_Char)0x6f,  /* [4670] */
    (xdc_Char)0x77,  /* [4671] */
    (xdc_Char)0x3a,  /* [4672] */
    (xdc_Char)0x20,  /* [4673] */
    (xdc_Char)0x54,  /* [4674] */
    (xdc_Char)0x61,  /* [4675] */
    (xdc_Char)0x73,  /* [4676] */
    (xdc_Char)0x6b,  /* [4677] */
    (xdc_Char)0x20,  /* [4678] */
    (xdc_Char)0x30,  /* [4679] */
    (xdc_Char)0x78,  /* [4680] */
    (xdc_Char)0x25,  /* [4681] */
    (xdc_Char)0x78,  /* [4682] */
    (xdc_Char)0x20,  /* [4683] */
    (xdc_Char)0x73,  /* [4684] */
    (xdc_Char)0x74,  /* [4685] */
    (xdc_Char)0x61,  /* [4686] */
    (xdc_Char)0x63,  /* [4687] */
    (xdc_Char)0x6b,  /* [4688] */
    (xdc_Char)0x20,  /* [4689] */
    (xdc_Char)0x6f,  /* [4690] */
    (xdc_Char)0x76,  /* [4691] */
    (xdc_Char)0x65,  /* [4692] */
    (xdc_Char)0x72,  /* [4693] */
    (xdc_Char)0x66,  /* [4694] */
    (xdc_Char)0x6c,  /* [4695] */
    (xdc_Char)0x6f,  /* [4696] */
    (xdc_Char)0x77,  /* [4697] */
    (xdc_Char)0x2e,  /* [4698] */
    (xdc_Char)0x0,  /* [4699] */
    (xdc_Char)0x45,  /* [4700] */
    (xdc_Char)0x5f,  /* [4701] */
    (xdc_Char)0x73,  /* [4702] */
    (xdc_Char)0x70,  /* [4703] */
    (xdc_Char)0x4f,  /* [4704] */
    (xdc_Char)0x75,  /* [4705] */
    (xdc_Char)0x74,  /* [4706] */
    (xdc_Char)0x4f,  /* [4707] */
    (xdc_Char)0x66,  /* [4708] */
    (xdc_Char)0x42,  /* [4709] */
    (xdc_Char)0x6f,  /* [4710] */
    (xdc_Char)0x75,  /* [4711] */
    (xdc_Char)0x6e,  /* [4712] */
    (xdc_Char)0x64,  /* [4713] */
    (xdc_Char)0x73,  /* [4714] */
    (xdc_Char)0x3a,  /* [4715] */
    (xdc_Char)0x20,  /* [4716] */
    (xdc_Char)0x54,  /* [4717] */
    (xdc_Char)0x61,  /* [4718] */
    (xdc_Char)0x73,  /* [4719] */
    (xdc_Char)0x6b,  /* [4720] */
    (xdc_Char)0x20,  /* [4721] */
    (xdc_Char)0x30,  /* [4722] */
    (xdc_Char)0x78,  /* [4723] */
    (xdc_Char)0x25,  /* [4724] */
    (xdc_Char)0x78,  /* [4725] */
    (xdc_Char)0x20,  /* [4726] */
    (xdc_Char)0x73,  /* [4727] */
    (xdc_Char)0x74,  /* [4728] */
    (xdc_Char)0x61,  /* [4729] */
    (xdc_Char)0x63,  /* [4730] */
    (xdc_Char)0x6b,  /* [4731] */
    (xdc_Char)0x20,  /* [4732] */
    (xdc_Char)0x65,  /* [4733] */
    (xdc_Char)0x72,  /* [4734] */
    (xdc_Char)0x72,  /* [4735] */
    (xdc_Char)0x6f,  /* [4736] */
    (xdc_Char)0x72,  /* [4737] */
    (xdc_Char)0x2c,  /* [4738] */
    (xdc_Char)0x20,  /* [4739] */
    (xdc_Char)0x53,  /* [4740] */
    (xdc_Char)0x50,  /* [4741] */
    (xdc_Char)0x20,  /* [4742] */
    (xdc_Char)0x3d,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x30,  /* [4745] */
    (xdc_Char)0x78,  /* [4746] */
    (xdc_Char)0x25,  /* [4747] */
    (xdc_Char)0x78,  /* [4748] */
    (xdc_Char)0x2e,  /* [4749] */
    (xdc_Char)0x0,  /* [4750] */
    (xdc_Char)0x45,  /* [4751] */
    (xdc_Char)0x5f,  /* [4752] */
    (xdc_Char)0x64,  /* [4753] */
    (xdc_Char)0x65,  /* [4754] */
    (xdc_Char)0x6c,  /* [4755] */
    (xdc_Char)0x65,  /* [4756] */
    (xdc_Char)0x74,  /* [4757] */
    (xdc_Char)0x65,  /* [4758] */
    (xdc_Char)0x4e,  /* [4759] */
    (xdc_Char)0x6f,  /* [4760] */
    (xdc_Char)0x74,  /* [4761] */
    (xdc_Char)0x41,  /* [4762] */
    (xdc_Char)0x6c,  /* [4763] */
    (xdc_Char)0x6c,  /* [4764] */
    (xdc_Char)0x6f,  /* [4765] */
    (xdc_Char)0x77,  /* [4766] */
    (xdc_Char)0x65,  /* [4767] */
    (xdc_Char)0x64,  /* [4768] */
    (xdc_Char)0x3a,  /* [4769] */
    (xdc_Char)0x20,  /* [4770] */
    (xdc_Char)0x54,  /* [4771] */
    (xdc_Char)0x61,  /* [4772] */
    (xdc_Char)0x73,  /* [4773] */
    (xdc_Char)0x6b,  /* [4774] */
    (xdc_Char)0x20,  /* [4775] */
    (xdc_Char)0x30,  /* [4776] */
    (xdc_Char)0x78,  /* [4777] */
    (xdc_Char)0x25,  /* [4778] */
    (xdc_Char)0x78,  /* [4779] */
    (xdc_Char)0x2e,  /* [4780] */
    (xdc_Char)0x0,  /* [4781] */
    (xdc_Char)0x45,  /* [4782] */
    (xdc_Char)0x5f,  /* [4783] */
    (xdc_Char)0x6d,  /* [4784] */
    (xdc_Char)0x6f,  /* [4785] */
    (xdc_Char)0x64,  /* [4786] */
    (xdc_Char)0x75,  /* [4787] */
    (xdc_Char)0x6c,  /* [4788] */
    (xdc_Char)0x65,  /* [4789] */
    (xdc_Char)0x53,  /* [4790] */
    (xdc_Char)0x74,  /* [4791] */
    (xdc_Char)0x61,  /* [4792] */
    (xdc_Char)0x74,  /* [4793] */
    (xdc_Char)0x65,  /* [4794] */
    (xdc_Char)0x43,  /* [4795] */
    (xdc_Char)0x68,  /* [4796] */
    (xdc_Char)0x65,  /* [4797] */
    (xdc_Char)0x63,  /* [4798] */
    (xdc_Char)0x6b,  /* [4799] */
    (xdc_Char)0x46,  /* [4800] */
    (xdc_Char)0x61,  /* [4801] */
    (xdc_Char)0x69,  /* [4802] */
    (xdc_Char)0x6c,  /* [4803] */
    (xdc_Char)0x65,  /* [4804] */
    (xdc_Char)0x64,  /* [4805] */
    (xdc_Char)0x3a,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x54,  /* [4808] */
    (xdc_Char)0x61,  /* [4809] */
    (xdc_Char)0x73,  /* [4810] */
    (xdc_Char)0x6b,  /* [4811] */
    (xdc_Char)0x20,  /* [4812] */
    (xdc_Char)0x6d,  /* [4813] */
    (xdc_Char)0x6f,  /* [4814] */
    (xdc_Char)0x64,  /* [4815] */
    (xdc_Char)0x75,  /* [4816] */
    (xdc_Char)0x6c,  /* [4817] */
    (xdc_Char)0x65,  /* [4818] */
    (xdc_Char)0x20,  /* [4819] */
    (xdc_Char)0x73,  /* [4820] */
    (xdc_Char)0x74,  /* [4821] */
    (xdc_Char)0x61,  /* [4822] */
    (xdc_Char)0x74,  /* [4823] */
    (xdc_Char)0x65,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x64,  /* [4826] */
    (xdc_Char)0x61,  /* [4827] */
    (xdc_Char)0x74,  /* [4828] */
    (xdc_Char)0x61,  /* [4829] */
    (xdc_Char)0x20,  /* [4830] */
    (xdc_Char)0x69,  /* [4831] */
    (xdc_Char)0x6e,  /* [4832] */
    (xdc_Char)0x74,  /* [4833] */
    (xdc_Char)0x65,  /* [4834] */
    (xdc_Char)0x67,  /* [4835] */
    (xdc_Char)0x72,  /* [4836] */
    (xdc_Char)0x69,  /* [4837] */
    (xdc_Char)0x74,  /* [4838] */
    (xdc_Char)0x79,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x63,  /* [4841] */
    (xdc_Char)0x68,  /* [4842] */
    (xdc_Char)0x65,  /* [4843] */
    (xdc_Char)0x63,  /* [4844] */
    (xdc_Char)0x6b,  /* [4845] */
    (xdc_Char)0x20,  /* [4846] */
    (xdc_Char)0x66,  /* [4847] */
    (xdc_Char)0x61,  /* [4848] */
    (xdc_Char)0x69,  /* [4849] */
    (xdc_Char)0x6c,  /* [4850] */
    (xdc_Char)0x65,  /* [4851] */
    (xdc_Char)0x64,  /* [4852] */
    (xdc_Char)0x2e,  /* [4853] */
    (xdc_Char)0x0,  /* [4854] */
    (xdc_Char)0x45,  /* [4855] */
    (xdc_Char)0x5f,  /* [4856] */
    (xdc_Char)0x6f,  /* [4857] */
    (xdc_Char)0x62,  /* [4858] */
    (xdc_Char)0x6a,  /* [4859] */
    (xdc_Char)0x65,  /* [4860] */
    (xdc_Char)0x63,  /* [4861] */
    (xdc_Char)0x74,  /* [4862] */
    (xdc_Char)0x43,  /* [4863] */
    (xdc_Char)0x68,  /* [4864] */
    (xdc_Char)0x65,  /* [4865] */
    (xdc_Char)0x63,  /* [4866] */
    (xdc_Char)0x6b,  /* [4867] */
    (xdc_Char)0x46,  /* [4868] */
    (xdc_Char)0x61,  /* [4869] */
    (xdc_Char)0x69,  /* [4870] */
    (xdc_Char)0x6c,  /* [4871] */
    (xdc_Char)0x65,  /* [4872] */
    (xdc_Char)0x64,  /* [4873] */
    (xdc_Char)0x3a,  /* [4874] */
    (xdc_Char)0x20,  /* [4875] */
    (xdc_Char)0x54,  /* [4876] */
    (xdc_Char)0x61,  /* [4877] */
    (xdc_Char)0x73,  /* [4878] */
    (xdc_Char)0x6b,  /* [4879] */
    (xdc_Char)0x20,  /* [4880] */
    (xdc_Char)0x30,  /* [4881] */
    (xdc_Char)0x78,  /* [4882] */
    (xdc_Char)0x25,  /* [4883] */
    (xdc_Char)0x78,  /* [4884] */
    (xdc_Char)0x20,  /* [4885] */
    (xdc_Char)0x6f,  /* [4886] */
    (xdc_Char)0x62,  /* [4887] */
    (xdc_Char)0x6a,  /* [4888] */
    (xdc_Char)0x65,  /* [4889] */
    (xdc_Char)0x63,  /* [4890] */
    (xdc_Char)0x74,  /* [4891] */
    (xdc_Char)0x20,  /* [4892] */
    (xdc_Char)0x64,  /* [4893] */
    (xdc_Char)0x61,  /* [4894] */
    (xdc_Char)0x74,  /* [4895] */
    (xdc_Char)0x61,  /* [4896] */
    (xdc_Char)0x20,  /* [4897] */
    (xdc_Char)0x69,  /* [4898] */
    (xdc_Char)0x6e,  /* [4899] */
    (xdc_Char)0x74,  /* [4900] */
    (xdc_Char)0x65,  /* [4901] */
    (xdc_Char)0x67,  /* [4902] */
    (xdc_Char)0x72,  /* [4903] */
    (xdc_Char)0x69,  /* [4904] */
    (xdc_Char)0x74,  /* [4905] */
    (xdc_Char)0x79,  /* [4906] */
    (xdc_Char)0x20,  /* [4907] */
    (xdc_Char)0x63,  /* [4908] */
    (xdc_Char)0x68,  /* [4909] */
    (xdc_Char)0x65,  /* [4910] */
    (xdc_Char)0x63,  /* [4911] */
    (xdc_Char)0x6b,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x66,  /* [4914] */
    (xdc_Char)0x61,  /* [4915] */
    (xdc_Char)0x69,  /* [4916] */
    (xdc_Char)0x6c,  /* [4917] */
    (xdc_Char)0x65,  /* [4918] */
    (xdc_Char)0x64,  /* [4919] */
    (xdc_Char)0x2e,  /* [4920] */
    (xdc_Char)0x0,  /* [4921] */
    (xdc_Char)0x45,  /* [4922] */
    (xdc_Char)0x5f,  /* [4923] */
    (xdc_Char)0x6f,  /* [4924] */
    (xdc_Char)0x62,  /* [4925] */
    (xdc_Char)0x6a,  /* [4926] */
    (xdc_Char)0x65,  /* [4927] */
    (xdc_Char)0x63,  /* [4928] */
    (xdc_Char)0x74,  /* [4929] */
    (xdc_Char)0x4e,  /* [4930] */
    (xdc_Char)0x6f,  /* [4931] */
    (xdc_Char)0x74,  /* [4932] */
    (xdc_Char)0x49,  /* [4933] */
    (xdc_Char)0x6e,  /* [4934] */
    (xdc_Char)0x4b,  /* [4935] */
    (xdc_Char)0x65,  /* [4936] */
    (xdc_Char)0x72,  /* [4937] */
    (xdc_Char)0x6e,  /* [4938] */
    (xdc_Char)0x65,  /* [4939] */
    (xdc_Char)0x6c,  /* [4940] */
    (xdc_Char)0x53,  /* [4941] */
    (xdc_Char)0x70,  /* [4942] */
    (xdc_Char)0x61,  /* [4943] */
    (xdc_Char)0x63,  /* [4944] */
    (xdc_Char)0x65,  /* [4945] */
    (xdc_Char)0x3a,  /* [4946] */
    (xdc_Char)0x20,  /* [4947] */
    (xdc_Char)0x54,  /* [4948] */
    (xdc_Char)0x61,  /* [4949] */
    (xdc_Char)0x73,  /* [4950] */
    (xdc_Char)0x6b,  /* [4951] */
    (xdc_Char)0x20,  /* [4952] */
    (xdc_Char)0x6f,  /* [4953] */
    (xdc_Char)0x62,  /* [4954] */
    (xdc_Char)0x6a,  /* [4955] */
    (xdc_Char)0x65,  /* [4956] */
    (xdc_Char)0x63,  /* [4957] */
    (xdc_Char)0x74,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x70,  /* [4960] */
    (xdc_Char)0x61,  /* [4961] */
    (xdc_Char)0x73,  /* [4962] */
    (xdc_Char)0x73,  /* [4963] */
    (xdc_Char)0x65,  /* [4964] */
    (xdc_Char)0x64,  /* [4965] */
    (xdc_Char)0x20,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x6f,  /* [4968] */
    (xdc_Char)0x74,  /* [4969] */
    (xdc_Char)0x20,  /* [4970] */
    (xdc_Char)0x69,  /* [4971] */
    (xdc_Char)0x6e,  /* [4972] */
    (xdc_Char)0x20,  /* [4973] */
    (xdc_Char)0x4b,  /* [4974] */
    (xdc_Char)0x65,  /* [4975] */
    (xdc_Char)0x72,  /* [4976] */
    (xdc_Char)0x6e,  /* [4977] */
    (xdc_Char)0x65,  /* [4978] */
    (xdc_Char)0x6c,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x61,  /* [4981] */
    (xdc_Char)0x64,  /* [4982] */
    (xdc_Char)0x64,  /* [4983] */
    (xdc_Char)0x72,  /* [4984] */
    (xdc_Char)0x65,  /* [4985] */
    (xdc_Char)0x73,  /* [4986] */
    (xdc_Char)0x73,  /* [4987] */
    (xdc_Char)0x20,  /* [4988] */
    (xdc_Char)0x73,  /* [4989] */
    (xdc_Char)0x70,  /* [4990] */
    (xdc_Char)0x61,  /* [4991] */
    (xdc_Char)0x63,  /* [4992] */
    (xdc_Char)0x65,  /* [4993] */
    (xdc_Char)0x2e,  /* [4994] */
    (xdc_Char)0x0,  /* [4995] */
    (xdc_Char)0x45,  /* [4996] */
    (xdc_Char)0x5f,  /* [4997] */
    (xdc_Char)0x73,  /* [4998] */
    (xdc_Char)0x74,  /* [4999] */
    (xdc_Char)0x61,  /* [5000] */
    (xdc_Char)0x63,  /* [5001] */
    (xdc_Char)0x6b,  /* [5002] */
    (xdc_Char)0x4f,  /* [5003] */
    (xdc_Char)0x76,  /* [5004] */
    (xdc_Char)0x65,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x66,  /* [5007] */
    (xdc_Char)0x6c,  /* [5008] */
    (xdc_Char)0x6f,  /* [5009] */
    (xdc_Char)0x77,  /* [5010] */
    (xdc_Char)0x3a,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x49,  /* [5013] */
    (xdc_Char)0x53,  /* [5014] */
    (xdc_Char)0x52,  /* [5015] */
    (xdc_Char)0x20,  /* [5016] */
    (xdc_Char)0x73,  /* [5017] */
    (xdc_Char)0x74,  /* [5018] */
    (xdc_Char)0x61,  /* [5019] */
    (xdc_Char)0x63,  /* [5020] */
    (xdc_Char)0x6b,  /* [5021] */
    (xdc_Char)0x20,  /* [5022] */
    (xdc_Char)0x6f,  /* [5023] */
    (xdc_Char)0x76,  /* [5024] */
    (xdc_Char)0x65,  /* [5025] */
    (xdc_Char)0x72,  /* [5026] */
    (xdc_Char)0x66,  /* [5027] */
    (xdc_Char)0x6c,  /* [5028] */
    (xdc_Char)0x6f,  /* [5029] */
    (xdc_Char)0x77,  /* [5030] */
    (xdc_Char)0x2e,  /* [5031] */
    (xdc_Char)0x0,  /* [5032] */
    (xdc_Char)0x45,  /* [5033] */
    (xdc_Char)0x5f,  /* [5034] */
    (xdc_Char)0x70,  /* [5035] */
    (xdc_Char)0x72,  /* [5036] */
    (xdc_Char)0x69,  /* [5037] */
    (xdc_Char)0x6f,  /* [5038] */
    (xdc_Char)0x72,  /* [5039] */
    (xdc_Char)0x69,  /* [5040] */
    (xdc_Char)0x74,  /* [5041] */
    (xdc_Char)0x79,  /* [5042] */
    (xdc_Char)0x3a,  /* [5043] */
    (xdc_Char)0x20,  /* [5044] */
    (xdc_Char)0x54,  /* [5045] */
    (xdc_Char)0x68,  /* [5046] */
    (xdc_Char)0x72,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x61,  /* [5049] */
    (xdc_Char)0x64,  /* [5050] */
    (xdc_Char)0x20,  /* [5051] */
    (xdc_Char)0x70,  /* [5052] */
    (xdc_Char)0x72,  /* [5053] */
    (xdc_Char)0x69,  /* [5054] */
    (xdc_Char)0x6f,  /* [5055] */
    (xdc_Char)0x72,  /* [5056] */
    (xdc_Char)0x69,  /* [5057] */
    (xdc_Char)0x74,  /* [5058] */
    (xdc_Char)0x79,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x69,  /* [5061] */
    (xdc_Char)0x73,  /* [5062] */
    (xdc_Char)0x20,  /* [5063] */
    (xdc_Char)0x69,  /* [5064] */
    (xdc_Char)0x6e,  /* [5065] */
    (xdc_Char)0x76,  /* [5066] */
    (xdc_Char)0x61,  /* [5067] */
    (xdc_Char)0x6c,  /* [5068] */
    (xdc_Char)0x69,  /* [5069] */
    (xdc_Char)0x64,  /* [5070] */
    (xdc_Char)0x20,  /* [5071] */
    (xdc_Char)0x25,  /* [5072] */
    (xdc_Char)0x64,  /* [5073] */
    (xdc_Char)0x0,  /* [5074] */
    (xdc_Char)0x72,  /* [5075] */
    (xdc_Char)0x65,  /* [5076] */
    (xdc_Char)0x71,  /* [5077] */
    (xdc_Char)0x75,  /* [5078] */
    (xdc_Char)0x65,  /* [5079] */
    (xdc_Char)0x73,  /* [5080] */
    (xdc_Char)0x74,  /* [5081] */
    (xdc_Char)0x65,  /* [5082] */
    (xdc_Char)0x64,  /* [5083] */
    (xdc_Char)0x20,  /* [5084] */
    (xdc_Char)0x73,  /* [5085] */
    (xdc_Char)0x69,  /* [5086] */
    (xdc_Char)0x7a,  /* [5087] */
    (xdc_Char)0x65,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x69,  /* [5090] */
    (xdc_Char)0x73,  /* [5091] */
    (xdc_Char)0x20,  /* [5092] */
    (xdc_Char)0x74,  /* [5093] */
    (xdc_Char)0x6f,  /* [5094] */
    (xdc_Char)0x6f,  /* [5095] */
    (xdc_Char)0x20,  /* [5096] */
    (xdc_Char)0x62,  /* [5097] */
    (xdc_Char)0x69,  /* [5098] */
    (xdc_Char)0x67,  /* [5099] */
    (xdc_Char)0x3a,  /* [5100] */
    (xdc_Char)0x20,  /* [5101] */
    (xdc_Char)0x68,  /* [5102] */
    (xdc_Char)0x61,  /* [5103] */
    (xdc_Char)0x6e,  /* [5104] */
    (xdc_Char)0x64,  /* [5105] */
    (xdc_Char)0x6c,  /* [5106] */
    (xdc_Char)0x65,  /* [5107] */
    (xdc_Char)0x3d,  /* [5108] */
    (xdc_Char)0x30,  /* [5109] */
    (xdc_Char)0x78,  /* [5110] */
    (xdc_Char)0x25,  /* [5111] */
    (xdc_Char)0x78,  /* [5112] */
    (xdc_Char)0x2c,  /* [5113] */
    (xdc_Char)0x20,  /* [5114] */
    (xdc_Char)0x73,  /* [5115] */
    (xdc_Char)0x69,  /* [5116] */
    (xdc_Char)0x7a,  /* [5117] */
    (xdc_Char)0x65,  /* [5118] */
    (xdc_Char)0x3d,  /* [5119] */
    (xdc_Char)0x25,  /* [5120] */
    (xdc_Char)0x75,  /* [5121] */
    (xdc_Char)0x0,  /* [5122] */
    (xdc_Char)0x6f,  /* [5123] */
    (xdc_Char)0x75,  /* [5124] */
    (xdc_Char)0x74,  /* [5125] */
    (xdc_Char)0x20,  /* [5126] */
    (xdc_Char)0x6f,  /* [5127] */
    (xdc_Char)0x66,  /* [5128] */
    (xdc_Char)0x20,  /* [5129] */
    (xdc_Char)0x6d,  /* [5130] */
    (xdc_Char)0x65,  /* [5131] */
    (xdc_Char)0x6d,  /* [5132] */
    (xdc_Char)0x6f,  /* [5133] */
    (xdc_Char)0x72,  /* [5134] */
    (xdc_Char)0x79,  /* [5135] */
    (xdc_Char)0x3a,  /* [5136] */
    (xdc_Char)0x20,  /* [5137] */
    (xdc_Char)0x68,  /* [5138] */
    (xdc_Char)0x61,  /* [5139] */
    (xdc_Char)0x6e,  /* [5140] */
    (xdc_Char)0x64,  /* [5141] */
    (xdc_Char)0x6c,  /* [5142] */
    (xdc_Char)0x65,  /* [5143] */
    (xdc_Char)0x3d,  /* [5144] */
    (xdc_Char)0x30,  /* [5145] */
    (xdc_Char)0x78,  /* [5146] */
    (xdc_Char)0x25,  /* [5147] */
    (xdc_Char)0x78,  /* [5148] */
    (xdc_Char)0x2c,  /* [5149] */
    (xdc_Char)0x20,  /* [5150] */
    (xdc_Char)0x73,  /* [5151] */
    (xdc_Char)0x69,  /* [5152] */
    (xdc_Char)0x7a,  /* [5153] */
    (xdc_Char)0x65,  /* [5154] */
    (xdc_Char)0x3d,  /* [5155] */
    (xdc_Char)0x25,  /* [5156] */
    (xdc_Char)0x75,  /* [5157] */
    (xdc_Char)0x0,  /* [5158] */
    (xdc_Char)0x45,  /* [5159] */
    (xdc_Char)0x5f,  /* [5160] */
    (xdc_Char)0x69,  /* [5161] */
    (xdc_Char)0x6e,  /* [5162] */
    (xdc_Char)0x76,  /* [5163] */
    (xdc_Char)0x61,  /* [5164] */
    (xdc_Char)0x6c,  /* [5165] */
    (xdc_Char)0x69,  /* [5166] */
    (xdc_Char)0x64,  /* [5167] */
    (xdc_Char)0x54,  /* [5168] */
    (xdc_Char)0x69,  /* [5169] */
    (xdc_Char)0x6d,  /* [5170] */
    (xdc_Char)0x65,  /* [5171] */
    (xdc_Char)0x72,  /* [5172] */
    (xdc_Char)0x3a,  /* [5173] */
    (xdc_Char)0x20,  /* [5174] */
    (xdc_Char)0x49,  /* [5175] */
    (xdc_Char)0x6e,  /* [5176] */
    (xdc_Char)0x76,  /* [5177] */
    (xdc_Char)0x61,  /* [5178] */
    (xdc_Char)0x6c,  /* [5179] */
    (xdc_Char)0x69,  /* [5180] */
    (xdc_Char)0x64,  /* [5181] */
    (xdc_Char)0x20,  /* [5182] */
    (xdc_Char)0x54,  /* [5183] */
    (xdc_Char)0x69,  /* [5184] */
    (xdc_Char)0x6d,  /* [5185] */
    (xdc_Char)0x65,  /* [5186] */
    (xdc_Char)0x72,  /* [5187] */
    (xdc_Char)0x20,  /* [5188] */
    (xdc_Char)0x49,  /* [5189] */
    (xdc_Char)0x64,  /* [5190] */
    (xdc_Char)0x20,  /* [5191] */
    (xdc_Char)0x25,  /* [5192] */
    (xdc_Char)0x64,  /* [5193] */
    (xdc_Char)0x0,  /* [5194] */
    (xdc_Char)0x45,  /* [5195] */
    (xdc_Char)0x5f,  /* [5196] */
    (xdc_Char)0x6e,  /* [5197] */
    (xdc_Char)0x6f,  /* [5198] */
    (xdc_Char)0x74,  /* [5199] */
    (xdc_Char)0x41,  /* [5200] */
    (xdc_Char)0x76,  /* [5201] */
    (xdc_Char)0x61,  /* [5202] */
    (xdc_Char)0x69,  /* [5203] */
    (xdc_Char)0x6c,  /* [5204] */
    (xdc_Char)0x61,  /* [5205] */
    (xdc_Char)0x62,  /* [5206] */
    (xdc_Char)0x6c,  /* [5207] */
    (xdc_Char)0x65,  /* [5208] */
    (xdc_Char)0x3a,  /* [5209] */
    (xdc_Char)0x20,  /* [5210] */
    (xdc_Char)0x54,  /* [5211] */
    (xdc_Char)0x69,  /* [5212] */
    (xdc_Char)0x6d,  /* [5213] */
    (xdc_Char)0x65,  /* [5214] */
    (xdc_Char)0x72,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x6e,  /* [5217] */
    (xdc_Char)0x6f,  /* [5218] */
    (xdc_Char)0x74,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x61,  /* [5221] */
    (xdc_Char)0x76,  /* [5222] */
    (xdc_Char)0x61,  /* [5223] */
    (xdc_Char)0x69,  /* [5224] */
    (xdc_Char)0x6c,  /* [5225] */
    (xdc_Char)0x61,  /* [5226] */
    (xdc_Char)0x62,  /* [5227] */
    (xdc_Char)0x6c,  /* [5228] */
    (xdc_Char)0x65,  /* [5229] */
    (xdc_Char)0x20,  /* [5230] */
    (xdc_Char)0x25,  /* [5231] */
    (xdc_Char)0x64,  /* [5232] */
    (xdc_Char)0x0,  /* [5233] */
    (xdc_Char)0x45,  /* [5234] */
    (xdc_Char)0x5f,  /* [5235] */
    (xdc_Char)0x63,  /* [5236] */
    (xdc_Char)0x61,  /* [5237] */
    (xdc_Char)0x6e,  /* [5238] */
    (xdc_Char)0x6e,  /* [5239] */
    (xdc_Char)0x6f,  /* [5240] */
    (xdc_Char)0x74,  /* [5241] */
    (xdc_Char)0x53,  /* [5242] */
    (xdc_Char)0x75,  /* [5243] */
    (xdc_Char)0x70,  /* [5244] */
    (xdc_Char)0x70,  /* [5245] */
    (xdc_Char)0x6f,  /* [5246] */
    (xdc_Char)0x72,  /* [5247] */
    (xdc_Char)0x74,  /* [5248] */
    (xdc_Char)0x3a,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x54,  /* [5251] */
    (xdc_Char)0x69,  /* [5252] */
    (xdc_Char)0x6d,  /* [5253] */
    (xdc_Char)0x65,  /* [5254] */
    (xdc_Char)0x72,  /* [5255] */
    (xdc_Char)0x20,  /* [5256] */
    (xdc_Char)0x63,  /* [5257] */
    (xdc_Char)0x61,  /* [5258] */
    (xdc_Char)0x6e,  /* [5259] */
    (xdc_Char)0x6e,  /* [5260] */
    (xdc_Char)0x6f,  /* [5261] */
    (xdc_Char)0x74,  /* [5262] */
    (xdc_Char)0x20,  /* [5263] */
    (xdc_Char)0x73,  /* [5264] */
    (xdc_Char)0x75,  /* [5265] */
    (xdc_Char)0x70,  /* [5266] */
    (xdc_Char)0x70,  /* [5267] */
    (xdc_Char)0x6f,  /* [5268] */
    (xdc_Char)0x72,  /* [5269] */
    (xdc_Char)0x74,  /* [5270] */
    (xdc_Char)0x20,  /* [5271] */
    (xdc_Char)0x72,  /* [5272] */
    (xdc_Char)0x65,  /* [5273] */
    (xdc_Char)0x71,  /* [5274] */
    (xdc_Char)0x75,  /* [5275] */
    (xdc_Char)0x65,  /* [5276] */
    (xdc_Char)0x73,  /* [5277] */
    (xdc_Char)0x74,  /* [5278] */
    (xdc_Char)0x65,  /* [5279] */
    (xdc_Char)0x64,  /* [5280] */
    (xdc_Char)0x20,  /* [5281] */
    (xdc_Char)0x70,  /* [5282] */
    (xdc_Char)0x65,  /* [5283] */
    (xdc_Char)0x72,  /* [5284] */
    (xdc_Char)0x69,  /* [5285] */
    (xdc_Char)0x6f,  /* [5286] */
    (xdc_Char)0x64,  /* [5287] */
    (xdc_Char)0x20,  /* [5288] */
    (xdc_Char)0x25,  /* [5289] */
    (xdc_Char)0x64,  /* [5290] */
    (xdc_Char)0x0,  /* [5291] */
    (xdc_Char)0x3c,  /* [5292] */
    (xdc_Char)0x2d,  /* [5293] */
    (xdc_Char)0x2d,  /* [5294] */
    (xdc_Char)0x20,  /* [5295] */
    (xdc_Char)0x63,  /* [5296] */
    (xdc_Char)0x6f,  /* [5297] */
    (xdc_Char)0x6e,  /* [5298] */
    (xdc_Char)0x73,  /* [5299] */
    (xdc_Char)0x74,  /* [5300] */
    (xdc_Char)0x72,  /* [5301] */
    (xdc_Char)0x75,  /* [5302] */
    (xdc_Char)0x63,  /* [5303] */
    (xdc_Char)0x74,  /* [5304] */
    (xdc_Char)0x3a,  /* [5305] */
    (xdc_Char)0x20,  /* [5306] */
    (xdc_Char)0x25,  /* [5307] */
    (xdc_Char)0x70,  /* [5308] */
    (xdc_Char)0x28,  /* [5309] */
    (xdc_Char)0x27,  /* [5310] */
    (xdc_Char)0x25,  /* [5311] */
    (xdc_Char)0x73,  /* [5312] */
    (xdc_Char)0x27,  /* [5313] */
    (xdc_Char)0x29,  /* [5314] */
    (xdc_Char)0x0,  /* [5315] */
    (xdc_Char)0x3c,  /* [5316] */
    (xdc_Char)0x2d,  /* [5317] */
    (xdc_Char)0x2d,  /* [5318] */
    (xdc_Char)0x20,  /* [5319] */
    (xdc_Char)0x63,  /* [5320] */
    (xdc_Char)0x72,  /* [5321] */
    (xdc_Char)0x65,  /* [5322] */
    (xdc_Char)0x61,  /* [5323] */
    (xdc_Char)0x74,  /* [5324] */
    (xdc_Char)0x65,  /* [5325] */
    (xdc_Char)0x3a,  /* [5326] */
    (xdc_Char)0x20,  /* [5327] */
    (xdc_Char)0x25,  /* [5328] */
    (xdc_Char)0x70,  /* [5329] */
    (xdc_Char)0x28,  /* [5330] */
    (xdc_Char)0x27,  /* [5331] */
    (xdc_Char)0x25,  /* [5332] */
    (xdc_Char)0x73,  /* [5333] */
    (xdc_Char)0x27,  /* [5334] */
    (xdc_Char)0x29,  /* [5335] */
    (xdc_Char)0x0,  /* [5336] */
    (xdc_Char)0x2d,  /* [5337] */
    (xdc_Char)0x2d,  /* [5338] */
    (xdc_Char)0x3e,  /* [5339] */
    (xdc_Char)0x20,  /* [5340] */
    (xdc_Char)0x64,  /* [5341] */
    (xdc_Char)0x65,  /* [5342] */
    (xdc_Char)0x73,  /* [5343] */
    (xdc_Char)0x74,  /* [5344] */
    (xdc_Char)0x72,  /* [5345] */
    (xdc_Char)0x75,  /* [5346] */
    (xdc_Char)0x63,  /* [5347] */
    (xdc_Char)0x74,  /* [5348] */
    (xdc_Char)0x3a,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x28,  /* [5351] */
    (xdc_Char)0x25,  /* [5352] */
    (xdc_Char)0x70,  /* [5353] */
    (xdc_Char)0x29,  /* [5354] */
    (xdc_Char)0x0,  /* [5355] */
    (xdc_Char)0x2d,  /* [5356] */
    (xdc_Char)0x2d,  /* [5357] */
    (xdc_Char)0x3e,  /* [5358] */
    (xdc_Char)0x20,  /* [5359] */
    (xdc_Char)0x64,  /* [5360] */
    (xdc_Char)0x65,  /* [5361] */
    (xdc_Char)0x6c,  /* [5362] */
    (xdc_Char)0x65,  /* [5363] */
    (xdc_Char)0x74,  /* [5364] */
    (xdc_Char)0x65,  /* [5365] */
    (xdc_Char)0x3a,  /* [5366] */
    (xdc_Char)0x20,  /* [5367] */
    (xdc_Char)0x28,  /* [5368] */
    (xdc_Char)0x25,  /* [5369] */
    (xdc_Char)0x70,  /* [5370] */
    (xdc_Char)0x29,  /* [5371] */
    (xdc_Char)0x0,  /* [5372] */
    (xdc_Char)0x45,  /* [5373] */
    (xdc_Char)0x52,  /* [5374] */
    (xdc_Char)0x52,  /* [5375] */
    (xdc_Char)0x4f,  /* [5376] */
    (xdc_Char)0x52,  /* [5377] */
    (xdc_Char)0x3a,  /* [5378] */
    (xdc_Char)0x20,  /* [5379] */
    (xdc_Char)0x25,  /* [5380] */
    (xdc_Char)0x24,  /* [5381] */
    (xdc_Char)0x46,  /* [5382] */
    (xdc_Char)0x25,  /* [5383] */
    (xdc_Char)0x24,  /* [5384] */
    (xdc_Char)0x53,  /* [5385] */
    (xdc_Char)0x0,  /* [5386] */
    (xdc_Char)0x57,  /* [5387] */
    (xdc_Char)0x41,  /* [5388] */
    (xdc_Char)0x52,  /* [5389] */
    (xdc_Char)0x4e,  /* [5390] */
    (xdc_Char)0x49,  /* [5391] */
    (xdc_Char)0x4e,  /* [5392] */
    (xdc_Char)0x47,  /* [5393] */
    (xdc_Char)0x3a,  /* [5394] */
    (xdc_Char)0x20,  /* [5395] */
    (xdc_Char)0x25,  /* [5396] */
    (xdc_Char)0x24,  /* [5397] */
    (xdc_Char)0x46,  /* [5398] */
    (xdc_Char)0x25,  /* [5399] */
    (xdc_Char)0x24,  /* [5400] */
    (xdc_Char)0x53,  /* [5401] */
    (xdc_Char)0x0,  /* [5402] */
    (xdc_Char)0x25,  /* [5403] */
    (xdc_Char)0x24,  /* [5404] */
    (xdc_Char)0x46,  /* [5405] */
    (xdc_Char)0x25,  /* [5406] */
    (xdc_Char)0x24,  /* [5407] */
    (xdc_Char)0x53,  /* [5408] */
    (xdc_Char)0x0,  /* [5409] */
    (xdc_Char)0x53,  /* [5410] */
    (xdc_Char)0x74,  /* [5411] */
    (xdc_Char)0x61,  /* [5412] */
    (xdc_Char)0x72,  /* [5413] */
    (xdc_Char)0x74,  /* [5414] */
    (xdc_Char)0x3a,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x25,  /* [5417] */
    (xdc_Char)0x24,  /* [5418] */
    (xdc_Char)0x53,  /* [5419] */
    (xdc_Char)0x0,  /* [5420] */
    (xdc_Char)0x53,  /* [5421] */
    (xdc_Char)0x74,  /* [5422] */
    (xdc_Char)0x6f,  /* [5423] */
    (xdc_Char)0x70,  /* [5424] */
    (xdc_Char)0x3a,  /* [5425] */
    (xdc_Char)0x20,  /* [5426] */
    (xdc_Char)0x25,  /* [5427] */
    (xdc_Char)0x24,  /* [5428] */
    (xdc_Char)0x53,  /* [5429] */
    (xdc_Char)0x0,  /* [5430] */
    (xdc_Char)0x53,  /* [5431] */
    (xdc_Char)0x74,  /* [5432] */
    (xdc_Char)0x61,  /* [5433] */
    (xdc_Char)0x72,  /* [5434] */
    (xdc_Char)0x74,  /* [5435] */
    (xdc_Char)0x49,  /* [5436] */
    (xdc_Char)0x6e,  /* [5437] */
    (xdc_Char)0x73,  /* [5438] */
    (xdc_Char)0x74,  /* [5439] */
    (xdc_Char)0x61,  /* [5440] */
    (xdc_Char)0x6e,  /* [5441] */
    (xdc_Char)0x63,  /* [5442] */
    (xdc_Char)0x65,  /* [5443] */
    (xdc_Char)0x3a,  /* [5444] */
    (xdc_Char)0x20,  /* [5445] */
    (xdc_Char)0x25,  /* [5446] */
    (xdc_Char)0x24,  /* [5447] */
    (xdc_Char)0x53,  /* [5448] */
    (xdc_Char)0x0,  /* [5449] */
    (xdc_Char)0x53,  /* [5450] */
    (xdc_Char)0x74,  /* [5451] */
    (xdc_Char)0x6f,  /* [5452] */
    (xdc_Char)0x70,  /* [5453] */
    (xdc_Char)0x49,  /* [5454] */
    (xdc_Char)0x6e,  /* [5455] */
    (xdc_Char)0x73,  /* [5456] */
    (xdc_Char)0x74,  /* [5457] */
    (xdc_Char)0x61,  /* [5458] */
    (xdc_Char)0x6e,  /* [5459] */
    (xdc_Char)0x63,  /* [5460] */
    (xdc_Char)0x65,  /* [5461] */
    (xdc_Char)0x3a,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x25,  /* [5464] */
    (xdc_Char)0x24,  /* [5465] */
    (xdc_Char)0x53,  /* [5466] */
    (xdc_Char)0x0,  /* [5467] */
    (xdc_Char)0x4c,  /* [5468] */
    (xdc_Char)0x4d,  /* [5469] */
    (xdc_Char)0x5f,  /* [5470] */
    (xdc_Char)0x62,  /* [5471] */
    (xdc_Char)0x65,  /* [5472] */
    (xdc_Char)0x67,  /* [5473] */
    (xdc_Char)0x69,  /* [5474] */
    (xdc_Char)0x6e,  /* [5475] */
    (xdc_Char)0x3a,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x68,  /* [5478] */
    (xdc_Char)0x77,  /* [5479] */
    (xdc_Char)0x69,  /* [5480] */
    (xdc_Char)0x3a,  /* [5481] */
    (xdc_Char)0x20,  /* [5482] */
    (xdc_Char)0x30,  /* [5483] */
    (xdc_Char)0x78,  /* [5484] */
    (xdc_Char)0x25,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x2c,  /* [5487] */
    (xdc_Char)0x20,  /* [5488] */
    (xdc_Char)0x66,  /* [5489] */
    (xdc_Char)0x75,  /* [5490] */
    (xdc_Char)0x6e,  /* [5491] */
    (xdc_Char)0x63,  /* [5492] */
    (xdc_Char)0x3a,  /* [5493] */
    (xdc_Char)0x20,  /* [5494] */
    (xdc_Char)0x30,  /* [5495] */
    (xdc_Char)0x78,  /* [5496] */
    (xdc_Char)0x25,  /* [5497] */
    (xdc_Char)0x78,  /* [5498] */
    (xdc_Char)0x2c,  /* [5499] */
    (xdc_Char)0x20,  /* [5500] */
    (xdc_Char)0x70,  /* [5501] */
    (xdc_Char)0x72,  /* [5502] */
    (xdc_Char)0x65,  /* [5503] */
    (xdc_Char)0x54,  /* [5504] */
    (xdc_Char)0x68,  /* [5505] */
    (xdc_Char)0x72,  /* [5506] */
    (xdc_Char)0x65,  /* [5507] */
    (xdc_Char)0x61,  /* [5508] */
    (xdc_Char)0x64,  /* [5509] */
    (xdc_Char)0x3a,  /* [5510] */
    (xdc_Char)0x20,  /* [5511] */
    (xdc_Char)0x25,  /* [5512] */
    (xdc_Char)0x64,  /* [5513] */
    (xdc_Char)0x2c,  /* [5514] */
    (xdc_Char)0x20,  /* [5515] */
    (xdc_Char)0x69,  /* [5516] */
    (xdc_Char)0x6e,  /* [5517] */
    (xdc_Char)0x74,  /* [5518] */
    (xdc_Char)0x4e,  /* [5519] */
    (xdc_Char)0x75,  /* [5520] */
    (xdc_Char)0x6d,  /* [5521] */
    (xdc_Char)0x3a,  /* [5522] */
    (xdc_Char)0x20,  /* [5523] */
    (xdc_Char)0x25,  /* [5524] */
    (xdc_Char)0x64,  /* [5525] */
    (xdc_Char)0x2c,  /* [5526] */
    (xdc_Char)0x20,  /* [5527] */
    (xdc_Char)0x69,  /* [5528] */
    (xdc_Char)0x72,  /* [5529] */
    (xdc_Char)0x70,  /* [5530] */
    (xdc_Char)0x3a,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x30,  /* [5533] */
    (xdc_Char)0x78,  /* [5534] */
    (xdc_Char)0x25,  /* [5535] */
    (xdc_Char)0x78,  /* [5536] */
    (xdc_Char)0x0,  /* [5537] */
    (xdc_Char)0x4c,  /* [5538] */
    (xdc_Char)0x44,  /* [5539] */
    (xdc_Char)0x5f,  /* [5540] */
    (xdc_Char)0x65,  /* [5541] */
    (xdc_Char)0x6e,  /* [5542] */
    (xdc_Char)0x64,  /* [5543] */
    (xdc_Char)0x3a,  /* [5544] */
    (xdc_Char)0x20,  /* [5545] */
    (xdc_Char)0x68,  /* [5546] */
    (xdc_Char)0x77,  /* [5547] */
    (xdc_Char)0x69,  /* [5548] */
    (xdc_Char)0x3a,  /* [5549] */
    (xdc_Char)0x20,  /* [5550] */
    (xdc_Char)0x30,  /* [5551] */
    (xdc_Char)0x78,  /* [5552] */
    (xdc_Char)0x25,  /* [5553] */
    (xdc_Char)0x78,  /* [5554] */
    (xdc_Char)0x0,  /* [5555] */
    (xdc_Char)0x4c,  /* [5556] */
    (xdc_Char)0x57,  /* [5557] */
    (xdc_Char)0x5f,  /* [5558] */
    (xdc_Char)0x64,  /* [5559] */
    (xdc_Char)0x65,  /* [5560] */
    (xdc_Char)0x6c,  /* [5561] */
    (xdc_Char)0x61,  /* [5562] */
    (xdc_Char)0x79,  /* [5563] */
    (xdc_Char)0x65,  /* [5564] */
    (xdc_Char)0x64,  /* [5565] */
    (xdc_Char)0x3a,  /* [5566] */
    (xdc_Char)0x20,  /* [5567] */
    (xdc_Char)0x64,  /* [5568] */
    (xdc_Char)0x65,  /* [5569] */
    (xdc_Char)0x6c,  /* [5570] */
    (xdc_Char)0x61,  /* [5571] */
    (xdc_Char)0x79,  /* [5572] */
    (xdc_Char)0x3a,  /* [5573] */
    (xdc_Char)0x20,  /* [5574] */
    (xdc_Char)0x25,  /* [5575] */
    (xdc_Char)0x64,  /* [5576] */
    (xdc_Char)0x0,  /* [5577] */
    (xdc_Char)0x4c,  /* [5578] */
    (xdc_Char)0x4d,  /* [5579] */
    (xdc_Char)0x5f,  /* [5580] */
    (xdc_Char)0x74,  /* [5581] */
    (xdc_Char)0x69,  /* [5582] */
    (xdc_Char)0x63,  /* [5583] */
    (xdc_Char)0x6b,  /* [5584] */
    (xdc_Char)0x3a,  /* [5585] */
    (xdc_Char)0x20,  /* [5586] */
    (xdc_Char)0x74,  /* [5587] */
    (xdc_Char)0x69,  /* [5588] */
    (xdc_Char)0x63,  /* [5589] */
    (xdc_Char)0x6b,  /* [5590] */
    (xdc_Char)0x3a,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x25,  /* [5593] */
    (xdc_Char)0x64,  /* [5594] */
    (xdc_Char)0x0,  /* [5595] */
    (xdc_Char)0x4c,  /* [5596] */
    (xdc_Char)0x4d,  /* [5597] */
    (xdc_Char)0x5f,  /* [5598] */
    (xdc_Char)0x62,  /* [5599] */
    (xdc_Char)0x65,  /* [5600] */
    (xdc_Char)0x67,  /* [5601] */
    (xdc_Char)0x69,  /* [5602] */
    (xdc_Char)0x6e,  /* [5603] */
    (xdc_Char)0x3a,  /* [5604] */
    (xdc_Char)0x20,  /* [5605] */
    (xdc_Char)0x63,  /* [5606] */
    (xdc_Char)0x6c,  /* [5607] */
    (xdc_Char)0x6b,  /* [5608] */
    (xdc_Char)0x3a,  /* [5609] */
    (xdc_Char)0x20,  /* [5610] */
    (xdc_Char)0x30,  /* [5611] */
    (xdc_Char)0x78,  /* [5612] */
    (xdc_Char)0x25,  /* [5613] */
    (xdc_Char)0x78,  /* [5614] */
    (xdc_Char)0x2c,  /* [5615] */
    (xdc_Char)0x20,  /* [5616] */
    (xdc_Char)0x66,  /* [5617] */
    (xdc_Char)0x75,  /* [5618] */
    (xdc_Char)0x6e,  /* [5619] */
    (xdc_Char)0x63,  /* [5620] */
    (xdc_Char)0x3a,  /* [5621] */
    (xdc_Char)0x20,  /* [5622] */
    (xdc_Char)0x30,  /* [5623] */
    (xdc_Char)0x78,  /* [5624] */
    (xdc_Char)0x25,  /* [5625] */
    (xdc_Char)0x78,  /* [5626] */
    (xdc_Char)0x0,  /* [5627] */
    (xdc_Char)0x4c,  /* [5628] */
    (xdc_Char)0x4d,  /* [5629] */
    (xdc_Char)0x5f,  /* [5630] */
    (xdc_Char)0x70,  /* [5631] */
    (xdc_Char)0x6f,  /* [5632] */
    (xdc_Char)0x73,  /* [5633] */
    (xdc_Char)0x74,  /* [5634] */
    (xdc_Char)0x3a,  /* [5635] */
    (xdc_Char)0x20,  /* [5636] */
    (xdc_Char)0x65,  /* [5637] */
    (xdc_Char)0x76,  /* [5638] */
    (xdc_Char)0x65,  /* [5639] */
    (xdc_Char)0x6e,  /* [5640] */
    (xdc_Char)0x74,  /* [5641] */
    (xdc_Char)0x3a,  /* [5642] */
    (xdc_Char)0x20,  /* [5643] */
    (xdc_Char)0x30,  /* [5644] */
    (xdc_Char)0x78,  /* [5645] */
    (xdc_Char)0x25,  /* [5646] */
    (xdc_Char)0x78,  /* [5647] */
    (xdc_Char)0x2c,  /* [5648] */
    (xdc_Char)0x20,  /* [5649] */
    (xdc_Char)0x63,  /* [5650] */
    (xdc_Char)0x75,  /* [5651] */
    (xdc_Char)0x72,  /* [5652] */
    (xdc_Char)0x72,  /* [5653] */
    (xdc_Char)0x45,  /* [5654] */
    (xdc_Char)0x76,  /* [5655] */
    (xdc_Char)0x65,  /* [5656] */
    (xdc_Char)0x6e,  /* [5657] */
    (xdc_Char)0x74,  /* [5658] */
    (xdc_Char)0x73,  /* [5659] */
    (xdc_Char)0x3a,  /* [5660] */
    (xdc_Char)0x20,  /* [5661] */
    (xdc_Char)0x30,  /* [5662] */
    (xdc_Char)0x78,  /* [5663] */
    (xdc_Char)0x25,  /* [5664] */
    (xdc_Char)0x78,  /* [5665] */
    (xdc_Char)0x2c,  /* [5666] */
    (xdc_Char)0x20,  /* [5667] */
    (xdc_Char)0x65,  /* [5668] */
    (xdc_Char)0x76,  /* [5669] */
    (xdc_Char)0x65,  /* [5670] */
    (xdc_Char)0x6e,  /* [5671] */
    (xdc_Char)0x74,  /* [5672] */
    (xdc_Char)0x49,  /* [5673] */
    (xdc_Char)0x64,  /* [5674] */
    (xdc_Char)0x3a,  /* [5675] */
    (xdc_Char)0x20,  /* [5676] */
    (xdc_Char)0x30,  /* [5677] */
    (xdc_Char)0x78,  /* [5678] */
    (xdc_Char)0x25,  /* [5679] */
    (xdc_Char)0x78,  /* [5680] */
    (xdc_Char)0x0,  /* [5681] */
    (xdc_Char)0x4c,  /* [5682] */
    (xdc_Char)0x4d,  /* [5683] */
    (xdc_Char)0x5f,  /* [5684] */
    (xdc_Char)0x70,  /* [5685] */
    (xdc_Char)0x65,  /* [5686] */
    (xdc_Char)0x6e,  /* [5687] */
    (xdc_Char)0x64,  /* [5688] */
    (xdc_Char)0x3a,  /* [5689] */
    (xdc_Char)0x20,  /* [5690] */
    (xdc_Char)0x65,  /* [5691] */
    (xdc_Char)0x76,  /* [5692] */
    (xdc_Char)0x65,  /* [5693] */
    (xdc_Char)0x6e,  /* [5694] */
    (xdc_Char)0x74,  /* [5695] */
    (xdc_Char)0x3a,  /* [5696] */
    (xdc_Char)0x20,  /* [5697] */
    (xdc_Char)0x30,  /* [5698] */
    (xdc_Char)0x78,  /* [5699] */
    (xdc_Char)0x25,  /* [5700] */
    (xdc_Char)0x78,  /* [5701] */
    (xdc_Char)0x2c,  /* [5702] */
    (xdc_Char)0x20,  /* [5703] */
    (xdc_Char)0x63,  /* [5704] */
    (xdc_Char)0x75,  /* [5705] */
    (xdc_Char)0x72,  /* [5706] */
    (xdc_Char)0x72,  /* [5707] */
    (xdc_Char)0x45,  /* [5708] */
    (xdc_Char)0x76,  /* [5709] */
    (xdc_Char)0x65,  /* [5710] */
    (xdc_Char)0x6e,  /* [5711] */
    (xdc_Char)0x74,  /* [5712] */
    (xdc_Char)0x73,  /* [5713] */
    (xdc_Char)0x3a,  /* [5714] */
    (xdc_Char)0x20,  /* [5715] */
    (xdc_Char)0x30,  /* [5716] */
    (xdc_Char)0x78,  /* [5717] */
    (xdc_Char)0x25,  /* [5718] */
    (xdc_Char)0x78,  /* [5719] */
    (xdc_Char)0x2c,  /* [5720] */
    (xdc_Char)0x20,  /* [5721] */
    (xdc_Char)0x61,  /* [5722] */
    (xdc_Char)0x6e,  /* [5723] */
    (xdc_Char)0x64,  /* [5724] */
    (xdc_Char)0x4d,  /* [5725] */
    (xdc_Char)0x61,  /* [5726] */
    (xdc_Char)0x73,  /* [5727] */
    (xdc_Char)0x6b,  /* [5728] */
    (xdc_Char)0x3a,  /* [5729] */
    (xdc_Char)0x20,  /* [5730] */
    (xdc_Char)0x30,  /* [5731] */
    (xdc_Char)0x78,  /* [5732] */
    (xdc_Char)0x25,  /* [5733] */
    (xdc_Char)0x78,  /* [5734] */
    (xdc_Char)0x2c,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x6f,  /* [5737] */
    (xdc_Char)0x72,  /* [5738] */
    (xdc_Char)0x4d,  /* [5739] */
    (xdc_Char)0x61,  /* [5740] */
    (xdc_Char)0x73,  /* [5741] */
    (xdc_Char)0x6b,  /* [5742] */
    (xdc_Char)0x3a,  /* [5743] */
    (xdc_Char)0x20,  /* [5744] */
    (xdc_Char)0x30,  /* [5745] */
    (xdc_Char)0x78,  /* [5746] */
    (xdc_Char)0x25,  /* [5747] */
    (xdc_Char)0x78,  /* [5748] */
    (xdc_Char)0x2c,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x74,  /* [5751] */
    (xdc_Char)0x69,  /* [5752] */
    (xdc_Char)0x6d,  /* [5753] */
    (xdc_Char)0x65,  /* [5754] */
    (xdc_Char)0x6f,  /* [5755] */
    (xdc_Char)0x75,  /* [5756] */
    (xdc_Char)0x74,  /* [5757] */
    (xdc_Char)0x3a,  /* [5758] */
    (xdc_Char)0x20,  /* [5759] */
    (xdc_Char)0x25,  /* [5760] */
    (xdc_Char)0x64,  /* [5761] */
    (xdc_Char)0x0,  /* [5762] */
    (xdc_Char)0x4c,  /* [5763] */
    (xdc_Char)0x4d,  /* [5764] */
    (xdc_Char)0x5f,  /* [5765] */
    (xdc_Char)0x70,  /* [5766] */
    (xdc_Char)0x6f,  /* [5767] */
    (xdc_Char)0x73,  /* [5768] */
    (xdc_Char)0x74,  /* [5769] */
    (xdc_Char)0x3a,  /* [5770] */
    (xdc_Char)0x20,  /* [5771] */
    (xdc_Char)0x73,  /* [5772] */
    (xdc_Char)0x65,  /* [5773] */
    (xdc_Char)0x6d,  /* [5774] */
    (xdc_Char)0x3a,  /* [5775] */
    (xdc_Char)0x20,  /* [5776] */
    (xdc_Char)0x30,  /* [5777] */
    (xdc_Char)0x78,  /* [5778] */
    (xdc_Char)0x25,  /* [5779] */
    (xdc_Char)0x78,  /* [5780] */
    (xdc_Char)0x2c,  /* [5781] */
    (xdc_Char)0x20,  /* [5782] */
    (xdc_Char)0x63,  /* [5783] */
    (xdc_Char)0x6f,  /* [5784] */
    (xdc_Char)0x75,  /* [5785] */
    (xdc_Char)0x6e,  /* [5786] */
    (xdc_Char)0x74,  /* [5787] */
    (xdc_Char)0x3a,  /* [5788] */
    (xdc_Char)0x20,  /* [5789] */
    (xdc_Char)0x25,  /* [5790] */
    (xdc_Char)0x64,  /* [5791] */
    (xdc_Char)0x0,  /* [5792] */
    (xdc_Char)0x4c,  /* [5793] */
    (xdc_Char)0x4d,  /* [5794] */
    (xdc_Char)0x5f,  /* [5795] */
    (xdc_Char)0x70,  /* [5796] */
    (xdc_Char)0x65,  /* [5797] */
    (xdc_Char)0x6e,  /* [5798] */
    (xdc_Char)0x64,  /* [5799] */
    (xdc_Char)0x3a,  /* [5800] */
    (xdc_Char)0x20,  /* [5801] */
    (xdc_Char)0x73,  /* [5802] */
    (xdc_Char)0x65,  /* [5803] */
    (xdc_Char)0x6d,  /* [5804] */
    (xdc_Char)0x3a,  /* [5805] */
    (xdc_Char)0x20,  /* [5806] */
    (xdc_Char)0x30,  /* [5807] */
    (xdc_Char)0x78,  /* [5808] */
    (xdc_Char)0x25,  /* [5809] */
    (xdc_Char)0x78,  /* [5810] */
    (xdc_Char)0x2c,  /* [5811] */
    (xdc_Char)0x20,  /* [5812] */
    (xdc_Char)0x63,  /* [5813] */
    (xdc_Char)0x6f,  /* [5814] */
    (xdc_Char)0x75,  /* [5815] */
    (xdc_Char)0x6e,  /* [5816] */
    (xdc_Char)0x74,  /* [5817] */
    (xdc_Char)0x3a,  /* [5818] */
    (xdc_Char)0x20,  /* [5819] */
    (xdc_Char)0x25,  /* [5820] */
    (xdc_Char)0x64,  /* [5821] */
    (xdc_Char)0x2c,  /* [5822] */
    (xdc_Char)0x20,  /* [5823] */
    (xdc_Char)0x74,  /* [5824] */
    (xdc_Char)0x69,  /* [5825] */
    (xdc_Char)0x6d,  /* [5826] */
    (xdc_Char)0x65,  /* [5827] */
    (xdc_Char)0x6f,  /* [5828] */
    (xdc_Char)0x75,  /* [5829] */
    (xdc_Char)0x74,  /* [5830] */
    (xdc_Char)0x3a,  /* [5831] */
    (xdc_Char)0x20,  /* [5832] */
    (xdc_Char)0x25,  /* [5833] */
    (xdc_Char)0x64,  /* [5834] */
    (xdc_Char)0x0,  /* [5835] */
    (xdc_Char)0x4c,  /* [5836] */
    (xdc_Char)0x4d,  /* [5837] */
    (xdc_Char)0x5f,  /* [5838] */
    (xdc_Char)0x62,  /* [5839] */
    (xdc_Char)0x65,  /* [5840] */
    (xdc_Char)0x67,  /* [5841] */
    (xdc_Char)0x69,  /* [5842] */
    (xdc_Char)0x6e,  /* [5843] */
    (xdc_Char)0x3a,  /* [5844] */
    (xdc_Char)0x20,  /* [5845] */
    (xdc_Char)0x73,  /* [5846] */
    (xdc_Char)0x77,  /* [5847] */
    (xdc_Char)0x69,  /* [5848] */
    (xdc_Char)0x3a,  /* [5849] */
    (xdc_Char)0x20,  /* [5850] */
    (xdc_Char)0x30,  /* [5851] */
    (xdc_Char)0x78,  /* [5852] */
    (xdc_Char)0x25,  /* [5853] */
    (xdc_Char)0x78,  /* [5854] */
    (xdc_Char)0x2c,  /* [5855] */
    (xdc_Char)0x20,  /* [5856] */
    (xdc_Char)0x66,  /* [5857] */
    (xdc_Char)0x75,  /* [5858] */
    (xdc_Char)0x6e,  /* [5859] */
    (xdc_Char)0x63,  /* [5860] */
    (xdc_Char)0x3a,  /* [5861] */
    (xdc_Char)0x20,  /* [5862] */
    (xdc_Char)0x30,  /* [5863] */
    (xdc_Char)0x78,  /* [5864] */
    (xdc_Char)0x25,  /* [5865] */
    (xdc_Char)0x78,  /* [5866] */
    (xdc_Char)0x2c,  /* [5867] */
    (xdc_Char)0x20,  /* [5868] */
    (xdc_Char)0x70,  /* [5869] */
    (xdc_Char)0x72,  /* [5870] */
    (xdc_Char)0x65,  /* [5871] */
    (xdc_Char)0x54,  /* [5872] */
    (xdc_Char)0x68,  /* [5873] */
    (xdc_Char)0x72,  /* [5874] */
    (xdc_Char)0x65,  /* [5875] */
    (xdc_Char)0x61,  /* [5876] */
    (xdc_Char)0x64,  /* [5877] */
    (xdc_Char)0x3a,  /* [5878] */
    (xdc_Char)0x20,  /* [5879] */
    (xdc_Char)0x25,  /* [5880] */
    (xdc_Char)0x64,  /* [5881] */
    (xdc_Char)0x0,  /* [5882] */
    (xdc_Char)0x4c,  /* [5883] */
    (xdc_Char)0x44,  /* [5884] */
    (xdc_Char)0x5f,  /* [5885] */
    (xdc_Char)0x65,  /* [5886] */
    (xdc_Char)0x6e,  /* [5887] */
    (xdc_Char)0x64,  /* [5888] */
    (xdc_Char)0x3a,  /* [5889] */
    (xdc_Char)0x20,  /* [5890] */
    (xdc_Char)0x73,  /* [5891] */
    (xdc_Char)0x77,  /* [5892] */
    (xdc_Char)0x69,  /* [5893] */
    (xdc_Char)0x3a,  /* [5894] */
    (xdc_Char)0x20,  /* [5895] */
    (xdc_Char)0x30,  /* [5896] */
    (xdc_Char)0x78,  /* [5897] */
    (xdc_Char)0x25,  /* [5898] */
    (xdc_Char)0x78,  /* [5899] */
    (xdc_Char)0x0,  /* [5900] */
    (xdc_Char)0x4c,  /* [5901] */
    (xdc_Char)0x4d,  /* [5902] */
    (xdc_Char)0x5f,  /* [5903] */
    (xdc_Char)0x70,  /* [5904] */
    (xdc_Char)0x6f,  /* [5905] */
    (xdc_Char)0x73,  /* [5906] */
    (xdc_Char)0x74,  /* [5907] */
    (xdc_Char)0x3a,  /* [5908] */
    (xdc_Char)0x20,  /* [5909] */
    (xdc_Char)0x73,  /* [5910] */
    (xdc_Char)0x77,  /* [5911] */
    (xdc_Char)0x69,  /* [5912] */
    (xdc_Char)0x3a,  /* [5913] */
    (xdc_Char)0x20,  /* [5914] */
    (xdc_Char)0x30,  /* [5915] */
    (xdc_Char)0x78,  /* [5916] */
    (xdc_Char)0x25,  /* [5917] */
    (xdc_Char)0x78,  /* [5918] */
    (xdc_Char)0x2c,  /* [5919] */
    (xdc_Char)0x20,  /* [5920] */
    (xdc_Char)0x66,  /* [5921] */
    (xdc_Char)0x75,  /* [5922] */
    (xdc_Char)0x6e,  /* [5923] */
    (xdc_Char)0x63,  /* [5924] */
    (xdc_Char)0x3a,  /* [5925] */
    (xdc_Char)0x20,  /* [5926] */
    (xdc_Char)0x30,  /* [5927] */
    (xdc_Char)0x78,  /* [5928] */
    (xdc_Char)0x25,  /* [5929] */
    (xdc_Char)0x78,  /* [5930] */
    (xdc_Char)0x2c,  /* [5931] */
    (xdc_Char)0x20,  /* [5932] */
    (xdc_Char)0x70,  /* [5933] */
    (xdc_Char)0x72,  /* [5934] */
    (xdc_Char)0x69,  /* [5935] */
    (xdc_Char)0x3a,  /* [5936] */
    (xdc_Char)0x20,  /* [5937] */
    (xdc_Char)0x25,  /* [5938] */
    (xdc_Char)0x64,  /* [5939] */
    (xdc_Char)0x0,  /* [5940] */
    (xdc_Char)0x4c,  /* [5941] */
    (xdc_Char)0x4d,  /* [5942] */
    (xdc_Char)0x5f,  /* [5943] */
    (xdc_Char)0x73,  /* [5944] */
    (xdc_Char)0x77,  /* [5945] */
    (xdc_Char)0x69,  /* [5946] */
    (xdc_Char)0x74,  /* [5947] */
    (xdc_Char)0x63,  /* [5948] */
    (xdc_Char)0x68,  /* [5949] */
    (xdc_Char)0x3a,  /* [5950] */
    (xdc_Char)0x20,  /* [5951] */
    (xdc_Char)0x6f,  /* [5952] */
    (xdc_Char)0x6c,  /* [5953] */
    (xdc_Char)0x64,  /* [5954] */
    (xdc_Char)0x74,  /* [5955] */
    (xdc_Char)0x73,  /* [5956] */
    (xdc_Char)0x6b,  /* [5957] */
    (xdc_Char)0x3a,  /* [5958] */
    (xdc_Char)0x20,  /* [5959] */
    (xdc_Char)0x30,  /* [5960] */
    (xdc_Char)0x78,  /* [5961] */
    (xdc_Char)0x25,  /* [5962] */
    (xdc_Char)0x78,  /* [5963] */
    (xdc_Char)0x2c,  /* [5964] */
    (xdc_Char)0x20,  /* [5965] */
    (xdc_Char)0x6f,  /* [5966] */
    (xdc_Char)0x6c,  /* [5967] */
    (xdc_Char)0x64,  /* [5968] */
    (xdc_Char)0x66,  /* [5969] */
    (xdc_Char)0x75,  /* [5970] */
    (xdc_Char)0x6e,  /* [5971] */
    (xdc_Char)0x63,  /* [5972] */
    (xdc_Char)0x3a,  /* [5973] */
    (xdc_Char)0x20,  /* [5974] */
    (xdc_Char)0x30,  /* [5975] */
    (xdc_Char)0x78,  /* [5976] */
    (xdc_Char)0x25,  /* [5977] */
    (xdc_Char)0x78,  /* [5978] */
    (xdc_Char)0x2c,  /* [5979] */
    (xdc_Char)0x20,  /* [5980] */
    (xdc_Char)0x6e,  /* [5981] */
    (xdc_Char)0x65,  /* [5982] */
    (xdc_Char)0x77,  /* [5983] */
    (xdc_Char)0x74,  /* [5984] */
    (xdc_Char)0x73,  /* [5985] */
    (xdc_Char)0x6b,  /* [5986] */
    (xdc_Char)0x3a,  /* [5987] */
    (xdc_Char)0x20,  /* [5988] */
    (xdc_Char)0x30,  /* [5989] */
    (xdc_Char)0x78,  /* [5990] */
    (xdc_Char)0x25,  /* [5991] */
    (xdc_Char)0x78,  /* [5992] */
    (xdc_Char)0x2c,  /* [5993] */
    (xdc_Char)0x20,  /* [5994] */
    (xdc_Char)0x6e,  /* [5995] */
    (xdc_Char)0x65,  /* [5996] */
    (xdc_Char)0x77,  /* [5997] */
    (xdc_Char)0x66,  /* [5998] */
    (xdc_Char)0x75,  /* [5999] */
    (xdc_Char)0x6e,  /* [6000] */
    (xdc_Char)0x63,  /* [6001] */
    (xdc_Char)0x3a,  /* [6002] */
    (xdc_Char)0x20,  /* [6003] */
    (xdc_Char)0x30,  /* [6004] */
    (xdc_Char)0x78,  /* [6005] */
    (xdc_Char)0x25,  /* [6006] */
    (xdc_Char)0x78,  /* [6007] */
    (xdc_Char)0x0,  /* [6008] */
    (xdc_Char)0x4c,  /* [6009] */
    (xdc_Char)0x4d,  /* [6010] */
    (xdc_Char)0x5f,  /* [6011] */
    (xdc_Char)0x73,  /* [6012] */
    (xdc_Char)0x6c,  /* [6013] */
    (xdc_Char)0x65,  /* [6014] */
    (xdc_Char)0x65,  /* [6015] */
    (xdc_Char)0x70,  /* [6016] */
    (xdc_Char)0x3a,  /* [6017] */
    (xdc_Char)0x20,  /* [6018] */
    (xdc_Char)0x74,  /* [6019] */
    (xdc_Char)0x73,  /* [6020] */
    (xdc_Char)0x6b,  /* [6021] */
    (xdc_Char)0x3a,  /* [6022] */
    (xdc_Char)0x20,  /* [6023] */
    (xdc_Char)0x30,  /* [6024] */
    (xdc_Char)0x78,  /* [6025] */
    (xdc_Char)0x25,  /* [6026] */
    (xdc_Char)0x78,  /* [6027] */
    (xdc_Char)0x2c,  /* [6028] */
    (xdc_Char)0x20,  /* [6029] */
    (xdc_Char)0x66,  /* [6030] */
    (xdc_Char)0x75,  /* [6031] */
    (xdc_Char)0x6e,  /* [6032] */
    (xdc_Char)0x63,  /* [6033] */
    (xdc_Char)0x3a,  /* [6034] */
    (xdc_Char)0x20,  /* [6035] */
    (xdc_Char)0x30,  /* [6036] */
    (xdc_Char)0x78,  /* [6037] */
    (xdc_Char)0x25,  /* [6038] */
    (xdc_Char)0x78,  /* [6039] */
    (xdc_Char)0x2c,  /* [6040] */
    (xdc_Char)0x20,  /* [6041] */
    (xdc_Char)0x74,  /* [6042] */
    (xdc_Char)0x69,  /* [6043] */
    (xdc_Char)0x6d,  /* [6044] */
    (xdc_Char)0x65,  /* [6045] */
    (xdc_Char)0x6f,  /* [6046] */
    (xdc_Char)0x75,  /* [6047] */
    (xdc_Char)0x74,  /* [6048] */
    (xdc_Char)0x3a,  /* [6049] */
    (xdc_Char)0x20,  /* [6050] */
    (xdc_Char)0x25,  /* [6051] */
    (xdc_Char)0x64,  /* [6052] */
    (xdc_Char)0x0,  /* [6053] */
    (xdc_Char)0x4c,  /* [6054] */
    (xdc_Char)0x44,  /* [6055] */
    (xdc_Char)0x5f,  /* [6056] */
    (xdc_Char)0x72,  /* [6057] */
    (xdc_Char)0x65,  /* [6058] */
    (xdc_Char)0x61,  /* [6059] */
    (xdc_Char)0x64,  /* [6060] */
    (xdc_Char)0x79,  /* [6061] */
    (xdc_Char)0x3a,  /* [6062] */
    (xdc_Char)0x20,  /* [6063] */
    (xdc_Char)0x74,  /* [6064] */
    (xdc_Char)0x73,  /* [6065] */
    (xdc_Char)0x6b,  /* [6066] */
    (xdc_Char)0x3a,  /* [6067] */
    (xdc_Char)0x20,  /* [6068] */
    (xdc_Char)0x30,  /* [6069] */
    (xdc_Char)0x78,  /* [6070] */
    (xdc_Char)0x25,  /* [6071] */
    (xdc_Char)0x78,  /* [6072] */
    (xdc_Char)0x2c,  /* [6073] */
    (xdc_Char)0x20,  /* [6074] */
    (xdc_Char)0x66,  /* [6075] */
    (xdc_Char)0x75,  /* [6076] */
    (xdc_Char)0x6e,  /* [6077] */
    (xdc_Char)0x63,  /* [6078] */
    (xdc_Char)0x3a,  /* [6079] */
    (xdc_Char)0x20,  /* [6080] */
    (xdc_Char)0x30,  /* [6081] */
    (xdc_Char)0x78,  /* [6082] */
    (xdc_Char)0x25,  /* [6083] */
    (xdc_Char)0x78,  /* [6084] */
    (xdc_Char)0x2c,  /* [6085] */
    (xdc_Char)0x20,  /* [6086] */
    (xdc_Char)0x70,  /* [6087] */
    (xdc_Char)0x72,  /* [6088] */
    (xdc_Char)0x69,  /* [6089] */
    (xdc_Char)0x3a,  /* [6090] */
    (xdc_Char)0x20,  /* [6091] */
    (xdc_Char)0x25,  /* [6092] */
    (xdc_Char)0x64,  /* [6093] */
    (xdc_Char)0x0,  /* [6094] */
    (xdc_Char)0x4c,  /* [6095] */
    (xdc_Char)0x44,  /* [6096] */
    (xdc_Char)0x5f,  /* [6097] */
    (xdc_Char)0x62,  /* [6098] */
    (xdc_Char)0x6c,  /* [6099] */
    (xdc_Char)0x6f,  /* [6100] */
    (xdc_Char)0x63,  /* [6101] */
    (xdc_Char)0x6b,  /* [6102] */
    (xdc_Char)0x3a,  /* [6103] */
    (xdc_Char)0x20,  /* [6104] */
    (xdc_Char)0x74,  /* [6105] */
    (xdc_Char)0x73,  /* [6106] */
    (xdc_Char)0x6b,  /* [6107] */
    (xdc_Char)0x3a,  /* [6108] */
    (xdc_Char)0x20,  /* [6109] */
    (xdc_Char)0x30,  /* [6110] */
    (xdc_Char)0x78,  /* [6111] */
    (xdc_Char)0x25,  /* [6112] */
    (xdc_Char)0x78,  /* [6113] */
    (xdc_Char)0x2c,  /* [6114] */
    (xdc_Char)0x20,  /* [6115] */
    (xdc_Char)0x66,  /* [6116] */
    (xdc_Char)0x75,  /* [6117] */
    (xdc_Char)0x6e,  /* [6118] */
    (xdc_Char)0x63,  /* [6119] */
    (xdc_Char)0x3a,  /* [6120] */
    (xdc_Char)0x20,  /* [6121] */
    (xdc_Char)0x30,  /* [6122] */
    (xdc_Char)0x78,  /* [6123] */
    (xdc_Char)0x25,  /* [6124] */
    (xdc_Char)0x78,  /* [6125] */
    (xdc_Char)0x0,  /* [6126] */
    (xdc_Char)0x4c,  /* [6127] */
    (xdc_Char)0x4d,  /* [6128] */
    (xdc_Char)0x5f,  /* [6129] */
    (xdc_Char)0x79,  /* [6130] */
    (xdc_Char)0x69,  /* [6131] */
    (xdc_Char)0x65,  /* [6132] */
    (xdc_Char)0x6c,  /* [6133] */
    (xdc_Char)0x64,  /* [6134] */
    (xdc_Char)0x3a,  /* [6135] */
    (xdc_Char)0x20,  /* [6136] */
    (xdc_Char)0x74,  /* [6137] */
    (xdc_Char)0x73,  /* [6138] */
    (xdc_Char)0x6b,  /* [6139] */
    (xdc_Char)0x3a,  /* [6140] */
    (xdc_Char)0x20,  /* [6141] */
    (xdc_Char)0x30,  /* [6142] */
    (xdc_Char)0x78,  /* [6143] */
    (xdc_Char)0x25,  /* [6144] */
    (xdc_Char)0x78,  /* [6145] */
    (xdc_Char)0x2c,  /* [6146] */
    (xdc_Char)0x20,  /* [6147] */
    (xdc_Char)0x66,  /* [6148] */
    (xdc_Char)0x75,  /* [6149] */
    (xdc_Char)0x6e,  /* [6150] */
    (xdc_Char)0x63,  /* [6151] */
    (xdc_Char)0x3a,  /* [6152] */
    (xdc_Char)0x20,  /* [6153] */
    (xdc_Char)0x30,  /* [6154] */
    (xdc_Char)0x78,  /* [6155] */
    (xdc_Char)0x25,  /* [6156] */
    (xdc_Char)0x78,  /* [6157] */
    (xdc_Char)0x2c,  /* [6158] */
    (xdc_Char)0x20,  /* [6159] */
    (xdc_Char)0x63,  /* [6160] */
    (xdc_Char)0x75,  /* [6161] */
    (xdc_Char)0x72,  /* [6162] */
    (xdc_Char)0x72,  /* [6163] */
    (xdc_Char)0x54,  /* [6164] */
    (xdc_Char)0x68,  /* [6165] */
    (xdc_Char)0x72,  /* [6166] */
    (xdc_Char)0x65,  /* [6167] */
    (xdc_Char)0x61,  /* [6168] */
    (xdc_Char)0x64,  /* [6169] */
    (xdc_Char)0x3a,  /* [6170] */
    (xdc_Char)0x20,  /* [6171] */
    (xdc_Char)0x25,  /* [6172] */
    (xdc_Char)0x64,  /* [6173] */
    (xdc_Char)0x0,  /* [6174] */
    (xdc_Char)0x4c,  /* [6175] */
    (xdc_Char)0x4d,  /* [6176] */
    (xdc_Char)0x5f,  /* [6177] */
    (xdc_Char)0x73,  /* [6178] */
    (xdc_Char)0x65,  /* [6179] */
    (xdc_Char)0x74,  /* [6180] */
    (xdc_Char)0x50,  /* [6181] */
    (xdc_Char)0x72,  /* [6182] */
    (xdc_Char)0x69,  /* [6183] */
    (xdc_Char)0x3a,  /* [6184] */
    (xdc_Char)0x20,  /* [6185] */
    (xdc_Char)0x74,  /* [6186] */
    (xdc_Char)0x73,  /* [6187] */
    (xdc_Char)0x6b,  /* [6188] */
    (xdc_Char)0x3a,  /* [6189] */
    (xdc_Char)0x20,  /* [6190] */
    (xdc_Char)0x30,  /* [6191] */
    (xdc_Char)0x78,  /* [6192] */
    (xdc_Char)0x25,  /* [6193] */
    (xdc_Char)0x78,  /* [6194] */
    (xdc_Char)0x2c,  /* [6195] */
    (xdc_Char)0x20,  /* [6196] */
    (xdc_Char)0x66,  /* [6197] */
    (xdc_Char)0x75,  /* [6198] */
    (xdc_Char)0x6e,  /* [6199] */
    (xdc_Char)0x63,  /* [6200] */
    (xdc_Char)0x3a,  /* [6201] */
    (xdc_Char)0x20,  /* [6202] */
    (xdc_Char)0x30,  /* [6203] */
    (xdc_Char)0x78,  /* [6204] */
    (xdc_Char)0x25,  /* [6205] */
    (xdc_Char)0x78,  /* [6206] */
    (xdc_Char)0x2c,  /* [6207] */
    (xdc_Char)0x20,  /* [6208] */
    (xdc_Char)0x6f,  /* [6209] */
    (xdc_Char)0x6c,  /* [6210] */
    (xdc_Char)0x64,  /* [6211] */
    (xdc_Char)0x50,  /* [6212] */
    (xdc_Char)0x72,  /* [6213] */
    (xdc_Char)0x69,  /* [6214] */
    (xdc_Char)0x3a,  /* [6215] */
    (xdc_Char)0x20,  /* [6216] */
    (xdc_Char)0x25,  /* [6217] */
    (xdc_Char)0x64,  /* [6218] */
    (xdc_Char)0x2c,  /* [6219] */
    (xdc_Char)0x20,  /* [6220] */
    (xdc_Char)0x6e,  /* [6221] */
    (xdc_Char)0x65,  /* [6222] */
    (xdc_Char)0x77,  /* [6223] */
    (xdc_Char)0x50,  /* [6224] */
    (xdc_Char)0x72,  /* [6225] */
    (xdc_Char)0x69,  /* [6226] */
    (xdc_Char)0x20,  /* [6227] */
    (xdc_Char)0x25,  /* [6228] */
    (xdc_Char)0x64,  /* [6229] */
    (xdc_Char)0x0,  /* [6230] */
    (xdc_Char)0x4c,  /* [6231] */
    (xdc_Char)0x44,  /* [6232] */
    (xdc_Char)0x5f,  /* [6233] */
    (xdc_Char)0x65,  /* [6234] */
    (xdc_Char)0x78,  /* [6235] */
    (xdc_Char)0x69,  /* [6236] */
    (xdc_Char)0x74,  /* [6237] */
    (xdc_Char)0x3a,  /* [6238] */
    (xdc_Char)0x20,  /* [6239] */
    (xdc_Char)0x74,  /* [6240] */
    (xdc_Char)0x73,  /* [6241] */
    (xdc_Char)0x6b,  /* [6242] */
    (xdc_Char)0x3a,  /* [6243] */
    (xdc_Char)0x20,  /* [6244] */
    (xdc_Char)0x30,  /* [6245] */
    (xdc_Char)0x78,  /* [6246] */
    (xdc_Char)0x25,  /* [6247] */
    (xdc_Char)0x78,  /* [6248] */
    (xdc_Char)0x2c,  /* [6249] */
    (xdc_Char)0x20,  /* [6250] */
    (xdc_Char)0x66,  /* [6251] */
    (xdc_Char)0x75,  /* [6252] */
    (xdc_Char)0x6e,  /* [6253] */
    (xdc_Char)0x63,  /* [6254] */
    (xdc_Char)0x3a,  /* [6255] */
    (xdc_Char)0x20,  /* [6256] */
    (xdc_Char)0x30,  /* [6257] */
    (xdc_Char)0x78,  /* [6258] */
    (xdc_Char)0x25,  /* [6259] */
    (xdc_Char)0x78,  /* [6260] */
    (xdc_Char)0x0,  /* [6261] */
    (xdc_Char)0x4c,  /* [6262] */
    (xdc_Char)0x4d,  /* [6263] */
    (xdc_Char)0x5f,  /* [6264] */
    (xdc_Char)0x73,  /* [6265] */
    (xdc_Char)0x65,  /* [6266] */
    (xdc_Char)0x74,  /* [6267] */
    (xdc_Char)0x41,  /* [6268] */
    (xdc_Char)0x66,  /* [6269] */
    (xdc_Char)0x66,  /* [6270] */
    (xdc_Char)0x69,  /* [6271] */
    (xdc_Char)0x6e,  /* [6272] */
    (xdc_Char)0x69,  /* [6273] */
    (xdc_Char)0x74,  /* [6274] */
    (xdc_Char)0x79,  /* [6275] */
    (xdc_Char)0x3a,  /* [6276] */
    (xdc_Char)0x20,  /* [6277] */
    (xdc_Char)0x74,  /* [6278] */
    (xdc_Char)0x73,  /* [6279] */
    (xdc_Char)0x6b,  /* [6280] */
    (xdc_Char)0x3a,  /* [6281] */
    (xdc_Char)0x20,  /* [6282] */
    (xdc_Char)0x30,  /* [6283] */
    (xdc_Char)0x78,  /* [6284] */
    (xdc_Char)0x25,  /* [6285] */
    (xdc_Char)0x78,  /* [6286] */
    (xdc_Char)0x2c,  /* [6287] */
    (xdc_Char)0x20,  /* [6288] */
    (xdc_Char)0x66,  /* [6289] */
    (xdc_Char)0x75,  /* [6290] */
    (xdc_Char)0x6e,  /* [6291] */
    (xdc_Char)0x63,  /* [6292] */
    (xdc_Char)0x3a,  /* [6293] */
    (xdc_Char)0x20,  /* [6294] */
    (xdc_Char)0x30,  /* [6295] */
    (xdc_Char)0x78,  /* [6296] */
    (xdc_Char)0x25,  /* [6297] */
    (xdc_Char)0x78,  /* [6298] */
    (xdc_Char)0x2c,  /* [6299] */
    (xdc_Char)0x20,  /* [6300] */
    (xdc_Char)0x6f,  /* [6301] */
    (xdc_Char)0x6c,  /* [6302] */
    (xdc_Char)0x64,  /* [6303] */
    (xdc_Char)0x43,  /* [6304] */
    (xdc_Char)0x6f,  /* [6305] */
    (xdc_Char)0x72,  /* [6306] */
    (xdc_Char)0x65,  /* [6307] */
    (xdc_Char)0x3a,  /* [6308] */
    (xdc_Char)0x20,  /* [6309] */
    (xdc_Char)0x25,  /* [6310] */
    (xdc_Char)0x64,  /* [6311] */
    (xdc_Char)0x2c,  /* [6312] */
    (xdc_Char)0x20,  /* [6313] */
    (xdc_Char)0x6f,  /* [6314] */
    (xdc_Char)0x6c,  /* [6315] */
    (xdc_Char)0x64,  /* [6316] */
    (xdc_Char)0x41,  /* [6317] */
    (xdc_Char)0x66,  /* [6318] */
    (xdc_Char)0x66,  /* [6319] */
    (xdc_Char)0x69,  /* [6320] */
    (xdc_Char)0x6e,  /* [6321] */
    (xdc_Char)0x69,  /* [6322] */
    (xdc_Char)0x74,  /* [6323] */
    (xdc_Char)0x79,  /* [6324] */
    (xdc_Char)0x20,  /* [6325] */
    (xdc_Char)0x25,  /* [6326] */
    (xdc_Char)0x64,  /* [6327] */
    (xdc_Char)0x2c,  /* [6328] */
    (xdc_Char)0x20,  /* [6329] */
    (xdc_Char)0x6e,  /* [6330] */
    (xdc_Char)0x65,  /* [6331] */
    (xdc_Char)0x77,  /* [6332] */
    (xdc_Char)0x41,  /* [6333] */
    (xdc_Char)0x66,  /* [6334] */
    (xdc_Char)0x66,  /* [6335] */
    (xdc_Char)0x69,  /* [6336] */
    (xdc_Char)0x6e,  /* [6337] */
    (xdc_Char)0x69,  /* [6338] */
    (xdc_Char)0x74,  /* [6339] */
    (xdc_Char)0x79,  /* [6340] */
    (xdc_Char)0x20,  /* [6341] */
    (xdc_Char)0x25,  /* [6342] */
    (xdc_Char)0x64,  /* [6343] */
    (xdc_Char)0x0,  /* [6344] */
    (xdc_Char)0x4c,  /* [6345] */
    (xdc_Char)0x44,  /* [6346] */
    (xdc_Char)0x5f,  /* [6347] */
    (xdc_Char)0x73,  /* [6348] */
    (xdc_Char)0x63,  /* [6349] */
    (xdc_Char)0x68,  /* [6350] */
    (xdc_Char)0x65,  /* [6351] */
    (xdc_Char)0x64,  /* [6352] */
    (xdc_Char)0x75,  /* [6353] */
    (xdc_Char)0x6c,  /* [6354] */
    (xdc_Char)0x65,  /* [6355] */
    (xdc_Char)0x3a,  /* [6356] */
    (xdc_Char)0x20,  /* [6357] */
    (xdc_Char)0x63,  /* [6358] */
    (xdc_Char)0x6f,  /* [6359] */
    (xdc_Char)0x72,  /* [6360] */
    (xdc_Char)0x65,  /* [6361] */
    (xdc_Char)0x49,  /* [6362] */
    (xdc_Char)0x64,  /* [6363] */
    (xdc_Char)0x3a,  /* [6364] */
    (xdc_Char)0x20,  /* [6365] */
    (xdc_Char)0x25,  /* [6366] */
    (xdc_Char)0x64,  /* [6367] */
    (xdc_Char)0x2c,  /* [6368] */
    (xdc_Char)0x20,  /* [6369] */
    (xdc_Char)0x77,  /* [6370] */
    (xdc_Char)0x6f,  /* [6371] */
    (xdc_Char)0x72,  /* [6372] */
    (xdc_Char)0x6b,  /* [6373] */
    (xdc_Char)0x46,  /* [6374] */
    (xdc_Char)0x6c,  /* [6375] */
    (xdc_Char)0x61,  /* [6376] */
    (xdc_Char)0x67,  /* [6377] */
    (xdc_Char)0x3a,  /* [6378] */
    (xdc_Char)0x20,  /* [6379] */
    (xdc_Char)0x25,  /* [6380] */
    (xdc_Char)0x64,  /* [6381] */
    (xdc_Char)0x2c,  /* [6382] */
    (xdc_Char)0x20,  /* [6383] */
    (xdc_Char)0x63,  /* [6384] */
    (xdc_Char)0x75,  /* [6385] */
    (xdc_Char)0x72,  /* [6386] */
    (xdc_Char)0x53,  /* [6387] */
    (xdc_Char)0x65,  /* [6388] */
    (xdc_Char)0x74,  /* [6389] */
    (xdc_Char)0x4c,  /* [6390] */
    (xdc_Char)0x6f,  /* [6391] */
    (xdc_Char)0x63,  /* [6392] */
    (xdc_Char)0x61,  /* [6393] */
    (xdc_Char)0x6c,  /* [6394] */
    (xdc_Char)0x3a,  /* [6395] */
    (xdc_Char)0x20,  /* [6396] */
    (xdc_Char)0x25,  /* [6397] */
    (xdc_Char)0x64,  /* [6398] */
    (xdc_Char)0x2c,  /* [6399] */
    (xdc_Char)0x20,  /* [6400] */
    (xdc_Char)0x63,  /* [6401] */
    (xdc_Char)0x75,  /* [6402] */
    (xdc_Char)0x72,  /* [6403] */
    (xdc_Char)0x53,  /* [6404] */
    (xdc_Char)0x65,  /* [6405] */
    (xdc_Char)0x74,  /* [6406] */
    (xdc_Char)0x58,  /* [6407] */
    (xdc_Char)0x3a,  /* [6408] */
    (xdc_Char)0x20,  /* [6409] */
    (xdc_Char)0x25,  /* [6410] */
    (xdc_Char)0x64,  /* [6411] */
    (xdc_Char)0x2c,  /* [6412] */
    (xdc_Char)0x20,  /* [6413] */
    (xdc_Char)0x63,  /* [6414] */
    (xdc_Char)0x75,  /* [6415] */
    (xdc_Char)0x72,  /* [6416] */
    (xdc_Char)0x4d,  /* [6417] */
    (xdc_Char)0x61,  /* [6418] */
    (xdc_Char)0x73,  /* [6419] */
    (xdc_Char)0x6b,  /* [6420] */
    (xdc_Char)0x4c,  /* [6421] */
    (xdc_Char)0x6f,  /* [6422] */
    (xdc_Char)0x63,  /* [6423] */
    (xdc_Char)0x61,  /* [6424] */
    (xdc_Char)0x6c,  /* [6425] */
    (xdc_Char)0x3a,  /* [6426] */
    (xdc_Char)0x20,  /* [6427] */
    (xdc_Char)0x25,  /* [6428] */
    (xdc_Char)0x64,  /* [6429] */
    (xdc_Char)0x0,  /* [6430] */
    (xdc_Char)0x4c,  /* [6431] */
    (xdc_Char)0x44,  /* [6432] */
    (xdc_Char)0x5f,  /* [6433] */
    (xdc_Char)0x6e,  /* [6434] */
    (xdc_Char)0x6f,  /* [6435] */
    (xdc_Char)0x57,  /* [6436] */
    (xdc_Char)0x6f,  /* [6437] */
    (xdc_Char)0x72,  /* [6438] */
    (xdc_Char)0x6b,  /* [6439] */
    (xdc_Char)0x3a,  /* [6440] */
    (xdc_Char)0x20,  /* [6441] */
    (xdc_Char)0x63,  /* [6442] */
    (xdc_Char)0x6f,  /* [6443] */
    (xdc_Char)0x72,  /* [6444] */
    (xdc_Char)0x65,  /* [6445] */
    (xdc_Char)0x49,  /* [6446] */
    (xdc_Char)0x64,  /* [6447] */
    (xdc_Char)0x3a,  /* [6448] */
    (xdc_Char)0x20,  /* [6449] */
    (xdc_Char)0x25,  /* [6450] */
    (xdc_Char)0x64,  /* [6451] */
    (xdc_Char)0x2c,  /* [6452] */
    (xdc_Char)0x20,  /* [6453] */
    (xdc_Char)0x63,  /* [6454] */
    (xdc_Char)0x75,  /* [6455] */
    (xdc_Char)0x72,  /* [6456] */
    (xdc_Char)0x53,  /* [6457] */
    (xdc_Char)0x65,  /* [6458] */
    (xdc_Char)0x74,  /* [6459] */
    (xdc_Char)0x4c,  /* [6460] */
    (xdc_Char)0x6f,  /* [6461] */
    (xdc_Char)0x63,  /* [6462] */
    (xdc_Char)0x61,  /* [6463] */
    (xdc_Char)0x6c,  /* [6464] */
    (xdc_Char)0x3a,  /* [6465] */
    (xdc_Char)0x20,  /* [6466] */
    (xdc_Char)0x25,  /* [6467] */
    (xdc_Char)0x64,  /* [6468] */
    (xdc_Char)0x2c,  /* [6469] */
    (xdc_Char)0x20,  /* [6470] */
    (xdc_Char)0x63,  /* [6471] */
    (xdc_Char)0x75,  /* [6472] */
    (xdc_Char)0x72,  /* [6473] */
    (xdc_Char)0x53,  /* [6474] */
    (xdc_Char)0x65,  /* [6475] */
    (xdc_Char)0x74,  /* [6476] */
    (xdc_Char)0x58,  /* [6477] */
    (xdc_Char)0x3a,  /* [6478] */
    (xdc_Char)0x20,  /* [6479] */
    (xdc_Char)0x25,  /* [6480] */
    (xdc_Char)0x64,  /* [6481] */
    (xdc_Char)0x2c,  /* [6482] */
    (xdc_Char)0x20,  /* [6483] */
    (xdc_Char)0x63,  /* [6484] */
    (xdc_Char)0x75,  /* [6485] */
    (xdc_Char)0x72,  /* [6486] */
    (xdc_Char)0x4d,  /* [6487] */
    (xdc_Char)0x61,  /* [6488] */
    (xdc_Char)0x73,  /* [6489] */
    (xdc_Char)0x6b,  /* [6490] */
    (xdc_Char)0x4c,  /* [6491] */
    (xdc_Char)0x6f,  /* [6492] */
    (xdc_Char)0x63,  /* [6493] */
    (xdc_Char)0x61,  /* [6494] */
    (xdc_Char)0x6c,  /* [6495] */
    (xdc_Char)0x3a,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x25,  /* [6498] */
    (xdc_Char)0x64,  /* [6499] */
    (xdc_Char)0x0,  /* [6500] */
    (xdc_Char)0x45,  /* [6501] */
    (xdc_Char)0x52,  /* [6502] */
    (xdc_Char)0x52,  /* [6503] */
    (xdc_Char)0x4f,  /* [6504] */
    (xdc_Char)0x52,  /* [6505] */
    (xdc_Char)0x3a,  /* [6506] */
    (xdc_Char)0x20,  /* [6507] */
    (xdc_Char)0x45,  /* [6508] */
    (xdc_Char)0x72,  /* [6509] */
    (xdc_Char)0x72,  /* [6510] */
    (xdc_Char)0x6f,  /* [6511] */
    (xdc_Char)0x72,  /* [6512] */
    (xdc_Char)0x43,  /* [6513] */
    (xdc_Char)0x6f,  /* [6514] */
    (xdc_Char)0x64,  /* [6515] */
    (xdc_Char)0x65,  /* [6516] */
    (xdc_Char)0x3a,  /* [6517] */
    (xdc_Char)0x30,  /* [6518] */
    (xdc_Char)0x78,  /* [6519] */
    (xdc_Char)0x25,  /* [6520] */
    (xdc_Char)0x78,  /* [6521] */
    (xdc_Char)0x0,  /* [6522] */
    (xdc_Char)0x45,  /* [6523] */
    (xdc_Char)0x52,  /* [6524] */
    (xdc_Char)0x52,  /* [6525] */
    (xdc_Char)0x4f,  /* [6526] */
    (xdc_Char)0x52,  /* [6527] */
    (xdc_Char)0x3a,  /* [6528] */
    (xdc_Char)0x20,  /* [6529] */
    (xdc_Char)0x45,  /* [6530] */
    (xdc_Char)0x72,  /* [6531] */
    (xdc_Char)0x72,  /* [6532] */
    (xdc_Char)0x6f,  /* [6533] */
    (xdc_Char)0x72,  /* [6534] */
    (xdc_Char)0x43,  /* [6535] */
    (xdc_Char)0x6f,  /* [6536] */
    (xdc_Char)0x64,  /* [6537] */
    (xdc_Char)0x65,  /* [6538] */
    (xdc_Char)0x3a,  /* [6539] */
    (xdc_Char)0x30,  /* [6540] */
    (xdc_Char)0x78,  /* [6541] */
    (xdc_Char)0x25,  /* [6542] */
    (xdc_Char)0x78,  /* [6543] */
    (xdc_Char)0x2e,  /* [6544] */
    (xdc_Char)0x20,  /* [6545] */
    (xdc_Char)0x25,  /* [6546] */
    (xdc_Char)0x24,  /* [6547] */
    (xdc_Char)0x53,  /* [6548] */
    (xdc_Char)0x0,  /* [6549] */
    (xdc_Char)0x48,  /* [6550] */
    (xdc_Char)0x57,  /* [6551] */
    (xdc_Char)0x20,  /* [6552] */
    (xdc_Char)0x45,  /* [6553] */
    (xdc_Char)0x52,  /* [6554] */
    (xdc_Char)0x52,  /* [6555] */
    (xdc_Char)0x4f,  /* [6556] */
    (xdc_Char)0x52,  /* [6557] */
    (xdc_Char)0x3a,  /* [6558] */
    (xdc_Char)0x20,  /* [6559] */
    (xdc_Char)0x45,  /* [6560] */
    (xdc_Char)0x72,  /* [6561] */
    (xdc_Char)0x72,  /* [6562] */
    (xdc_Char)0x6f,  /* [6563] */
    (xdc_Char)0x72,  /* [6564] */
    (xdc_Char)0x43,  /* [6565] */
    (xdc_Char)0x6f,  /* [6566] */
    (xdc_Char)0x64,  /* [6567] */
    (xdc_Char)0x65,  /* [6568] */
    (xdc_Char)0x3a,  /* [6569] */
    (xdc_Char)0x30,  /* [6570] */
    (xdc_Char)0x78,  /* [6571] */
    (xdc_Char)0x25,  /* [6572] */
    (xdc_Char)0x78,  /* [6573] */
    (xdc_Char)0x0,  /* [6574] */
    (xdc_Char)0x48,  /* [6575] */
    (xdc_Char)0x57,  /* [6576] */
    (xdc_Char)0x20,  /* [6577] */
    (xdc_Char)0x45,  /* [6578] */
    (xdc_Char)0x52,  /* [6579] */
    (xdc_Char)0x52,  /* [6580] */
    (xdc_Char)0x4f,  /* [6581] */
    (xdc_Char)0x52,  /* [6582] */
    (xdc_Char)0x3a,  /* [6583] */
    (xdc_Char)0x20,  /* [6584] */
    (xdc_Char)0x45,  /* [6585] */
    (xdc_Char)0x72,  /* [6586] */
    (xdc_Char)0x72,  /* [6587] */
    (xdc_Char)0x6f,  /* [6588] */
    (xdc_Char)0x72,  /* [6589] */
    (xdc_Char)0x43,  /* [6590] */
    (xdc_Char)0x6f,  /* [6591] */
    (xdc_Char)0x64,  /* [6592] */
    (xdc_Char)0x65,  /* [6593] */
    (xdc_Char)0x3a,  /* [6594] */
    (xdc_Char)0x30,  /* [6595] */
    (xdc_Char)0x78,  /* [6596] */
    (xdc_Char)0x25,  /* [6597] */
    (xdc_Char)0x78,  /* [6598] */
    (xdc_Char)0x2e,  /* [6599] */
    (xdc_Char)0x20,  /* [6600] */
    (xdc_Char)0x25,  /* [6601] */
    (xdc_Char)0x24,  /* [6602] */
    (xdc_Char)0x53,  /* [6603] */
    (xdc_Char)0x0,  /* [6604] */
    (xdc_Char)0x46,  /* [6605] */
    (xdc_Char)0x41,  /* [6606] */
    (xdc_Char)0x54,  /* [6607] */
    (xdc_Char)0x41,  /* [6608] */
    (xdc_Char)0x4c,  /* [6609] */
    (xdc_Char)0x20,  /* [6610] */
    (xdc_Char)0x45,  /* [6611] */
    (xdc_Char)0x52,  /* [6612] */
    (xdc_Char)0x52,  /* [6613] */
    (xdc_Char)0x4f,  /* [6614] */
    (xdc_Char)0x52,  /* [6615] */
    (xdc_Char)0x3a,  /* [6616] */
    (xdc_Char)0x20,  /* [6617] */
    (xdc_Char)0x45,  /* [6618] */
    (xdc_Char)0x72,  /* [6619] */
    (xdc_Char)0x72,  /* [6620] */
    (xdc_Char)0x6f,  /* [6621] */
    (xdc_Char)0x72,  /* [6622] */
    (xdc_Char)0x43,  /* [6623] */
    (xdc_Char)0x6f,  /* [6624] */
    (xdc_Char)0x64,  /* [6625] */
    (xdc_Char)0x65,  /* [6626] */
    (xdc_Char)0x3a,  /* [6627] */
    (xdc_Char)0x30,  /* [6628] */
    (xdc_Char)0x78,  /* [6629] */
    (xdc_Char)0x25,  /* [6630] */
    (xdc_Char)0x78,  /* [6631] */
    (xdc_Char)0x0,  /* [6632] */
    (xdc_Char)0x46,  /* [6633] */
    (xdc_Char)0x41,  /* [6634] */
    (xdc_Char)0x54,  /* [6635] */
    (xdc_Char)0x41,  /* [6636] */
    (xdc_Char)0x4c,  /* [6637] */
    (xdc_Char)0x20,  /* [6638] */
    (xdc_Char)0x45,  /* [6639] */
    (xdc_Char)0x52,  /* [6640] */
    (xdc_Char)0x52,  /* [6641] */
    (xdc_Char)0x4f,  /* [6642] */
    (xdc_Char)0x52,  /* [6643] */
    (xdc_Char)0x3a,  /* [6644] */
    (xdc_Char)0x20,  /* [6645] */
    (xdc_Char)0x45,  /* [6646] */
    (xdc_Char)0x72,  /* [6647] */
    (xdc_Char)0x72,  /* [6648] */
    (xdc_Char)0x6f,  /* [6649] */
    (xdc_Char)0x72,  /* [6650] */
    (xdc_Char)0x43,  /* [6651] */
    (xdc_Char)0x6f,  /* [6652] */
    (xdc_Char)0x64,  /* [6653] */
    (xdc_Char)0x65,  /* [6654] */
    (xdc_Char)0x3a,  /* [6655] */
    (xdc_Char)0x30,  /* [6656] */
    (xdc_Char)0x78,  /* [6657] */
    (xdc_Char)0x25,  /* [6658] */
    (xdc_Char)0x78,  /* [6659] */
    (xdc_Char)0x2e,  /* [6660] */
    (xdc_Char)0x20,  /* [6661] */
    (xdc_Char)0x25,  /* [6662] */
    (xdc_Char)0x24,  /* [6663] */
    (xdc_Char)0x53,  /* [6664] */
    (xdc_Char)0x0,  /* [6665] */
    (xdc_Char)0x43,  /* [6666] */
    (xdc_Char)0x52,  /* [6667] */
    (xdc_Char)0x49,  /* [6668] */
    (xdc_Char)0x54,  /* [6669] */
    (xdc_Char)0x49,  /* [6670] */
    (xdc_Char)0x43,  /* [6671] */
    (xdc_Char)0x41,  /* [6672] */
    (xdc_Char)0x4c,  /* [6673] */
    (xdc_Char)0x20,  /* [6674] */
    (xdc_Char)0x45,  /* [6675] */
    (xdc_Char)0x52,  /* [6676] */
    (xdc_Char)0x52,  /* [6677] */
    (xdc_Char)0x4f,  /* [6678] */
    (xdc_Char)0x52,  /* [6679] */
    (xdc_Char)0x3a,  /* [6680] */
    (xdc_Char)0x20,  /* [6681] */
    (xdc_Char)0x45,  /* [6682] */
    (xdc_Char)0x72,  /* [6683] */
    (xdc_Char)0x72,  /* [6684] */
    (xdc_Char)0x6f,  /* [6685] */
    (xdc_Char)0x72,  /* [6686] */
    (xdc_Char)0x43,  /* [6687] */
    (xdc_Char)0x6f,  /* [6688] */
    (xdc_Char)0x64,  /* [6689] */
    (xdc_Char)0x65,  /* [6690] */
    (xdc_Char)0x3a,  /* [6691] */
    (xdc_Char)0x30,  /* [6692] */
    (xdc_Char)0x78,  /* [6693] */
    (xdc_Char)0x25,  /* [6694] */
    (xdc_Char)0x78,  /* [6695] */
    (xdc_Char)0x0,  /* [6696] */
    (xdc_Char)0x43,  /* [6697] */
    (xdc_Char)0x52,  /* [6698] */
    (xdc_Char)0x49,  /* [6699] */
    (xdc_Char)0x54,  /* [6700] */
    (xdc_Char)0x49,  /* [6701] */
    (xdc_Char)0x43,  /* [6702] */
    (xdc_Char)0x41,  /* [6703] */
    (xdc_Char)0x4c,  /* [6704] */
    (xdc_Char)0x20,  /* [6705] */
    (xdc_Char)0x45,  /* [6706] */
    (xdc_Char)0x52,  /* [6707] */
    (xdc_Char)0x52,  /* [6708] */
    (xdc_Char)0x4f,  /* [6709] */
    (xdc_Char)0x52,  /* [6710] */
    (xdc_Char)0x3a,  /* [6711] */
    (xdc_Char)0x20,  /* [6712] */
    (xdc_Char)0x45,  /* [6713] */
    (xdc_Char)0x72,  /* [6714] */
    (xdc_Char)0x72,  /* [6715] */
    (xdc_Char)0x6f,  /* [6716] */
    (xdc_Char)0x72,  /* [6717] */
    (xdc_Char)0x43,  /* [6718] */
    (xdc_Char)0x6f,  /* [6719] */
    (xdc_Char)0x64,  /* [6720] */
    (xdc_Char)0x65,  /* [6721] */
    (xdc_Char)0x3a,  /* [6722] */
    (xdc_Char)0x30,  /* [6723] */
    (xdc_Char)0x78,  /* [6724] */
    (xdc_Char)0x25,  /* [6725] */
    (xdc_Char)0x78,  /* [6726] */
    (xdc_Char)0x2e,  /* [6727] */
    (xdc_Char)0x20,  /* [6728] */
    (xdc_Char)0x25,  /* [6729] */
    (xdc_Char)0x24,  /* [6730] */
    (xdc_Char)0x53,  /* [6731] */
    (xdc_Char)0x0,  /* [6732] */
    (xdc_Char)0x45,  /* [6733] */
    (xdc_Char)0x52,  /* [6734] */
    (xdc_Char)0x52,  /* [6735] */
    (xdc_Char)0x4f,  /* [6736] */
    (xdc_Char)0x52,  /* [6737] */
    (xdc_Char)0x3a,  /* [6738] */
    (xdc_Char)0x20,  /* [6739] */
    (xdc_Char)0x45,  /* [6740] */
    (xdc_Char)0x78,  /* [6741] */
    (xdc_Char)0x63,  /* [6742] */
    (xdc_Char)0x65,  /* [6743] */
    (xdc_Char)0x70,  /* [6744] */
    (xdc_Char)0x74,  /* [6745] */
    (xdc_Char)0x69,  /* [6746] */
    (xdc_Char)0x6f,  /* [6747] */
    (xdc_Char)0x6e,  /* [6748] */
    (xdc_Char)0x20,  /* [6749] */
    (xdc_Char)0x61,  /* [6750] */
    (xdc_Char)0x74,  /* [6751] */
    (xdc_Char)0x20,  /* [6752] */
    (xdc_Char)0x25,  /* [6753] */
    (xdc_Char)0x24,  /* [6754] */
    (xdc_Char)0x46,  /* [6755] */
    (xdc_Char)0x2e,  /* [6756] */
    (xdc_Char)0x0,  /* [6757] */
    (xdc_Char)0x45,  /* [6758] */
    (xdc_Char)0x52,  /* [6759] */
    (xdc_Char)0x52,  /* [6760] */
    (xdc_Char)0x4f,  /* [6761] */
    (xdc_Char)0x52,  /* [6762] */
    (xdc_Char)0x3a,  /* [6763] */
    (xdc_Char)0x20,  /* [6764] */
    (xdc_Char)0x55,  /* [6765] */
    (xdc_Char)0x6e,  /* [6766] */
    (xdc_Char)0x63,  /* [6767] */
    (xdc_Char)0x61,  /* [6768] */
    (xdc_Char)0x75,  /* [6769] */
    (xdc_Char)0x67,  /* [6770] */
    (xdc_Char)0x68,  /* [6771] */
    (xdc_Char)0x74,  /* [6772] */
    (xdc_Char)0x20,  /* [6773] */
    (xdc_Char)0x45,  /* [6774] */
    (xdc_Char)0x78,  /* [6775] */
    (xdc_Char)0x63,  /* [6776] */
    (xdc_Char)0x65,  /* [6777] */
    (xdc_Char)0x70,  /* [6778] */
    (xdc_Char)0x74,  /* [6779] */
    (xdc_Char)0x69,  /* [6780] */
    (xdc_Char)0x6f,  /* [6781] */
    (xdc_Char)0x6e,  /* [6782] */
    (xdc_Char)0x20,  /* [6783] */
    (xdc_Char)0x61,  /* [6784] */
    (xdc_Char)0x74,  /* [6785] */
    (xdc_Char)0x20,  /* [6786] */
    (xdc_Char)0x25,  /* [6787] */
    (xdc_Char)0x24,  /* [6788] */
    (xdc_Char)0x46,  /* [6789] */
    (xdc_Char)0x2e,  /* [6790] */
    (xdc_Char)0x0,  /* [6791] */
    (xdc_Char)0x45,  /* [6792] */
    (xdc_Char)0x52,  /* [6793] */
    (xdc_Char)0x52,  /* [6794] */
    (xdc_Char)0x4f,  /* [6795] */
    (xdc_Char)0x52,  /* [6796] */
    (xdc_Char)0x3a,  /* [6797] */
    (xdc_Char)0x20,  /* [6798] */
    (xdc_Char)0x4e,  /* [6799] */
    (xdc_Char)0x75,  /* [6800] */
    (xdc_Char)0x6c,  /* [6801] */
    (xdc_Char)0x6c,  /* [6802] */
    (xdc_Char)0x20,  /* [6803] */
    (xdc_Char)0x50,  /* [6804] */
    (xdc_Char)0x6f,  /* [6805] */
    (xdc_Char)0x69,  /* [6806] */
    (xdc_Char)0x6e,  /* [6807] */
    (xdc_Char)0x74,  /* [6808] */
    (xdc_Char)0x65,  /* [6809] */
    (xdc_Char)0x72,  /* [6810] */
    (xdc_Char)0x20,  /* [6811] */
    (xdc_Char)0x45,  /* [6812] */
    (xdc_Char)0x78,  /* [6813] */
    (xdc_Char)0x63,  /* [6814] */
    (xdc_Char)0x65,  /* [6815] */
    (xdc_Char)0x70,  /* [6816] */
    (xdc_Char)0x74,  /* [6817] */
    (xdc_Char)0x69,  /* [6818] */
    (xdc_Char)0x6f,  /* [6819] */
    (xdc_Char)0x6e,  /* [6820] */
    (xdc_Char)0x20,  /* [6821] */
    (xdc_Char)0x61,  /* [6822] */
    (xdc_Char)0x74,  /* [6823] */
    (xdc_Char)0x20,  /* [6824] */
    (xdc_Char)0x25,  /* [6825] */
    (xdc_Char)0x24,  /* [6826] */
    (xdc_Char)0x46,  /* [6827] */
    (xdc_Char)0x2e,  /* [6828] */
    (xdc_Char)0x0,  /* [6829] */
    (xdc_Char)0x45,  /* [6830] */
    (xdc_Char)0x52,  /* [6831] */
    (xdc_Char)0x52,  /* [6832] */
    (xdc_Char)0x4f,  /* [6833] */
    (xdc_Char)0x52,  /* [6834] */
    (xdc_Char)0x3a,  /* [6835] */
    (xdc_Char)0x20,  /* [6836] */
    (xdc_Char)0x55,  /* [6837] */
    (xdc_Char)0x6e,  /* [6838] */
    (xdc_Char)0x65,  /* [6839] */
    (xdc_Char)0x78,  /* [6840] */
    (xdc_Char)0x70,  /* [6841] */
    (xdc_Char)0x65,  /* [6842] */
    (xdc_Char)0x63,  /* [6843] */
    (xdc_Char)0x74,  /* [6844] */
    (xdc_Char)0x65,  /* [6845] */
    (xdc_Char)0x64,  /* [6846] */
    (xdc_Char)0x20,  /* [6847] */
    (xdc_Char)0x49,  /* [6848] */
    (xdc_Char)0x6e,  /* [6849] */
    (xdc_Char)0x74,  /* [6850] */
    (xdc_Char)0x65,  /* [6851] */
    (xdc_Char)0x72,  /* [6852] */
    (xdc_Char)0x72,  /* [6853] */
    (xdc_Char)0x75,  /* [6854] */
    (xdc_Char)0x70,  /* [6855] */
    (xdc_Char)0x74,  /* [6856] */
    (xdc_Char)0x20,  /* [6857] */
    (xdc_Char)0x61,  /* [6858] */
    (xdc_Char)0x74,  /* [6859] */
    (xdc_Char)0x20,  /* [6860] */
    (xdc_Char)0x25,  /* [6861] */
    (xdc_Char)0x24,  /* [6862] */
    (xdc_Char)0x46,  /* [6863] */
    (xdc_Char)0x2e,  /* [6864] */
    (xdc_Char)0x0,  /* [6865] */
    (xdc_Char)0x45,  /* [6866] */
    (xdc_Char)0x52,  /* [6867] */
    (xdc_Char)0x52,  /* [6868] */
    (xdc_Char)0x4f,  /* [6869] */
    (xdc_Char)0x52,  /* [6870] */
    (xdc_Char)0x3a,  /* [6871] */
    (xdc_Char)0x20,  /* [6872] */
    (xdc_Char)0x4d,  /* [6873] */
    (xdc_Char)0x65,  /* [6874] */
    (xdc_Char)0x6d,  /* [6875] */
    (xdc_Char)0x6f,  /* [6876] */
    (xdc_Char)0x72,  /* [6877] */
    (xdc_Char)0x79,  /* [6878] */
    (xdc_Char)0x20,  /* [6879] */
    (xdc_Char)0x41,  /* [6880] */
    (xdc_Char)0x63,  /* [6881] */
    (xdc_Char)0x63,  /* [6882] */
    (xdc_Char)0x65,  /* [6883] */
    (xdc_Char)0x73,  /* [6884] */
    (xdc_Char)0x73,  /* [6885] */
    (xdc_Char)0x20,  /* [6886] */
    (xdc_Char)0x46,  /* [6887] */
    (xdc_Char)0x61,  /* [6888] */
    (xdc_Char)0x75,  /* [6889] */
    (xdc_Char)0x6c,  /* [6890] */
    (xdc_Char)0x74,  /* [6891] */
    (xdc_Char)0x20,  /* [6892] */
    (xdc_Char)0x61,  /* [6893] */
    (xdc_Char)0x74,  /* [6894] */
    (xdc_Char)0x20,  /* [6895] */
    (xdc_Char)0x25,  /* [6896] */
    (xdc_Char)0x24,  /* [6897] */
    (xdc_Char)0x46,  /* [6898] */
    (xdc_Char)0x2e,  /* [6899] */
    (xdc_Char)0x20,  /* [6900] */
    (xdc_Char)0x5b,  /* [6901] */
    (xdc_Char)0x41,  /* [6902] */
    (xdc_Char)0x44,  /* [6903] */
    (xdc_Char)0x52,  /* [6904] */
    (xdc_Char)0x53,  /* [6905] */
    (xdc_Char)0x5d,  /* [6906] */
    (xdc_Char)0x30,  /* [6907] */
    (xdc_Char)0x78,  /* [6908] */
    (xdc_Char)0x25,  /* [6909] */
    (xdc_Char)0x78,  /* [6910] */
    (xdc_Char)0x0,  /* [6911] */
    (xdc_Char)0x45,  /* [6912] */
    (xdc_Char)0x52,  /* [6913] */
    (xdc_Char)0x52,  /* [6914] */
    (xdc_Char)0x4f,  /* [6915] */
    (xdc_Char)0x52,  /* [6916] */
    (xdc_Char)0x3a,  /* [6917] */
    (xdc_Char)0x20,  /* [6918] */
    (xdc_Char)0x53,  /* [6919] */
    (xdc_Char)0x65,  /* [6920] */
    (xdc_Char)0x63,  /* [6921] */
    (xdc_Char)0x75,  /* [6922] */
    (xdc_Char)0x72,  /* [6923] */
    (xdc_Char)0x69,  /* [6924] */
    (xdc_Char)0x74,  /* [6925] */
    (xdc_Char)0x79,  /* [6926] */
    (xdc_Char)0x20,  /* [6927] */
    (xdc_Char)0x45,  /* [6928] */
    (xdc_Char)0x78,  /* [6929] */
    (xdc_Char)0x63,  /* [6930] */
    (xdc_Char)0x65,  /* [6931] */
    (xdc_Char)0x70,  /* [6932] */
    (xdc_Char)0x74,  /* [6933] */
    (xdc_Char)0x69,  /* [6934] */
    (xdc_Char)0x6f,  /* [6935] */
    (xdc_Char)0x6e,  /* [6936] */
    (xdc_Char)0x20,  /* [6937] */
    (xdc_Char)0x61,  /* [6938] */
    (xdc_Char)0x74,  /* [6939] */
    (xdc_Char)0x20,  /* [6940] */
    (xdc_Char)0x25,  /* [6941] */
    (xdc_Char)0x24,  /* [6942] */
    (xdc_Char)0x46,  /* [6943] */
    (xdc_Char)0x2e,  /* [6944] */
    (xdc_Char)0x0,  /* [6945] */
    (xdc_Char)0x45,  /* [6946] */
    (xdc_Char)0x52,  /* [6947] */
    (xdc_Char)0x52,  /* [6948] */
    (xdc_Char)0x4f,  /* [6949] */
    (xdc_Char)0x52,  /* [6950] */
    (xdc_Char)0x3a,  /* [6951] */
    (xdc_Char)0x20,  /* [6952] */
    (xdc_Char)0x44,  /* [6953] */
    (xdc_Char)0x69,  /* [6954] */
    (xdc_Char)0x76,  /* [6955] */
    (xdc_Char)0x69,  /* [6956] */
    (xdc_Char)0x73,  /* [6957] */
    (xdc_Char)0x69,  /* [6958] */
    (xdc_Char)0x6f,  /* [6959] */
    (xdc_Char)0x6e,  /* [6960] */
    (xdc_Char)0x20,  /* [6961] */
    (xdc_Char)0x62,  /* [6962] */
    (xdc_Char)0x79,  /* [6963] */
    (xdc_Char)0x20,  /* [6964] */
    (xdc_Char)0x7a,  /* [6965] */
    (xdc_Char)0x65,  /* [6966] */
    (xdc_Char)0x72,  /* [6967] */
    (xdc_Char)0x6f,  /* [6968] */
    (xdc_Char)0x20,  /* [6969] */
    (xdc_Char)0x61,  /* [6970] */
    (xdc_Char)0x74,  /* [6971] */
    (xdc_Char)0x20,  /* [6972] */
    (xdc_Char)0x25,  /* [6973] */
    (xdc_Char)0x24,  /* [6974] */
    (xdc_Char)0x46,  /* [6975] */
    (xdc_Char)0x2e,  /* [6976] */
    (xdc_Char)0x0,  /* [6977] */
    (xdc_Char)0x45,  /* [6978] */
    (xdc_Char)0x52,  /* [6979] */
    (xdc_Char)0x52,  /* [6980] */
    (xdc_Char)0x4f,  /* [6981] */
    (xdc_Char)0x52,  /* [6982] */
    (xdc_Char)0x3a,  /* [6983] */
    (xdc_Char)0x20,  /* [6984] */
    (xdc_Char)0x4f,  /* [6985] */
    (xdc_Char)0x76,  /* [6986] */
    (xdc_Char)0x65,  /* [6987] */
    (xdc_Char)0x72,  /* [6988] */
    (xdc_Char)0x66,  /* [6989] */
    (xdc_Char)0x6c,  /* [6990] */
    (xdc_Char)0x6f,  /* [6991] */
    (xdc_Char)0x77,  /* [6992] */
    (xdc_Char)0x20,  /* [6993] */
    (xdc_Char)0x65,  /* [6994] */
    (xdc_Char)0x78,  /* [6995] */
    (xdc_Char)0x63,  /* [6996] */
    (xdc_Char)0x65,  /* [6997] */
    (xdc_Char)0x70,  /* [6998] */
    (xdc_Char)0x74,  /* [6999] */
    (xdc_Char)0x69,  /* [7000] */
    (xdc_Char)0x6f,  /* [7001] */
    (xdc_Char)0x6e,  /* [7002] */
    (xdc_Char)0x20,  /* [7003] */
    (xdc_Char)0x61,  /* [7004] */
    (xdc_Char)0x74,  /* [7005] */
    (xdc_Char)0x20,  /* [7006] */
    (xdc_Char)0x25,  /* [7007] */
    (xdc_Char)0x24,  /* [7008] */
    (xdc_Char)0x46,  /* [7009] */
    (xdc_Char)0x2e,  /* [7010] */
    (xdc_Char)0x0,  /* [7011] */
    (xdc_Char)0x45,  /* [7012] */
    (xdc_Char)0x52,  /* [7013] */
    (xdc_Char)0x52,  /* [7014] */
    (xdc_Char)0x4f,  /* [7015] */
    (xdc_Char)0x52,  /* [7016] */
    (xdc_Char)0x3a,  /* [7017] */
    (xdc_Char)0x20,  /* [7018] */
    (xdc_Char)0x49,  /* [7019] */
    (xdc_Char)0x6e,  /* [7020] */
    (xdc_Char)0x64,  /* [7021] */
    (xdc_Char)0x65,  /* [7022] */
    (xdc_Char)0x78,  /* [7023] */
    (xdc_Char)0x20,  /* [7024] */
    (xdc_Char)0x6f,  /* [7025] */
    (xdc_Char)0x75,  /* [7026] */
    (xdc_Char)0x74,  /* [7027] */
    (xdc_Char)0x20,  /* [7028] */
    (xdc_Char)0x6f,  /* [7029] */
    (xdc_Char)0x66,  /* [7030] */
    (xdc_Char)0x20,  /* [7031] */
    (xdc_Char)0x72,  /* [7032] */
    (xdc_Char)0x61,  /* [7033] */
    (xdc_Char)0x6e,  /* [7034] */
    (xdc_Char)0x67,  /* [7035] */
    (xdc_Char)0x65,  /* [7036] */
    (xdc_Char)0x20,  /* [7037] */
    (xdc_Char)0x61,  /* [7038] */
    (xdc_Char)0x74,  /* [7039] */
    (xdc_Char)0x20,  /* [7040] */
    (xdc_Char)0x25,  /* [7041] */
    (xdc_Char)0x24,  /* [7042] */
    (xdc_Char)0x46,  /* [7043] */
    (xdc_Char)0x2e,  /* [7044] */
    (xdc_Char)0x20,  /* [7045] */
    (xdc_Char)0x5b,  /* [7046] */
    (xdc_Char)0x49,  /* [7047] */
    (xdc_Char)0x4e,  /* [7048] */
    (xdc_Char)0x44,  /* [7049] */
    (xdc_Char)0x45,  /* [7050] */
    (xdc_Char)0x58,  /* [7051] */
    (xdc_Char)0x5d,  /* [7052] */
    (xdc_Char)0x30,  /* [7053] */
    (xdc_Char)0x78,  /* [7054] */
    (xdc_Char)0x25,  /* [7055] */
    (xdc_Char)0x78,  /* [7056] */
    (xdc_Char)0x0,  /* [7057] */
    (xdc_Char)0x45,  /* [7058] */
    (xdc_Char)0x52,  /* [7059] */
    (xdc_Char)0x52,  /* [7060] */
    (xdc_Char)0x4f,  /* [7061] */
    (xdc_Char)0x52,  /* [7062] */
    (xdc_Char)0x3a,  /* [7063] */
    (xdc_Char)0x20,  /* [7064] */
    (xdc_Char)0x41,  /* [7065] */
    (xdc_Char)0x74,  /* [7066] */
    (xdc_Char)0x74,  /* [7067] */
    (xdc_Char)0x65,  /* [7068] */
    (xdc_Char)0x6d,  /* [7069] */
    (xdc_Char)0x70,  /* [7070] */
    (xdc_Char)0x74,  /* [7071] */
    (xdc_Char)0x20,  /* [7072] */
    (xdc_Char)0x74,  /* [7073] */
    (xdc_Char)0x6f,  /* [7074] */
    (xdc_Char)0x20,  /* [7075] */
    (xdc_Char)0x61,  /* [7076] */
    (xdc_Char)0x63,  /* [7077] */
    (xdc_Char)0x63,  /* [7078] */
    (xdc_Char)0x65,  /* [7079] */
    (xdc_Char)0x73,  /* [7080] */
    (xdc_Char)0x73,  /* [7081] */
    (xdc_Char)0x20,  /* [7082] */
    (xdc_Char)0x66,  /* [7083] */
    (xdc_Char)0x65,  /* [7084] */
    (xdc_Char)0x61,  /* [7085] */
    (xdc_Char)0x74,  /* [7086] */
    (xdc_Char)0x75,  /* [7087] */
    (xdc_Char)0x72,  /* [7088] */
    (xdc_Char)0x65,  /* [7089] */
    (xdc_Char)0x20,  /* [7090] */
    (xdc_Char)0x74,  /* [7091] */
    (xdc_Char)0x68,  /* [7092] */
    (xdc_Char)0x61,  /* [7093] */
    (xdc_Char)0x74,  /* [7094] */
    (xdc_Char)0x20,  /* [7095] */
    (xdc_Char)0x69,  /* [7096] */
    (xdc_Char)0x73,  /* [7097] */
    (xdc_Char)0x20,  /* [7098] */
    (xdc_Char)0x6e,  /* [7099] */
    (xdc_Char)0x6f,  /* [7100] */
    (xdc_Char)0x74,  /* [7101] */
    (xdc_Char)0x20,  /* [7102] */
    (xdc_Char)0x69,  /* [7103] */
    (xdc_Char)0x6d,  /* [7104] */
    (xdc_Char)0x70,  /* [7105] */
    (xdc_Char)0x6c,  /* [7106] */
    (xdc_Char)0x65,  /* [7107] */
    (xdc_Char)0x6d,  /* [7108] */
    (xdc_Char)0x65,  /* [7109] */
    (xdc_Char)0x6e,  /* [7110] */
    (xdc_Char)0x74,  /* [7111] */
    (xdc_Char)0x65,  /* [7112] */
    (xdc_Char)0x64,  /* [7113] */
    (xdc_Char)0x20,  /* [7114] */
    (xdc_Char)0x61,  /* [7115] */
    (xdc_Char)0x74,  /* [7116] */
    (xdc_Char)0x20,  /* [7117] */
    (xdc_Char)0x25,  /* [7118] */
    (xdc_Char)0x24,  /* [7119] */
    (xdc_Char)0x46,  /* [7120] */
    (xdc_Char)0x2e,  /* [7121] */
    (xdc_Char)0x0,  /* [7122] */
    (xdc_Char)0x45,  /* [7123] */
    (xdc_Char)0x52,  /* [7124] */
    (xdc_Char)0x52,  /* [7125] */
    (xdc_Char)0x4f,  /* [7126] */
    (xdc_Char)0x52,  /* [7127] */
    (xdc_Char)0x3a,  /* [7128] */
    (xdc_Char)0x20,  /* [7129] */
    (xdc_Char)0x53,  /* [7130] */
    (xdc_Char)0x74,  /* [7131] */
    (xdc_Char)0x61,  /* [7132] */
    (xdc_Char)0x63,  /* [7133] */
    (xdc_Char)0x6b,  /* [7134] */
    (xdc_Char)0x20,  /* [7135] */
    (xdc_Char)0x4f,  /* [7136] */
    (xdc_Char)0x76,  /* [7137] */
    (xdc_Char)0x65,  /* [7138] */
    (xdc_Char)0x72,  /* [7139] */
    (xdc_Char)0x66,  /* [7140] */
    (xdc_Char)0x6c,  /* [7141] */
    (xdc_Char)0x6f,  /* [7142] */
    (xdc_Char)0x77,  /* [7143] */
    (xdc_Char)0x20,  /* [7144] */
    (xdc_Char)0x64,  /* [7145] */
    (xdc_Char)0x65,  /* [7146] */
    (xdc_Char)0x74,  /* [7147] */
    (xdc_Char)0x65,  /* [7148] */
    (xdc_Char)0x63,  /* [7149] */
    (xdc_Char)0x74,  /* [7150] */
    (xdc_Char)0x65,  /* [7151] */
    (xdc_Char)0x64,  /* [7152] */
    (xdc_Char)0x20,  /* [7153] */
    (xdc_Char)0x61,  /* [7154] */
    (xdc_Char)0x74,  /* [7155] */
    (xdc_Char)0x20,  /* [7156] */
    (xdc_Char)0x25,  /* [7157] */
    (xdc_Char)0x24,  /* [7158] */
    (xdc_Char)0x46,  /* [7159] */
    (xdc_Char)0x2e,  /* [7160] */
    (xdc_Char)0x0,  /* [7161] */
    (xdc_Char)0x45,  /* [7162] */
    (xdc_Char)0x52,  /* [7163] */
    (xdc_Char)0x52,  /* [7164] */
    (xdc_Char)0x4f,  /* [7165] */
    (xdc_Char)0x52,  /* [7166] */
    (xdc_Char)0x3a,  /* [7167] */
    (xdc_Char)0x20,  /* [7168] */
    (xdc_Char)0x49,  /* [7169] */
    (xdc_Char)0x6c,  /* [7170] */
    (xdc_Char)0x6c,  /* [7171] */
    (xdc_Char)0x65,  /* [7172] */
    (xdc_Char)0x67,  /* [7173] */
    (xdc_Char)0x61,  /* [7174] */
    (xdc_Char)0x6c,  /* [7175] */
    (xdc_Char)0x20,  /* [7176] */
    (xdc_Char)0x49,  /* [7177] */
    (xdc_Char)0x6e,  /* [7178] */
    (xdc_Char)0x73,  /* [7179] */
    (xdc_Char)0x74,  /* [7180] */
    (xdc_Char)0x72,  /* [7181] */
    (xdc_Char)0x75,  /* [7182] */
    (xdc_Char)0x63,  /* [7183] */
    (xdc_Char)0x74,  /* [7184] */
    (xdc_Char)0x69,  /* [7185] */
    (xdc_Char)0x6f,  /* [7186] */
    (xdc_Char)0x6e,  /* [7187] */
    (xdc_Char)0x20,  /* [7188] */
    (xdc_Char)0x65,  /* [7189] */
    (xdc_Char)0x78,  /* [7190] */
    (xdc_Char)0x65,  /* [7191] */
    (xdc_Char)0x63,  /* [7192] */
    (xdc_Char)0x75,  /* [7193] */
    (xdc_Char)0x74,  /* [7194] */
    (xdc_Char)0x65,  /* [7195] */
    (xdc_Char)0x64,  /* [7196] */
    (xdc_Char)0x20,  /* [7197] */
    (xdc_Char)0x61,  /* [7198] */
    (xdc_Char)0x74,  /* [7199] */
    (xdc_Char)0x20,  /* [7200] */
    (xdc_Char)0x25,  /* [7201] */
    (xdc_Char)0x24,  /* [7202] */
    (xdc_Char)0x46,  /* [7203] */
    (xdc_Char)0x2e,  /* [7204] */
    (xdc_Char)0x0,  /* [7205] */
    (xdc_Char)0x45,  /* [7206] */
    (xdc_Char)0x52,  /* [7207] */
    (xdc_Char)0x52,  /* [7208] */
    (xdc_Char)0x4f,  /* [7209] */
    (xdc_Char)0x52,  /* [7210] */
    (xdc_Char)0x3a,  /* [7211] */
    (xdc_Char)0x20,  /* [7212] */
    (xdc_Char)0x45,  /* [7213] */
    (xdc_Char)0x6e,  /* [7214] */
    (xdc_Char)0x74,  /* [7215] */
    (xdc_Char)0x72,  /* [7216] */
    (xdc_Char)0x79,  /* [7217] */
    (xdc_Char)0x20,  /* [7218] */
    (xdc_Char)0x50,  /* [7219] */
    (xdc_Char)0x6f,  /* [7220] */
    (xdc_Char)0x69,  /* [7221] */
    (xdc_Char)0x6e,  /* [7222] */
    (xdc_Char)0x74,  /* [7223] */
    (xdc_Char)0x20,  /* [7224] */
    (xdc_Char)0x4e,  /* [7225] */
    (xdc_Char)0x6f,  /* [7226] */
    (xdc_Char)0x74,  /* [7227] */
    (xdc_Char)0x20,  /* [7228] */
    (xdc_Char)0x46,  /* [7229] */
    (xdc_Char)0x6f,  /* [7230] */
    (xdc_Char)0x75,  /* [7231] */
    (xdc_Char)0x6e,  /* [7232] */
    (xdc_Char)0x64,  /* [7233] */
    (xdc_Char)0x20,  /* [7234] */
    (xdc_Char)0x61,  /* [7235] */
    (xdc_Char)0x74,  /* [7236] */
    (xdc_Char)0x20,  /* [7237] */
    (xdc_Char)0x25,  /* [7238] */
    (xdc_Char)0x24,  /* [7239] */
    (xdc_Char)0x46,  /* [7240] */
    (xdc_Char)0x2e,  /* [7241] */
    (xdc_Char)0x0,  /* [7242] */
    (xdc_Char)0x45,  /* [7243] */
    (xdc_Char)0x52,  /* [7244] */
    (xdc_Char)0x52,  /* [7245] */
    (xdc_Char)0x4f,  /* [7246] */
    (xdc_Char)0x52,  /* [7247] */
    (xdc_Char)0x3a,  /* [7248] */
    (xdc_Char)0x20,  /* [7249] */
    (xdc_Char)0x4d,  /* [7250] */
    (xdc_Char)0x6f,  /* [7251] */
    (xdc_Char)0x64,  /* [7252] */
    (xdc_Char)0x75,  /* [7253] */
    (xdc_Char)0x6c,  /* [7254] */
    (xdc_Char)0x65,  /* [7255] */
    (xdc_Char)0x20,  /* [7256] */
    (xdc_Char)0x6e,  /* [7257] */
    (xdc_Char)0x6f,  /* [7258] */
    (xdc_Char)0x74,  /* [7259] */
    (xdc_Char)0x20,  /* [7260] */
    (xdc_Char)0x66,  /* [7261] */
    (xdc_Char)0x6f,  /* [7262] */
    (xdc_Char)0x75,  /* [7263] */
    (xdc_Char)0x6e,  /* [7264] */
    (xdc_Char)0x64,  /* [7265] */
    (xdc_Char)0x20,  /* [7266] */
    (xdc_Char)0x61,  /* [7267] */
    (xdc_Char)0x74,  /* [7268] */
    (xdc_Char)0x20,  /* [7269] */
    (xdc_Char)0x25,  /* [7270] */
    (xdc_Char)0x24,  /* [7271] */
    (xdc_Char)0x46,  /* [7272] */
    (xdc_Char)0x2e,  /* [7273] */
    (xdc_Char)0x20,  /* [7274] */
    (xdc_Char)0x5b,  /* [7275] */
    (xdc_Char)0x4d,  /* [7276] */
    (xdc_Char)0x4f,  /* [7277] */
    (xdc_Char)0x44,  /* [7278] */
    (xdc_Char)0x55,  /* [7279] */
    (xdc_Char)0x4c,  /* [7280] */
    (xdc_Char)0x45,  /* [7281] */
    (xdc_Char)0x5f,  /* [7282] */
    (xdc_Char)0x49,  /* [7283] */
    (xdc_Char)0x44,  /* [7284] */
    (xdc_Char)0x5d,  /* [7285] */
    (xdc_Char)0x30,  /* [7286] */
    (xdc_Char)0x78,  /* [7287] */
    (xdc_Char)0x25,  /* [7288] */
    (xdc_Char)0x78,  /* [7289] */
    (xdc_Char)0x2e,  /* [7290] */
    (xdc_Char)0x0,  /* [7291] */
    (xdc_Char)0x45,  /* [7292] */
    (xdc_Char)0x52,  /* [7293] */
    (xdc_Char)0x52,  /* [7294] */
    (xdc_Char)0x4f,  /* [7295] */
    (xdc_Char)0x52,  /* [7296] */
    (xdc_Char)0x3a,  /* [7297] */
    (xdc_Char)0x20,  /* [7298] */
    (xdc_Char)0x46,  /* [7299] */
    (xdc_Char)0x6c,  /* [7300] */
    (xdc_Char)0x6f,  /* [7301] */
    (xdc_Char)0x61,  /* [7302] */
    (xdc_Char)0x74,  /* [7303] */
    (xdc_Char)0x69,  /* [7304] */
    (xdc_Char)0x6e,  /* [7305] */
    (xdc_Char)0x67,  /* [7306] */
    (xdc_Char)0x20,  /* [7307] */
    (xdc_Char)0x50,  /* [7308] */
    (xdc_Char)0x6f,  /* [7309] */
    (xdc_Char)0x69,  /* [7310] */
    (xdc_Char)0x6e,  /* [7311] */
    (xdc_Char)0x74,  /* [7312] */
    (xdc_Char)0x20,  /* [7313] */
    (xdc_Char)0x45,  /* [7314] */
    (xdc_Char)0x72,  /* [7315] */
    (xdc_Char)0x72,  /* [7316] */
    (xdc_Char)0x6f,  /* [7317] */
    (xdc_Char)0x72,  /* [7318] */
    (xdc_Char)0x20,  /* [7319] */
    (xdc_Char)0x61,  /* [7320] */
    (xdc_Char)0x74,  /* [7321] */
    (xdc_Char)0x20,  /* [7322] */
    (xdc_Char)0x25,  /* [7323] */
    (xdc_Char)0x24,  /* [7324] */
    (xdc_Char)0x46,  /* [7325] */
    (xdc_Char)0x2e,  /* [7326] */
    (xdc_Char)0x0,  /* [7327] */
    (xdc_Char)0x45,  /* [7328] */
    (xdc_Char)0x52,  /* [7329] */
    (xdc_Char)0x52,  /* [7330] */
    (xdc_Char)0x4f,  /* [7331] */
    (xdc_Char)0x52,  /* [7332] */
    (xdc_Char)0x3a,  /* [7333] */
    (xdc_Char)0x20,  /* [7334] */
    (xdc_Char)0x49,  /* [7335] */
    (xdc_Char)0x6e,  /* [7336] */
    (xdc_Char)0x76,  /* [7337] */
    (xdc_Char)0x61,  /* [7338] */
    (xdc_Char)0x6c,  /* [7339] */
    (xdc_Char)0x69,  /* [7340] */
    (xdc_Char)0x64,  /* [7341] */
    (xdc_Char)0x20,  /* [7342] */
    (xdc_Char)0x50,  /* [7343] */
    (xdc_Char)0x61,  /* [7344] */
    (xdc_Char)0x72,  /* [7345] */
    (xdc_Char)0x61,  /* [7346] */
    (xdc_Char)0x6d,  /* [7347] */
    (xdc_Char)0x65,  /* [7348] */
    (xdc_Char)0x74,  /* [7349] */
    (xdc_Char)0x65,  /* [7350] */
    (xdc_Char)0x72,  /* [7351] */
    (xdc_Char)0x20,  /* [7352] */
    (xdc_Char)0x61,  /* [7353] */
    (xdc_Char)0x74,  /* [7354] */
    (xdc_Char)0x20,  /* [7355] */
    (xdc_Char)0x25,  /* [7356] */
    (xdc_Char)0x24,  /* [7357] */
    (xdc_Char)0x46,  /* [7358] */
    (xdc_Char)0x2e,  /* [7359] */
    (xdc_Char)0x20,  /* [7360] */
    (xdc_Char)0x5b,  /* [7361] */
    (xdc_Char)0x50,  /* [7362] */
    (xdc_Char)0x61,  /* [7363] */
    (xdc_Char)0x72,  /* [7364] */
    (xdc_Char)0x61,  /* [7365] */
    (xdc_Char)0x6d,  /* [7366] */
    (xdc_Char)0x4e,  /* [7367] */
    (xdc_Char)0x75,  /* [7368] */
    (xdc_Char)0x6d,  /* [7369] */
    (xdc_Char)0x5d,  /* [7370] */
    (xdc_Char)0x25,  /* [7371] */
    (xdc_Char)0x64,  /* [7372] */
    (xdc_Char)0x20,  /* [7373] */
    (xdc_Char)0x5b,  /* [7374] */
    (xdc_Char)0x50,  /* [7375] */
    (xdc_Char)0x61,  /* [7376] */
    (xdc_Char)0x72,  /* [7377] */
    (xdc_Char)0x61,  /* [7378] */
    (xdc_Char)0x6d,  /* [7379] */
    (xdc_Char)0x56,  /* [7380] */
    (xdc_Char)0x61,  /* [7381] */
    (xdc_Char)0x6c,  /* [7382] */
    (xdc_Char)0x75,  /* [7383] */
    (xdc_Char)0x65,  /* [7384] */
    (xdc_Char)0x5d,  /* [7385] */
    (xdc_Char)0x30,  /* [7386] */
    (xdc_Char)0x78,  /* [7387] */
    (xdc_Char)0x25,  /* [7388] */
    (xdc_Char)0x78,  /* [7389] */
    (xdc_Char)0x0,  /* [7390] */
    (xdc_Char)0x57,  /* [7391] */
    (xdc_Char)0x41,  /* [7392] */
    (xdc_Char)0x52,  /* [7393] */
    (xdc_Char)0x4e,  /* [7394] */
    (xdc_Char)0x49,  /* [7395] */
    (xdc_Char)0x4e,  /* [7396] */
    (xdc_Char)0x47,  /* [7397] */
    (xdc_Char)0x3a,  /* [7398] */
    (xdc_Char)0x20,  /* [7399] */
    (xdc_Char)0x45,  /* [7400] */
    (xdc_Char)0x76,  /* [7401] */
    (xdc_Char)0x65,  /* [7402] */
    (xdc_Char)0x6e,  /* [7403] */
    (xdc_Char)0x74,  /* [7404] */
    (xdc_Char)0x43,  /* [7405] */
    (xdc_Char)0x6f,  /* [7406] */
    (xdc_Char)0x64,  /* [7407] */
    (xdc_Char)0x65,  /* [7408] */
    (xdc_Char)0x3a,  /* [7409] */
    (xdc_Char)0x30,  /* [7410] */
    (xdc_Char)0x78,  /* [7411] */
    (xdc_Char)0x25,  /* [7412] */
    (xdc_Char)0x78,  /* [7413] */
    (xdc_Char)0x0,  /* [7414] */
    (xdc_Char)0x57,  /* [7415] */
    (xdc_Char)0x41,  /* [7416] */
    (xdc_Char)0x52,  /* [7417] */
    (xdc_Char)0x4e,  /* [7418] */
    (xdc_Char)0x49,  /* [7419] */
    (xdc_Char)0x4e,  /* [7420] */
    (xdc_Char)0x47,  /* [7421] */
    (xdc_Char)0x3a,  /* [7422] */
    (xdc_Char)0x20,  /* [7423] */
    (xdc_Char)0x45,  /* [7424] */
    (xdc_Char)0x76,  /* [7425] */
    (xdc_Char)0x65,  /* [7426] */
    (xdc_Char)0x6e,  /* [7427] */
    (xdc_Char)0x74,  /* [7428] */
    (xdc_Char)0x43,  /* [7429] */
    (xdc_Char)0x6f,  /* [7430] */
    (xdc_Char)0x64,  /* [7431] */
    (xdc_Char)0x65,  /* [7432] */
    (xdc_Char)0x3a,  /* [7433] */
    (xdc_Char)0x30,  /* [7434] */
    (xdc_Char)0x78,  /* [7435] */
    (xdc_Char)0x25,  /* [7436] */
    (xdc_Char)0x78,  /* [7437] */
    (xdc_Char)0x2e,  /* [7438] */
    (xdc_Char)0x20,  /* [7439] */
    (xdc_Char)0x25,  /* [7440] */
    (xdc_Char)0x24,  /* [7441] */
    (xdc_Char)0x53,  /* [7442] */
    (xdc_Char)0x0,  /* [7443] */
    (xdc_Char)0x49,  /* [7444] */
    (xdc_Char)0x4e,  /* [7445] */
    (xdc_Char)0x46,  /* [7446] */
    (xdc_Char)0x4f,  /* [7447] */
    (xdc_Char)0x3a,  /* [7448] */
    (xdc_Char)0x20,  /* [7449] */
    (xdc_Char)0x45,  /* [7450] */
    (xdc_Char)0x76,  /* [7451] */
    (xdc_Char)0x65,  /* [7452] */
    (xdc_Char)0x6e,  /* [7453] */
    (xdc_Char)0x74,  /* [7454] */
    (xdc_Char)0x43,  /* [7455] */
    (xdc_Char)0x6f,  /* [7456] */
    (xdc_Char)0x64,  /* [7457] */
    (xdc_Char)0x65,  /* [7458] */
    (xdc_Char)0x3a,  /* [7459] */
    (xdc_Char)0x20,  /* [7460] */
    (xdc_Char)0x30,  /* [7461] */
    (xdc_Char)0x78,  /* [7462] */
    (xdc_Char)0x25,  /* [7463] */
    (xdc_Char)0x78,  /* [7464] */
    (xdc_Char)0x0,  /* [7465] */
    (xdc_Char)0x49,  /* [7466] */
    (xdc_Char)0x4e,  /* [7467] */
    (xdc_Char)0x46,  /* [7468] */
    (xdc_Char)0x4f,  /* [7469] */
    (xdc_Char)0x3a,  /* [7470] */
    (xdc_Char)0x20,  /* [7471] */
    (xdc_Char)0x45,  /* [7472] */
    (xdc_Char)0x76,  /* [7473] */
    (xdc_Char)0x65,  /* [7474] */
    (xdc_Char)0x6e,  /* [7475] */
    (xdc_Char)0x74,  /* [7476] */
    (xdc_Char)0x43,  /* [7477] */
    (xdc_Char)0x6f,  /* [7478] */
    (xdc_Char)0x64,  /* [7479] */
    (xdc_Char)0x65,  /* [7480] */
    (xdc_Char)0x3a,  /* [7481] */
    (xdc_Char)0x30,  /* [7482] */
    (xdc_Char)0x78,  /* [7483] */
    (xdc_Char)0x25,  /* [7484] */
    (xdc_Char)0x78,  /* [7485] */
    (xdc_Char)0x2e,  /* [7486] */
    (xdc_Char)0x20,  /* [7487] */
    (xdc_Char)0x20,  /* [7488] */
    (xdc_Char)0x25,  /* [7489] */
    (xdc_Char)0x24,  /* [7490] */
    (xdc_Char)0x53,  /* [7491] */
    (xdc_Char)0x0,  /* [7492] */
    (xdc_Char)0x44,  /* [7493] */
    (xdc_Char)0x45,  /* [7494] */
    (xdc_Char)0x54,  /* [7495] */
    (xdc_Char)0x41,  /* [7496] */
    (xdc_Char)0x49,  /* [7497] */
    (xdc_Char)0x4c,  /* [7498] */
    (xdc_Char)0x3a,  /* [7499] */
    (xdc_Char)0x20,  /* [7500] */
    (xdc_Char)0x45,  /* [7501] */
    (xdc_Char)0x76,  /* [7502] */
    (xdc_Char)0x65,  /* [7503] */
    (xdc_Char)0x6e,  /* [7504] */
    (xdc_Char)0x74,  /* [7505] */
    (xdc_Char)0x43,  /* [7506] */
    (xdc_Char)0x6f,  /* [7507] */
    (xdc_Char)0x64,  /* [7508] */
    (xdc_Char)0x65,  /* [7509] */
    (xdc_Char)0x3a,  /* [7510] */
    (xdc_Char)0x30,  /* [7511] */
    (xdc_Char)0x78,  /* [7512] */
    (xdc_Char)0x25,  /* [7513] */
    (xdc_Char)0x78,  /* [7514] */
    (xdc_Char)0x0,  /* [7515] */
    (xdc_Char)0x44,  /* [7516] */
    (xdc_Char)0x45,  /* [7517] */
    (xdc_Char)0x54,  /* [7518] */
    (xdc_Char)0x41,  /* [7519] */
    (xdc_Char)0x49,  /* [7520] */
    (xdc_Char)0x4c,  /* [7521] */
    (xdc_Char)0x3a,  /* [7522] */
    (xdc_Char)0x20,  /* [7523] */
    (xdc_Char)0x45,  /* [7524] */
    (xdc_Char)0x76,  /* [7525] */
    (xdc_Char)0x65,  /* [7526] */
    (xdc_Char)0x6e,  /* [7527] */
    (xdc_Char)0x74,  /* [7528] */
    (xdc_Char)0x43,  /* [7529] */
    (xdc_Char)0x6f,  /* [7530] */
    (xdc_Char)0x64,  /* [7531] */
    (xdc_Char)0x65,  /* [7532] */
    (xdc_Char)0x3a,  /* [7533] */
    (xdc_Char)0x30,  /* [7534] */
    (xdc_Char)0x78,  /* [7535] */
    (xdc_Char)0x25,  /* [7536] */
    (xdc_Char)0x78,  /* [7537] */
    (xdc_Char)0x2e,  /* [7538] */
    (xdc_Char)0x20,  /* [7539] */
    (xdc_Char)0x20,  /* [7540] */
    (xdc_Char)0x25,  /* [7541] */
    (xdc_Char)0x24,  /* [7542] */
    (xdc_Char)0x53,  /* [7543] */
    (xdc_Char)0x0,  /* [7544] */
    (xdc_Char)0x56,  /* [7545] */
    (xdc_Char)0x41,  /* [7546] */
    (xdc_Char)0x4c,  /* [7547] */
    (xdc_Char)0x55,  /* [7548] */
    (xdc_Char)0x45,  /* [7549] */
    (xdc_Char)0x3d,  /* [7550] */
    (xdc_Char)0x25,  /* [7551] */
    (xdc_Char)0x64,  /* [7552] */
    (xdc_Char)0x20,  /* [7553] */
    (xdc_Char)0x28,  /* [7554] */
    (xdc_Char)0x41,  /* [7555] */
    (xdc_Char)0x75,  /* [7556] */
    (xdc_Char)0x78,  /* [7557] */
    (xdc_Char)0x44,  /* [7558] */
    (xdc_Char)0x61,  /* [7559] */
    (xdc_Char)0x74,  /* [7560] */
    (xdc_Char)0x61,  /* [7561] */
    (xdc_Char)0x3d,  /* [7562] */
    (xdc_Char)0x25,  /* [7563] */
    (xdc_Char)0x64,  /* [7564] */
    (xdc_Char)0x2c,  /* [7565] */
    (xdc_Char)0x20,  /* [7566] */
    (xdc_Char)0x25,  /* [7567] */
    (xdc_Char)0x64,  /* [7568] */
    (xdc_Char)0x29,  /* [7569] */
    (xdc_Char)0x20,  /* [7570] */
    (xdc_Char)0x4b,  /* [7571] */
    (xdc_Char)0x65,  /* [7572] */
    (xdc_Char)0x79,  /* [7573] */
    (xdc_Char)0x3a,  /* [7574] */
    (xdc_Char)0x25,  /* [7575] */
    (xdc_Char)0x24,  /* [7576] */
    (xdc_Char)0x53,  /* [7577] */
    (xdc_Char)0x0,  /* [7578] */
    (xdc_Char)0x4c,  /* [7579] */
    (xdc_Char)0x6f,  /* [7580] */
    (xdc_Char)0x67,  /* [7581] */
    (xdc_Char)0x67,  /* [7582] */
    (xdc_Char)0x65,  /* [7583] */
    (xdc_Char)0x72,  /* [7584] */
    (xdc_Char)0x53,  /* [7585] */
    (xdc_Char)0x74,  /* [7586] */
    (xdc_Char)0x6f,  /* [7587] */
    (xdc_Char)0x70,  /* [7588] */
    (xdc_Char)0x4d,  /* [7589] */
    (xdc_Char)0x6f,  /* [7590] */
    (xdc_Char)0x64,  /* [7591] */
    (xdc_Char)0x65,  /* [7592] */
    (xdc_Char)0x20,  /* [7593] */
    (xdc_Char)0x54,  /* [7594] */
    (xdc_Char)0x65,  /* [7595] */
    (xdc_Char)0x73,  /* [7596] */
    (xdc_Char)0x74,  /* [7597] */
    (xdc_Char)0x0,  /* [7598] */
    (xdc_Char)0x4c,  /* [7599] */
    (xdc_Char)0x53,  /* [7600] */
    (xdc_Char)0x5f,  /* [7601] */
    (xdc_Char)0x63,  /* [7602] */
    (xdc_Char)0x70,  /* [7603] */
    (xdc_Char)0x75,  /* [7604] */
    (xdc_Char)0x4c,  /* [7605] */
    (xdc_Char)0x6f,  /* [7606] */
    (xdc_Char)0x61,  /* [7607] */
    (xdc_Char)0x64,  /* [7608] */
    (xdc_Char)0x3a,  /* [7609] */
    (xdc_Char)0x20,  /* [7610] */
    (xdc_Char)0x25,  /* [7611] */
    (xdc_Char)0x64,  /* [7612] */
    (xdc_Char)0x25,  /* [7613] */
    (xdc_Char)0x25,  /* [7614] */
    (xdc_Char)0x0,  /* [7615] */
    (xdc_Char)0x4c,  /* [7616] */
    (xdc_Char)0x53,  /* [7617] */
    (xdc_Char)0x5f,  /* [7618] */
    (xdc_Char)0x68,  /* [7619] */
    (xdc_Char)0x77,  /* [7620] */
    (xdc_Char)0x69,  /* [7621] */
    (xdc_Char)0x4c,  /* [7622] */
    (xdc_Char)0x6f,  /* [7623] */
    (xdc_Char)0x61,  /* [7624] */
    (xdc_Char)0x64,  /* [7625] */
    (xdc_Char)0x3a,  /* [7626] */
    (xdc_Char)0x20,  /* [7627] */
    (xdc_Char)0x25,  /* [7628] */
    (xdc_Char)0x64,  /* [7629] */
    (xdc_Char)0x2c,  /* [7630] */
    (xdc_Char)0x25,  /* [7631] */
    (xdc_Char)0x64,  /* [7632] */
    (xdc_Char)0x0,  /* [7633] */
    (xdc_Char)0x4c,  /* [7634] */
    (xdc_Char)0x53,  /* [7635] */
    (xdc_Char)0x5f,  /* [7636] */
    (xdc_Char)0x73,  /* [7637] */
    (xdc_Char)0x77,  /* [7638] */
    (xdc_Char)0x69,  /* [7639] */
    (xdc_Char)0x4c,  /* [7640] */
    (xdc_Char)0x6f,  /* [7641] */
    (xdc_Char)0x61,  /* [7642] */
    (xdc_Char)0x64,  /* [7643] */
    (xdc_Char)0x3a,  /* [7644] */
    (xdc_Char)0x20,  /* [7645] */
    (xdc_Char)0x25,  /* [7646] */
    (xdc_Char)0x64,  /* [7647] */
    (xdc_Char)0x2c,  /* [7648] */
    (xdc_Char)0x25,  /* [7649] */
    (xdc_Char)0x64,  /* [7650] */
    (xdc_Char)0x0,  /* [7651] */
    (xdc_Char)0x4c,  /* [7652] */
    (xdc_Char)0x53,  /* [7653] */
    (xdc_Char)0x5f,  /* [7654] */
    (xdc_Char)0x74,  /* [7655] */
    (xdc_Char)0x61,  /* [7656] */
    (xdc_Char)0x73,  /* [7657] */
    (xdc_Char)0x6b,  /* [7658] */
    (xdc_Char)0x4c,  /* [7659] */
    (xdc_Char)0x6f,  /* [7660] */
    (xdc_Char)0x61,  /* [7661] */
    (xdc_Char)0x64,  /* [7662] */
    (xdc_Char)0x3a,  /* [7663] */
    (xdc_Char)0x20,  /* [7664] */
    (xdc_Char)0x30,  /* [7665] */
    (xdc_Char)0x78,  /* [7666] */
    (xdc_Char)0x25,  /* [7667] */
    (xdc_Char)0x78,  /* [7668] */
    (xdc_Char)0x2c,  /* [7669] */
    (xdc_Char)0x25,  /* [7670] */
    (xdc_Char)0x64,  /* [7671] */
    (xdc_Char)0x2c,  /* [7672] */
    (xdc_Char)0x25,  /* [7673] */
    (xdc_Char)0x64,  /* [7674] */
    (xdc_Char)0x2c,  /* [7675] */
    (xdc_Char)0x30,  /* [7676] */
    (xdc_Char)0x78,  /* [7677] */
    (xdc_Char)0x25,  /* [7678] */
    (xdc_Char)0x78,  /* [7679] */
    (xdc_Char)0x0,  /* [7680] */
    (xdc_Char)0x78,  /* [7681] */
    (xdc_Char)0x64,  /* [7682] */
    (xdc_Char)0x63,  /* [7683] */
    (xdc_Char)0x2e,  /* [7684] */
    (xdc_Char)0x0,  /* [7685] */
    (xdc_Char)0x72,  /* [7686] */
    (xdc_Char)0x75,  /* [7687] */
    (xdc_Char)0x6e,  /* [7688] */
    (xdc_Char)0x74,  /* [7689] */
    (xdc_Char)0x69,  /* [7690] */
    (xdc_Char)0x6d,  /* [7691] */
    (xdc_Char)0x65,  /* [7692] */
    (xdc_Char)0x2e,  /* [7693] */
    (xdc_Char)0x0,  /* [7694] */
    (xdc_Char)0x41,  /* [7695] */
    (xdc_Char)0x73,  /* [7696] */
    (xdc_Char)0x73,  /* [7697] */
    (xdc_Char)0x65,  /* [7698] */
    (xdc_Char)0x72,  /* [7699] */
    (xdc_Char)0x74,  /* [7700] */
    (xdc_Char)0x0,  /* [7701] */
    (xdc_Char)0x43,  /* [7702] */
    (xdc_Char)0x6f,  /* [7703] */
    (xdc_Char)0x72,  /* [7704] */
    (xdc_Char)0x65,  /* [7705] */
    (xdc_Char)0x0,  /* [7706] */
    (xdc_Char)0x44,  /* [7707] */
    (xdc_Char)0x65,  /* [7708] */
    (xdc_Char)0x66,  /* [7709] */
    (xdc_Char)0x61,  /* [7710] */
    (xdc_Char)0x75,  /* [7711] */
    (xdc_Char)0x6c,  /* [7712] */
    (xdc_Char)0x74,  /* [7713] */
    (xdc_Char)0x73,  /* [7714] */
    (xdc_Char)0x0,  /* [7715] */
    (xdc_Char)0x44,  /* [7716] */
    (xdc_Char)0x69,  /* [7717] */
    (xdc_Char)0x61,  /* [7718] */
    (xdc_Char)0x67,  /* [7719] */
    (xdc_Char)0x73,  /* [7720] */
    (xdc_Char)0x0,  /* [7721] */
    (xdc_Char)0x45,  /* [7722] */
    (xdc_Char)0x72,  /* [7723] */
    (xdc_Char)0x72,  /* [7724] */
    (xdc_Char)0x6f,  /* [7725] */
    (xdc_Char)0x72,  /* [7726] */
    (xdc_Char)0x0,  /* [7727] */
    (xdc_Char)0x47,  /* [7728] */
    (xdc_Char)0x61,  /* [7729] */
    (xdc_Char)0x74,  /* [7730] */
    (xdc_Char)0x65,  /* [7731] */
    (xdc_Char)0x0,  /* [7732] */
    (xdc_Char)0x4c,  /* [7733] */
    (xdc_Char)0x6f,  /* [7734] */
    (xdc_Char)0x67,  /* [7735] */
    (xdc_Char)0x0,  /* [7736] */
    (xdc_Char)0x4d,  /* [7737] */
    (xdc_Char)0x61,  /* [7738] */
    (xdc_Char)0x69,  /* [7739] */
    (xdc_Char)0x6e,  /* [7740] */
    (xdc_Char)0x0,  /* [7741] */
    (xdc_Char)0x4d,  /* [7742] */
    (xdc_Char)0x65,  /* [7743] */
    (xdc_Char)0x6d,  /* [7744] */
    (xdc_Char)0x6f,  /* [7745] */
    (xdc_Char)0x72,  /* [7746] */
    (xdc_Char)0x79,  /* [7747] */
    (xdc_Char)0x0,  /* [7748] */
    (xdc_Char)0x52,  /* [7749] */
    (xdc_Char)0x65,  /* [7750] */
    (xdc_Char)0x67,  /* [7751] */
    (xdc_Char)0x69,  /* [7752] */
    (xdc_Char)0x73,  /* [7753] */
    (xdc_Char)0x74,  /* [7754] */
    (xdc_Char)0x72,  /* [7755] */
    (xdc_Char)0x79,  /* [7756] */
    (xdc_Char)0x0,  /* [7757] */
    (xdc_Char)0x53,  /* [7758] */
    (xdc_Char)0x74,  /* [7759] */
    (xdc_Char)0x61,  /* [7760] */
    (xdc_Char)0x72,  /* [7761] */
    (xdc_Char)0x74,  /* [7762] */
    (xdc_Char)0x75,  /* [7763] */
    (xdc_Char)0x70,  /* [7764] */
    (xdc_Char)0x0,  /* [7765] */
    (xdc_Char)0x53,  /* [7766] */
    (xdc_Char)0x79,  /* [7767] */
    (xdc_Char)0x73,  /* [7768] */
    (xdc_Char)0x74,  /* [7769] */
    (xdc_Char)0x65,  /* [7770] */
    (xdc_Char)0x6d,  /* [7771] */
    (xdc_Char)0x0,  /* [7772] */
    (xdc_Char)0x53,  /* [7773] */
    (xdc_Char)0x79,  /* [7774] */
    (xdc_Char)0x73,  /* [7775] */
    (xdc_Char)0x4d,  /* [7776] */
    (xdc_Char)0x69,  /* [7777] */
    (xdc_Char)0x6e,  /* [7778] */
    (xdc_Char)0x0,  /* [7779] */
    (xdc_Char)0x54,  /* [7780] */
    (xdc_Char)0x65,  /* [7781] */
    (xdc_Char)0x78,  /* [7782] */
    (xdc_Char)0x74,  /* [7783] */
    (xdc_Char)0x0,  /* [7784] */
    (xdc_Char)0x54,  /* [7785] */
    (xdc_Char)0x69,  /* [7786] */
    (xdc_Char)0x6d,  /* [7787] */
    (xdc_Char)0x65,  /* [7788] */
    (xdc_Char)0x73,  /* [7789] */
    (xdc_Char)0x74,  /* [7790] */
    (xdc_Char)0x61,  /* [7791] */
    (xdc_Char)0x6d,  /* [7792] */
    (xdc_Char)0x70,  /* [7793] */
    (xdc_Char)0x0,  /* [7794] */
    (xdc_Char)0x54,  /* [7795] */
    (xdc_Char)0x69,  /* [7796] */
    (xdc_Char)0x6d,  /* [7797] */
    (xdc_Char)0x65,  /* [7798] */
    (xdc_Char)0x73,  /* [7799] */
    (xdc_Char)0x74,  /* [7800] */
    (xdc_Char)0x61,  /* [7801] */
    (xdc_Char)0x6d,  /* [7802] */
    (xdc_Char)0x70,  /* [7803] */
    (xdc_Char)0x4e,  /* [7804] */
    (xdc_Char)0x75,  /* [7805] */
    (xdc_Char)0x6c,  /* [7806] */
    (xdc_Char)0x6c,  /* [7807] */
    (xdc_Char)0x0,  /* [7808] */
    (xdc_Char)0x54,  /* [7809] */
    (xdc_Char)0x79,  /* [7810] */
    (xdc_Char)0x70,  /* [7811] */
    (xdc_Char)0x65,  /* [7812] */
    (xdc_Char)0x73,  /* [7813] */
    (xdc_Char)0x0,  /* [7814] */
    (xdc_Char)0x74,  /* [7815] */
    (xdc_Char)0x69,  /* [7816] */
    (xdc_Char)0x2e,  /* [7817] */
    (xdc_Char)0x0,  /* [7818] */
    (xdc_Char)0x73,  /* [7819] */
    (xdc_Char)0x79,  /* [7820] */
    (xdc_Char)0x73,  /* [7821] */
    (xdc_Char)0x62,  /* [7822] */
    (xdc_Char)0x69,  /* [7823] */
    (xdc_Char)0x6f,  /* [7824] */
    (xdc_Char)0x73,  /* [7825] */
    (xdc_Char)0x2e,  /* [7826] */
    (xdc_Char)0x0,  /* [7827] */
    (xdc_Char)0x66,  /* [7828] */
    (xdc_Char)0x61,  /* [7829] */
    (xdc_Char)0x6d,  /* [7830] */
    (xdc_Char)0x69,  /* [7831] */
    (xdc_Char)0x6c,  /* [7832] */
    (xdc_Char)0x79,  /* [7833] */
    (xdc_Char)0x2e,  /* [7834] */
    (xdc_Char)0x0,  /* [7835] */
    (xdc_Char)0x63,  /* [7836] */
    (xdc_Char)0x36,  /* [7837] */
    (xdc_Char)0x34,  /* [7838] */
    (xdc_Char)0x70,  /* [7839] */
    (xdc_Char)0x2e,  /* [7840] */
    (xdc_Char)0x0,  /* [7841] */
    (xdc_Char)0x45,  /* [7842] */
    (xdc_Char)0x78,  /* [7843] */
    (xdc_Char)0x63,  /* [7844] */
    (xdc_Char)0x65,  /* [7845] */
    (xdc_Char)0x70,  /* [7846] */
    (xdc_Char)0x74,  /* [7847] */
    (xdc_Char)0x69,  /* [7848] */
    (xdc_Char)0x6f,  /* [7849] */
    (xdc_Char)0x6e,  /* [7850] */
    (xdc_Char)0x0,  /* [7851] */
    (xdc_Char)0x48,  /* [7852] */
    (xdc_Char)0x77,  /* [7853] */
    (xdc_Char)0x69,  /* [7854] */
    (xdc_Char)0x0,  /* [7855] */
    (xdc_Char)0x54,  /* [7856] */
    (xdc_Char)0x69,  /* [7857] */
    (xdc_Char)0x6d,  /* [7858] */
    (xdc_Char)0x65,  /* [7859] */
    (xdc_Char)0x73,  /* [7860] */
    (xdc_Char)0x74,  /* [7861] */
    (xdc_Char)0x61,  /* [7862] */
    (xdc_Char)0x6d,  /* [7863] */
    (xdc_Char)0x70,  /* [7864] */
    (xdc_Char)0x50,  /* [7865] */
    (xdc_Char)0x72,  /* [7866] */
    (xdc_Char)0x6f,  /* [7867] */
    (xdc_Char)0x76,  /* [7868] */
    (xdc_Char)0x69,  /* [7869] */
    (xdc_Char)0x64,  /* [7870] */
    (xdc_Char)0x65,  /* [7871] */
    (xdc_Char)0x72,  /* [7872] */
    (xdc_Char)0x0,  /* [7873] */
    (xdc_Char)0x43,  /* [7874] */
    (xdc_Char)0x61,  /* [7875] */
    (xdc_Char)0x63,  /* [7876] */
    (xdc_Char)0x68,  /* [7877] */
    (xdc_Char)0x65,  /* [7878] */
    (xdc_Char)0x0,  /* [7879] */
    (xdc_Char)0x42,  /* [7880] */
    (xdc_Char)0x49,  /* [7881] */
    (xdc_Char)0x4f,  /* [7882] */
    (xdc_Char)0x53,  /* [7883] */
    (xdc_Char)0x0,  /* [7884] */
    (xdc_Char)0x6b,  /* [7885] */
    (xdc_Char)0x6e,  /* [7886] */
    (xdc_Char)0x6c,  /* [7887] */
    (xdc_Char)0x2e,  /* [7888] */
    (xdc_Char)0x0,  /* [7889] */
    (xdc_Char)0x43,  /* [7890] */
    (xdc_Char)0x6c,  /* [7891] */
    (xdc_Char)0x6f,  /* [7892] */
    (xdc_Char)0x63,  /* [7893] */
    (xdc_Char)0x6b,  /* [7894] */
    (xdc_Char)0x0,  /* [7895] */
    (xdc_Char)0x49,  /* [7896] */
    (xdc_Char)0x64,  /* [7897] */
    (xdc_Char)0x6c,  /* [7898] */
    (xdc_Char)0x65,  /* [7899] */
    (xdc_Char)0x0,  /* [7900] */
    (xdc_Char)0x49,  /* [7901] */
    (xdc_Char)0x6e,  /* [7902] */
    (xdc_Char)0x74,  /* [7903] */
    (xdc_Char)0x72,  /* [7904] */
    (xdc_Char)0x69,  /* [7905] */
    (xdc_Char)0x6e,  /* [7906] */
    (xdc_Char)0x73,  /* [7907] */
    (xdc_Char)0x69,  /* [7908] */
    (xdc_Char)0x63,  /* [7909] */
    (xdc_Char)0x73,  /* [7910] */
    (xdc_Char)0x0,  /* [7911] */
    (xdc_Char)0x45,  /* [7912] */
    (xdc_Char)0x76,  /* [7913] */
    (xdc_Char)0x65,  /* [7914] */
    (xdc_Char)0x6e,  /* [7915] */
    (xdc_Char)0x74,  /* [7916] */
    (xdc_Char)0x0,  /* [7917] */
    (xdc_Char)0x51,  /* [7918] */
    (xdc_Char)0x75,  /* [7919] */
    (xdc_Char)0x65,  /* [7920] */
    (xdc_Char)0x75,  /* [7921] */
    (xdc_Char)0x65,  /* [7922] */
    (xdc_Char)0x0,  /* [7923] */
    (xdc_Char)0x53,  /* [7924] */
    (xdc_Char)0x65,  /* [7925] */
    (xdc_Char)0x6d,  /* [7926] */
    (xdc_Char)0x61,  /* [7927] */
    (xdc_Char)0x70,  /* [7928] */
    (xdc_Char)0x68,  /* [7929] */
    (xdc_Char)0x6f,  /* [7930] */
    (xdc_Char)0x72,  /* [7931] */
    (xdc_Char)0x65,  /* [7932] */
    (xdc_Char)0x0,  /* [7933] */
    (xdc_Char)0x53,  /* [7934] */
    (xdc_Char)0x77,  /* [7935] */
    (xdc_Char)0x69,  /* [7936] */
    (xdc_Char)0x0,  /* [7937] */
    (xdc_Char)0x54,  /* [7938] */
    (xdc_Char)0x61,  /* [7939] */
    (xdc_Char)0x73,  /* [7940] */
    (xdc_Char)0x6b,  /* [7941] */
    (xdc_Char)0x0,  /* [7942] */
    (xdc_Char)0x68,  /* [7943] */
    (xdc_Char)0x61,  /* [7944] */
    (xdc_Char)0x6c,  /* [7945] */
    (xdc_Char)0x2e,  /* [7946] */
    (xdc_Char)0x0,  /* [7947] */
    (xdc_Char)0x54,  /* [7948] */
    (xdc_Char)0x69,  /* [7949] */
    (xdc_Char)0x6d,  /* [7950] */
    (xdc_Char)0x65,  /* [7951] */
    (xdc_Char)0x72,  /* [7952] */
    (xdc_Char)0x0,  /* [7953] */
    (xdc_Char)0x75,  /* [7954] */
    (xdc_Char)0x69,  /* [7955] */
    (xdc_Char)0x61,  /* [7956] */
    (xdc_Char)0x2e,  /* [7957] */
    (xdc_Char)0x0,  /* [7958] */
    (xdc_Char)0x65,  /* [7959] */
    (xdc_Char)0x76,  /* [7960] */
    (xdc_Char)0x65,  /* [7961] */
    (xdc_Char)0x6e,  /* [7962] */
    (xdc_Char)0x74,  /* [7963] */
    (xdc_Char)0x73,  /* [7964] */
    (xdc_Char)0x2e,  /* [7965] */
    (xdc_Char)0x0,  /* [7966] */
    (xdc_Char)0x44,  /* [7967] */
    (xdc_Char)0x76,  /* [7968] */
    (xdc_Char)0x74,  /* [7969] */
    (xdc_Char)0x54,  /* [7970] */
    (xdc_Char)0x79,  /* [7971] */
    (xdc_Char)0x70,  /* [7972] */
    (xdc_Char)0x65,  /* [7973] */
    (xdc_Char)0x73,  /* [7974] */
    (xdc_Char)0x0,  /* [7975] */
    (xdc_Char)0x55,  /* [7976] */
    (xdc_Char)0x49,  /* [7977] */
    (xdc_Char)0x41,  /* [7978] */
    (xdc_Char)0x45,  /* [7979] */
    (xdc_Char)0x72,  /* [7980] */
    (xdc_Char)0x72,  /* [7981] */
    (xdc_Char)0x0,  /* [7982] */
    (xdc_Char)0x55,  /* [7983] */
    (xdc_Char)0x49,  /* [7984] */
    (xdc_Char)0x41,  /* [7985] */
    (xdc_Char)0x45,  /* [7986] */
    (xdc_Char)0x76,  /* [7987] */
    (xdc_Char)0x74,  /* [7988] */
    (xdc_Char)0x0,  /* [7989] */
    (xdc_Char)0x45,  /* [7990] */
    (xdc_Char)0x76,  /* [7991] */
    (xdc_Char)0x65,  /* [7992] */
    (xdc_Char)0x6e,  /* [7993] */
    (xdc_Char)0x74,  /* [7994] */
    (xdc_Char)0x48,  /* [7995] */
    (xdc_Char)0x64,  /* [7996] */
    (xdc_Char)0x72,  /* [7997] */
    (xdc_Char)0x0,  /* [7998] */
    (xdc_Char)0x51,  /* [7999] */
    (xdc_Char)0x75,  /* [8000] */
    (xdc_Char)0x65,  /* [8001] */
    (xdc_Char)0x75,  /* [8002] */
    (xdc_Char)0x65,  /* [8003] */
    (xdc_Char)0x44,  /* [8004] */
    (xdc_Char)0x65,  /* [8005] */
    (xdc_Char)0x73,  /* [8006] */
    (xdc_Char)0x63,  /* [8007] */
    (xdc_Char)0x72,  /* [8008] */
    (xdc_Char)0x69,  /* [8009] */
    (xdc_Char)0x70,  /* [8010] */
    (xdc_Char)0x74,  /* [8011] */
    (xdc_Char)0x6f,  /* [8012] */
    (xdc_Char)0x72,  /* [8013] */
    (xdc_Char)0x0,  /* [8014] */
    (xdc_Char)0x55,  /* [8015] */
    (xdc_Char)0x49,  /* [8016] */
    (xdc_Char)0x41,  /* [8017] */
    (xdc_Char)0x4d,  /* [8018] */
    (xdc_Char)0x65,  /* [8019] */
    (xdc_Char)0x74,  /* [8020] */
    (xdc_Char)0x61,  /* [8021] */
    (xdc_Char)0x44,  /* [8022] */
    (xdc_Char)0x61,  /* [8023] */
    (xdc_Char)0x74,  /* [8024] */
    (xdc_Char)0x61,  /* [8025] */
    (xdc_Char)0x0,  /* [8026] */
    (xdc_Char)0x72,  /* [8027] */
    (xdc_Char)0x74,  /* [8028] */
    (xdc_Char)0x73,  /* [8029] */
    (xdc_Char)0x2e,  /* [8030] */
    (xdc_Char)0x0,  /* [8031] */
    (xdc_Char)0x54,  /* [8032] */
    (xdc_Char)0x68,  /* [8033] */
    (xdc_Char)0x72,  /* [8034] */
    (xdc_Char)0x65,  /* [8035] */
    (xdc_Char)0x61,  /* [8036] */
    (xdc_Char)0x64,  /* [8037] */
    (xdc_Char)0x4c,  /* [8038] */
    (xdc_Char)0x6f,  /* [8039] */
    (xdc_Char)0x63,  /* [8040] */
    (xdc_Char)0x61,  /* [8041] */
    (xdc_Char)0x6c,  /* [8042] */
    (xdc_Char)0x53,  /* [8043] */
    (xdc_Char)0x74,  /* [8044] */
    (xdc_Char)0x6f,  /* [8045] */
    (xdc_Char)0x72,  /* [8046] */
    (xdc_Char)0x61,  /* [8047] */
    (xdc_Char)0x67,  /* [8048] */
    (xdc_Char)0x65,  /* [8049] */
    (xdc_Char)0x0,  /* [8050] */
    (xdc_Char)0x63,  /* [8051] */
    (xdc_Char)0x36,  /* [8052] */
    (xdc_Char)0x32,  /* [8053] */
    (xdc_Char)0x2e,  /* [8054] */
    (xdc_Char)0x0,  /* [8055] */
    (xdc_Char)0x54,  /* [8056] */
    (xdc_Char)0x61,  /* [8057] */
    (xdc_Char)0x73,  /* [8058] */
    (xdc_Char)0x6b,  /* [8059] */
    (xdc_Char)0x53,  /* [8060] */
    (xdc_Char)0x75,  /* [8061] */
    (xdc_Char)0x70,  /* [8062] */
    (xdc_Char)0x70,  /* [8063] */
    (xdc_Char)0x6f,  /* [8064] */
    (xdc_Char)0x72,  /* [8065] */
    (xdc_Char)0x74,  /* [8066] */
    (xdc_Char)0x0,  /* [8067] */
    (xdc_Char)0x49,  /* [8068] */
    (xdc_Char)0x6e,  /* [8069] */
    (xdc_Char)0x74,  /* [8070] */
    (xdc_Char)0x72,  /* [8071] */
    (xdc_Char)0x69,  /* [8072] */
    (xdc_Char)0x6e,  /* [8073] */
    (xdc_Char)0x73,  /* [8074] */
    (xdc_Char)0x69,  /* [8075] */
    (xdc_Char)0x63,  /* [8076] */
    (xdc_Char)0x73,  /* [8077] */
    (xdc_Char)0x53,  /* [8078] */
    (xdc_Char)0x75,  /* [8079] */
    (xdc_Char)0x70,  /* [8080] */
    (xdc_Char)0x70,  /* [8081] */
    (xdc_Char)0x6f,  /* [8082] */
    (xdc_Char)0x72,  /* [8083] */
    (xdc_Char)0x74,  /* [8084] */
    (xdc_Char)0x0,  /* [8085] */
    (xdc_Char)0x67,  /* [8086] */
    (xdc_Char)0x61,  /* [8087] */
    (xdc_Char)0x74,  /* [8088] */
    (xdc_Char)0x65,  /* [8089] */
    (xdc_Char)0x73,  /* [8090] */
    (xdc_Char)0x2e,  /* [8091] */
    (xdc_Char)0x0,  /* [8092] */
    (xdc_Char)0x47,  /* [8093] */
    (xdc_Char)0x61,  /* [8094] */
    (xdc_Char)0x74,  /* [8095] */
    (xdc_Char)0x65,  /* [8096] */
    (xdc_Char)0x48,  /* [8097] */
    (xdc_Char)0x77,  /* [8098] */
    (xdc_Char)0x69,  /* [8099] */
    (xdc_Char)0x0,  /* [8100] */
    (xdc_Char)0x47,  /* [8101] */
    (xdc_Char)0x61,  /* [8102] */
    (xdc_Char)0x74,  /* [8103] */
    (xdc_Char)0x65,  /* [8104] */
    (xdc_Char)0x4d,  /* [8105] */
    (xdc_Char)0x75,  /* [8106] */
    (xdc_Char)0x74,  /* [8107] */
    (xdc_Char)0x65,  /* [8108] */
    (xdc_Char)0x78,  /* [8109] */
    (xdc_Char)0x0,  /* [8110] */
    (xdc_Char)0x68,  /* [8111] */
    (xdc_Char)0x65,  /* [8112] */
    (xdc_Char)0x61,  /* [8113] */
    (xdc_Char)0x70,  /* [8114] */
    (xdc_Char)0x73,  /* [8115] */
    (xdc_Char)0x2e,  /* [8116] */
    (xdc_Char)0x0,  /* [8117] */
    (xdc_Char)0x48,  /* [8118] */
    (xdc_Char)0x65,  /* [8119] */
    (xdc_Char)0x61,  /* [8120] */
    (xdc_Char)0x70,  /* [8121] */
    (xdc_Char)0x4d,  /* [8122] */
    (xdc_Char)0x65,  /* [8123] */
    (xdc_Char)0x6d,  /* [8124] */
    (xdc_Char)0x0,  /* [8125] */
    (xdc_Char)0x6c,  /* [8126] */
    (xdc_Char)0x6f,  /* [8127] */
    (xdc_Char)0x67,  /* [8128] */
    (xdc_Char)0x67,  /* [8129] */
    (xdc_Char)0x65,  /* [8130] */
    (xdc_Char)0x72,  /* [8131] */
    (xdc_Char)0x73,  /* [8132] */
    (xdc_Char)0x2e,  /* [8133] */
    (xdc_Char)0x0,  /* [8134] */
    (xdc_Char)0x4c,  /* [8135] */
    (xdc_Char)0x6f,  /* [8136] */
    (xdc_Char)0x67,  /* [8137] */
    (xdc_Char)0x67,  /* [8138] */
    (xdc_Char)0x65,  /* [8139] */
    (xdc_Char)0x72,  /* [8140] */
    (xdc_Char)0x53,  /* [8141] */
    (xdc_Char)0x74,  /* [8142] */
    (xdc_Char)0x6f,  /* [8143] */
    (xdc_Char)0x70,  /* [8144] */
    (xdc_Char)0x4d,  /* [8145] */
    (xdc_Char)0x6f,  /* [8146] */
    (xdc_Char)0x64,  /* [8147] */
    (xdc_Char)0x65,  /* [8148] */
    (xdc_Char)0x0,  /* [8149] */
    (xdc_Char)0x75,  /* [8150] */
    (xdc_Char)0x74,  /* [8151] */
    (xdc_Char)0x69,  /* [8152] */
    (xdc_Char)0x6c,  /* [8153] */
    (xdc_Char)0x73,  /* [8154] */
    (xdc_Char)0x2e,  /* [8155] */
    (xdc_Char)0x0,  /* [8156] */
    (xdc_Char)0x4c,  /* [8157] */
    (xdc_Char)0x6f,  /* [8158] */
    (xdc_Char)0x61,  /* [8159] */
    (xdc_Char)0x64,  /* [8160] */
    (xdc_Char)0x0,  /* [8161] */
    (xdc_Char)0x74,  /* [8162] */
    (xdc_Char)0x69,  /* [8163] */
    (xdc_Char)0x6d,  /* [8164] */
    (xdc_Char)0x65,  /* [8165] */
    (xdc_Char)0x72,  /* [8166] */
    (xdc_Char)0x73,  /* [8167] */
    (xdc_Char)0x2e,  /* [8168] */
    (xdc_Char)0x0,  /* [8169] */
    (xdc_Char)0x74,  /* [8170] */
    (xdc_Char)0x69,  /* [8171] */
    (xdc_Char)0x6d,  /* [8172] */
    (xdc_Char)0x65,  /* [8173] */
    (xdc_Char)0x72,  /* [8174] */
    (xdc_Char)0x36,  /* [8175] */
    (xdc_Char)0x34,  /* [8176] */
    (xdc_Char)0x2e,  /* [8177] */
    (xdc_Char)0x0,  /* [8178] */
    (xdc_Char)0x70,  /* [8179] */
    (xdc_Char)0x72,  /* [8180] */
    (xdc_Char)0x69,  /* [8181] */
    (xdc_Char)0x6d,  /* [8182] */
    (xdc_Char)0x75,  /* [8183] */
    (xdc_Char)0x73,  /* [8184] */
    (xdc_Char)0x2e,  /* [8185] */
    (xdc_Char)0x0,  /* [8186] */
    (xdc_Char)0x54,  /* [8187] */
    (xdc_Char)0x69,  /* [8188] */
    (xdc_Char)0x6d,  /* [8189] */
    (xdc_Char)0x65,  /* [8190] */
    (xdc_Char)0x72,  /* [8191] */
    (xdc_Char)0x53,  /* [8192] */
    (xdc_Char)0x75,  /* [8193] */
    (xdc_Char)0x70,  /* [8194] */
    (xdc_Char)0x70,  /* [8195] */
    (xdc_Char)0x6f,  /* [8196] */
    (xdc_Char)0x72,  /* [8197] */
    (xdc_Char)0x74,  /* [8198] */
    (xdc_Char)0x0,  /* [8199] */
    (xdc_Char)0x73,  /* [8200] */
    (xdc_Char)0x77,  /* [8201] */
    (xdc_Char)0x69,  /* [8202] */
    (xdc_Char)0x30,  /* [8203] */
    (xdc_Char)0x0,  /* [8204] */
    (xdc_Char)0x74,  /* [8205] */
    (xdc_Char)0x61,  /* [8206] */
    (xdc_Char)0x73,  /* [8207] */
    (xdc_Char)0x6b,  /* [8208] */
    (xdc_Char)0x30,  /* [8209] */
    (xdc_Char)0x0,  /* [8210] */
    (xdc_Char)0x74,  /* [8211] */
    (xdc_Char)0x69,  /* [8212] */
    (xdc_Char)0x2e,  /* [8213] */
    (xdc_Char)0x73,  /* [8214] */
    (xdc_Char)0x79,  /* [8215] */
    (xdc_Char)0x73,  /* [8216] */
    (xdc_Char)0x62,  /* [8217] */
    (xdc_Char)0x69,  /* [8218] */
    (xdc_Char)0x6f,  /* [8219] */
    (xdc_Char)0x73,  /* [8220] */
    (xdc_Char)0x2e,  /* [8221] */
    (xdc_Char)0x6b,  /* [8222] */
    (xdc_Char)0x6e,  /* [8223] */
    (xdc_Char)0x6c,  /* [8224] */
    (xdc_Char)0x2e,  /* [8225] */
    (xdc_Char)0x54,  /* [8226] */
    (xdc_Char)0x61,  /* [8227] */
    (xdc_Char)0x73,  /* [8228] */
    (xdc_Char)0x6b,  /* [8229] */
    (xdc_Char)0x2e,  /* [8230] */
    (xdc_Char)0x49,  /* [8231] */
    (xdc_Char)0x64,  /* [8232] */
    (xdc_Char)0x6c,  /* [8233] */
    (xdc_Char)0x65,  /* [8234] */
    (xdc_Char)0x54,  /* [8235] */
    (xdc_Char)0x61,  /* [8236] */
    (xdc_Char)0x73,  /* [8237] */
    (xdc_Char)0x6b,  /* [8238] */
    (xdc_Char)0x0,  /* [8239] */
    (xdc_Char)0x74,  /* [8240] */
    (xdc_Char)0x30,  /* [8241] */
    (xdc_Char)0x0,  /* [8242] */
    (xdc_Char)0x4c,  /* [8243] */
    (xdc_Char)0x6f,  /* [8244] */
    (xdc_Char)0x61,  /* [8245] */
    (xdc_Char)0x64,  /* [8246] */
    (xdc_Char)0x20,  /* [8247] */
    (xdc_Char)0x4c,  /* [8248] */
    (xdc_Char)0x6f,  /* [8249] */
    (xdc_Char)0x67,  /* [8250] */
    (xdc_Char)0x67,  /* [8251] */
    (xdc_Char)0x65,  /* [8252] */
    (xdc_Char)0x72,  /* [8253] */
    (xdc_Char)0x0,  /* [8254] */
    (xdc_Char)0x4d,  /* [8255] */
    (xdc_Char)0x61,  /* [8256] */
    (xdc_Char)0x69,  /* [8257] */
    (xdc_Char)0x6e,  /* [8258] */
    (xdc_Char)0x20,  /* [8259] */
    (xdc_Char)0x4c,  /* [8260] */
    (xdc_Char)0x6f,  /* [8261] */
    (xdc_Char)0x67,  /* [8262] */
    (xdc_Char)0x67,  /* [8263] */
    (xdc_Char)0x65,  /* [8264] */
    (xdc_Char)0x72,  /* [8265] */
    (xdc_Char)0x0,  /* [8266] */
    (xdc_Char)0x53,  /* [8267] */
    (xdc_Char)0x59,  /* [8268] */
    (xdc_Char)0x53,  /* [8269] */
    (xdc_Char)0x42,  /* [8270] */
    (xdc_Char)0x49,  /* [8271] */
    (xdc_Char)0x4f,  /* [8272] */
    (xdc_Char)0x53,  /* [8273] */
    (xdc_Char)0x20,  /* [8274] */
    (xdc_Char)0x53,  /* [8275] */
    (xdc_Char)0x79,  /* [8276] */
    (xdc_Char)0x73,  /* [8277] */
    (xdc_Char)0x74,  /* [8278] */
    (xdc_Char)0x65,  /* [8279] */
    (xdc_Char)0x6d,  /* [8280] */
    (xdc_Char)0x20,  /* [8281] */
    (xdc_Char)0x4c,  /* [8282] */
    (xdc_Char)0x6f,  /* [8283] */
    (xdc_Char)0x67,  /* [8284] */
    (xdc_Char)0x67,  /* [8285] */
    (xdc_Char)0x65,  /* [8286] */
    (xdc_Char)0x72,  /* [8287] */
    (xdc_Char)0x0,  /* [8288] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[68] = {
    {
        (xdc_Bits16)0x0U,  /* left */
        (xdc_Bits16)0x0U,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1e01U,  /* left */
        (xdc_Bits16)0x1e06U,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e0fU,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e16U,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e1bU,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e24U,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e2aU,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e30U,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e35U,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e39U,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e3eU,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e45U,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e4eU,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e56U,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e5dU,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e64U,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e69U,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e73U,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e81U,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x1e87U,  /* left */
        (xdc_Bits16)0x1e8bU,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1e94U,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014U,  /* left */
        (xdc_Bits16)0x1e9cU,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015U,  /* left */
        (xdc_Bits16)0x1ea2U,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015U,  /* left */
        (xdc_Bits16)0x1eacU,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8015U,  /* left */
        (xdc_Bits16)0x1eb0U,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8015U,  /* left */
        (xdc_Bits16)0x1ec2U,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1ec8U,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1ecdU,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1ed2U,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1ed8U,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1eddU,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1ee8U,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1eeeU,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1ef4U,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1efeU,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801bU,  /* left */
        (xdc_Bits16)0x1f02U,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1f07U,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024U,  /* left */
        (xdc_Bits16)0x1eacU,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8024U,  /* left */
        (xdc_Bits16)0x1f0cU,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x1e87U,  /* left */
        (xdc_Bits16)0x1f12U,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027U,  /* left */
        (xdc_Bits16)0x1f17U,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028U,  /* left */
        (xdc_Bits16)0x1f1fU,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8028U,  /* left */
        (xdc_Bits16)0x1f28U,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8028U,  /* left */
        (xdc_Bits16)0x1f2fU,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8027U,  /* left */
        (xdc_Bits16)0x1e06U,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802cU,  /* left */
        (xdc_Bits16)0x1f36U,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802cU,  /* left */
        (xdc_Bits16)0x1f3fU,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802cU,  /* left */
        (xdc_Bits16)0x1f4fU,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1f5bU,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8030U,  /* left */
        (xdc_Bits16)0x1e87U,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031U,  /* left */
        (xdc_Bits16)0x1f60U,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8014U,  /* left */
        (xdc_Bits16)0x1f73U,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033U,  /* left */
        (xdc_Bits16)0x1f78U,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8033U,  /* left */
        (xdc_Bits16)0x1f84U,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1f96U,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036U,  /* left */
        (xdc_Bits16)0x1f9dU,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8036U,  /* left */
        (xdc_Bits16)0x1fa5U,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1fafU,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039U,  /* left */
        (xdc_Bits16)0x1fb6U,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8027U,  /* left */
        (xdc_Bits16)0x1fbeU,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x803bU,  /* left */
        (xdc_Bits16)0x1fc7U,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1fd6U,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x803dU,  /* left */
        (xdc_Bits16)0x1fddU,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1fe2U,  /* right */
    },  /* [63] */
    {
        (xdc_Bits16)0x803fU,  /* left */
        (xdc_Bits16)0x1feaU,  /* right */
    },  /* [64] */
    {
        (xdc_Bits16)0x8040U,  /* left */
        (xdc_Bits16)0x1f0cU,  /* right */
    },  /* [65] */
    {
        (xdc_Bits16)0x8015U,  /* left */
        (xdc_Bits16)0x1ff3U,  /* right */
    },  /* [66] */
    {
        (xdc_Bits16)0x8042U,  /* left */
        (xdc_Bits16)0x1ffbU,  /* right */
    },  /* [67] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x2061;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x44;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000U;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fffU;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((const CT__xdc_runtime_Timestamp_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((const CT__xdc_runtime_Timestamp_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((const CT__xdc_runtime_Timestamp_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((const CT__xdc_runtime_Timestamp_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = NULL;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((const CT__xdc_runtime_TimestampNull_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((const CT__xdc_runtime_TimestampNull_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((const CT__xdc_runtime_TimestampNull_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8011U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((const CT__xdc_runtime_Types_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((const CT__xdc_runtime_Types_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((const CT__xdc_runtime_Types_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((const CT__xdc_runtime_Types_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((const CT__xdc_runtime_Types_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((const CT__xdc_runtime_Types_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((const CT__xdc_runtime_Types_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((const CT__xdc_runtime_Types_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((const CT__xdc_runtime_Types_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = NULL;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_c64p_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_c64p_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c64p_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_c64p_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_c64p_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c64p_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c64p_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c64p_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_c64p_Hwi_getFunc((ti_sysbios_family_c64p_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c64p_Hwi_setFunc((ti_sysbios_family_c64p_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_c64p_Hwi_getHookContext((ti_sysbios_family_c64p_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c64p_Hwi_setHookContext((ti_sysbios_family_c64p_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_c64p_Hwi_getIrp((ti_sysbios_family_c64p_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_timers_timer64_Timer_create(id, tickFxn, (const ti_sysbios_timers_timer64_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredTicks((ti_sysbios_timers_timer64_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_timers_timer64_Timer_getCurrentTick((ti_sysbios_timers_timer64_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_timers_timer64_Timer_create(id, tickFxn, (const ti_sysbios_timers_timer64_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredTicks((ti_sysbios_timers_timer64_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_timers_timer64_Timer_getCurrentTick((ti_sysbios_timers_timer64_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c62_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c62_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_c62_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_c62_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getStackAlignment();
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.primus.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c64p_primus_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_timer64_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_c64p_primus_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_c64p_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_c64p_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c64p_Hwi_Object2__ s0; char c; } ti_sysbios_family_c64p_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__DESC__C, ".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c64p_Hwi___S1) - sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c64p_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.timers.timer64.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_timer64_Timer_Object2__ s0; char c; } ti_sysbios_timers_timer64_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__DESC__C, ".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_timer64_Timer___S1) - sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_timer64_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module mod, const ti_uia_runtime_IUIATransfer_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_IUIATransfer_Params), eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module mod, const ti_uia_runtime_ILoggerSnapshot_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c62.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c64p.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Cache_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Cache_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_c64p_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32791;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_c64p_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_c64p_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_c64p_Hwi_Object__ * const)ti_sysbios_family_c64p_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c64p_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_c64p_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_c64p_Hwi_Params instPrms;
    ti_sysbios_family_c64p_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_c64p_Hwi_Handle ti_sysbios_family_c64p_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c64p_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c64p_Hwi_Params prms;
    ti_sysbios_family_c64p_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_c64p_Hwi_construct(ti_sysbios_family_c64p_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_c64p_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_c64p_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_c64p_Hwi_destruct(ti_sysbios_family_c64p_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, *((ti_sysbios_family_c64p_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_c64p_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_c64p_Hwi_delete(ti_sysbios_family_c64p_Hwi_Handle *instp)
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.c64p.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_c64p_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.primus.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_primus_TimerSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32824;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Hwi_Object__ * const)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_hal_Timer_Object__ * const)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Timer_Args__create *__args = req_args;
    ti_sysbios_hal_Timer_Params instPrms;
    ti_sysbios_hal_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *objp, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32826;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32796;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params instPrms;
    ti_sysbios_knl_Event_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *objp, const ti_sysbios_knl_Event_Params *paramsPtr)
{
    ti_sysbios_knl_Event_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Semaphore_Object__ * const)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.rts.ti.ThreadLocalStorage SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_rts_ti_ThreadLocalStorage_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.timers.timer64.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_timer64_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_timer64_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_timer64_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_timer64_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_timer64_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_timer64_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_timer64_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_timer64_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_timer64_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_timer64_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_timers_timer64_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32833;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_timers_timer64_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_timers_timer64_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_timers_timer64_Timer_Object__ * const)ti_sysbios_timers_timer64_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_timer64_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_timers_timer64_Timer_Args__create *__args = req_args;
    ti_sysbios_timers_timer64_Timer_Params instPrms;
    ti_sysbios_timers_timer64_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_timers_timer64_Timer_Handle ti_sysbios_timers_timer64_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_timer64_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_timers_timer64_Timer_Params prms;
    ti_sysbios_timers_timer64_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_timers_timer64_Timer_construct(ti_sysbios_timers_timer64_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_timers_timer64_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_timers_timer64_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_timers_timer64_Timer_destruct(ti_sysbios_timers_timer64_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, *((ti_sysbios_timers_timer64_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_timers_timer64_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_timers_timer64_Timer_delete(ti_sysbios_timers_timer64_Timer_Handle *instp)
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32828;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_uia_loggers_LoggerStopMode_Object__ * const)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;
    ti_uia_loggers_LoggerStopMode_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params prms;
    ti_uia_loggers_LoggerStopMode_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *objp, const ti_uia_loggers_LoggerStopMode_Params *paramsPtr)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
    __attribute__ ((used))
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

    __attribute__ ((used))
const ti_sysbios_hal_Timer_Handle t0 = (ti_sysbios_hal_Timer_Handle)((ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0]);

    __attribute__ ((used))
const ti_sysbios_knl_Semaphore_Handle sem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

    __attribute__ ((used))
const ti_sysbios_knl_Swi_Handle swi0 = (ti_sysbios_knl_Swi_Handle)((ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0]);

    __attribute__ ((used))
const ti_sysbios_knl_Task_Handle task0 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

