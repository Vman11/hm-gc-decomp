#define __GEKKO__ 1

#define __OSGetInterruptHandler fn_800B7290
#define SetInterruptMask fn_800B7318
#define __OSDispatchInterrupt fn_800B7700
#define OSGetCurrentThread fn_800B9790
#define OSResumeThread fn_800B9ED0
#define OSSleepThread fn_800BA2C8
#define OSSuspendThread fn_800BA158
#define OSWakeupThread fn_800BA3B4
#define OSYieldThread fn_800B9CD8
#define PPCMfwpar fn_800B2F4C
#define PPCMthid0 fn_800B2E88
#define PPCSync fn_800B2EA8
#define __GetImageTileCount fn_800D7D5C
#define __GXAbort fn_800D62CC
#define GXBegin fn_800D6B8C
#define __GXCalculateVLim fn_800D57B0
#define GXCallDisplayList fn_800D9C58
#define __GXCleanGPFifo fn_800D50D0
#define GXClearBoundingBox fn_800D7774
#define GXClearGPMetric fn_800DAA70
#define GXClearVtxDesc fn_800D58D4
#define GXCopyDisp fn_800D7480
#define GXCopyTex fn_800D75E8
#define GXCPInterruptHandler fn_800D4AA8
#define GXDrawDone fn_800D6700
#define GXEnableTexOffsets fn_800D6D64
#define __GXFifoLink fn_800D503C
#define __GXFifoReadDisable fn_800D5018
#define __GXFifoReadEnable fn_800D4FF4
#define GXFinishInterruptHandler fn_800D6A18
#define GXFlush fn_800D6270
#define GXGetCPUFifo fn_800D51D0
#define GXGetLightAttnK fn_800D77D8
#define GXGetLightColor fn_800D7A00
#define GXGetLightDir fn_800D79CC
#define GXGetLightPos fn_800D7994
#define GXGetTexObjFmt fn_800D8318
#define GXGetTexObjMipMap fn_800D8320
#define GXInitFifoLimits fn_800D4CB8
#define GXInitFifoPtrs fn_800D4C48
#define GXInitLightAttn fn_800D77AC
#define GXInitLightAttnK fn_800D77C8
#define GXInitLightColor fn_800D79F4
#define GXInitLightDir fn_800D79B0
#define GXInitLightPos fn_800D7984
#define GXInitTexObjCI fn_800D8070
#define GXInitTexObjFilter fn_800D8240
#define GXInitTexObj fn_800D7E24
#define GXInitTexObjLOD fn_800D80B8
#define GXInitTexObjMaxLOD fn_800D8278
#define GXInitTexObjMinLOD fn_800D82C8
#define GXInitTexObjTlut fn_800D8238
#define GXInitTexObjWrapMode fn_800D821C
#define GXInitTlutObj fn_800D8508
#define GXInvalidateTexAll fn_800D8704
#define GXInvalidateVtxCache fn_800D5F10
#define GXLoadLightObjImm fn_800D7A0C
#define GXLoadNrmMtxImm fn_800D9E48
#define GXLoadPosMtxImm fn_800D9DF8
#define GXLoadTexMtxImm fn_800D9ECC
#define GXLoadTexObj fn_800D84B4
#define GXLoadTexObjPreLoaded fn_800D8338
#define GXLoadTlut fn_800D8540
#define GXPeekARGB fn_800D68A4
#define GXPokeAlphaMode fn_800D6780
#define GXPokeAlphaRead fn_800D6794
#define GXPokeAlphaUpdate fn_800D67B4
#define GXPokeARGB fn_800D68C8
#define GXPokeBlendMode fn_800D67CC
#define GXPokeColorUpdate fn_800D6830
#define GXPokeDither fn_800D686C
#define GXPokeDstAlpha fn_800D6848
#define GXPokeZ fn_800D68E8
#define GXPokeZMode fn_800D6884
#define GXReadDrawSync fn_800D665C
#define __GXSendFlushPrim fn_800D6C5C
#define GXSetAlphaCompare fn_800D937C
#define GXSetAlphaUpdate fn_800D99D8
#define GXSetBlendMode fn_800D9958
#define GXSetBreakPtCallback fn_800D4F64
#define GXSetClipMode fn_800DA17C
#define GXSetColorUpdate fn_800D99AC
#define GXSetCoPlanar fn_800D6DF0
#define GXSetCopyClamp fn_800D70C8
#define GXSetCopyClear fn_800D71EC
#define GXSetCopyFilter fn_800D7264
#define GXSetCurrentMtx fn_800D9E98
#define __GXSetDirtyState fn_800D6B0C
#define GXSetDispCopyDst fn_800D6F40
#define GXSetDispCopyFrame2Field fn_800D70A4
#define GXSetDispCopyGamma fn_800D746C
#define GXSetDispCopySrc fn_800D6E48
#define GXSetDispCopyYScale fn_800D7120
#define GXSetDither fn_800D9B40
#define GXSetDrawDoneCallback fn_800D69D4
#define GXSetDrawDone fn_800D6668
#define GXSetDrawSyncCallback fn_800D6908
#define GXSetDrawSync fn_800D65A8
#define GXSetDstAlpha fn_800D9B6C
#define GXSetFieldMask fn_800D9BA8
#define GXSetFieldMode fn_800D9BE0
#define GXSetFogRangeAdj fn_800D9834
#define __GXSetGenMode fn_800D6E24
#define GXSetGPMetric fn_800DA228
#define GXSetIndTexCoordScale fn_800D8D50
#define GXSetLineWidth fn_800D6CE4
#define __GXSetMatrixIndex fn_800DA1A4
#define GXSetNumChans fn_800D7C68
#define GXSetNumIndStages fn_800D8E94
#define GXSetNumTevStages fn_800D95E8
#define GXSetNumTexGens fn_800D61A0
#define GXSetPixelFmt fn_800D9A6C
#define GXSetPointSize fn_800D6D24
#define GXSetProjection fn_800D9CC8
#define GXSetProjectionv fn_800D9D6C
#define GXSetScissorBoxOffset fn_800DA13C
#define GXSetScissor fn_800DA0C4
#define __GXSetSUTexRegs fn_800D8814
#define GXSetTevAlphaIn fn_800D8FF8
#define GXSetTevAlphaOp fn_800D90A4
#define GXSetTevColorIn fn_800D8FB4
#define GXSetTevColorOp fn_800D903C
#define GXSetTevDirect fn_800D8EB8
#define GXSetTevIndirect fn_800D8CE4
#define GXSetTevKAlphaSel fn_800D9258
#define GXSetTevKColorSel fn_800D91FC
#define GXSetTevOp fn_800D8F28
#define GXSetTevOrder fn_800D944C
#define GXSetTevSwapMode fn_800D92B4
#define GXSetTevSwapModeTable fn_800D92FC
#define GXSetTexCoordGen2 fn_800D5F20
#define GXSetTexCopyDst fn_800D6F74
#define GXSetTexCopySrc fn_800D6EC4
#define GXSetTexRegionCallback fn_800D874C
#define GXSetTlutRegionCallback fn_800D8760
#define __GXSetVCD fn_800D56F4
#define GXSetViewport fn_800DA010
#define GXSetVtxAttrFmt fn_800D590C
#define GXSetVtxAttrFmtv fn_800D5B68
#define GXSetVtxDesc fn_800D5488
#define GXSetZCompLoc fn_800D9A38
#define GXSetZMode fn_800D9A04
#define GXSetZTexture fn_800D93C0
#define GXTokenInterruptHandler fn_800D694C
#define __GXUpdateBPMask fn_800D8F00
#define __GXWriteFifoIntEnable fn_800D5070
#define __GXWriteFifoIntReset fn_800D50A0
#define __SetSURegs fn_800D8774
#define GXRedirectWriteGatherPipe fn_800D51E0
#define GXRestoreWriteGatherPipe fn_800D52E8
#define BreakPointCB lbl_8035A934
#define CPGPLinked lbl_8035A92C
#define CPUFifo lbl_8035A920
#define GPFifo lbl_8035A924
#define GXOverflowSuspendInProgress lbl_8035A930
#define __GXCurrentThread lbl_8035A928
#define __GXOverflowCount lbl_8035A938
#define DrawDone lbl_8035A948
#define DrawDoneCB lbl_8035A944
#define FinishQueue lbl_8035A94C
#define GXGetGPFifo fn_800D51D8
#define TokenCB lbl_8035A940
#define __GXSetVAT fn_800D5DE8
#define GX2HWFiltConv lbl_80359668
#define GXTexImage0Ids lbl_80359640
#define GXTexImage1Ids lbl_80359648
#define GXTexImage2Ids lbl_80359650
#define GXTexImage3Ids lbl_80359658
#define GXTexMode0Ids lbl_80359630
#define GXTexMode1Ids lbl_80359638
#define GXTexTlutIds lbl_80359660
#define cosf cosf
#define GXEurgb60Hz480IntDf lbl_802DFDC4
#define GXMpal480IntDf lbl_802DFB6C
#define GXNtsc480IntDf lbl_802DF950
#define GXPal528IntDf lbl_802DFD10
#define GXSetArray fn_800D5E84
#define GXSetChanAmbColor fn_800D7A88
#define GXSetChanCtrl fn_800D7CA4
#define GXSetChanMatColor fn_800D7B78
#define GXSetCullMode fn_800D6DAC
#define GXSetFog fn_800D9610
#define calledOnce lbl_8035A918
#define peCount lbl_8035A908
#define time lbl_8035A910
#define AlarmQueue AlarmQueue_8035A560
#define __OSTimeToSystemTime fn_800BA5E8
#define EXIImmEx fn_800F2120
#define Scb Scb_803078A0
#define OSGetCurrentContext fn_800B4F6C
#define OSGetStackPointer fn_800B50D0
#define OSSaveContext fn_800B4F78
#define Reschedule Reschedule_8035A5F0
#define RunQueue RunQueue_803078F8
#define RunQueueBits RunQueueBits_8035A5E8
#define RunQueueHint RunQueueHint_8035A5EC
#define SwitchThreadCallback SwitchThreadCallback_80359558
#define __OSUnlockAllMutex fn_800B7D84
#define __OSFpscrEnableBits lbl_80359540
#define InterruptHandlerTable InterruptHandlerTable_8035A590
#define InterruptPrioTable lbl_802D8A40
#define __RAS_OSDisableInterrupts_begin OSDisableInterrupts
#define __RAS_OSDisableInterrupts_end OSDisableInterrupts
#include <dolphin.h>
#include <dolphin/os.h>

/* ---- __os.h ---- */
#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>

#ifdef __cplusplus
extern "C" {
#endif

// OS
extern char* __OSExceptionNames[17]; // D ONLY

u32 __OSIsDebuggerPresent(void);
void __OSPSInit(void);

// OSAlloc
extern volatile int __OSCurrHeap;

// OSAudioSystem
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

// OSCache
void __OSCacheInit(void);

// OSContext
void __OSContextInit(void);

// OSError
void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar);

// OSExec
void __OSGetExecParams(OSExecParams* params);
void __OSSetExecParams(const OSExecParams* params, OSExecParams* addr);
void __OSBootDolSimple(u32 doloffset, u32 restartCode, void* regionStart, void* regionEnd, BOOL argsUseDefault, s32 argc, char** argv);
void __OSBootDol(u32 doloffset, u32 restartCode, const char** argv);

// OSInterrupt

extern u64 __OSSpuriousInterrupts; // D ONLY
extern char* __OSInterruptNames[33]; // D ONLY
extern char* __OSPIErrors[8]; // D ONLY

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt);
void __OSInterruptInit(void);
OSInterruptMask __OSMaskInterrupts(OSInterruptMask global);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask global);
void __OSDispatchInterrupt(__OSException exception, OSContext* context);
void __OSModuleInit(void);

// OSMemory
void __OSInitMemoryProtection(void);

// OSMutex
void __OSUnlockAllMutex(OSThread* thread);
int __OSCheckDeadLock(OSThread* thread);
int __OSCheckMutexes(OSThread* thread);

// OSReset
void __OSDoHotReset(u32 resetCode);
void __OSShutdownDevices(BOOL doRecal);
int __OSCallResetFunctions(BOOL final);

// OSResetSW
void __OSResetSWInterruptHandler(s16 exception, OSContext* context);
void __OSSetResetButtonTimer(u8 min);

// OSRtc
int __OSGetRTC(u32* rtc);
int __OSSetRTC(u32 rtc);
void __OSInitSram(void);
OSSram* __OSLockSram(void);
OSSramEx* __OSLockSramEx(void);
int __OSUnlockSram(BOOL commit);
int __OSUnlockSramEx(BOOL commit);
int __OSSyncSram(void);
int __OSCheckSram(void);
int __OSReadROM(void* buffer, s32 length, s32 offset);
int __OSReadROMAsync(void* buffer, s32 length, s32 offset, void (*callback)());
u8 __OSGetBootMode(void);
void __OSSetBootMode(u8 ntd);

// OSSync
extern void __OSSystemCallVectorStart();
extern void __OSSystemCallVectorEnd();

void __OSInitSystemCall(void);

// OSThread
void __OSThreadInit(void);
s32 __OSGetEffectivePriority(OSThread* thread);
void __OSPromoteThread(OSThread* thread, s32 priority);
void __OSReschedule(void);

// OSTime
void __OSSetTime(OSTime time);
OSTime __OSGetSystemTime();
void __OSSetTick(register OSTick newTicks);
OSTime __OSTimeToSystemTime(OSTime time);

// ppc_eabi_init
__declspec(section ".init") asm void __init_hardware(void);
__declspec(section ".init") asm void __flush_cache(void* address, unsigned int size);
void __init_user(void);
void _ExitProcess(void);

// start
__declspec(weak) void InitMetroTRK_BBA();

__declspec(section ".init") void __start(void);

__declspec(section ".init") extern void __start(void);
__declspec(section ".init") void __copy_rom_section(void* dst, const void* src, u32 size);
__declspec(section ".init") void __init_bss_section(void* dst, u32 size);
__declspec(section ".init") extern void __init_registers(void);
__declspec(section ".init") extern void __init_data(void);

// time.dolphin
OSTime __get_clock(void);
u32 __get_time(void);
int __to_gm_time(void);

#ifdef __cplusplus
}
#endif

#endif // _DOLPHIN_OS_INTERNAL_H_


#if DEBUG
u64 __OSSpuriousInterrupts = 0;
#endif
static __OSInterruptHandler* InterruptHandlerTable;

volatile OSTime __OSLastInterruptTime;
volatile __OSInterrupt __OSLastInterrupt;
volatile u32 __OSLastInterruptSrr0;

static OSInterruptMask InterruptPrioTable[] = {
    OS_INTERRUPTMASK_PI_ERROR,
    OS_INTERRUPTMASK_PI_DEBUG,
    OS_INTERRUPTMASK_MEM,
    OS_INTERRUPTMASK_PI_RSW,
    OS_INTERRUPTMASK_PI_VI,
    OS_INTERRUPTMASK_PI_PE,
    OS_INTERRUPTMASK_PI_HSP,
    OS_INTERRUPTMASK_DSP_ARAM | OS_INTERRUPTMASK_DSP_DSP | OS_INTERRUPTMASK_AI |
        OS_INTERRUPTMASK_EXI | OS_INTERRUPTMASK_PI_SI | OS_INTERRUPTMASK_PI_DI,
    OS_INTERRUPTMASK_DSP_AI,
    OS_INTERRUPTMASK_PI_CP,
    0xFFFFFFFF,
};

#if DEBUG
char* __OSInterruptNames[33] = {
    "MEM_0",
    "MEM_1",
    "MEM_2",
    "MEM_3",
    "MEM_ADDRESS",
    "DSP_AI",
    "DSP_ARAM",
    "DSP_DSP",
    "AI_AI",
    "EXI_0_EXI",
    "EXI_0_TC",
    "EXI_0_EXT",
    "EXI_1_EXI",
    "EXI_1_TC",
    "EXI_1_EXT",
    "EXI_2_EXI",
    "EXI_2_TC",
    "PI_CP",
    "PI_PE_TOKEN",
    "PI_PE_FINISH",
    "PI_SI",
    "PI_DI",
    "PI_RSW",
    "PI_ERROR",
    "PI_VI",
    "PI_DEBUG",
    "PI_HSP",
    "unknown",
    "unknown",
    "unknown",
    "unknown",
    "unknown",
    "unknown"
};

char* __OSPIErrors[8] = {
    "No Error",
    "Misaligned address for CPU request",
    "Incorrect transfer type (tt) from CPU",
    "Unsupported transfer size",
    "Address out of range",
    "Write to ROM address space",
    "Read from GX Fifo",
    "Reserved error code",
};
#endif

// prototypes
static void ExternalInterruptHandler(register __OSException exception, register OSContext* context);

#ifdef __GEKKO__
asm BOOL OSDisableInterrupts(void) {
    nofralloc
    mfmsr   r3
    rlwinm  r4, r3, 0, 17, 15
    mtmsr   r4
    rlwinm  r3, r3, 17, 31, 31
    blr
}

asm BOOL OSEnableInterrupts(void) {
    nofralloc

    mfmsr   r3
    ori     r4, r3, 0x8000
    mtmsr   r4
    rlwinm  r3, r3, 17, 31, 31
    blr
}

asm BOOL OSRestoreInterrupts(register BOOL level) {
    nofralloc

    cmpwi   level, 0
    mfmsr   r4
    beq     _disable
    ori     r5, r4, 0x8000
    b       _restore
_disable:
    rlwinm  r5, r4, 0, 17, 15
_restore:
    mtmsr   r5
    rlwinm  r3, r4, 17, 31, 31
    blr
}
#endif

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler) {
    __OSInterruptHandler oldHandler;
 
    ASSERTMSGLINE(411, InterruptHandlerTable, "__OSSetInterruptHandler(): OSInit() must be called in advance.");
    ASSERTMSGLINE(413, interrupt < 0x20, "__OSSetInterruptHandler(): unknown interrupt.");

    oldHandler = InterruptHandlerTable[interrupt];
    InterruptHandlerTable[interrupt] = handler;
    return oldHandler;
}

__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt) {
    ASSERTMSGLINE(433, InterruptHandlerTable, "__OSGetInterruptHandler(): OSInit() must be called in advance.");
    ASSERTMSGLINE(435, interrupt < 0x20, "__OSGetInterruptHandler(): unknown interrupt.");
    return InterruptHandlerTable[interrupt];
}

void __OSInterruptInit(void) {
    InterruptHandlerTable = (void*)OSPhysicalToCached(0x3040);

    memset(InterruptHandlerTable, 0, __OS_INTERRUPT_MAX * sizeof(__OSInterruptHandler));

    *(OSInterruptMask*)OSPhysicalToCached(0x00C4) = 0;
    *(OSInterruptMask*)OSPhysicalToCached(0x00C8) = 0;

    __PIRegs[1] = 0xf0;

    __OSMaskInterrupts(OS_INTERRUPTMASK_MEM | OS_INTERRUPTMASK_DSP | OS_INTERRUPTMASK_AI |
                        OS_INTERRUPTMASK_EXI | OS_INTERRUPTMASK_PI);

    __OSSetExceptionHandler(4, ExternalInterruptHandler);
    #if DEBUG
        __PIRegs[0] = 1;
        __OSUnmaskInterrupts(0x100);
    #endif
}

static u32 SetInterruptMask(OSInterruptMask mask, OSInterruptMask current) {
    u32 reg;

    switch (__cntlzw(mask)) {
    case __OS_INTERRUPT_MEM_0:
    case __OS_INTERRUPT_MEM_1:
    case __OS_INTERRUPT_MEM_2:
    case __OS_INTERRUPT_MEM_3:
    case __OS_INTERRUPT_MEM_ADDRESS:
        reg = 0;
        if (!(current & OS_INTERRUPTMASK_MEM_0))
            reg |= 0x1;
        if (!(current & OS_INTERRUPTMASK_MEM_1))
            reg |= 0x2;
        if (!(current & OS_INTERRUPTMASK_MEM_2))
            reg |= 0x4;
        if (!(current & OS_INTERRUPTMASK_MEM_3))
            reg |= 0x8;
        if (!(current & OS_INTERRUPTMASK_MEM_ADDRESS))
            reg |= 0x10;
        __MEMRegs[0x0000000e] = (u16)reg;
        mask &= ~OS_INTERRUPTMASK_MEM;
        break;
    case __OS_INTERRUPT_DSP_AI:
    case __OS_INTERRUPT_DSP_ARAM:
    case __OS_INTERRUPT_DSP_DSP:
        reg = __DSPRegs[0x00000005];
        reg &= ~0x1F8;
        if (!(current & OS_INTERRUPTMASK_DSP_AI))
            reg |= 0x10;
        if (!(current & OS_INTERRUPTMASK_DSP_ARAM))
            reg |= 0x40;
        if (!(current & OS_INTERRUPTMASK_DSP_DSP))
            reg |= 0x100;
        __DSPRegs[0x00000005] = (u16)reg;
        mask &= ~OS_INTERRUPTMASK_DSP;
        break;
    case __OS_INTERRUPT_AI_AI:
        reg = __AIRegs[0];
        reg &= ~0x2C;
        if (!(current & OS_INTERRUPTMASK_AI_AI))
            reg |= 0x4;
        __AIRegs[0] = reg;
        mask &= ~OS_INTERRUPTMASK_AI;
        break;
    case __OS_INTERRUPT_EXI_0_EXI:
    case __OS_INTERRUPT_EXI_0_TC:
    case __OS_INTERRUPT_EXI_0_EXT:
        reg = __EXIRegs[0];
        reg &= ~0x2C0F;
        if (!(current & OS_INTERRUPTMASK_EXI_0_EXI))
            reg |= 0x1;
        if (!(current & OS_INTERRUPTMASK_EXI_0_TC))
            reg |= 0x4;
        if (!(current & OS_INTERRUPTMASK_EXI_0_EXT))
            reg |= 0x400;
        __EXIRegs[0] = reg;
        mask &= ~OS_INTERRUPTMASK_EXI_0;
        break;
    case __OS_INTERRUPT_EXI_1_EXI:
    case __OS_INTERRUPT_EXI_1_TC:
    case __OS_INTERRUPT_EXI_1_EXT:
        reg = __EXIRegs[5];
        reg &= ~0xC0F;

        if (!(current & OS_INTERRUPTMASK_EXI_1_EXI))
            reg |= 0x1;
        if (!(current & OS_INTERRUPTMASK_EXI_1_TC))
            reg |= 0x4;
        if (!(current & OS_INTERRUPTMASK_EXI_1_EXT))
            reg |= 0x400;
        __EXIRegs[5] = reg;
        mask &= ~OS_INTERRUPTMASK_EXI_1;
        break;
    case __OS_INTERRUPT_EXI_2_EXI:
    case __OS_INTERRUPT_EXI_2_TC:
        reg = __EXIRegs[10];
        reg &= ~0xF;
        if (!(current & OS_INTERRUPTMASK_EXI_2_EXI))
            reg |= 0x1;
        if (!(current & OS_INTERRUPTMASK_EXI_2_TC))
            reg |= 0x4;

        __EXIRegs[10] = reg;
        mask &= ~OS_INTERRUPTMASK_EXI_2;
        break;
    case __OS_INTERRUPT_PI_CP:
    case __OS_INTERRUPT_PI_SI:
    case __OS_INTERRUPT_PI_DI:
    case __OS_INTERRUPT_PI_RSW:
    case __OS_INTERRUPT_PI_ERROR:
    case __OS_INTERRUPT_PI_VI:
    case __OS_INTERRUPT_PI_DEBUG:
    case __OS_INTERRUPT_PI_PE_TOKEN:
    case __OS_INTERRUPT_PI_PE_FINISH:
    case __OS_INTERRUPT_PI_HSP:
        reg = 0xF0;

        if (!(current & OS_INTERRUPTMASK_PI_CP)) {
            reg |= 0x800;
        }
        if (!(current & OS_INTERRUPTMASK_PI_SI)) {
            reg |= 0x8;
        }
        if (!(current & OS_INTERRUPTMASK_PI_DI)) {
            reg |= 0x4;
        }
        if (!(current & OS_INTERRUPTMASK_PI_RSW)) {
            reg |= 0x2;
        }
        if (!(current & OS_INTERRUPTMASK_PI_ERROR)) {
            reg |= 0x1;
        }
        if (!(current & OS_INTERRUPTMASK_PI_VI)) {
            reg |= 0x100;
        }
        if (!(current & OS_INTERRUPTMASK_PI_DEBUG)) {
            reg |= 0x1000;
        }
        if (!(current & OS_INTERRUPTMASK_PI_PE_TOKEN)) {
            reg |= 0x200;
        }
        if (!(current & OS_INTERRUPTMASK_PI_PE_FINISH)) {
            reg |= 0x400;
        }
        if (!(current & OS_INTERRUPTMASK_PI_HSP)) {
            reg |= 0x2000;
        }
        __PIRegs[1] = reg;
        mask &= ~OS_INTERRUPTMASK_PI;
        break;
    default:
        break;
    }
    return mask;
}

OSInterruptMask __OSMaskInterrupts(OSInterruptMask global) {
    BOOL enabled;
    OSInterruptMask prev;
    OSInterruptMask local;
    OSInterruptMask mask;

    enabled = OSDisableInterrupts();
    prev = *(OSInterruptMask *)OSPhysicalToCached(0x00C4);
    local = *(OSInterruptMask *)OSPhysicalToCached(0x00C8);
    mask = ~(prev | local) & global;
    global |= prev;
    *(OSInterruptMask *)OSPhysicalToCached(0x00C4) = global;
    while (mask) {
        mask = SetInterruptMask(mask, global | local);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask global) {
    BOOL enabled;
    OSInterruptMask prev;
    OSInterruptMask local;
    OSInterruptMask mask;

    enabled = OSDisableInterrupts();
    prev = *(OSInterruptMask *)OSPhysicalToCached(0x00C4);
    local = *(OSInterruptMask *)OSPhysicalToCached(0x00C8);
    mask = (prev | local) & global;
    global = prev & ~global;
    *(OSInterruptMask *)OSPhysicalToCached(0x00C4) = global;
    while (mask) {
        mask = SetInterruptMask(mask, global | local);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

void __OSDispatchInterrupt(__OSException exception, OSContext* context) {
    u32 intsr;
    u32 reg;
    OSInterruptMask cause;
    OSInterruptMask unmasked;
    OSInterruptMask* prio;
    __OSInterrupt interrupt;
    __OSInterruptHandler handler;

    intsr = __PIRegs[0];
    intsr &= ~0x00010000;

    if (intsr == 0 || (intsr & __PIRegs[1]) == 0) {
    #if DEBUG
        __OSSpuriousInterrupts++;
    #endif
        OSLoadContext(context);
    }

    cause = 0;

    if (intsr & 0x00000080) {
        reg = __MEMRegs[15];
        if (reg & 0x1)
            cause |= OS_INTERRUPTMASK_MEM_0;
        if (reg & 0x2)
            cause |= OS_INTERRUPTMASK_MEM_1;
        if (reg & 0x4)
            cause |= OS_INTERRUPTMASK_MEM_2;
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_MEM_3;
        if (reg & 0x10)
            cause |= OS_INTERRUPTMASK_MEM_ADDRESS;
    }

    if (intsr & 0x00000040) {
        reg = __DSPRegs[5];
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_DSP_AI;
        if (reg & 0x20)
            cause |= OS_INTERRUPTMASK_DSP_ARAM;
        if (reg & 0x80)
            cause |= OS_INTERRUPTMASK_DSP_DSP;
    }

    if (intsr & 0x00000020) {
        reg = __AIRegs[0];
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_AI_AI;
    }

    if (intsr & 0x00000010) {
        reg = __EXIRegs[0];
        if (reg & 0x2)
            cause |= OS_INTERRUPTMASK_EXI_0_EXI;
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_EXI_0_TC;
        if (reg & 0x800)
            cause |= OS_INTERRUPTMASK_EXI_0_EXT;
        reg = __EXIRegs[5];
        if (reg & 0x2)
            cause |= OS_INTERRUPTMASK_EXI_1_EXI;
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_EXI_1_TC;
        if (reg & 0x800)
            cause |= OS_INTERRUPTMASK_EXI_1_EXT;
        reg = __EXIRegs[10];
        if (reg & 0x2)
            cause |= OS_INTERRUPTMASK_EXI_2_EXI;
        if (reg & 0x8)
            cause |= OS_INTERRUPTMASK_EXI_2_TC;
    }

    if (intsr & 0x00002000)
        cause |= OS_INTERRUPTMASK_PI_HSP;
    if (intsr & 0x00001000)
        cause |= OS_INTERRUPTMASK_PI_DEBUG;
    if (intsr & 0x00000400)
        cause |= OS_INTERRUPTMASK_PI_PE_FINISH;
    if (intsr & 0x00000200)
        cause |= OS_INTERRUPTMASK_PI_PE_TOKEN;
    if (intsr & 0x00000100)
        cause |= OS_INTERRUPTMASK_PI_VI;
    if (intsr & 0x00000008)
        cause |= OS_INTERRUPTMASK_PI_SI;
    if (intsr & 0x00000004)
        cause |= OS_INTERRUPTMASK_PI_DI;
    if (intsr & 0x00000002)
        cause |= OS_INTERRUPTMASK_PI_RSW;
    if (intsr & 0x00000800)
        cause |= OS_INTERRUPTMASK_PI_CP;
    if (intsr & 0x00000001)
        cause |= OS_INTERRUPTMASK_PI_ERROR;

    #if DEBUG
    if (cause & OS_INTERRUPTMASK_PI_ERROR) {
        OSReport("PI ERROR\n");
        OSDumpContext(context);
        OSReport("\nPIESR = 0x%08x                  PIEAR  = 0x%08x\n", __PIRegs[7], __PIRegs[8]);
        __PIRegs[0] = 1;
        OSReport("PI Error = %s\n", __OSPIErrors[__PIRegs[7]]);
        OSReport("Offending address = 0x%x (from PIEAR)\n", __PIRegs[8]);
    }
    #endif

    unmasked = cause & ~(*(OSInterruptMask *)OSPhysicalToCached(0x00C4) |
                        *(OSInterruptMask *)OSPhysicalToCached(0x00C8));
    if (unmasked) {
        for (prio = InterruptPrioTable;; ++prio) {
            if (unmasked & *prio) {
                interrupt = (__OSInterrupt)__cntlzw(unmasked & *prio);
                break;
            }
        }

        handler = __OSGetInterruptHandler(interrupt);
        if (handler) {
            if (__OS_INTERRUPT_MEM_ADDRESS < interrupt) {
                __OSLastInterrupt = interrupt;
                __OSLastInterruptTime = OSGetTime();
                __OSLastInterruptSrr0 = context->srr0;
            }
            OSDisableScheduler();
            handler(interrupt, context);
            OSEnableScheduler();
            __OSReschedule();
            OSLoadContext(context);
        }
    }

    #if DEBUG
    OSReport("Unhandled Interrupt(s): cause %08x  intsr %08x\n", cause, intsr);
    while (cause) {
        interrupt = __cntlzw(cause);
        cause &= ~(1 << (0x1F - __cntlzw(cause)));
        OSReport("    %s\n", __OSInterruptNames[interrupt]);
    }
    #endif

    OSLoadContext(context);
}

#ifdef __GEKKO__
static asm void ExternalInterruptHandler(register __OSException exception,
                                         register OSContext* context) {
#pragma unused(exception)
    nofralloc 
    OS_EXCEPTION_SAVE_GPRS(context)

    stwu r1, -0x8(r1)
    b __OSDispatchInterrupt
}
#endif
