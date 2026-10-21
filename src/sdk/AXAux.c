/* AXAux.c (Dolphin SDK 2003) : 0x800C74DC - 0x800C7964 of auto/text_800B2E70.
 * dolsdk2001 src/ax/AXAux.c plus the 2003 Dolby Pro Logic II aux paths. */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef struct AX_AUX_DATA {
    s32 *l;
    s32 *r;
    s32 *s;
} AX_AUX_DATA;
typedef struct AX_AUX_DATA_DPL2 {
    s32 *l;
    s32 *r;
    s32 *ls;
    s32 *rs;
} AX_AUX_DATA_DPL2;

void DCInvalidateRange(void *addr, u32 nBytes);
void DCFlushRangeNoSync(void *addr, u32 nBytes);
extern u32 lbl_8035A838; /* __AXClMode (AXCL.c) */
#define __AXClMode lbl_8035A838
#define AX_MODE_DPL2 2

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
#define __AXGetAuxBInputDpl2 fn_800C76F0
#define __AXGetAuxBOutputDpl2 fn_800C770C
#define __AXProcessAux fn_800C7728

static s32 __AXBufferAuxA[3][480] ATTRIBUTE_ALIGN(32);
static s32 __AXBufferAuxB[3][480] ATTRIBUTE_ALIGN(32);

static void (*__AXCallbackAuxA)(void *, void *);
static void (*__AXCallbackAuxB)(void *, void *);
static void *__AXContextAuxA;
static void *__AXContextAuxB;
static s32 *__AXAuxADspWrite;
static s32 *__AXAuxADspRead;
static s32 *__AXAuxBDspWrite;
static s32 *__AXAuxBDspRead;
static u32 __AXAuxDspWritePosition;
static u32 __AXAuxDspReadPosition;
static u32 __AXAuxDspIntWritePosition;
static u32 __AXAuxDspIntReadPosition;
static u32 __AXAuxCpuReadWritePosition;

void __AXAuxInit(void) {
    int i;
    s32 *pA;
    s32 *pB;

    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
    __AXContextAuxA = 0;
    __AXContextAuxB = 0;
    __AXAuxDspWritePosition = 0;
    __AXAuxDspReadPosition = 1;
    __AXAuxDspIntWritePosition = 0;
    __AXAuxDspIntReadPosition = 1;
    __AXAuxCpuReadWritePosition = 2;
    pA = (s32 *)&__AXBufferAuxA;
    pB = (s32 *)&__AXBufferAuxB;
    for (i = 0; i < 480; i++) {
        *(pA) = 0;
        pA += 1;
        *(pB) = 0;
        pB += 1;
    }
}

void __AXAuxQuit(void) {
    __AXCallbackAuxA = NULL;
    __AXCallbackAuxB = NULL;
}

void __AXGetAuxAInput(u32 *p) {
    if (__AXCallbackAuxA) {
        *p = (u32)&__AXBufferAuxA[__AXAuxDspWritePosition][0];
    } else {
        *p = 0;
    }
}

void __AXGetAuxAInputDpl2(u32 *p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePosition][320];
}

void __AXGetAuxAOutput(u32 *p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][0];
}

void __AXGetAuxAOutputDpl2R(u32 *p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][160];
}

void __AXGetAuxAOutputDpl2Ls(u32 *p) {
    *p = (u32)&__AXBufferAuxA[__AXAuxDspReadPosition][320];
}

void __AXGetAuxAOutputDpl2Rs(u32 *p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPosition][320];
}

void __AXGetAuxBInput(u32 *p) {
    if (__AXCallbackAuxB) {
        *p = (u32)&__AXBufferAuxB[__AXAuxDspWritePosition][0];
    } else {
        *p = 0;
    }
}

void __AXGetAuxBOutput(u32 *p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspReadPosition][0];
}

void __AXGetAuxBInputDpl2(u32 *p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspIntWritePosition][0];
}

void __AXGetAuxBOutputDpl2(u32 *p) {
    *p = (u32)&__AXBufferAuxB[__AXAuxDspIntReadPosition][0];
}

void __AXProcessAux(void) {
    __AXAuxADspWrite = &__AXBufferAuxA[__AXAuxDspWritePosition][0];
    __AXAuxADspRead = &__AXBufferAuxA[__AXAuxDspReadPosition][0];
    __AXAuxBDspWrite = &__AXBufferAuxB[__AXAuxDspWritePosition][0];
    __AXAuxBDspRead = &__AXBufferAuxB[__AXAuxDspReadPosition][0];
    if (__AXCallbackAuxA) {
        if (__AXClMode == AX_MODE_DPL2) {
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
    if (__AXCallbackAuxB && __AXClMode != AX_MODE_DPL2) {
        AX_AUX_DATA auxData;

        auxData.l = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][0];
        auxData.r = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][160];
        auxData.s = &__AXBufferAuxB[__AXAuxCpuReadWritePosition][320];
        DCInvalidateRange(auxData.l, 0x780);
        __AXCallbackAuxB(&auxData.l, __AXContextAuxB);
        DCFlushRangeNoSync(auxData.l, 0x780);
    }
    __AXAuxDspWritePosition++;
    __AXAuxDspReadPosition++;
    __AXAuxCpuReadWritePosition++;
    __AXAuxDspIntWritePosition++;
    __AXAuxDspIntReadPosition++;
    __AXAuxDspWritePosition %= 3;
    __AXAuxDspReadPosition %= 3;
    __AXAuxDspIntWritePosition &= 1;
    __AXAuxDspIntReadPosition &= 1;
    __AXAuxCpuReadWritePosition %= 3;
}
