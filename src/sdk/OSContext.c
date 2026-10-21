#define __GEKKO__ 1

#define OSGetCurrentContext fn_800B4F6C
#define OSSaveContext fn_800B4F78
#define OSGetStackPointer fn_800B50D0
#define OSSwitchFiber fn_800B50D8
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
#define cosf fn_800F0588
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


// external functions
extern void DBPrintf(char*, ...);

#define HID2 920

volatile OSContext* __OSCurrentContext AT_ADDRESS(OS_BASE_CACHED | 0x00D4);
volatile OSContext* __OSFPUContext AT_ADDRESS(OS_BASE_CACHED | 0x00D8);

#ifdef __GEKKO__
static asm void __OSLoadFPUContext(register u32 dummy, register OSContext* fpucontext) {
    nofralloc
    lhz r5, fpucontext->state;
    clrlwi. r5, r5, 31
    beq _return

    lfd fp0, OS_CONTEXT_FPSCR(fpucontext)
    mtfsf 0xFF, fp0
    mfspr r5, HID2
    rlwinm. r5, r5, 3, 31, 31
    beq _regular_FPRs

    psq_l fp0, OS_CONTEXT_PSF0(fpucontext), 0, 0
    psq_l fp1, OS_CONTEXT_PSF1(fpucontext), 0, 0
    psq_l fp2, OS_CONTEXT_PSF2(fpucontext), 0, 0
    psq_l fp3, OS_CONTEXT_PSF3(fpucontext), 0, 0
    psq_l fp4, OS_CONTEXT_PSF4(fpucontext), 0, 0
    psq_l fp5, OS_CONTEXT_PSF5(fpucontext), 0, 0
    psq_l fp6, OS_CONTEXT_PSF6(fpucontext), 0, 0
    psq_l fp7, OS_CONTEXT_PSF7(fpucontext), 0, 0
    psq_l fp8, OS_CONTEXT_PSF8(fpucontext), 0, 0
    psq_l fp9, OS_CONTEXT_PSF9(fpucontext), 0, 0
    psq_l fp10, OS_CONTEXT_PSF10(fpucontext), 0, 0
    psq_l fp11, OS_CONTEXT_PSF11(fpucontext), 0, 0
    psq_l fp12, OS_CONTEXT_PSF12(fpucontext), 0, 0
    psq_l fp13, OS_CONTEXT_PSF13(fpucontext), 0, 0
    psq_l fp14, OS_CONTEXT_PSF14(fpucontext), 0, 0
    psq_l fp15, OS_CONTEXT_PSF15(fpucontext), 0, 0
    psq_l fp16, OS_CONTEXT_PSF16(fpucontext), 0, 0
    psq_l fp17, OS_CONTEXT_PSF17(fpucontext), 0, 0
    psq_l fp18, OS_CONTEXT_PSF18(fpucontext), 0, 0
    psq_l fp19, OS_CONTEXT_PSF19(fpucontext), 0, 0
    psq_l fp20, OS_CONTEXT_PSF20(fpucontext), 0, 0
    psq_l fp21, OS_CONTEXT_PSF21(fpucontext), 0, 0
    psq_l fp22, OS_CONTEXT_PSF22(fpucontext), 0, 0
    psq_l fp23, OS_CONTEXT_PSF23(fpucontext), 0, 0
    psq_l fp24, OS_CONTEXT_PSF24(fpucontext), 0, 0
    psq_l fp25, OS_CONTEXT_PSF25(fpucontext), 0, 0
    psq_l fp26, OS_CONTEXT_PSF26(fpucontext), 0, 0
    psq_l fp27, OS_CONTEXT_PSF27(fpucontext), 0, 0
    psq_l fp28, OS_CONTEXT_PSF28(fpucontext), 0, 0
    psq_l fp29, OS_CONTEXT_PSF29(fpucontext), 0, 0
    psq_l fp30, OS_CONTEXT_PSF30(fpucontext), 0, 0
    psq_l fp31, OS_CONTEXT_PSF31(fpucontext), 0, 0

_regular_FPRs:
    lfd fp0,  fpucontext->fpr[0]
    lfd fp1,  fpucontext->fpr[1]
    lfd fp2,  fpucontext->fpr[2]
    lfd fp3,  fpucontext->fpr[3]
    lfd fp4,  fpucontext->fpr[4]
    lfd fp5,  fpucontext->fpr[5]
    lfd fp6,  fpucontext->fpr[6]
    lfd fp7,  fpucontext->fpr[7]
    lfd fp8,  fpucontext->fpr[8]
    lfd fp9,  fpucontext->fpr[9]
    lfd fp10, fpucontext->fpr[10]
    lfd fp11, fpucontext->fpr[11]
    lfd fp12, fpucontext->fpr[12]
    lfd fp13, fpucontext->fpr[13]
    lfd fp14, fpucontext->fpr[14]
    lfd fp15, fpucontext->fpr[15]
    lfd fp16, fpucontext->fpr[16]
    lfd fp17, fpucontext->fpr[17]
    lfd fp18, fpucontext->fpr[18]
    lfd fp19, fpucontext->fpr[19]
    lfd fp20, fpucontext->fpr[20]
    lfd fp21, fpucontext->fpr[21]
    lfd fp22, fpucontext->fpr[22]
    lfd fp23, fpucontext->fpr[23]
    lfd fp24, fpucontext->fpr[24]
    lfd fp25, fpucontext->fpr[25]
    lfd fp26, fpucontext->fpr[26]
    lfd fp27, fpucontext->fpr[27]
    lfd fp28, fpucontext->fpr[28]
    lfd fp29, fpucontext->fpr[29]
    lfd fp30, fpucontext->fpr[30]
    lfd fp31, fpucontext->fpr[31]
_return:
    blr
}

static asm void __OSSaveFPUContext(register u32 dummy1, register u32 dummy2, register OSContext* fpucontext) {
    nofralloc

    lhz     r3,   fpucontext->state
    ori     r3,   r3, 1
    sth     r3,   fpucontext->state

    stfd    fp0,  fpucontext->fpr[0]
    stfd    fp1,  fpucontext->fpr[1]
    stfd    fp2,  fpucontext->fpr[2]
    stfd    fp3,  fpucontext->fpr[3]
    stfd    fp4,  fpucontext->fpr[4]
    stfd    fp5,  fpucontext->fpr[5]
    stfd    fp6,  fpucontext->fpr[6]
    stfd    fp7,  fpucontext->fpr[7]
    stfd    fp8,  fpucontext->fpr[8]
    stfd    fp9,  fpucontext->fpr[9]
    stfd    fp10, fpucontext->fpr[10]
    stfd    fp11, fpucontext->fpr[11]
    stfd    fp12, fpucontext->fpr[12]
    stfd    fp13, fpucontext->fpr[13]
    stfd    fp14, fpucontext->fpr[14]
    stfd    fp15, fpucontext->fpr[15]
    stfd    fp16, fpucontext->fpr[16]
    stfd    fp17, fpucontext->fpr[17]
    stfd    fp18, fpucontext->fpr[18]
    stfd    fp19, fpucontext->fpr[19]
    stfd    fp20, fpucontext->fpr[20]
    stfd    fp21, fpucontext->fpr[21]
    stfd    fp22, fpucontext->fpr[22]
    stfd    fp23, fpucontext->fpr[23]
    stfd    fp24, fpucontext->fpr[24]
    stfd    fp25, fpucontext->fpr[25]
    stfd    fp26, fpucontext->fpr[26]
    stfd    fp27, fpucontext->fpr[27]
    stfd    fp28, fpucontext->fpr[28]
    stfd    fp29, fpucontext->fpr[29]
    stfd    fp30, fpucontext->fpr[30]
    stfd    fp31, fpucontext->fpr[31]

    mffs    fp0
    stfd    fp0,  OS_CONTEXT_FPSCR(fpucontext)

    lfd     fp0,  fpucontext->fpr[0]

    mfspr   r3, HID2
    rlwinm. r3, r3, 3, 31, 31
    bc      12, 2, _return

    psq_st  fp0, OS_CONTEXT_PSF0(fpucontext), 0, 0
    psq_st  fp1, OS_CONTEXT_PSF1(fpucontext), 0, 0
    psq_st  fp2, OS_CONTEXT_PSF2(fpucontext), 0, 0
    psq_st  fp3, OS_CONTEXT_PSF3(fpucontext), 0, 0
    psq_st  fp4, OS_CONTEXT_PSF4(fpucontext), 0, 0
    psq_st  fp5, OS_CONTEXT_PSF5(fpucontext), 0, 0
    psq_st  fp6, OS_CONTEXT_PSF6(fpucontext), 0, 0
    psq_st  fp7, OS_CONTEXT_PSF7(fpucontext), 0, 0
    psq_st  fp8, OS_CONTEXT_PSF8(fpucontext), 0, 0
    psq_st  fp9, OS_CONTEXT_PSF9(fpucontext), 0, 0
    psq_st  fp10, OS_CONTEXT_PSF10(fpucontext), 0, 0
    psq_st  fp11, OS_CONTEXT_PSF11(fpucontext), 0, 0
    psq_st  fp12, OS_CONTEXT_PSF12(fpucontext), 0, 0
    psq_st  fp13, OS_CONTEXT_PSF13(fpucontext), 0, 0
    psq_st  fp14, OS_CONTEXT_PSF14(fpucontext), 0, 0
    psq_st  fp15, OS_CONTEXT_PSF15(fpucontext), 0, 0
    psq_st  fp16, OS_CONTEXT_PSF16(fpucontext), 0, 0
    psq_st  fp17, OS_CONTEXT_PSF17(fpucontext), 0, 0
    psq_st  fp18, OS_CONTEXT_PSF18(fpucontext), 0, 0
    psq_st  fp19, OS_CONTEXT_PSF19(fpucontext), 0, 0
    psq_st  fp20, OS_CONTEXT_PSF20(fpucontext), 0, 0
    psq_st  fp21, OS_CONTEXT_PSF21(fpucontext), 0, 0
    psq_st  fp22, OS_CONTEXT_PSF22(fpucontext), 0, 0
    psq_st  fp23, OS_CONTEXT_PSF23(fpucontext), 0, 0
    psq_st  fp24, OS_CONTEXT_PSF24(fpucontext), 0, 0
    psq_st  fp25, OS_CONTEXT_PSF25(fpucontext), 0, 0
    psq_st  fp26, OS_CONTEXT_PSF26(fpucontext), 0, 0
    psq_st  fp27, OS_CONTEXT_PSF27(fpucontext), 0, 0
    psq_st  fp28, OS_CONTEXT_PSF28(fpucontext), 0, 0
    psq_st  fp29, OS_CONTEXT_PSF29(fpucontext), 0, 0
    psq_st  fp30, OS_CONTEXT_PSF30(fpucontext), 0, 0
    psq_st  fp31, OS_CONTEXT_PSF31(fpucontext), 0, 0

_return:
    blr
}

asm void OSSaveFPUContext(register OSContext* fpucontext) {
    nofralloc
    addi    r5, fpucontext, 0
    b       __OSSaveFPUContext
}

asm void OSSetCurrentContext(register OSContext* context){
    nofralloc

    addis   r4, r0, OS_CACHED_REGION_PREFIX

    stw     context, 0x00D4(r4)

    clrlwi  r5, context, 2
    stw     r5, 0x00C0(r4)

    lwz     r5, 0x00D8(r4)
    cmpw    r5, context
    bne     _disableFPU

    lwz     r6, context->srr1
    ori     r6, r6, 0x2000
    stw     r6, context->srr1
    mfmsr   r6
    ori     r6, r6, 2
    mtmsr   r6
    blr

_disableFPU:
    lwz     r6, context->srr1
    rlwinm  r6, r6, 0, 19, 17
    stw     r6, context->srr1
    mfmsr   r6
    rlwinm  r6, r6, 0, 19, 17
    ori     r6, r6, 2
    mtmsr   r6
    isync
    blr
}
#endif

OSContext* OSGetCurrentContext(void) {
    return (OSContext*)__OSCurrentContext;
}

#ifdef __GEKKO__
asm u32 OSSaveContext(register OSContext* context) {
    nofralloc
    stmw    r13, context->gpr[13]
    mfspr   r0, GQR1
    stw     r0, context->gqr[1]
    mfspr   r0, GQR2
    stw     r0, context->gqr[2]
    mfspr   r0, GQR3
    stw     r0, context->gqr[3]
    mfspr   r0, GQR4
    stw     r0, context->gqr[4]
    mfspr   r0, GQR5
    stw     r0, context->gqr[5]
    mfspr   r0, GQR6
    stw     r0, context->gqr[6]
    mfspr   r0, GQR7
    stw     r0, context->gqr[7]
    mfcr    r0
    stw     r0, context->cr
    mflr    r0
    stw     r0, context->lr
    stw     r0, context->srr0
    mfmsr   r0
    stw     r0, context->srr1
    mfctr   r0
    stw     r0, context->ctr
    mfxer   r0
    stw     r0, context->xer
    stw     r1, context->gpr[1]
    stw     r2, context->gpr[2]
    li      r0, 0x1
    stw     r0, context->gpr[3]
    li      r3, 0
    blr
}

asm void OSLoadContext(register OSContext* context) {
    nofralloc

    lis      r4,OSDisableInterrupts@ha
    lwz      r6,context->srr0
    addi     r5,r4,OSDisableInterrupts@l
    cmplw    r6,r5
    ble      _notInRAS
    lis      r4,(OSDisableInterrupts+12)@ha
    addi     r0,r4,(OSDisableInterrupts+12)@l
    cmplw    r6,r0
    bge      _notInRAS
    stw      r5,context->srr0

_notInRAS:

    lwz     r0, context->gpr[0]
    lwz     r1, context->gpr[1]
    lwz     r2, context->gpr[2]

    lhz     r4, context->state
    rlwinm. r5, r4, 0, 30, 30
    beq     notexc
    rlwinm  r4, r4, 0, 31, 29
    sth     r4, context->state
    lmw     r5, context->gpr[5]
    b       misc
notexc:
    lmw    r13, context->gpr[13]
    misc:

    lwz     r4, context->gqr[1]
    mtspr   GQR1, r4
    lwz     r4, context->gqr[2]
    mtspr   GQR2, r4
    lwz     r4, context->gqr[3]
    mtspr   GQR3, r4
    lwz     r4, context->gqr[4]
    mtspr   GQR4, r4
    lwz     r4, context->gqr[5]
    mtspr   GQR5, r4
    lwz     r4, context->gqr[6]
    mtspr   GQR6, r4
    lwz     r4, context->gqr[7]
    mtspr   GQR7, r4

    lwz     r4, context->cr
    mtcr    r4
    lwz     r4, context->lr
    mtlr    r4
    lwz     r4, context->ctr
    mtctr   r4
    lwz     r4, context->xer
    mtxer   r4

    mfmsr   r4
    rlwinm  r4, r4, 0, 17, 15
    rlwinm  r4, r4, 0, 31, 29
    mtmsr   r4

    lwz     r4, context->srr0
    mtsrr0  r4
    lwz     r4, context->srr1
    mtsrr1  r4

    lwz     r4, context->gpr[4]
    lwz     r3, context->gpr[3]

    rfi
}

asm u32 OSGetStackPointer() {
    nofralloc 
    mr r3, r1 
    blr
}

asm int OSSwitchFiber(register u32 pc, register u32 newsp) {
    nofralloc
    mflr    r0
    mr      r5, r1
    stwu    r5, -8(newsp)
    mr      r1, newsp
    stw     r0, 4(r5)
    mtlr    pc
    blrl
    lwz     r5, 0(r1)
    lwz     r0, 4(r5)
    mtlr    r0
    mr      r1, r5
    blr
}
#endif

void OSClearContext(register OSContext* context) {
    context->mode = 0;
    context->state = 0;
    if (context == __OSFPUContext)
        __OSFPUContext = NULL;
}

#ifdef __GEKKO__
#endif

void OSDumpContext(OSContext* context) {
    u32 i;
    u32* p;

    OSReport("------------------------- Context 0x%08x -------------------------\n", context);

    for (i = 0; i < 16; ++i) {
        OSReport("r%-2d  = 0x%08x (%14d)  r%-2d  = 0x%08x (%14d)\n", i, context->gpr[i],
                context->gpr[i], i + 16, context->gpr[i + 16], context->gpr[i + 16]);
    }

    OSReport("LR   = 0x%08x                   CR   = 0x%08x\n", context->lr, context->cr);
    OSReport("SRR0 = 0x%08x                   SRR1 = 0x%08x\n", context->srr0, context->srr1);

    OSReport("\nGQRs----------\n");
    for (i = 0; i < 4; ++i) {
        OSReport("gqr%d = 0x%08x \t gqr%d = 0x%08x\n", i, context->gqr[i], i + 4, context->gqr[i + 4]);
    }

    if (context->state & OS_CONTEXT_STATE_FPSAVED) {
        OSContext* currentContext;
        OSContext fpucontext;
        BOOL enabled;

        enabled = OSDisableInterrupts();
        currentContext = OSGetCurrentContext();
        OSClearContext(&fpucontext);
        OSSetCurrentContext(&fpucontext);

        OSReport("\n\nFPRs----------\n");
        for (i = 0; i < 32; i += 2) {
            OSReport("fr%d \t= %d \t fr%d \t= %d\n", i, (u32)context->fpr[i], i + 1,
                    (u32)context->fpr[i + 1]);
        }
        OSReport("\n\nPSFs----------\n");
        for (i = 0; i < 32; i += 2) {
            OSReport("ps%d \t= 0x%x \t ps%d \t= 0x%x\n", i, (u32)context->psf[i], i + 1,
                    (u32)context->psf[i + 1]);
        }

        OSClearContext(&fpucontext);
        OSSetCurrentContext(currentContext);
        OSRestoreInterrupts(enabled);
    }

    OSReport("\nAddress:      Back Chain    LR Save\n");
    for (i = 0, p = (u32*)context->gpr[1]; p && (u32)p != 0xffffffff && i++ < 16; p = (u32*)*p) {
        OSReport("0x%08x:   0x%08x    0x%08x\n", p, p[0], p[1]);
    }
}

#ifdef __GEKKO__
static asm void OSSwitchFPUContext(register __OSException exception, register OSContext* context) {
    nofralloc
    mfmsr   r5
    ori     r5, r5, 0x2000
    mtmsr   r5
    isync
    lwz     r5, OS_CONTEXT_SRR1(context)
    ori     r5, r5, 0x2000
    mtsrr1  r5
    addis   r3, r0, OS_CACHED_REGION_PREFIX
    lwz     r5, 0x00D8(r3) 
    stw     context, 0x00D8(r3)
    cmpw    r5, r4
    beq     _restoreAndExit
    cmpwi   r5, 0x0
    beq     _loadNewFPUContext
    bl      __OSSaveFPUContext
_loadNewFPUContext:
    bl      __OSLoadFPUContext
_restoreAndExit:
    lwz     r3, OS_CONTEXT_CR(context)
    mtcr    r3
    lwz     r3, OS_CONTEXT_LR(context)
    mtlr    r3
    lwz     r3, OS_CONTEXT_SRR0(context)
    mtsrr0  r3
    lwz     r3, OS_CONTEXT_CTR(context)
    mtctr   r3
    lwz     r3, OS_CONTEXT_XER(context)
    mtxer   r3
    lhz     r3, context->state
    rlwinm  r3, r3, 0, 31, 29
    sth     r3, context->state
    lwz     r5, OS_CONTEXT_R5(context)
    lwz     r3, OS_CONTEXT_R3(context)
    lwz     r4, OS_CONTEXT_R4(context)
    rfi
}
#endif

void __OSContextInit(void) {
    __OSSetExceptionHandler(__OS_EXCEPTION_FLOATING_POINT, OSSwitchFPUContext);
    __OSFPUContext = NULL;
    DBPrintf("FPU-unavailable handler installed\n");
}

#ifdef __GEKKO__
#endif
