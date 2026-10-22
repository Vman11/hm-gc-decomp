#define __GEKKO__ 1

#define OSGetConsoleType fn_800B31A4
#define __OSDBJump fn_800B39AC
#define __OSGetDIConfig fn_800B3B28
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
#define LeapYearDays lbl_802D8AB0
#define YearDays lbl_802D8A80
#define Down lbl_8035A5CC
#define HoldDown lbl_8035A5E0
#define HoldUp lbl_8035A5D8
#define LastState lbl_8035A5D0
#define ResetCallback lbl_8035A5C8
#define ArenaEnd lbl_8035A574
#define ArenaStart lbl_8035A570
#define HeapArray lbl_8035A568
#define NumHeaps lbl_8035A56C
#define __OSCurrHeap lbl_80359530
#define OSGetFontTexel fn_800B6F24
#define VIConfigure fn_800C182C
#define VIConfigurePan fn_800C2054
#define __OSReadROM fn_800B9094
#define tanf tanf
#define AXART3DSound fn_800BBD50
#define AXARTCents fn_800BBAD8
#define AXARTLpf fn_800BBED4
#define AXARTServiceSound fn_800BB7E0
#define AXARTSet3DDistanceScale fn_800BBD48
#define AXARTSet3DDopplerScale fn_800BBD40
#define AXARTSine lbl_802D8F60
#define AXSetVoiceItdOn fn_800C9AB4
#define AXSetVoiceItdTarget fn_800C9B18
#define AXSetVoiceSrcRatio fn_800C9DC0
#define AXSetVoiceSrcType fn_800C9948
#define MIXInitChannel fn_800CA0A0
#define MIXReleaseChannel fn_800CAF1C
#define __AXARTSoundList lbl_8035A600
#define AXARTLfo fn_800BBC8C
#define AXARTPitchEnv fn_800BBBD4
#define AXARTVolumeEnv fn_800BBC30
#define MIXSetAuxA fn_800CAF64
#define MIXSetAuxB fn_800CAF8C
#define MIXSetInput fn_800CAF3C
#define MIXSetPan fn_800CAFC0
#define MIXSetSPan fn_800CB02C
#define __coefs lbl_802D9DD8
#define __AXART3DDistanceScale lbl_8035A60C
#define __AXART3DDopplerScale lbl_8035A608
#define MIXGetSoundMode fn_800CA098
#include <dolphin.h>
#include <dolphin/exi.h>
#include <dolphin/os.h>
#include <dolphin/si.h>
#include <dolphin/db.h>

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
extern void __RAS_OSDisableInterrupts_begin(void);
extern void __RAS_OSDisableInterrupts_end(void);

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


#define NOP 0x60000000

// external functions
extern void EnableMetroTRKInterrupts(void);
extern void __OSInitMemoryProtection(void);

#define DB_EXCEPTIONRET_OFFSET 0xC
#define DB_EXCEPTIONDEST_OFFSET 0x8
#define OS_CURRENTCONTEXT_PADDR 0x00C0
#define OS_EXCEPTIONTABLE_ADDR 0x3000
#define OS_DBJUMPPOINT_ADDR 0x60

#if SDK_REVISION < 1
#define BUILD_DATE  "Apr  5 2004"
#define DBUILD_TIME "03:55:13"
#define RBUILD_TIME "04:13:58"
#elif SDK_REVISION < 2
#define BUILD_DATE  "May 21 2004"
#define DBUILD_TIME "09:15:32"
#define RBUILD_TIME "09:28:09"
#else
#define BUILD_DATE  "Nov 10 2004"
#define DBUILD_TIME "06:08:19"
#define RBUILD_TIME "06:26:41"
#endif

#ifdef DEBUG
const char* __OSVersion = "<< Dolphin SDK - OS\tdebug build: "BUILD_DATE" "DBUILD_TIME" (0x2301) >>";
#else
const char* __OSVersion = "<< Dolphin SDK - OS\trelease build: Apr 17 2003 12:33:06 (0x2301) >>";
#endif

static DVDDriveInfo DriveInfo;
static DVDCommandBlock DriveBlock;

extern u32 __DVDLongFileNameFlag;
extern u32 __PADSpec;

// defined in link script
extern u8 __ArenaLo[];
extern char _stack_addr[];
extern u8 __ArenaHi[];

static OSBootInfo* BootInfo;
static u32* BI2DebugFlag;
static u32 BI2DebugFlagHolder;

OSTime __OSStartTime;
BOOL __OSInIPL;
u32 __OSSavedRegionStart;
u32 __OSSavedRegionEnd;
void (**OSExceptionTable)(u8, OSContext*);
BOOL AreWeInitialized;
f32 ZeroPS[2];
f64 ZeroF;
BOOL __OSIsGcam;

// prototypes
static void __OSInitFPRs(void);
static void OSExceptionInit(void);

// dummy entry points to the OS Exception vector
void __OSEVStart(void);
void __OSEVEnd(void);
void __OSEVSetNumber(void);
void __OSExceptionVector(void);
void __DBVECTOR(void);
void __OSDBINTSTART(void);
void __OSDBINTEND(void);
void __OSDBJUMPSTART(void);
void __OSDBJUMPEND(void);

/* clang-format off */
#ifdef __GEKKO__
asm void __OSFPRInit(void) {
    // clang-format off
    nofralloc

    mfmsr r3
    ori r3, r3, 0x2000
    mtmsr r3

    mfspr r3, 0x398
    rlwinm. r3, r3, 3, 0x1f, 0x1f
    beq skip_ps_init

    lis r3, ZeroPS@ha
    addi r3, r3, ZeroPS@l
    psq_l f0, 0(r3), 0, 0
    ps_mr f1, f0
    ps_mr f2, f0
    ps_mr f3, f0
    ps_mr f4, f0
    ps_mr f5, f0
    ps_mr f6, f0
    ps_mr f7, f0
    ps_mr f8, f0
    ps_mr f9, f0
    ps_mr f10, f0
    ps_mr f11, f0
    ps_mr f12, f0
    ps_mr f13, f0
    ps_mr f14, f0
    ps_mr f15, f0
    ps_mr f16, f0
    ps_mr f17, f0
    ps_mr f18, f0
    ps_mr f19, f0
    ps_mr f20, f0
    ps_mr f21, f0
    ps_mr f22, f0
    ps_mr f23, f0
    ps_mr f24, f0
    ps_mr f25, f0
    ps_mr f26, f0
    ps_mr f27, f0
    ps_mr f28, f0
    ps_mr f29, f0
    ps_mr f30, f0
    ps_mr f31, f0

skip_ps_init:
    lfd f0, ZeroF(r13)
    fmr f1, f0
    fmr f2, f0
    fmr f3, f0
    fmr f4, f0
    fmr f5, f0
    fmr f6, f0
    fmr f7, f0
    fmr f8, f0
    fmr f9, f0
    fmr f10, f0
    fmr f11, f0
    fmr f12, f0
    fmr f13, f0
    fmr f14, f0
    fmr f15, f0
    fmr f16, f0
    fmr f17, f0
    fmr f18, f0
    fmr f19, f0
    fmr f20, f0
    fmr f21, f0
    fmr f22, f0
    fmr f23, f0
    fmr f24, f0
    fmr f25, f0
    fmr f26, f0
    fmr f27, f0
    fmr f28, f0
    fmr f29, f0
    fmr f30, f0
    fmr f31, f0

    mtfsf 0xff, f0
    blr
    // clang-format on
}
#endif

static inline void DisableWriteGatherPipe(void) {
    u32 hid2;

    hid2 = PPCMfhid2();
    hid2 &= ~0x40000000;
    PPCMthid2(hid2);
}

u32 OSGetConsoleType(void) {
    if (!BootInfo || BootInfo->consoleType == 0) {
        return OS_CONSOLE_ARTHUR;
    }
    return BootInfo->consoleType;
}

// needed for assert
#undef NULL
#define NULL 0

u32 wbRegionStart : 0x812FDFF0;
u32 wbRegionEnd : 0x812FDFEC;

static void ClearArena(void) {
    if (OSGetResetCode() != 0x80000000) {
        __OSSavedRegionStart = 0;
        __OSSavedRegionEnd = 0;
        memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
        return;
    }
    {
        __OSSavedRegionStart = wbRegionStart;
        __OSSavedRegionEnd = wbRegionEnd;
        if (__OSSavedRegionStart == 0) {
            memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
            return;
        }
    }
    if ((u32)OSGetArenaLo() < __OSSavedRegionStart) {
        if ((u32)OSGetArenaHi() <= __OSSavedRegionStart) {
            memset(OSGetArenaLo(), 0, (u32)OSGetArenaHi() - (u32)OSGetArenaLo());
            return;
        }
        memset(OSGetArenaLo(), 0, __OSSavedRegionStart - (u32)OSGetArenaLo());
        if ((u32)OSGetArenaHi() > __OSSavedRegionEnd) {
            memset((void *)__OSSavedRegionEnd, 0, (u32)OSGetArenaHi() - __OSSavedRegionEnd);
        }
    }
}

static void InquiryCallback(s32, DVDCommandBlock* block) {
    switch (block->state) {
    case 0:
        __OSDeviceCode = (u16)(0x8000 | DriveInfo.deviceCode);
        break;
    default:
        __OSDeviceCode = 1;
        break;
    }
}

static inline u32 wbOSGetConsoleType(void) {
    if (BootInfo == NULL || BootInfo->consoleType == 0) {
        return 0x10000002;
    }
    return BootInfo->consoleType;
}

void OSInit(void) {
    void* bi2StartAddr;
    u32 consoleType;

    if (AreWeInitialized == FALSE) {
        AreWeInitialized = TRUE;
        __OSStartTime = __OSGetSystemTime();
        OSDisableInterrupts();
        PPCMtmmcr0(0);
        PPCMtmmcr1(0);
        PPCMtpmc1(0);
        PPCMtpmc2(0);
        PPCMtpmc3(0);
        PPCMtpmc4(0);
        PPCDisableSpeculation();
        PPCSetFpNonIEEEMode();
        BI2DebugFlag = 0;
        BootInfo = (OSBootInfo*)OSPhysicalToCached(0);
        __DVDLongFileNameFlag = 0;
        bi2StartAddr = (void*)(*(u32*)OSPhysicalToCached(0xF4));
        if (bi2StartAddr) {
            BI2DebugFlag = (void*)((char*)bi2StartAddr + 0xC);
            __PADSpec = ((u32*)bi2StartAddr)[9];
            *(u8*)OSPhysicalToCached(0x30E8) = *BI2DebugFlag;
            *(u8*)OSPhysicalToCached(0x30E9) = __PADSpec;
        } else if (BootInfo->arenaHi) {
            BI2DebugFlagHolder = *(u8*)OSPhysicalToCached(0x30E8);
            BI2DebugFlag = &BI2DebugFlagHolder;
            __PADSpec = *(u8*)OSPhysicalToCached(0x30E9);
        }
        __DVDLongFileNameFlag = 1;
        OSSetArenaLo((!BootInfo->arenaLo) ? &__ArenaLo : BootInfo->arenaLo);
        if ((!BootInfo->arenaLo) && (BI2DebugFlag) && (*(u32*)BI2DebugFlag < 2)) {
            OSSetArenaLo((void*)(((u32)(char*)&_stack_addr + 0x1F) & 0xFFFFFFE0));
        }
        OSSetArenaHi((!BootInfo->arenaHi) ? &__ArenaHi : BootInfo->arenaHi);
        OSExceptionInit();
        __OSInitSystemCall();
        OSInitAlarm();
        __OSModuleInit();
        __OSInterruptInit();
        __OSSetInterruptHandler(0x16, &__OSResetSWInterruptHandler);
        __OSContextInit();
        __OSCacheInit();
        EXIInit();
        SIInit();
        __OSInitSram();
        __OSThreadInit();
        __OSInitAudioSystem();
        PPCMthid2(PPCMfhid2() & ~0x40000000);
        if (!__OSInIPL) {
            __OSInitMemoryProtection();
        }
        OSReport("\nDolphin OS\n");
        OSReport("Kernel built : %s %s\n", "Apr 17 2003", "12:33:06");
        OSReport("Console Type : ");
        consoleType = wbOSGetConsoleType();
        switch (consoleType & 0xF0000000) {
        case 0x00000000:
            OSReport("Retail %d\n", consoleType);
            break;
        case 0x10000000:
        case 0x20000000:
            switch (consoleType & 0x0FFFFFFF) {
            case 0x10000000:
                OSReport("Mac Emulator\n");
                break;
            case 0x10000001:
                OSReport("PC Emulator\n");
                break;
            case 0x10000002:
                OSReport("EPPC Arthur\n");
                break;
            case 0x10000003:
                OSReport("EPPC Minnow\n");
                break;
            default:
                OSReport("Development HW%d (%08x)\n", (consoleType & 0xFFFFFFF) - 3, consoleType);
                break;
            }
            break;
        default:
            OSReport("%08x\n", consoleType);
            break;
        }
        OSReport("Memory %d MB\n", (u32)BootInfo->memorySize >> 0x14U);
        OSReport("Arena : 0x%x - 0x%x\n", OSGetArenaLo(), OSGetArenaHi());
        OSRegisterVersion(__OSVersion);
        if (BI2DebugFlag && ((*BI2DebugFlag) >= 2)) {
            EnableMetroTRKInterrupts();
        }
        ClearArena();
        OSEnableInterrupts();
        if (!__OSInIPL) {
            DVDInit();
            if (__OSIsGcam) {
                __OSDeviceCode = 0x9000;
                return;
            }
            DCInvalidateRange(&DriveInfo, sizeof(DriveInfo));
            DVDInquiryAsync(&DriveBlock, &DriveInfo, InquiryCallback);
        }
    }
}

static u32 __OSExceptionLocations[] = {
    0x00000100, 0x00000200, 0x00000300, 0x00000400, 0x00000500, 0x00000600, 0x00000700, 0x00000800,
    0x00000900, 0x00000C00, 0x00000D00, 0x00000F00, 0x00001300, 0x00001400, 0x00001700,
};

#if DEBUG
char * __OSExceptionNames[17] = {
	"System reset",
	"MachineCheck",
	"DSI",
	"ISI",
	"External Int.",
	"Alignment",
	"Program",
	"FP Unavailable",
	"Decrementer",
	"System call",
	"Trace",
	"Perf mon",
	"IABR",
	"SMI",
	"Thermal Int.",
    "Protection error",
    "FP Exception",
};
#endif

static void OSExceptionInit(void) {
    __OSException exception;
    void* destAddr;
    
    // These two vars help us change the exception number embedded
    // in the exception handler code.
    u32* opCodeAddr;
    u32 oldOpCode;
    
    // Address range of the actual code to be copied.
    u8* handlerStart;
    u32 handlerSize;
    
    ASSERTMSGLINE(1063, ((u32)&__OSEVEnd - (u32)&__OSEVStart) <= 0x100, "OSExceptionInit(): too big exception vector code.");
      
    // Install the first level exception vector.
    opCodeAddr = (u32*)__OSEVSetNumber;
    oldOpCode = *opCodeAddr;
    handlerStart = (u8*)__OSEVStart;
    handlerSize = (u32)((u8*)__OSEVEnd - (u8*)__OSEVStart);
    
    // Install the DB integrator, only if we are the first OSInit to be run
    destAddr = (void*)OSPhysicalToCached(OS_DBJUMPPOINT_ADDR);
    if (*(u32*)destAddr == 0) // Lomem should be zero cleared only once by BS2
    {
        DBPrintf("Installing OSDBIntegrator\n");
        memcpy(destAddr, (void*)__OSDBINTSTART, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
        DCFlushRangeNoSync(destAddr, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
        __sync();
        ICInvalidateRange(destAddr, (u32)__OSDBINTEND - (u32)__OSDBINTSTART);
    }
    
    // Copy the right vector into the table
    for (exception = 0; exception < __OS_EXCEPTION_MAX; exception++) {
        if (BI2DebugFlag && (*BI2DebugFlag >= 2) && __DBIsExceptionMarked(exception)) {
            // this DBPrintf is suspicious.
            DBPrintf(">>> OSINIT: exception %d commandeered by TRK\n", exception);
            continue;
        }
        
        // Modify the copy of code in text before transferring
        // to the exception table.
        *opCodeAddr = oldOpCode | exception;
        
        // Modify opcodes at __DBVECTOR if necessary
        if (__DBIsExceptionMarked(exception)) {
            DBPrintf(">>> OSINIT: exception %d vectored to debugger\n", exception);
            memcpy((void*)__DBVECTOR, (void*)__OSDBJUMPSTART, (u32)__OSDBJUMPEND - (u32)__OSDBJUMPSTART);
        } else {
            // make sure the opcodes are still nop
            u32* ops = (u32*)__DBVECTOR;
            int cb;
            
            for (cb = 0; cb < (u32)__OSDBJUMPEND - (u32)__OSDBJUMPSTART; cb += sizeof(u32)) {
                *ops++ = NOP;
            }
        }
        
        // Install the modified handler.
        destAddr = (void*)OSPhysicalToCached(__OSExceptionLocations[(u32)exception]);
        memcpy(destAddr, handlerStart, handlerSize);
        DCFlushRangeNoSync(destAddr, handlerSize);
        __sync();
        ICInvalidateRange(destAddr, handlerSize);
    }
    // initialize pointer to exception table
    OSExceptionTable = (void*)OSPhysicalToCached(OS_EXCEPTIONTABLE_ADDR);
    
    // install default exception handlers
    for (exception = 0; exception < __OS_EXCEPTION_MAX; exception++) {
        __OSSetExceptionHandler(exception, OSDefaultExceptionHandler);
    }
    
    // restore the old opcode, so that we can re-start an application without
    // downloading the text segments
    *opCodeAddr = oldOpCode;
    
    DBPrintf("Exceptions initialized...\n");
}

#ifdef __GEKKO__
static asm void __OSDBIntegrator(void) {
    nofralloc
entry __OSDBINTSTART
    li      r5, OS_DBINTERFACE_ADDR
    mflr    r3
    stw     r3, DB_EXCEPTIONRET_OFFSET(r5)
    lwz     r3, DB_EXCEPTIONDEST_OFFSET(r5)
    oris    r3, r3, OS_CACHED_REGION_PREFIX
    mtlr    r3
    li      r3, 0x30 // MSR_IR | MSR_DR     // turn on memory addressing
    mtmsr   r3
    blr
entry __OSDBINTEND
}
#endif

#ifdef __GEKKO__
static asm void __OSDBJump(void) {
    nofralloc
entry __OSDBJUMPSTART
    bla     OS_DBJUMPPOINT_ADDR
entry __OSDBJUMPEND
}
#endif

__OSExceptionHandler __OSSetExceptionHandler(__OSException exception, __OSExceptionHandler handler) {
    __OSExceptionHandler oldHandler;
    
    ASSERTMSGLINE(1205, exception < __OS_EXCEPTION_MAX, "__OSSetExceptionHandler(): unknown exception."); 
    
    oldHandler = OSExceptionTable[exception];
    OSExceptionTable[exception] = handler;
    return oldHandler;
}

__OSExceptionHandler __OSGetExceptionHandler(__OSException exception) {
    ASSERTMSGLINE(1228, exception < __OS_EXCEPTION_MAX, "__OSGetExceptionHandler(): unknown exception.");
    return OSExceptionTable[exception];
}

#ifdef __GEKKO__
static asm void OSExceptionVector(void) {
    nofralloc

entry __OSEVStart
    // Save r4 into SPRG0
    mtsprg  0, r4

    // Load current context physical address into r4
    lwz     r4, OS_CURRENTCONTEXT_PADDR

    // Save r3 - r5 into the current context
    stw     r3, OS_CONTEXT_R3(r4)
    mfsprg  r3, 0
    stw     r3, OS_CONTEXT_R4(r4)
    stw     r5, OS_CONTEXT_R5(r4)

    lhz     r3, OS_CONTEXT_STATE(r4)
    ori     r3, r3, OS_CONTEXT_STATE_EXC
    sth     r3, OS_CONTEXT_STATE(r4)

    // Save misc registers
    mfcr    r3
    stw     r3, OS_CONTEXT_CR(r4)
    mflr    r3
    stw     r3, OS_CONTEXT_LR(r4)
    mfctr   r3
    stw     r3, OS_CONTEXT_CTR(r4)
    mfxer   r3
    stw     r3, OS_CONTEXT_XER(r4)
    mfsrr0  r3
    stw     r3, OS_CONTEXT_SRR0(r4)
    mfsrr1  r3
    stw     r3, OS_CONTEXT_SRR1(r4)
    mr      r5, r3

entry __DBVECTOR
    nop

    // Set SRR1[IR|DR] to turn on address
    // translation at the next RFI
    mfmsr   r3
    ori     r3, r3, 0x30
    mtsrr1  r3

    // This lets us change the exception number based on the
    // exception we're installing.
entry __OSEVSetNumber
    addi    r3, 0, 0x0000

    // Load current context virtual address into r4
    lwz     r4, 0xD4

    // Check non-recoverable interrupt
    rlwinm. r5, r5, 0, MSR_RI_BIT, MSR_RI_BIT
    bne     recoverable
    addis   r5, 0,  OSDefaultExceptionHandler@ha
    addi    r5, r5, OSDefaultExceptionHandler@l
    mtsrr0  r5
    rfi
    // NOT REACHED HERE

recoverable:
    // Locate exception handler.
    rlwinm  r5, r3, 2, 22, 29               // r5 contains exception*4
    lwz     r5, OS_EXCEPTIONTABLE_ADDR(r5)
    mtsrr0  r5

    // Final state
    // r3 - exception number
    // r4 - pointer to context
    // r5 - garbage
    // srr0 - exception handler
    // srr1 - address translation enalbed, not yet recoverable

    rfi
    // NOT REACHED HERE
    // The handler will restore state

entry __OSEVEnd
    nop
}
#endif

void __OSUnhandledException(__OSException exception, OSContext* context, u32 dsisr, u32 dar);

#ifdef __GEKKO__
asm void OSDefaultExceptionHandler(register __OSException exception, register OSContext* context) {
    nofralloc
    OS_EXCEPTION_SAVE_GPRS(context)
    mfdsisr r5
    mfdar   r6

    stwu r1, -8(r1)
    b       __OSUnhandledException
}
#endif

#ifdef __GEKKO__
void __OSPSInit(void) {
	PPCMthid2(PPCMfhid2() | 0x80000000 | 0x20000000);
	ICFlashInvalidate();
	__sync();

    asm
    {
        li      r3, 0
        mtspr   GQR0, r3
        mtspr   GQR1, r3
        mtspr   GQR2, r3
        mtspr   GQR3, r3
        mtspr   GQR4, r3
        mtspr   GQR5, r3
        mtspr   GQR6, r3
        mtspr   GQR7, r3
    }
}
#endif

u32 __OSGetDIConfig(void) {
    return (__DIRegs[9] & 0xFF);
}

void OSRegisterVersion(const char* id) {
    OSReport("%s\n", id);
}
