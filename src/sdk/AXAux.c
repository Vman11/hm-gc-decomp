#include <dolphin.h>
#include <dolphin/ax.h>
#define __AXClMode lbl_8035A838

/* ---- __ax.h ---- */
#ifndef _DOLPHIN_AX_INTERNAL_H_
#define _DOLPHIN_AX_INTERNAL_H_

#include <dolphin/ax.h>
#define __AXAuxInit fn_800C74DC
#define __AXAuxQuit fn_800C75C0
#define __AXGetAuxAInput fn_800C75D0
#define __AXGetAuxAInputDpl2 fn_800C7604
#define __AXGetAuxAOutput fn_800C7624
#define __AXGetAuxAOutputDpl2R fn_800C7640
#define __AXGetAuxAOutputDpl2Ls fn_800C7660
#define __AXGetAuxAOutputDpl2Rs fn_800C7680
#define __AXGetAuxBInput fn_800C76A0
#define __AXGetAuxBOutput fn_800C76D4
#define __AXGetAuxBForDPL2 fn_800C76F0
#define __AXGetAuxBOutputDPL2 fn_800C770C
#define __AXProcessAux fn_800C7728

#ifdef __cplusplus
extern "C" {
#endif

// AXAlloc
AXVPB* __AXGetStackHead(u32 priority);
void __AXServiceCallbackStack(void);
void __AXInitVoiceStacks(void);
void __AXAllocInit(void);
void __AXAllocQuit(void);
void __AXPushFreeStack(AXVPB* p);
AXVPB* __AXPopFreeStack(void);
void __AXPushCallbackStack(AXVPB* p);
AXVPB* __AXPopCallbackStack(void);
void __AXRemoveFromStack(AXVPB* p);
void __AXPushStackHead(AXVPB* p, u32 priority);
AXVPB* __AXPopStackFromBottom(u32 priority);

// AXAux
void __AXAuxInit(void);
void __AXAuxQuit(void);
void __AXGetAuxAInput(u32* p);
void __AXGetAuxAOutput(u32* p);
void __AXGetAuxBInput(u32* p);
void __AXGetAuxBOutput(u32* p);
void __AXProcessAux(void);
void __AXGetAuxAInputDpl2(u32* p);
void __AXGetAuxAOutputDpl2R(u32* p);
void __AXGetAuxAOutputDpl2Ls(u32* p);
void __AXGetAuxAOutputDpl2Rs(u32* p);
void __AXGetAuxBForDPL2(u32* p);
void __AXGetAuxBOutputDPL2(u32* p);

// AXCL
extern u32 __AXClMode;

// AXComp
extern u16 __AXCompressorTable[3360];

u32 __AXGetCommandListCycles(void);
u32 __AXGetCommandListAddress(void);
void __AXWriteToCommandList(u16 data);
void __AXNextFrame(void* sbuffer, void* buffer);
void __AXClInit(void);
void __AXClQuit(void);

// AXOut
void __AXOutNewFrame(u32 lessDspCycles);
void __AXOutAiCallback(void);
void __AXOutInitDSP(void);
void __AXOutInit(u32 outputBufferMode);
void __AXOutQuit(void);

// AXProf
AXPROFILE* __AXGetCurrentProfile(void);

// AXSPB
u32 __AXGetStudio(void);
void __AXDepopFade(s32* hostSum, s32* dspVolume, s16* dspDelta);
void __AXPrintStudio(void);
void __AXSPBInit(void);
void __AXSPBQuit(void);
void __AXDepopVoice(AXPB* p);

// AXVPB
u32 __AXGetNumVoices(void);
void __AXServiceVPB(AXVPB *pvpb);
void __AXDumpVPB(AXVPB* pvpb);
void __AXSyncPBs(u32 lessDspCycles);
AXPB* __AXGetPBs(void);
void __AXSetPBDefault(AXVPB* p);
void __AXVPBInit(void);
void __AXVPBQuit(void);

#ifdef __cplusplus
}
#endif

#endif // _DOLPHIN_AX_INTERNAL_H_


static s32 __AXBufferAuxA[3][480] ATTRIBUTE_ALIGN(32);
static s32 __AXBufferAuxB[3][480] ATTRIBUTE_ALIGN(32);

static void (* __AXCallbackAuxA)(void*, void*);
static void (* __AXCallbackAuxB)(void*, void*);
static void* __AXContextAuxA;
static void* __AXContextAuxB;
static s32* __AXAuxADspWrite;
static s32* __AXAuxADspRead;
static s32* __AXAuxBDspWrite;
static s32* __AXAuxBDspRead;
static u32 __AXAuxDspWritePosition;
static u32 __AXAuxDspReadPosition;
static u32 __AXAuxDspWritePositionDpl2;
static u32 __AXAuxDspReadPositionDpl2;
static u32 __AXAuxCpuReadWritePosition;

void __AXAuxInit(void) {
    int i;
    s32* pA;
    s32* pB;

    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
    __AXContextAuxA = 0;
    __AXContextAuxB = 0;
    __AXAuxDspWritePosition = 0;
    __AXAuxDspReadPosition = 1;
    __AXAuxDspWritePositionDpl2 = 0;
    __AXAuxDspReadPositionDpl2 = 1;
    __AXAuxCpuReadWritePosition = 2;

    pA = (s32*)&__AXBufferAuxA;
    pB = (s32*)&__AXBufferAuxB;

    for (i = 0; i < 480; i++) {
        *(pA) = 0; pA++;
        *(pB) = 0; pB++;
    }
}

void __AXAuxQuit(void) {
    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
}

void __AXGetAuxAInput(u32* p) {
    if (__AXCallbackAuxA) {
        *p = (u32)&__AXBufferAuxA[__AXAuxDspWritePosition][0];
    } else {
        *p = 0;
    }
}

void __AXGetAuxAInputDpl2(u32* p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePosition][320];
}

void __AXGetAuxAOutput(u32* p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][0];
}

void __AXGetAuxAOutputDpl2R(u32* p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][160];
}

void __AXGetAuxAOutputDpl2Ls(u32* p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][320];
}

void __AXGetAuxAOutputDpl2Rs(u32* p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPosition][320];
}

void __AXGetAuxBInput(u32* p) {
    if (__AXCallbackAuxB) {
        *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePosition][0];
    } else {
        *p = 0;
    }
}

void __AXGetAuxBOutput(u32* p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPosition][0];
}

void __AXGetAuxBForDPL2(u32* p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePositionDpl2][0];
}

void __AXGetAuxBOutputDPL2(u32* p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPositionDpl2][0];
}

void __AXProcessAux(void) {
    __AXAuxADspWrite = &__AXBufferAuxA[__AXAuxDspWritePosition][0];
    __AXAuxADspRead = &__AXBufferAuxA[__AXAuxDspReadPosition][0];
    __AXAuxBDspWrite = &__AXBufferAuxB[__AXAuxDspWritePosition][0];
    __AXAuxBDspRead = &__AXBufferAuxB[__AXAuxDspReadPosition][0];

    if (__AXCallbackAuxA) {
        if (__AXClMode == 2) {
            AX_AUX_DATA_DPL2 auxData;
            auxData.l = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][0];
            auxData.r = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][160];
            auxData.ls = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][320];
            auxData.rs = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][320];
            DCInvalidateRange(auxData.l, 0x780);
            DCInvalidateRange(auxData.rs, 0x280);
            __AXCallbackAuxA(&auxData.l, __AXContextAuxA);
            DCFlushRangeNoSync(auxData.l, 0x780);
            DCFlushRangeNoSync(auxData.rs, 0x280);
        } else {
            AX_AUX_DATA auxData;
            auxData.l = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][0];
            auxData.r = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][160];
            auxData.s = &__AXBufferAuxA[__AXAuxCpuReadWritePosition][320];
            DCInvalidateRange(auxData.l, 0x780);
            __AXCallbackAuxA(&auxData.l, __AXContextAuxA);
            DCFlushRangeNoSync(auxData.l, 0x780);
        }        
    }

    if (__AXCallbackAuxB && __AXClMode != 2) {
        AX_AUX_DATA auxData;
        auxData.l = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][0];
        auxData.r = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][160];
        auxData.s = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][320];
        DCInvalidateRange(auxData.l, 0x780);
        __AXCallbackAuxB(&auxData.l, __AXContextAuxB);
        DCFlushRangeNoSync(auxData.l, 0x780);
    }

    __AXAuxDspWritePosition += 1;
    __AXAuxDspWritePosition %= 3;
    __AXAuxDspReadPosition += 1;
    __AXAuxDspReadPosition %= 3;

    __AXAuxDspWritePositionDpl2 += 1;
    __AXAuxDspWritePositionDpl2 &= 1;
    __AXAuxDspReadPositionDpl2 += 1;
    __AXAuxDspReadPositionDpl2 &= 1;

    __AXAuxCpuReadWritePosition += 1;
    __AXAuxCpuReadWritePosition %= 3;
}

