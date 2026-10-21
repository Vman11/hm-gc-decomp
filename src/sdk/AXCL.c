/* AXCL.c (Dolphin SDK 2003) : 0x800C7964 - 0x800C8094 of auto/text_800B2E70.
 * dolsdk2001 src/ax/AXCL.c with the 2003 command list (DPL2 aux, compressor, no HRTF). */
#include "common.h"

void DCFlushRange(void *addr, u32 nBytes);
u32 fn_800C8864(void);   /* __AXGetStudio */
void *fn_800C96F8(void); /* __AXGetPBs */
void fn_800C75D0(u32 *p); /* __AXGetAuxAInput */
void fn_800C7604(u32 *p); /* __AXGetAuxAInputDpl2 */
void fn_800C7624(u32 *p); /* __AXGetAuxAOutput */
void fn_800C7640(u32 *p); /* __AXGetAuxAOutputDpl2R */
void fn_800C7660(u32 *p); /* __AXGetAuxAOutputDpl2Ls */
void fn_800C7680(u32 *p); /* __AXGetAuxAOutputDpl2Rs */
void fn_800C76A0(u32 *p); /* __AXGetAuxBInput */
void fn_800C76D4(u32 *p); /* __AXGetAuxBOutput */
void fn_800C76F0(u32 *p); /* __AXGetAuxBInputDpl2 */
void fn_800C770C(u32 *p); /* __AXGetAuxBOutputDpl2 */
extern u16 lbl_802DAC40[]; /* compressorTable (AXComp.c) */
#define __AXGetStudio fn_800C8864
#define __AXGetPBs fn_800C96F8
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
#define compressorTable lbl_802DAC40

#define __AXGetCommandListCycles fn_800C7964
#define __AXGetCommandListAddress fn_800C796C
#define __AXNextFrame fn_800C79A8
#define __AXClInit fn_800C8058
#define __AXClQuit fn_800C807C
#define AXSetMode fn_800C8080
#define __AXClMode lbl_8035A838
#define __AXCompressor lbl_8035A834

static u16 __AXCommandList[2][384];

static u32 __AXCommandListPosition;
static u16 *__AXClWrite;
static u32 __AXCommandListCycles;
/* globals: MWCC lays these out in reverse order */
u32 __AXClMode;
u32 __AXCompressor;

u32 __AXGetCommandListCycles(void) {
    return __AXCommandListCycles;
}

u32 __AXGetCommandListAddress(void) {
    u32 address;

    address = (u32)&__AXCommandList[__AXCommandListPosition][0];
    __AXCommandListPosition += 1;
    __AXCommandListPosition &= 1;
    __AXClWrite = (void *)&__AXCommandList[__AXCommandListPosition][0];
    return address;
}

static inline void __AXWriteToCommandList(u16 data) {
    *__AXClWrite = data;
    __AXClWrite++;
}

void __AXNextFrame(void *sbuffer, void *buffer) {
    u32 data;
    u16 *pCommandList;

    __AXCommandListCycles = 425;
    pCommandList = __AXClWrite;
    data = __AXGetStudio();
    __AXWriteToCommandList(0);
    __AXWriteToCommandList((u16)(data >> 16));
    __AXWriteToCommandList((u16)(data));
    __AXCommandListCycles += 11844;
    switch (__AXClMode) {
    case 0:
        __AXWriteToCommandList(7);
        __AXWriteToCommandList((u16)((u32)sbuffer >> 16));
        __AXWriteToCommandList((u16)(u32)sbuffer);
        __AXCommandListCycles += 1350;
        break;
    case 1:
        __AXWriteToCommandList(17);
        __AXWriteToCommandList((u16)((u32)sbuffer >> 16));
        __AXWriteToCommandList((u16)(u32)sbuffer);
        __AXCommandListCycles += 1510;
        break;
    case 2:
        break;
    }
    data = (u32)__AXGetPBs();
    __AXWriteToCommandList(2);
    __AXWriteToCommandList((u16)(data >> 16));
    __AXWriteToCommandList((u16)data);
    __AXWriteToCommandList(3);
    if (__AXClMode == 2) {
        __AXGetAuxAInput(&data);
        if (data) {
            __AXWriteToCommandList(19);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAInputDpl2(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAOutput(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAOutputDpl2R(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAOutputDpl2Ls(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAOutputDpl2Rs(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXCommandListCycles += 3565;
        }
        __AXWriteToCommandList(16);
        __AXGetAuxBInputDpl2(&data);
        __AXWriteToCommandList((u16)(data >> 16));
        __AXWriteToCommandList((u16)data);
        __AXGetAuxBOutputDpl2(&data);
        __AXWriteToCommandList((u16)(data >> 16));
        __AXWriteToCommandList((u16)data);
        __AXCommandListCycles += 3565;
    } else {
        __AXGetAuxAInput(&data);
        if (data) {
            __AXWriteToCommandList(4);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxAOutput(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXCommandListCycles += 3565;
        }
        __AXGetAuxBInput(&data);
        if (data) {
            __AXWriteToCommandList(5);
            __AXCommandListCycles += 3565;
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
            __AXGetAuxBOutput(&data);
            __AXWriteToCommandList((u16)(data >> 16));
            __AXWriteToCommandList((u16)data);
        }
    }
    if (__AXCompressor) {
        __AXWriteToCommandList(18);
        __AXWriteToCommandList(0x8000);
        __AXWriteToCommandList(10);
        __AXWriteToCommandList((u16)((u32)compressorTable >> 16));
        __AXWriteToCommandList((u16)(u32)compressorTable);
        __AXCommandListCycles += 3000;
    }
    __AXWriteToCommandList(14);
    __AXWriteToCommandList((u16)((u32)sbuffer >> 16));
    __AXWriteToCommandList((u16)(u32)sbuffer);
    __AXWriteToCommandList((u16)((u32)buffer >> 16));
    __AXWriteToCommandList((u16)(u32)buffer);
    __AXCommandListCycles += 10000;
    __AXWriteToCommandList(15);
    __AXCommandListCycles += 2;
    DCFlushRange(pCommandList, 0x300);
}

void __AXClInit(void) {
    __AXClMode = 0;
    __AXCommandListPosition = 0;
    __AXClWrite = (void *)&__AXCommandList;
    __AXCompressor = 1;
}

void __AXClQuit(void) {
}

void AXSetMode(u32 mode) {
    if (__AXClMode != mode) {
        __AXClMode = mode;
    }
}
