/* vi.c (Dolphin SDK 2003, "Apr 17 2003") : 0x800C095C - 0x800C2AC4 of auto/text_800B2E70.
 * Based on dolsdk2001 src/vi/vi.c with the 2003 changes (more TV modes, position callback, shadow change mode). */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef struct OSContext OSContext;
typedef struct OSThreadQueue { void *head; void *tail; } OSThreadQueue;
typedef struct OSSram {
    u16 checkSum;
    u16 checkSumInv;
    u32 ead0;
    u32 ead1;
    u32 counterBias;
    s8 displayOffsetH;
    u8 ntd;
    u8 language;
    u8 flags;
} OSSram;
typedef void (*VIRetraceCallback)(u32 retraceCount);
typedef void (*VIPositionCallback)(s16 x, s16 y);
typedef int VITVMode;
typedef int VIXFBMode;
typedef struct GXRenderModeObj {
    VITVMode viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    VIXFBMode xFBmode;
    u8 field_rendering;
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
} GXRenderModeObj;

typedef struct {
    u8 equ;
    u16 acv;
    u16 prbOdd;
    u16 prbEven;
    u16 psbOdd;
    u16 psbEven;
    u8 bs1;
    u8 bs2;
    u8 bs3;
    u8 bs4;
    u16 be1;
    u16 be2;
    u16 be3;
    u16 be4;
    u16 nhlines;
    u16 hlw;
    u8 hsy;
    u8 hcs;
    u8 hce;
    u8 hbe640;
    u16 hbs640;
    u8 hbeCCIR656;
    u16 hbsCCIR656;
} VITiming;

typedef struct {
    u16 DispPosX;
    u16 DispPosY;
    u16 DispSizeX;
    u16 DispSizeY;
    u16 AdjustedDispPosX;
    u16 AdjustedDispPosY;
    u16 AdjustedDispSizeY;
    u16 AdjustedPanPosY;
    u16 AdjustedPanSizeY;
    u16 FBSizeX;
    u16 FBSizeY;
    u16 PanPosX;
    u16 PanPosY;
    u16 PanSizeX;
    u16 PanSizeY;
    VIXFBMode FBMode;
    u32 nonInter;
    u32 tv;
    u8 wordPerLine;
    u8 std;
    u8 wpl;
    u32 bufAddr;
    u32 tfbb;
    u32 bfbb;
    u8 xof;
    BOOL black;
    BOOL threeD;
    u32 rbufAddr;
    u32 rtfbb;
    u32 rbfbb;
    VITiming *timing;
} SomeVIStruct;

volatile u16 __VIRegs[59] : 0xCC002000;

void OSRegisterVersion(const char *id);
void OSReport(const char *msg, ...);
void fn_800B5520(char *file, int line, char *msg, ...); /* OSPanic */
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
void *__OSSetInterruptHandler(s16 interrupt, void *handler);
u32 __OSUnmaskInterrupts(u32 mask);
void OSInitThreadQueue(OSThreadQueue *queue);
void fn_800BA2C8(OSThreadQueue *queue); /* OSSleepThread */
void fn_800BA3B4(OSThreadQueue *queue); /* OSWakeupThread */
OSSram *__OSLockSram(void);
BOOL __OSUnlockSram(BOOL commit);
void fn_800F5554(void); /* SIRefreshSamplingRate */
#define OSPanic fn_800B5520
#define OSSleepThread fn_800BA2C8
#define OSWakeupThread fn_800BA3B4
#define SIRefreshSamplingRate fn_800F5554

/* names used by the rest of the program (and by symbols.txt) */
#define __VIRetraceHandler fn_800C095C
#define VISetPostRetraceCallback fn_800C0BD0
#define getTiming fn_800C0C14
#define __VIInit fn_800C0CB4
#define VIInit fn_800C0EB4
#define VIWaitForRetrace fn_800C1364
#define setFbbRegs fn_800C13B8
#define setVerticalRegs fn_800C168C
#define VIConfigure fn_800C182C
#define VIConfigurePan fn_800C2054
#define VIFlush fn_800C23E8
#define VISetNextFrameBuffer fn_800C2518
#define VISetBlack fn_800C2584
#define VIGetRetraceCount fn_800C2600
#define GetCurrentDisplayPosition fn_800C2608
#define getCurrentFieldEvenOdd fn_800C2644
#define VIGetNextField fn_800C26AC
#define VIGetCurrentLine fn_800C2748
#define __VIDisplayPositionToXY fn_800C2848
#define __VIGetCurrentPosition fn_800C2A64

char *__VIVersion = "<< Dolphin SDK - VI\trelease build: Apr 17 2003 12:33:22 (0x2301) >>";

static BOOL IsInitialized;
static volatile u32 retraceCount;
static volatile u32 flushFlag;
static OSThreadQueue retraceQueue;
static VIRetraceCallback PreCB;
static VIRetraceCallback PostCB;
static VIPositionCallback PositionCallback;
static u32 encoderType;
static s16 displayOffsetH;
static s16 displayOffsetV;
static volatile u32 changeMode;
static volatile u64 changed;
static volatile u32 shdwChangeMode;
static volatile u64 shdwChanged;
static VITiming *CurrTiming;
static u32 CurrTvMode;
static u32 NextBufAddr;
static u32 CurrBufAddr;
static u32 FBSet;

static u16 regs[59];
static u16 shdwRegs[59];
static SomeVIStruct HorVer;

static VITiming timing[10] = {
    {6, 240, 24, 25, 3, 2, 12, 13, 12, 13, 520, 519, 520, 519, 525, 429, 64, 71, 105, 162, 373, 122, 412},
    {6, 240, 24, 24, 4, 4, 12, 12, 12, 12, 520, 520, 520, 520, 526, 429, 64, 71, 105, 162, 373, 122, 412},
    {5, 287, 35, 36, 1, 0, 13, 12, 11, 10, 619, 618, 617, 620, 625, 432, 64, 75, 106, 172, 380, 133, 420},
    {5, 287, 33, 33, 2, 2, 13, 11, 13, 11, 619, 621, 619, 621, 624, 432, 64, 75, 106, 172, 380, 133, 420},
    {6, 240, 24, 25, 3, 2, 16, 15, 14, 13, 518, 517, 516, 519, 525, 429, 64, 78, 112, 162, 373, 122, 412},
    {6, 240, 24, 24, 4, 4, 16, 14, 16, 14, 518, 520, 518, 520, 526, 429, 64, 78, 112, 162, 373, 122, 412},
    {12, 480, 48, 48, 6, 6, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 162, 373, 122, 412},
    {12, 480, 44, 44, 10, 10, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 168, 379, 122, 412},
    {6, 241, 24, 25, 1, 0, 12, 13, 12, 13, 520, 519, 520, 519, 525, 429, 64, 71, 105, 159, 370, 122, 412},
    {12, 480, 48, 48, 6, 6, 24, 24, 24, 24, 1038, 1038, 1038, 1038, 1050, 429, 64, 71, 105, 180, 391, 122, 412},
};

static u16 taps[25] = {
    0x01F0, 0x01DC, 0x01AE, 0x0174, 0x0129, 0x00DB, 0x008E, 0x0046, 0x000C, 0x00E2, 0x00CB, 0x00C0, 0x00C4,
    0x00CF, 0x00DE, 0x00EC, 0x00FC, 0x0008, 0x000F, 0x0013, 0x0013, 0x000F, 0x000C, 0x0008, 0x0001,
};

#define MARK_CHANGED(index) (changed |= 1LL << (63 - (index)))
#define VI_BITMASK(index) (1ull << (63 - (index)))

static u32 getCurrentFieldEvenOdd(void);
void __VIGetCurrentPosition(s16 *x, s16 *y);

static inline s32 cntlzd(u64 bit) {
    u32 hi;
    u32 lo;
    s32 value;

    hi = (u32)(bit >> 32);
    lo = (u32)(bit & 0xFFFFFFFF);
    value = __cntlzw(hi);
    if (value < 32) {
        return value;
    }
    return 32 + __cntlzw(lo);
}

static inline BOOL VISetRegs(void) {
    s32 regIndex;

    if (!((shdwChangeMode == 1) && (getCurrentFieldEvenOdd() == 0))) {
        while (shdwChanged) {
            regIndex = cntlzd(shdwChanged);
            __VIRegs[regIndex] = shdwRegs[regIndex];
            shdwChanged &= ~VI_BITMASK(regIndex);
        }
        shdwChangeMode = 0;
        CurrTiming = HorVer.timing;
        CurrTvMode = HorVer.tv;
        CurrBufAddr = NextBufAddr;
        return TRUE;
    }
    return FALSE;
}

static void __VIRetraceHandler(s16 interrupt, OSContext *context) {
    u8 exceptionContext[712] ATTRIBUTE_ALIGN(8);
    u16 reg;
    u32 inter = 0;

    reg = __VIRegs[24];
    if (reg & 0x8000) {
        __VIRegs[24] = (u16)(reg & ~0x8000);
        inter |= 1;
    }
    reg = __VIRegs[26];
    if (reg & 0x8000) {
        __VIRegs[26] = (u16)(reg & ~0x8000);
        inter |= 2;
    }
    reg = __VIRegs[28];
    if (reg & 0x8000) {
        __VIRegs[28] = (u16)(reg & ~0x8000);
        inter |= 4;
    }
    reg = __VIRegs[30];
    if (reg & 0x8000) {
        __VIRegs[30] = (u16)(reg & ~0x8000);
        inter |= 8;
    }
    if ((inter & 4) || (inter & 8)) {
        OSClearContext((OSContext *)exceptionContext);
        OSSetCurrentContext((OSContext *)exceptionContext);
        if (PositionCallback) {
            s16 x, y;
            __VIGetCurrentPosition(&x, &y);
            (*PositionCallback)(x, y);
        }
        OSClearContext((OSContext *)exceptionContext);
        OSSetCurrentContext(context);
        return;
    }
    retraceCount++;
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext((OSContext *)exceptionContext);
    if (PreCB) {
        (*PreCB)(retraceCount);
    }
    if (flushFlag) {
        if (VISetRegs()) {
            flushFlag = 0;
            SIRefreshSamplingRate();
        }
    }
    if (PostCB) {
        OSClearContext((OSContext *)exceptionContext);
        (*PostCB)(retraceCount);
    }
    OSWakeupThread(&retraceQueue);
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext(context);
}

VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback cb) {
    BOOL enabled;
    VIRetraceCallback oldcb;

    oldcb = PostCB;
    enabled = OSDisableInterrupts();
    PostCB = cb;
    OSRestoreInterrupts(enabled);
    return oldcb;
}

#pragma dont_inline on
static VITiming *getTiming(VITVMode mode) {
    switch (mode) {
    case 0:
        return &timing[0];
    case 1:
        return &timing[1];
    case 4:
        return &timing[2];
    case 5:
        return &timing[3];
    case 20:
        return &timing[0];
    case 21:
        return &timing[1];
    case 8:
        return &timing[4];
    case 9:
        return &timing[5];
    case 2:
        return &timing[6];
    case 3:
        return &timing[7];
    case 16:
        return &timing[2];
    case 17:
        return &timing[3];
    case 24:
        return &timing[8];
    case 26:
        return &timing[9];
    }
    return NULL;
}
#pragma dont_inline reset

void __VIInit(VITVMode mode) {
    VITiming *tm;
    u32 nonInter;
    u32 tv;
    volatile u32 a;
    u16 hct;
    u16 vct;
    u32 x;
    u32 encoderType;
    u32 y;

    nonInter = mode & 2;
    tv = (u32)mode >> 2;
    *(u32 *)0x800000CC = tv;
    tm = getTiming(mode);
    __VIRegs[1] = 2;
    a = 0;
    if (a < 1000) {
        while (a < 1000) {
            a += 8;
        }
    }
    __VIRegs[1] = 0;
    __VIRegs[3] = tm->hlw;
    __VIRegs[2] = tm->hce | (tm->hcs << 8);
    __VIRegs[5] = tm->hsy | (tm->hbe640 << 7);
    __VIRegs[4] = (tm->hbe640 >> 9) | (tm->hbs640 << 1);
    __VIRegs[0] = tm->equ;
    __VIRegs[7] = tm->prbOdd + tm->acv * 2 - 2;
    __VIRegs[6] = tm->psbOdd + 2;
    __VIRegs[9] = tm->prbEven + tm->acv * 2 - 2;
    __VIRegs[8] = tm->psbEven + 2;
    __VIRegs[11] = tm->bs1 | (tm->be1 << 5);
    __VIRegs[10] = tm->bs3 | (tm->be3 << 5);
    __VIRegs[13] = tm->bs2 | (tm->be2 << 5);
    __VIRegs[12] = tm->bs4 | (tm->be4 << 5);
    __VIRegs[36] = 0x2828;
    __VIRegs[27] = 1;
    __VIRegs[26] = 0x1001;
    hct = tm->hlw + 1;
    vct = (tm->nhlines / 2) + 1;
    __VIRegs[25] = (u32)hct;
    __VIRegs[24] = vct | 0x1000;
    if (mode != 2 && mode != 3 && mode != 26) {
        __VIRegs[1] = (nonInter << 2) | 1 | (tv << 8);
        __VIRegs[54] = 0;
    } else {
        __VIRegs[1] = (tv << 8) | 5;
        __VIRegs[54] = 1;
    }
}

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define CLAMP(val, min, max) ((val) > (max) ? (max) : (val) < (min) ? (min) : (val))

static inline void AdjustPosition(u16 acv) {
    s32 coeff;
    s32 frac;

    HorVer.AdjustedDispPosX = CLAMP((s16)HorVer.DispPosX + displayOffsetH, 0, 720 - HorVer.DispSizeX);
    coeff = (HorVer.FBMode == 0) ? 2 : 1;
    frac = HorVer.DispPosY & 1;
    HorVer.AdjustedDispPosY = MAX((s16)HorVer.DispPosY + displayOffsetV, frac);
    HorVer.AdjustedDispSizeY = HorVer.DispSizeY + MIN((s16)HorVer.DispPosY + displayOffsetV - frac, 0) -
                               MAX((s16)HorVer.DispPosY + (s16)HorVer.DispSizeY + displayOffsetV - (((s16)acv * 2) - frac), 0);
    HorVer.AdjustedPanPosY = HorVer.PanPosY - (MIN((s16)HorVer.DispPosY + displayOffsetV - frac, 0) / coeff);
    HorVer.AdjustedPanSizeY = HorVer.PanSizeY + (MIN((s16)HorVer.DispPosY + displayOffsetV - frac, 0) / coeff) -
                              (MAX((s16)HorVer.DispPosY + (s16)HorVer.DispSizeY + displayOffsetV - (((s16)acv * 2) - frac), 0) / coeff);
}

static inline void ImportAdjustingValues(void) {
    OSSram *sram = __OSLockSram();

    displayOffsetH = sram->displayOffsetH;
    displayOffsetV = 0;
    __OSUnlockSram(FALSE);
}

void VIInit(void) {
    u16 dspCfg;
    u32 value;
    u32 tv;
    u32 tvInBootrom;

    if (IsInitialized) {
        return;
    }
    OSRegisterVersion(__VIVersion);
    IsInitialized = TRUE;
    encoderType = 1;
    if (!(__VIRegs[1] & 1)) {
        __VIInit(0);
    }
    retraceCount = 0;
    changed = 0;
    shdwChanged = 0;
    changeMode = 0;
    shdwChangeMode = 0;
    flushFlag = 0;
    __VIRegs[39] = taps[0] | ((taps[1] & 0x3F) << 10);
    __VIRegs[38] = (taps[1] >> 6) | (taps[2] << 4);
    __VIRegs[41] = taps[3] | ((taps[4] & 0x3F) << 10);
    __VIRegs[40] = (taps[4] >> 6) | (taps[5] << 4);
    __VIRegs[43] = taps[6] | ((taps[7] & 0x3F) << 10);
    __VIRegs[42] = (taps[7] >> 6) | (taps[8] << 4);
    __VIRegs[45] = taps[9] | (taps[10] << 8);
    __VIRegs[44] = taps[11] | (taps[12] << 8);
    __VIRegs[47] = taps[13] | (taps[14] << 8);
    __VIRegs[46] = taps[15] | (taps[16] << 8);
    __VIRegs[49] = taps[17] | (taps[18] << 8);
    __VIRegs[48] = taps[19] | (taps[20] << 8);
    __VIRegs[51] = taps[21] | (taps[22] << 8);
    __VIRegs[50] = taps[23] | (taps[24] << 8);
    __VIRegs[56] = 640;
    ImportAdjustingValues();
    dspCfg = __VIRegs[1];
    tvInBootrom = *(u32 *)0x800000CC;
    HorVer.nonInter = (dspCfg >> 2) & 1;
    HorVer.tv = (dspCfg >> 8) & 3;
    if ((tvInBootrom == 1) && (HorVer.tv == 0)) {
        HorVer.tv = 5;
    }
    tv = (HorVer.tv == 3) ? 0 : HorVer.tv;
    HorVer.timing = getTiming((tv << 2) + HorVer.nonInter);
    regs[1] = dspCfg;
    CurrTiming = HorVer.timing;
    CurrTvMode = HorVer.tv;
    HorVer.DispSizeX = 640;
    HorVer.DispSizeY = CurrTiming->acv * 2;
    HorVer.DispPosX = (720 - HorVer.DispSizeX) / 2;
    HorVer.DispPosY = 0;
    AdjustPosition(CurrTiming->acv);
    HorVer.FBSizeX = 640;
    HorVer.FBSizeY = CurrTiming->acv * 2;
    HorVer.PanPosX = 0;
    HorVer.PanPosY = 0;
    HorVer.PanSizeX = 640;
    HorVer.PanSizeY = CurrTiming->acv * 2;
    HorVer.FBMode = 0;
    HorVer.wordPerLine = 40;
    HorVer.std = 40;
    HorVer.wpl = 40;
    HorVer.xof = 0;
    HorVer.black = TRUE;
    HorVer.threeD = FALSE;
    OSInitThreadQueue(&retraceQueue);
    value = __VIRegs[24];
    value &= ~0x8000;
    value = (u16)value;
    __VIRegs[24] = value;
    value = __VIRegs[26];
    value &= ~0x8000;
    value = (u16)value;
    __VIRegs[26] = value;
    PreCB = NULL;
    PostCB = NULL;
    __OSSetInterruptHandler(24, __VIRetraceHandler);
    __OSUnmaskInterrupts(0x80);
}

void VIWaitForRetrace(void) {
    BOOL enabled;
    u32 count;

    enabled = OSDisableInterrupts();
    count = retraceCount;
    do {
        OSSleepThread(&retraceQueue);
    } while (count == retraceCount);
    OSRestoreInterrupts(enabled);
}

static inline void setInterruptRegs(VITiming *tm) {
    u16 vct, hct, borrow;

    vct = tm->nhlines / 2;
    borrow = tm->nhlines % 2;
    hct = (borrow) ? tm->hlw : (u16)0;
    vct++;
    hct++;
    regs[25] = hct;
    MARK_CHANGED(25);
    regs[24] = vct | 0x1000;
    MARK_CHANGED(24);
}

static inline void setPicConfig(u16 fbSizeX, VIXFBMode xfbMode, u16 panPosX, u16 panSizeX, u8 *wordPerLine, u8 *std,
                                u8 *wpl, u8 *xof) {
    *wordPerLine = (fbSizeX + 15) / 16;
    *std = (xfbMode == 0) ? *wordPerLine : (u8)(*wordPerLine * 2);
    *xof = panPosX % 16;
    *wpl = (*xof + panSizeX + 15) / 16;
    regs[36] = *std | (*wpl << 8);
    MARK_CHANGED(36);
}

static inline void setBBIntervalRegs(VITiming *tm) {
    u16 val;

    val = tm->bs1 | (tm->be1 << 5);
    regs[11] = val;
    MARK_CHANGED(11);
    val = tm->bs3 | (tm->be3 << 5);
    regs[10] = val;
    MARK_CHANGED(10);
    val = tm->bs2 | (tm->be2 << 5);
    regs[13] = val;
    MARK_CHANGED(13);
    val = tm->bs4 | (tm->be4 << 5);
    regs[12] = val;
    MARK_CHANGED(12);
}

static inline void setScalingRegs(u16 panSizeX, u16 dispSizeX, BOOL threeD) {
    u32 scale;

    panSizeX = threeD ? (panSizeX << 1) : panSizeX;
    if (panSizeX < dispSizeX) {
        scale = (u32)(dispSizeX + (panSizeX << 8) - 1) / dispSizeX;
        regs[37] = scale | 0x1000;
        MARK_CHANGED(37);
        regs[56] = panSizeX;
        MARK_CHANGED(56);
    } else {
        regs[37] = 0x100;
        MARK_CHANGED(37);
    }
}

static inline void calcFbbs(u32 bufAddr, u16 panPosX, u16 panPosY, u8 wordPerLine, VIXFBMode xfbMode, u16 dispPosY,
                            u32 *tfbb, u32 *bfbb) {
    u32 bytesPerLine;
    u32 xoffInWords;
    u32 tmp;

    xoffInWords = (panPosX & ~0xF) >> 4;
    bytesPerLine = (wordPerLine & 0xFF) << 5;
    *tfbb = bufAddr + (xoffInWords << 5) + (bytesPerLine * panPosY);
    *bfbb = (xfbMode == 0) ? *tfbb : *tfbb + bytesPerLine;
    if (dispPosY % 2 == 1) {
        tmp = *tfbb;
        *tfbb = *bfbb;
        *bfbb = tmp;
    }
    *tfbb &= 0x3FFFFFFF;
    *bfbb &= 0x3FFFFFFF;
}

static void setFbbRegs(SomeVIStruct *HorVer, u32 *tfbb, u32 *bfbb, u32 *rtfbb, u32 *rbfbb) {
    u32 shifted;

    calcFbbs(HorVer->bufAddr, HorVer->PanPosX, HorVer->AdjustedPanPosY, HorVer->wordPerLine, HorVer->FBMode,
             HorVer->AdjustedDispPosY, tfbb, bfbb);
    if (HorVer->threeD) {
        calcFbbs(HorVer->rbufAddr, HorVer->PanPosX, HorVer->AdjustedPanPosY, HorVer->wordPerLine, HorVer->FBMode,
                 HorVer->AdjustedDispPosY, rtfbb, rbfbb);
    }
    if (*tfbb < 0x01000000U && *bfbb < 0x01000000U && *rtfbb < 0x01000000U && *rbfbb < 0x01000000U) {
        shifted = 0;
    } else {
        shifted = 1;
    }
    if (shifted) {
        *tfbb >>= 5;
        *bfbb >>= 5;
        *rtfbb >>= 5;
        *rbfbb >>= 5;
    }
    regs[15] = (u16)*tfbb & 0xFFFF;
    MARK_CHANGED(15);
    regs[14] = (shifted << 12) | ((*tfbb >> 16) | (HorVer->xof << 8));
    MARK_CHANGED(14);
    regs[19] = (u16)*bfbb & 0xFFFF;
    MARK_CHANGED(19);
    regs[18] = (*bfbb >> 16);
    MARK_CHANGED(18);
    if (HorVer->threeD) {
        regs[17] = (u16)*rtfbb & 0xFFFF;
        MARK_CHANGED(17);
        regs[16] = *rtfbb >> 16;
        MARK_CHANGED(16);
        regs[21] = (u16)*rbfbb & 0xFFFF;
        MARK_CHANGED(21);
        regs[20] = *rbfbb >> 16;
        MARK_CHANGED(20);
    }
}

static inline void setHorizontalRegs(VITiming *tm, u16 dispPosX, u16 dispSizeX) {
    u32 hbe;
    u32 hbs;
    u32 hbeLo;
    u32 hbeHi;

    regs[3] = tm->hlw;
    MARK_CHANGED(3);
    regs[2] = tm->hce | (tm->hcs << 8);
    MARK_CHANGED(2);
    hbe = tm->hbe640 - 40 + dispPosX;
    hbs = tm->hbs640 + 40 + dispPosX - (720 - dispSizeX);
    hbeLo = hbe & 0x1FF;
    hbeHi = hbe >> 9;
    regs[5] = tm->hsy | (hbeLo << 7);
    MARK_CHANGED(5);
    regs[4] = hbeHi | (hbs * 2);
    MARK_CHANGED(4);
}

static void setVerticalRegs(u16 dispPosY, u16 dispSizeY, u8 equ, u16 acv, u16 prbOdd, u16 prbEven, u16 psbOdd,
                            u16 psbEven, BOOL black) {
    u16 actualPrbOdd;
    u16 actualPrbEven;
    u16 actualPsbOdd;
    u16 actualPsbEven;
    u16 actualAcv;
    u16 c;
    u16 d;

    if (regs[54] & 1) {
        c = 1;
        d = 2;
    } else {
        c = 2;
        d = 1;
    }
    if (dispPosY % 2 == 0) {
        actualPrbOdd = prbOdd + d * dispPosY;
        actualPsbOdd = psbOdd + d * ((c * acv - dispSizeY) - dispPosY);
        actualPrbEven = prbEven + d * dispPosY;
        actualPsbEven = psbEven + d * ((c * acv - dispSizeY) - dispPosY);
    } else {
        actualPrbOdd = prbEven + d * dispPosY;
        actualPsbOdd = psbEven + d * ((c * acv - dispSizeY) - dispPosY);
        actualPrbEven = prbOdd + d * dispPosY;
        actualPsbEven = psbOdd + d * ((c * acv - dispSizeY) - dispPosY);
    }
    actualAcv = dispSizeY / c;
    if (black) {
        actualPrbOdd += 2 * actualAcv - 2;
        actualPsbOdd += 2;
        actualPrbEven += 2 * actualAcv - 2;
        actualPsbEven += 2;
        actualAcv = 0;
    }
    regs[0] = equ | (actualAcv << 4);
    MARK_CHANGED(0);
    regs[7] = actualPrbOdd;
    MARK_CHANGED(7);
    regs[6] = actualPsbOdd;
    MARK_CHANGED(6);
    regs[9] = actualPrbEven;
    MARK_CHANGED(9);
    regs[8] = actualPsbEven;
    MARK_CHANGED(8);
}

void VIConfigure(const GXRenderModeObj *rm) {
    VITiming *tm;
    u16 regDspCfg;
    BOOL enabled;
    u32 newNonInter;
    u32 tvInBootrom;
    u32 tvInGame;

    enabled = OSDisableInterrupts();
    newNonInter = (u32)rm->viTVmode & 3;
    if (HorVer.nonInter != newNonInter) {
        changeMode = 1;
        HorVer.nonInter = newNonInter;
    }
    tvInGame = (u32)rm->viTVmode >> 2;
    tvInBootrom = *(u32 *)0x800000CC;
    if (tvInGame == 4) {
        static u32 message = 0;

        if (message == 0) {
            message = 1;
            OSReport("***************************************\n");
            OSReport(" ! ! ! C A U T I O N ! ! !             \n");
            OSReport("This TV format \"DEBUG_PAL\" is only for \n");
            OSReport("temporary solution until PAL DAC board \n");
            OSReport("is available. Please do NOT use this   \n");
            OSReport("mode in real games!!!                  \n");
            OSReport("***************************************\n");
        }
    }
    switch (tvInBootrom) {
    case 2:
    case 0:
    case 6:
        if (tvInGame == 0 || tvInGame == 2 || tvInGame == 6) {
            break;
        }
        goto panic;
    case 1:
    case 5:
        if (tvInGame == 1 || tvInGame == 5) {
            break;
        }
    default:
    panic:
        OSPanic("vi.c", 1908, "VIConfigure(): Tried to change mode from (%d) to (%d), which is forbidden\n", tvInBootrom,
                tvInGame);
    }
    if (tvInGame == 0 || tvInGame == 2) {
        HorVer.tv = tvInBootrom;
    } else {
        HorVer.tv = tvInGame;
    }
    HorVer.DispPosX = rm->viXOrigin;
    HorVer.DispPosY = (HorVer.nonInter == 1) ? (u16)(rm->viYOrigin * 2) : rm->viYOrigin;
    HorVer.DispSizeX = rm->viWidth;
    HorVer.FBSizeX = rm->fbWidth;
    HorVer.FBSizeY = rm->xfbHeight;
    HorVer.FBMode = rm->xFBmode;
    HorVer.PanSizeX = HorVer.FBSizeX;
    HorVer.PanSizeY = HorVer.FBSizeY;
    HorVer.PanPosX = 0;
    HorVer.PanPosY = 0;
    HorVer.DispSizeY = (HorVer.nonInter == 2)     ? HorVer.PanSizeY
                       : (HorVer.nonInter == 3)   ? HorVer.PanSizeY
                       : (HorVer.FBMode == 0)     ? (u16)(HorVer.PanSizeY * 2)
                                                  : HorVer.PanSizeY;
    HorVer.threeD = (HorVer.nonInter == 3) ? TRUE : FALSE;
    tm = getTiming((HorVer.tv << 2) + HorVer.nonInter);
    HorVer.timing = tm;
    AdjustPosition(tm->acv);
    if (encoderType == 0) {
        HorVer.tv = 3;
    }
    setInterruptRegs(tm);
    regDspCfg = regs[1];
    if (HorVer.nonInter == 2 || HorVer.nonInter == 3) {
        regDspCfg = (regDspCfg & ~4) | 4;
    } else {
        regDspCfg = (regDspCfg & ~4) | ((HorVer.nonInter & 1) << 2);
    }
    regDspCfg = (regDspCfg & ~8) | (HorVer.threeD << 3);
    if (HorVer.tv == 4 || HorVer.tv == 5 || HorVer.tv == 6) {
        regDspCfg = (regDspCfg & ~0x300);
    } else {
        regDspCfg = (u16)(regDspCfg & ~0x300) | (u16)(HorVer.tv << 8);
    }
    regs[1] = regDspCfg;
    MARK_CHANGED(1);
    regDspCfg = regs[54];
    if (rm->viTVmode == 2 || rm->viTVmode == 3 || rm->viTVmode == 26) {
        regDspCfg = (regDspCfg & ~1) | 1;
    } else {
        regDspCfg = (regDspCfg & ~1);
    }
    regs[54] = regDspCfg;
    MARK_CHANGED(54);
    setScalingRegs(HorVer.PanSizeX, HorVer.DispSizeX, HorVer.threeD);
    setHorizontalRegs(tm, HorVer.AdjustedDispPosX, HorVer.DispSizeX);
    setBBIntervalRegs(tm);
    setPicConfig(HorVer.FBSizeX, HorVer.FBMode, HorVer.PanPosX, HorVer.PanSizeX, &HorVer.wordPerLine, &HorVer.std,
                 &HorVer.wpl, &HorVer.xof);
    if (FBSet) {
        setFbbRegs(&HorVer, &HorVer.tfbb, &HorVer.bfbb, &HorVer.rtfbb, &HorVer.rbfbb);
    }
    setVerticalRegs(HorVer.AdjustedDispPosY, HorVer.AdjustedDispSizeY, tm->equ, tm->acv, tm->prbOdd, tm->prbEven,
                    tm->psbOdd, tm->psbEven, HorVer.black);
    OSRestoreInterrupts(enabled);
}

void VIConfigurePan(u16 xOrg, u16 yOrg, u16 width, u16 height) {
    BOOL enabled;
    VITiming *tm;

    enabled = OSDisableInterrupts();
    HorVer.PanPosX = xOrg;
    HorVer.PanPosY = yOrg;
    HorVer.PanSizeX = width;
    HorVer.PanSizeY = height;
    HorVer.DispSizeY = (HorVer.nonInter == 2)     ? HorVer.PanSizeY
                       : (HorVer.nonInter == 3)   ? HorVer.PanSizeY
                       : (HorVer.FBMode == 0)     ? (u16)(HorVer.PanSizeY * 2)
                                                  : HorVer.PanSizeY;
    tm = HorVer.timing;
    AdjustPosition(tm->acv);
    setScalingRegs(HorVer.PanSizeX, HorVer.DispSizeX, HorVer.threeD);
    setPicConfig(HorVer.FBSizeX, HorVer.FBMode, HorVer.PanPosX, HorVer.PanSizeX, &HorVer.wordPerLine, &HorVer.std,
                 &HorVer.wpl, &HorVer.xof);
    if (FBSet) {
        setFbbRegs(&HorVer, &HorVer.tfbb, &HorVer.bfbb, &HorVer.rtfbb, &HorVer.rbfbb);
    }
    setVerticalRegs(HorVer.AdjustedDispPosY, HorVer.DispSizeY, tm->equ, tm->acv, tm->prbOdd, tm->prbEven,
                    tm->psbOdd, tm->psbEven, HorVer.black);
    OSRestoreInterrupts(enabled);
}

void VIFlush(void) {
    BOOL enabled;
    s32 regIndex;

    enabled = OSDisableInterrupts();
    shdwChangeMode |= changeMode;
    changeMode = 0;
    shdwChanged |= changed;
    while (changed) {
        regIndex = cntlzd(changed);
        shdwRegs[regIndex] = regs[regIndex];
        changed &= ~VI_BITMASK(regIndex);
    }
    flushFlag = 1;
    NextBufAddr = HorVer.bufAddr;
    OSRestoreInterrupts(enabled);
}

void VISetNextFrameBuffer(void *fb) {
    BOOL enabled;

    enabled = OSDisableInterrupts();
    HorVer.bufAddr = (u32)fb;
    FBSet = 1;
    setFbbRegs(&HorVer, &HorVer.tfbb, &HorVer.bfbb, &HorVer.rtfbb, &HorVer.rbfbb);
    OSRestoreInterrupts(enabled);
}

void VISetBlack(BOOL black) {
    BOOL enabled;
    VITiming *tm;

    enabled = OSDisableInterrupts();
    HorVer.black = black;
    tm = HorVer.timing;
    setVerticalRegs(HorVer.AdjustedDispPosY, HorVer.DispSizeY, tm->equ, tm->acv, tm->prbOdd, tm->prbEven, tm->psbOdd,
                    tm->psbEven, HorVer.black);
    OSRestoreInterrupts(enabled);
}

u32 VIGetRetraceCount(void) {
    return retraceCount;
}

static void GetCurrentDisplayPosition(u32 *hct, u32 *vct) {
    u32 hcount;
    u32 vcount0;
    u32 vcount;

    vcount = __VIRegs[22] & 0x7FF;
    do {
        vcount0 = vcount;
        hcount = __VIRegs[23] & 0x7FF;
        vcount = __VIRegs[22] & 0x7FF;
    } while (vcount0 != vcount);
    *hct = hcount;
    *vct = vcount;
}

static inline u32 getCurrentHalfLine(void) {
    u32 hcount;
    u32 vcount;

    GetCurrentDisplayPosition(&hcount, &vcount);
    return ((vcount - 1) << 1) + ((hcount - 1) / CurrTiming->hlw);
}

static u32 getCurrentFieldEvenOdd(void) {
    return (getCurrentHalfLine() < CurrTiming->nhlines) ? 1 : 0;
}

u32 VIGetNextField(void) {
    s32 nextField;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    nextField = getCurrentFieldEvenOdd() ^ 1;
    OSRestoreInterrupts(enabled);
    return nextField ^ (HorVer.AdjustedDispPosY & 1);
}

u32 VIGetCurrentLine(void) {
    u32 halfLine;
    VITiming *tm;
    BOOL enabled;

    tm = CurrTiming;
    enabled = OSDisableInterrupts();
    halfLine = getCurrentHalfLine();
    OSRestoreInterrupts(enabled);
    if (halfLine >= tm->nhlines) {
        halfLine -= tm->nhlines;
    }
    return halfLine >> 1;
}

u32 VIGetTvFormat(void) {
    u32 format;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    switch (CurrTvMode) {
    case 0:
    case 3:
    case 6:
        format = 0;
        break;
    case 1:
    case 4:
        format = 1;
        break;
    case 5:
    case 2:
        format = CurrTvMode;
        break;
    }
    OSRestoreInterrupts(enabled);
    return format;
}

static void __VIDisplayPositionToXY(u32 hct, u32 vct, s16 *x, s16 *y) {
    u32 halfLine = ((vct - 1) << 1) + ((hct - 1) / CurrTiming->hlw);

    if (HorVer.nonInter == 0) {
        if (halfLine < CurrTiming->nhlines) {
            if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
                *y = -1;
            } else if (halfLine >= CurrTiming->nhlines - CurrTiming->psbOdd) {
                *y = -1;
            } else {
                *y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd) & ~1);
            }
        } else {
            halfLine -= CurrTiming->nhlines;
            if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbEven) {
                *y = -1;
            } else if (halfLine >= CurrTiming->nhlines - CurrTiming->psbEven) {
                *y = -1;
            } else {
                *y = (s16)(((halfLine - CurrTiming->equ * 3 - CurrTiming->prbEven) & ~1) + 1);
            }
        }
    } else if (HorVer.nonInter == 1) {
        if (halfLine >= CurrTiming->nhlines) {
            halfLine -= CurrTiming->nhlines;
        }
        if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
            *y = -1;
        } else if (halfLine >= CurrTiming->nhlines - CurrTiming->psbOdd) {
            *y = -1;
        } else {
            *y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd) & ~1);
        }
    } else if (HorVer.nonInter == 2) {
        if (halfLine < CurrTiming->nhlines) {
            if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbOdd) {
                *y = -1;
            } else if (halfLine >= CurrTiming->nhlines - CurrTiming->psbOdd) {
                *y = -1;
            } else {
                *y = (s16)(halfLine - CurrTiming->equ * 3 - CurrTiming->prbOdd);
            }
        } else {
            halfLine -= CurrTiming->nhlines;
            if (halfLine < CurrTiming->equ * 3 + CurrTiming->prbEven) {
                *y = -1;
            } else if (halfLine >= CurrTiming->nhlines - CurrTiming->psbEven) {
                *y = -1;
            } else {
                *y = (s16)((halfLine - CurrTiming->equ * 3 - CurrTiming->prbEven) & ~1);
            }
        }
    }
    *x = (s16)(hct - 1);
}

void __VIGetCurrentPosition(s16 *x, s16 *y) {
    u32 h;
    u32 v;

    GetCurrentDisplayPosition(&h, &v);
    __VIDisplayPositionToXY(h, v, x, y);
}
