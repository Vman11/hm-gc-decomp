
#define GXCPInterruptHandler fn_800D4AA8
#define GXInitFifoPtrs fn_800D4C48
#define GXInitFifoLimits fn_800D4CB8
#define GXSetBreakPtCallback fn_800D4F64
#define __GXFifoReadEnable fn_800D4FF4
#define __GXFifoReadDisable fn_800D5018
#define __GXFifoLink fn_800D503C
#define __GXWriteFifoIntEnable fn_800D5070
#define __GXWriteFifoIntReset fn_800D50A0
#define __GXCleanGPFifo fn_800D50D0
#define GXGetCPUFifo fn_800D51D0
#define GXGetGPFifo fn_800D51D8
#define GXRedirectWriteGatherPipe fn_800D51E0
#define GXRestoreWriteGatherPipe fn_800D52E8
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
#define GXClearBoundingBox fn_800D7774
#define GXClearGPMetric fn_800DAA70
#define GXClearVtxDesc fn_800D58D4
#define GXCopyDisp fn_800D7480
#define GXCopyTex fn_800D75E8
#define GXDrawDone fn_800D6700
#define GXEnableTexOffsets fn_800D6D64
#define GXFinishInterruptHandler fn_800D6A18
#define GXFlush fn_800D6270
#define GXGetLightAttnK fn_800D77D8
#define GXGetLightColor fn_800D7A00
#define GXGetLightDir fn_800D79CC
#define GXGetLightPos fn_800D7994
#define GXGetTexObjFmt fn_800D8318
#define GXGetTexObjMipMap fn_800D8320
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
#define __SetSURegs fn_800D8774
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
#define TokenCB lbl_8035A940
#define __GXSetVAT fn_800D5DE8
#define __cvt_fp2unsigned fn_800E2584
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
#include <stddef.h>
#include <dolphin/base/PPCArch.h>
#include <dolphin/gx.h>
#include <dolphin/os.h>

/* ---- __gx.h ---- */
#ifndef _DOLPHIN_GX_INTERNAL_H_
#define _DOLPHIN_GX_INTERNAL_H_

#include <dolphin/gx.h>

#ifdef __cplusplus
extern "C" {
#endif

// FIFO WRITE

#define GX_WRITE_U8(ub)     \
    GXWGFifo.u8 = (u8)(ub)

#define GX_WRITE_U16(us)   \
   GXWGFifo.u16 = (u16)(us)

#define GX_WRITE_U32(ui)   \
   GXWGFifo.u32 = (u32)(ui)

#define GX_WRITE_F32(f)     \
   GXWGFifo.f32 = (f32)(f);


// REG VERIF

#if DEBUG
#define VERIF_XF_REG(addr, value) \
do { \
    s32 regAddr = (addr); \
    if (regAddr >= 0 && regAddr < 0x50) { \
        __gxVerif->xfRegs[regAddr] = (value); \
        __gxVerif->xfRegsDirty[regAddr] = 1; \
    } \
} while (0)

#define VERIF_XF_REG_alt(addr, value) \
do { \
    s32 xfAddr = (addr); \
    if (xfAddr >= 0 && xfAddr < 0x50) { \
        __gxVerif->xfRegs[xfAddr] = (value); \
        __gxVerif->xfRegsDirty[xfAddr] = 1; \
    } \
} while (0)

#define VERIF_RAS_REG(value) (__gxVerif->rasRegs[((value) & 0xFF000000) >> 24] = value)

#define VERIF_MTXLIGHT(addr, data) \
do { \
    s32 xfAddr; \
    if (addr < 0x400U) { \
        __gxVerif->xfMtx[addr] = data; \
        __gxVerif->xfMtxDirty[addr] = 1; \
    } else if (addr < 0x500U) { \
        xfAddr = addr - 0x400; \
        __gxVerif->xfNrm[xfAddr] = data; \
        __gxVerif->xfNrmDirty[xfAddr] = 1; \
    } else if (addr < 0x600U) { \
        xfAddr = addr - 0x500; \
        __gxVerif->xfDMtx[xfAddr] = data; \
        __gxVerif->xfDMtxDirty[xfAddr] = 1; \
    } else if (addr < 0x680U) { \
        xfAddr = addr - 0x600; \
        __gxVerif->xfLight[xfAddr] = data; \
        __gxVerif->xfLightDirty[xfAddr] = 1; \
    } else { \
        xfAddr = addr - 0x1000; \
        if ((xfAddr >= 0) && (xfAddr < 0x50)) { \
            __gxVerif->xfRegs[xfAddr] = data; \
            __gxVerif->xfRegsDirty[xfAddr] = 1; \
        } \
    } \
} while (0)
#else
#define VERIF_XF_REG(addr, value) ((void)0)
#define VERIF_XF_REG_alt(addr, value) ((void)0)
#define VERIF_RAS_REG(value) ((void)0)
#endif

// WRITE REG

#define GX_WRITE_XF_REG(addr, value) \
do { \
    GX_WRITE_U8(0x10); \
    GX_WRITE_U32(0x1000 + (addr)); \
    GX_WRITE_U32(value); \
    VERIF_XF_REG(addr, value); \
} while (0)

#if DEBUG
#define GX_WRITE_XF_REG_2(addr, value) \
do { \
    u32 xfData = (value); &xfData; \
    GX_WRITE_U32(value); \
    VERIF_XF_REG_alt(addr, xfData); \
} while (0)

#define GX_WRITE_XF_REG_F(addr, value) \
do { \
    f32 xfData = (value); \
    GX_WRITE_F32(value); \
    VERIF_XF_REG_alt(addr, *(u32 *)&xfData); \
} while (0)
#else
#define GX_WRITE_XF_REG_2(addr, value) \
do { \
    GX_WRITE_U32(value); \
} while (0)

#define GX_WRITE_XF_REG_F(addr, value) \
do { \
    GX_WRITE_F32(value); \
} while (0)
#endif

#define GX_WRITE_RAS_REG(value) \
do { \
    GX_WRITE_U8(0x61); \
    GX_WRITE_U32(value); \
    VERIF_RAS_REG(value); \
} while (0)

#ifdef DEBUG
#define GX_WRITE_SOME_REG2(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
    if (regAddr >= 0 && regAddr < 4) { \
        __GXData->indexBase[regAddr] = c; \
    } \
} while (0)
#else
#define GX_WRITE_SOME_REG2(a, b, c, addr) \
do { \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
} while (0)
#endif

#ifdef DEBUG
#define GX_WRITE_SOME_REG3(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
    if (regAddr >= 0 && regAddr < 4) { \
        __GXData->indexStride[regAddr] = c; \
    } \
} while (0)
#else
#define GX_WRITE_SOME_REG3(a, b, c, addr) \
do { \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
} while (0)
#endif

#define GX_WRITE_SOME_REG4(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
} while (0)

// REG MACROS

#define GET_REG_FIELD(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))

// TODO: reconcile reg macro differences
// this one is needed to match non GX libs
#define OLD_SET_REG_FIELD(line, reg, size, shift, val) \
do { \
    ASSERTMSGLINE(line, ((u32)(val) & ~((1 << (size)) - 1)) == 0, "GX Internal: Register field out of range"); \
    (reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)); \
} while (0)

// above doesn't seem to work with GX, only can get it to work with this
#define SET_REG_FIELD(line, reg, size, shift, val) \
do { \
    ASSERTMSGLINE(line, ((u32)(val) & ~((1 << (size)) - 1)) == 0, "GX Internal: Register field out of range"); \
    (reg) = ((u32)__rlwimi((u32)(reg), (val), (shift), 32 - (shift) - (size), 31 - (shift))); \
} while (0)

#define CHECK_GXBEGIN(line, name) ASSERTMSGLINE(line, !__GXinBegin, "'" name "' is not allowed between GXBegin/GXEnd")

/* GXAttr */
void __GXSetVCD(void);
void __GXSetVAT(void);

/* GXBump */
void __GXUpdateBPMask(void);
void __GXFlushTextureState(void);

/* GXFifo */
// GXFifoObj private data
typedef struct __GXFifoObj {
    u8* base;
    u8* top;
    u32 size;
    u32 hiWatermark;
    u32 loWatermark;
    void* rdPtr;
    void* wrPtr;
    s32 count;
    u8 bind_cpu;
    u8 bind_gp;
} __GXFifoObj;

void __GXSaveCPUFifoAux(__GXFifoObj* realFifo);
void __GXFifoInit(void);
void __GXInsaneWatermark(void);
void __GXCleanGPFifo(void);

/* GXGeometry */
void __GXSetDirtyState(void);
void __GXSendFlushPrim(void);
void __GXSetGenMode(void);

/* GXInit */
void __GXInitGX();
void __GXInitRevisionBits(void);

typedef struct __GXData_struct {
    u16 vNumNot;
    u16 bpSentNot;
    u16 vNum;
    u16 vLim;
    u32 cpEnable;
    u32 cpStatus;
    u32 cpClr;
    u32 vcdLo;
    u32 vcdHi;
    u32 vatA[8];
    u32 vatB[8];
    u32 vatC[8];
    u32 lpSize;
    u32 matIdxA;
    u32 matIdxB;
    u32 indexBase[4];
    u32 indexStride[4];
    u32 ambColor[2];
    u32 matColor[2];
    u32 suTs0[8];
    u32 suTs1[8];
    u32 suScis0;
    u32 suScis1;
    u32 tref[8];
    u32 iref;
    u32 bpMask;
    u32 IndTexScale0;
    u32 IndTexScale1;
    u32 tevc[16];
    u32 teva[16];
    u32 tevKsel[8];
    u32 cmode0;
    u32 cmode1;
    u32 zmode;
    u32 peCtrl;
    u32 cpDispSrc;
    u32 cpDispSize;
    u32 cpDispStride;
    u32 cpDisp;
    u32 cpTexSrc;
    u32 cpTexSize;
    u32 cpTexStride;
    u32 cpTex;
    u8 cpTexZ;
    u32 genMode;
    GXTexRegion TexRegions0[8];
    GXTexRegion TexRegions1[8];
    GXTexRegion TexRegions2[8];
    GXTlutRegion TlutRegions[20];
    GXTexRegion* (*texRegionCallback)(GXTexObj*, GXTexMapID);
    GXTlutRegion* (*tlutRegionCallback)(u32);
    GXAttrType nrmType;
    u8 hasNrms;
    u8 hasBiNrms;
    u32 projType;
    f32 projMtx[6];
    f32 vpLeft;
    f32 vpTop;
    f32 vpWd;
    f32 vpHt;
    f32 vpNearz;
    f32 vpFarz;
    f32 zOffset;
    f32 zScale;
    u32 tImage0[8];
    u32 tMode0[8];
    u32 texmapId[16];
    u32 tcsManEnab;
    u32 tevTcEnab;
    GXPerf0 perf0;
    GXPerf1 perf1;
    u32 perfSel;
    u8 inDispList;
    u8 dlSaveContext;
    u8 abtWaitPECopy;
    u8 dirtyVAT;
    u32 dirtyState;
} GXData;

extern GXData* const __GXData;
extern void* __memReg;
extern void* __peReg;
extern void* __cpReg;
extern void* __piReg;

#if DEBUG
extern GXBool __GXinBegin;
#endif

#define GX_GET_MEM_REG(offset) (*(volatile u16*)((volatile u16*)(__memReg) + (offset)))
#define GX_GET_CP_REG(offset)  (*(volatile u16*)((volatile u16*)(__cpReg) + (offset)))
#define GX_GET_PE_REG(offset)  (*(volatile u16*)((volatile u16*)(__peReg) + (offset)))
#define GX_GET_PI_REG(offset)  (*(volatile u32*)((volatile u32*)(__piReg) + (offset)))

#define GX_SET_MEM_REG(offset, val) (*(volatile u16*)((volatile u16*)(__memReg) + (offset)) = val)
#define GX_SET_CP_REG(offset, val)  (*(volatile u16*)((volatile u16*)(__cpReg) + (offset)) = val)
#define GX_SET_PE_REG(offset, val)  (*(volatile u16*)((volatile u16*)(__peReg) + (offset)) = val)
#define GX_SET_PI_REG(offset, val)  (*(volatile u32*)((volatile u32*)(__piReg) + (offset)) = val)

/* GXMisc */
void __GXBypass(u32 reg);
u16 __GXReadPEReg(u32 reg);
void __GXPEInit(void);
void __GXAbort();

/* GXPerf */
void __GXSetBWDials(u16 cpDial, u16 tcDial, u16 peDial, u16 cpuRdDial, u16 cpuWrDial);

static inline u32 __GXReadCPCounterU32(u32 regAddrL, u32 regAddrH) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_CP_REG(regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL = GX_GET_CP_REG(regAddrL);
        ctrH0 = GX_GET_CP_REG(regAddrH);
    } while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

static inline u32 __GXReadMEMCounterU32(u32 regAddrL, u32 regAddrH) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_MEM_REG(regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL = GX_GET_MEM_REG(regAddrL);
        ctrH0 = GX_GET_MEM_REG(regAddrH);
    } while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

static inline u32 __GXReadPECounterU32(u32 regAddrL, u32 regAddrH) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_PE_REG(regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL = GX_GET_PE_REG(regAddrL);
        ctrH0 = GX_GET_PE_REG(regAddrH);
    } while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

/* GXSave */
void __GXShadowDispList(void* list, u32 nbytes);
void __GXShadowIndexState(u32 idx_reg, u32 reg_data);
void __GXPrintShadowState(void);

/* GXStubs */
void __GXSetRange(f32 nearz, f32 fgSideX);

/* GXTexture */
void __GetImageTileCount(GXTexFmt fmt, u16 wd, u16 ht, u32* rowTiles, u32* colTiles, u32* cmpTiles);
void __GXSetSUTexRegs(void);
void __GXGetSUTexSize(GXTexCoordID coord, u16* width, u16* height);
void __GXSetTmemConfig(u32 config);

/* GXTransform */
void __GXSetMatrixIndex(GXAttr matIdxAttr);
void __GXSetProjection(void);
void __GXSetViewport();


/* GXVerifRAS */
void __GXVerifySU(void);
void __GXVerifyBUMP(void);
void __GXVerifyTEX(void);
void __GXVerifyTEV(void);
void __GXVerifyPE(void);

/* GXVerif */
typedef enum {
    GXWARN_INVALID_VTX_FMT = 0,
    GXWARN_TEX_SIZE_INIT = 1,
    GXWARN_SCISSOR_RECT_LEFT = 2,
    GXWARN_SCISSOR_RECT_TOP = 3,
    GXWARN_SCISSOR_RECT_RIGHT = 4,
    GXWARN_SCISSOR_RECT_BOT = 5,
    GXWARN_SAMPLE_VALUE = 6,
    GXWARN_BUMP_CMD = 7,
    GXWARN_INVALID_INDIRECT = 8,
    GXWARN_INDIRECT_MTX = 9,
    GXWARN_IND_TEX_NO_INIT = 10,
    GXWARN_IND_TEX_NO_SCALE = 11,
    GXWARN_IND_TEX_BUMP = 12,
    GXWARN_BUMP_ACCUMULATION = 13,
    GXWARN_BUMP_ALPHA_EN = 14,
    GXWARN_IND_DIR_MASK = 15,
    GXWARN_TEV_TEX_REF = 16,
    GXWARN_TEV_INV_TEX_COORD = 17,
    GXWARN_IND_DIR_BOTH = 18,
    GXWARN_TEX_CONFIG = 19,
    GXWARN_TEX_BASE = 20,
    GXWARN_TLUT_CONFIG = 21,
    GXWARN_TEX_POW2 = 22,
    GXWARN_TEX_CLAMP = 23,
    GXWARN_TEX_MIN_FILT = 24,
    GXWARN_MIN_LOD = 25,
    GXWARN_MAX_LOD = 26,
    GXWARN_DIAG_LOD = 27,
    GXWARN_TEX_ANISO = 28,
    GXWARN_TEX_FIELD = 29,
    GXWARN_TEX_RND_FP = 30,
    GXWARN_RND_CLR_INDX = 31,
    GXWARN_TEV_ENV = 32,
    GXWARN_TEV_INV_CHAN = 33,
    GXWARN_TEV_NULL_TEX = 34,
    GXWARN_TEV_NULL_TEX_A = 35,
    GXWARN_TEV_DIRTY_REG = 36,
    GXWARN_TEV_DIRTY_REG_A = 37,
    GXWARN_TEV_CLR_CLAMP = 38,
    GXWARN_TEV_A_CLAMP = 39,
    GXWARN_ZTEX_OFFSET = 40,
    GXWARN_ZTEX_INVALID = 41,
    GXWARN_TEV_LAST_CLR = 42,
    GXWARN_TEV_LAST_A = 43,
    GXWARN_TEV_LAST_CLR_WRAP = 44,
    GXWARN_TEV_LAST_A_WRAP = 45,
    GXWARN_Z_BEFORE_T_A = 46,
    GXWARN_BLEND_LOGICOP = 47,
    GXWARN_DITHER_MODE = 48,
    GXWARN_MULTISAMP0 = 49,
    GXWARN_MULTISAMP1 = 50,
    GXWARN_SAMP_ORDER = 51,
    GXWARN_INVALID_TG_TYPE = 52,
    GXWARN_XF_CTRL_UNINIT = 53,
    GXWARN_XF_CTRL_INIT = 54,
    GXWARN_INV_COLOR_TG_COMB = 55,
    GXWARN_XF_NO_CLR_TEX = 56,
    GXWARN_VTX_NO_GEOM = 57,
    GXWARN_VAT_MISMATCH = 58,
    GXWARN_VAT_NRM_TYPE = 59,
    GXWARN_VAT_NRM_FRAC = 60,
    GXWARN_VAT_F32_FRAC = 61,
    GXWARN_VAT_CLR_FRAC = 62,
    GXWARN_INV_IVS_CLR = 63,
    GXWARN_NRM_XF0_CP1 = 64,
    GXWARN_NRM_XF0_CP3 = 65,
    GXWARN_NRM_XF1_CP0 = 66,
    GXWARN_NRM_XF1_CP3 = 67,
    GXWARN_NRM_XF3_CP1 = 68,
    GXWARN_VCD_FMT_UNSUP = 69,
    GXWARN_VCD_CLR_ORDER = 70,
    GXWARN_VCD_TEX_ORDER = 71,
    GXWARN_TEX_SRC_NPOS = 72,
    GXWARN_TEX_SRC_NNRM = 73,
    GXWARN_TEX_SRC_NCLR0 = 74,
    GXWARN_TEX_SRC_NCLR1 = 75,
    GXWARN_TEX_SRC_NNBT = 76,
    GXWARN_TEX_SRC_NTEX = 77,
    GXWARN_INV_TEX_SRC = 78,
    GXWARN_INV_TG_ORDER = 79,
    GXWARN_BM_INV_MTX_NDX = 80,
    GXWARN_BM_INV_TEX = 81,
    GXWARN_BM_INV_LIT_POS = 82,
    GXWARN_BM_NO_NBT = 83,
    GXWARN_INV_TEX_NUM = 84,
    GXWARN_VIEWPORT_TOP = 85,
    GXWARN_VIEWPORT_BOTTOM = 86,
    GXWARN_VIEWPORT_LEFT = 87,
    GXWARN_VIEWPORT_RIGHT = 88,
    GXWARN_CLR_INV_SPEC = 89,
    GXWARN_CLR_NO_NRM = 90,
    GXWARN_CLR_INV_MTX_NDX = 91,
    GXWARN_VAL_INFINITY = 92,
    GXWARN_VAL_NAN = 93,
    GXWARN_VAL_SMALL = 94,
    GXWARN_VAL_LARGE = 95,
    GXWARN_MTX1_UNINIT = 96,
    GXWARN_GM_UNINIT = 97,
    GXWARN_TEX_XFN_SUM = 98,
    GXWARN_CLR_XFN_SUM = 99,
    GXWARN_INV_NUM_ANY_TEX = 100,
    GXWARN_INV_NUM_REG_TEX = 101,
    GXWARN_INV_NUM_BM_TEX = 102,
    GXWARN_INV_NUM_CLR_TEX = 103,
    GXWARN_INV_CLR_TEX = 104,
    GXWARN_DUP_CLR_TEX = 105,
    GXWARN_BM_INV_MTX_VAL = 106,
    GXWARN_TEX_INV_MTX_VAL = 107,
    GXWARN_LIT_INV_REG = 108,
    GXWARN_CLR_INV_MTX_VAL = 109,
    GXWARN_INV_MTX_VAL = 110,
    GXWARN_ADDR_UNINIT = 111,
    GXWARN_REG_UNINIT = 112,
    GXWARN_DL_INV_CMD = 113,
    GXWARN_DL_NESTED = 114,
    GXWARN_CLR_XF0_CP1 = 115,
    GXWARN_CLR_XF1_CP0 = 116,
    GXWARN_CLR_XF1_CP2 = 117,
    GXWARN_CLR_XF2_CPN1 = 118,
    GXWARN_CLR_XF2_CPN2 = 119,
    GXWARN_INV_NUM_COLORS = 120,
    GXWARN_INV_TG_SRC = 121,
    GXWARN_CLR_ADDR_UNINIT = 122,
    GXWARN_CLR_MAT_UNINIT = 123,
    GXWARN_CLR_AMB_UNINIT = 124,
    GXWARN_MAX = 125,
} GXWarnID;

#define __GX_WARN(id) (__gxVerif->cb(__gxvWarnLev[(id)], (id), __gxvWarnings[(id)]))
#define __GX_WARNF(id, ...) \
do { \
    sprintf(__gxvDummyStr, __gxvWarnings[(id)], __VA_ARGS__); \
    __gxVerif->cb(__gxvWarnLev[(id)], (id), __gxvDummyStr); \
} while (0)

#define __GX_WARN2(level, id) (__gxVerif->cb(level, (id), __gxvWarnings[(id)]))
#define __GX_WARN2F(level, id, ...) \
do { \
    sprintf(__gxvDummyStr, __gxvWarnings[(id)], __VA_ARGS__); \
    __gxVerif->cb(level, (id), __gxvDummyStr); \
} while (0)

typedef struct __GXVerifyData {
    GXVerifyCallback cb;
    GXWarningLevel verifyLevel;
    u32 xfRegs[80];
    u32 xfMtx[256];
    u32 xfNrm[96];
    u32 xfDMtx[256];
    u32 xfLight[128];
    u32 rasRegs[256];
    u8 xfRegsDirty[80];
    u8 xfMtxDirty[256];
    u8 xfNrmDirty[96];
    u8 xfDMtxDirty[256];
    u8 xfLightDirty[128];
} __GXVerifyData;

extern __GXVerifyData* __gxVerif;
extern char* __gxvWarnings[125];
extern char __gxvDummyStr[256];
extern GXWarningLevel __gxvWarnLev[];

void __GXVerifyGlobal(void);
void __GXVerifyCP(GXVtxFmt fmt);
void __GXVerifyState(GXVtxFmt vtxfmt);

/* GXVerifXF */
void __GXVerifyXF(void);

#ifdef __cplusplus
}
#endif

#endif


static __GXFifoObj* CPUFifo;
static __GXFifoObj* GPFifo;
static OSThread* __GXCurrentThread;
static GXBool CPGPLinked;
static BOOL GXOverflowSuspendInProgress;
static GXBreakPtCallback BreakPointCB;
static u32 __GXOverflowCount;

#if DEBUG
static BOOL IsWGPipeRedirected;
#endif

void* __GXCurrentBP;

static void __GXFifoReadEnable(void);
static void __GXFifoReadDisable(void);
static void __GXFifoLink(u8 en);
static void __GXWriteFifoIntEnable(u8 hiWatermarkEn, u8 loWatermarkEn);
static void __GXWriteFifoIntReset(u8 hiWatermarkClr, u8 loWatermarkClr);

#if DEBUG
static char __data_0[] = "[GXOverflowHandler]";
#endif

static inline void GXOverflowHandler(__OSInterrupt interrupt, OSContext* context) {
#if DEBUG
    if (__gxVerif->verifyLevel > GX_WARN_SEVERE) {
        OSReport(__data_0);
    }
#endif
    ASSERTLINE(LINE(377, 377, 381), !GXOverflowSuspendInProgress);

    __GXOverflowCount++;
    __GXWriteFifoIntEnable(0, 1);
    __GXWriteFifoIntReset(1, 0);
    GXOverflowSuspendInProgress = TRUE;

#if DEBUG
    if (__gxVerif->verifyLevel > GX_WARN_SEVERE) {
        OSReport("[GXOverflowHandler Sleeping]");
    }
#endif
    OSSuspendThread(__GXCurrentThread);
}

static inline void GXUnderflowHandler(s16 interrupt, OSContext* context) {
#if DEBUG
    if (__gxVerif->verifyLevel > GX_WARN_SEVERE) {
        OSReport("[GXUnderflowHandler]");
    }
#endif
    ASSERTLINE(LINE(419, 419, 423), GXOverflowSuspendInProgress);

    OSResumeThread(__GXCurrentThread);
    GXOverflowSuspendInProgress = FALSE;
    __GXWriteFifoIntReset(1, 1);
    __GXWriteFifoIntEnable(1, 0);
}

#define SOME_SET_REG_MACRO(reg, size, shift, val)                                                   \
	do {                                                                                            \
		(reg) = (u32)__rlwimi((u32)(reg), (val), (shift), (32 - (shift) - (size)), (31 - (shift))); \
	} while (0);

static inline void GXBreakPointHandler(__OSInterrupt interrupt, OSContext* context) {
    OSContext exceptionContext;

    SOME_SET_REG_MACRO(__GXData->cpEnable, 1, 5, 0);
    GX_SET_CP_REG(1, __GXData->cpEnable);
    if (BreakPointCB != NULL) {
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        BreakPointCB();
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

static void GXCPInterruptHandler(__OSInterrupt interrupt, OSContext* context) {
    __GXData->cpStatus = GX_GET_CP_REG(0);
    if (GET_REG_FIELD(__GXData->cpEnable, 1, 3) && GET_REG_FIELD(__GXData->cpStatus, 1, 1)) {
        GXUnderflowHandler(interrupt, context);
    }
    if (GET_REG_FIELD(__GXData->cpEnable, 1, 2) && GET_REG_FIELD(__GXData->cpStatus, 1, 0)) {
        GXOverflowHandler(interrupt, context);
    }
    if (GET_REG_FIELD(__GXData->cpEnable, 1, 5) && GET_REG_FIELD(__GXData->cpStatus, 1, 4)) {
        GXBreakPointHandler(interrupt, context);
    }
}

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size) {
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;

    ASSERTMSGLINE(LINE(542, 542, 546), realFifo != CPUFifo,     "GXInitFifoBase: fifo is attached to CPU");
    ASSERTMSGLINE(LINE(544, 544, 548), realFifo != GPFifo,      "GXInitFifoBase: fifo is attached to GP");
    ASSERTMSGLINE(LINE(546, 546, 550), ((u32)base & 0x1F) == 0, "GXInitFifoBase: base must be 32B aligned");
    ASSERTMSGLINE(LINE(548, 548, 552), base != NULL,            "GXInitFifoBase: base pointer is NULL");
    ASSERTMSGLINE(LINE(550, 550, 554), (size & 0x1F) == 0,      "GXInitFifoBase: size must be 32B aligned");
    ASSERTMSGLINE(LINE(552, 552, 556), size >= 0x10000,         "GXInitFifoBase: fifo is not large enough");

    realFifo->base = base;
    realFifo->top = (u8*)base + size - 4;
    realFifo->size = size;
    realFifo->count = 0;
    GXInitFifoLimits(fifo, size - 0x4000, (size >> 1) & ~0x1F);
    GXInitFifoPtrs(fifo, base, base);
}

void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr) {
    __GXFifoObj* realFifo = (__GXFifoObj *)fifo;
    BOOL enabled;

    ASSERTMSGLINE(LINE(592, 592, 596), realFifo != CPUFifo,         "GXInitFifoPtrs: fifo is attached to CPU");
    ASSERTMSGLINE(LINE(594, 594, 598), realFifo != GPFifo,          "GXInitFifoPtrs: fifo is attached to GP");
    ASSERTMSGLINE(LINE(596, 596, 600), ((u32)readPtr & 0x1F) == 0,  "GXInitFifoPtrs: readPtr not 32B aligned");
    ASSERTMSGLINE(LINE(598, 598, 602), ((u32)writePtr & 0x1F) == 0, "GXInitFifoPtrs: writePtr not 32B aligned");
    ASSERTMSGLINE(LINE(601, 601, 605), realFifo->base <= readPtr && readPtr < realFifo->top,   "GXInitFifoPtrs: readPtr not in fifo range");
    ASSERTMSGLINE(LINE(604, 604, 608), realFifo->base <= writePtr && writePtr < realFifo->top, "GXInitFifoPtrs: writePtr not in fifo range");

    enabled = OSDisableInterrupts();
    realFifo->rdPtr = readPtr;
    realFifo->wrPtr = writePtr;
    realFifo->count = (u8*)writePtr - (u8*)readPtr;
    if (realFifo->count < 0) {
        realFifo->count += realFifo->size;
    }
    OSRestoreInterrupts(enabled);
}

void GXInitFifoLimits(GXFifoObj* fifo, u32 hiWatermark, u32 loWatermark) {
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;

    ASSERTMSGLINE(LINE(641, 641, 645), realFifo != GPFifo,        "GXInitFifoLimits: fifo is attached to GP");
    ASSERTMSGLINE(LINE(643, 643, 647), (hiWatermark & 0x1F) == 0, "GXInitFifoLimits: hiWatermark not 32B aligned");
    ASSERTMSGLINE(LINE(645, 645, 649), (loWatermark & 0x1F) == 0, "GXInitFifoLimits: loWatermark not 32B aligned");
    ASSERTMSGLINE(LINE(647, 647, 651), hiWatermark < realFifo->top - realFifo->base, "GXInitFifoLimits: hiWatermark too large");
    ASSERTMSGLINE(LINE(649, 649, 653), loWatermark < hiWatermark, "GXInitFifoLimits: hiWatermark below lo watermark");

    realFifo->hiWatermark = hiWatermark;
    realFifo->loWatermark = loWatermark;
}

#define GX_SET_PI_REG(offset, val) (*(volatile u32*)((volatile u32*)(__piReg) + (offset)) = val)

// NONMATCHING DEBUG
void GXSetCPUFifo(GXFifoObj* fifo) {
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    BOOL enabled = OSDisableInterrupts();

    CPUFifo = realFifo;
    if (CPUFifo == GPFifo) {
        u32 reg = 0;

        GX_SET_PI_REG(3, (u32)realFifo->base & 0x3FFFFFFF);
        GX_SET_PI_REG(4, (u32)realFifo->top & 0x3FFFFFFF);

        SET_REG_FIELD(LINE(691, 691, 695), reg, 21, 5, (u32)realFifo->wrPtr >> 5);
        SET_REG_FIELD(LINE(691, 691, 695), reg, 1, 26, 0);
        GX_SET_PI_REG(5, reg);

        CPGPLinked = GX_TRUE;

        __GXWriteFifoIntReset(1, 1);
        __GXWriteFifoIntEnable(1, 0);
        __GXFifoLink(1);
    } else {
        u32 reg;

        if (CPGPLinked) {
            __GXFifoLink(0);
            CPGPLinked = GX_FALSE;
        }

        __GXWriteFifoIntEnable(0, 0);
        reg = 0;
        GX_SET_PI_REG(3, (u32)realFifo->base & 0x3FFFFFFF);
        GX_SET_PI_REG(4, (u32)realFifo->top & 0x3FFFFFFF);
        SET_REG_FIELD(LINE(726, 726, 730), reg, 21, 5, (u32)realFifo->wrPtr >> 5);
        SET_REG_FIELD(LINE(726, 726, 730), reg, 1, 26, 0);
        GX_SET_PI_REG(5, reg);
    }

    PPCSync();
    OSRestoreInterrupts(enabled);
}

void GXSetGPFifo(GXFifoObj* fifo) {
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;
    BOOL enabled = OSDisableInterrupts();
#if SDK_REVISION >= 2
    u32 stbtmp;
#endif

    __GXFifoReadDisable();
    __GXWriteFifoIntEnable(0, 0);
    GPFifo = realFifo;

    GX_SET_CP_REG(16, (u32)realFifo->base & 0xFFFF);
    GX_SET_CP_REG(18, (u32)realFifo->top & 0xFFFF);
    GX_SET_CP_REG(24, realFifo->count & 0xFFFF);
    GX_SET_CP_REG(26, (u32)realFifo->wrPtr & 0xFFFF);
    GX_SET_CP_REG(28, (u32)realFifo->rdPtr & 0xFFFF);
    GX_SET_CP_REG(20, (u32)realFifo->hiWatermark & 0xFFFF);
    GX_SET_CP_REG(22, (u32)realFifo->loWatermark & 0xFFFF);
    GX_SET_CP_REG(17, ((u32)realFifo->base & 0x3FFFFFFF) >> 16);
    GX_SET_CP_REG(19, ((u32)realFifo->top & 0x3FFFFFFF) >> 16);
    GX_SET_CP_REG(25, realFifo->count >> 16);
    GX_SET_CP_REG(27, ((u32)realFifo->wrPtr & 0x3FFFFFFF) >> 16);
    GX_SET_CP_REG(29, ((u32)realFifo->rdPtr & 0x3FFFFFFF) >> 16);
    GX_SET_CP_REG(21, (u32)realFifo->hiWatermark >> 16);
    GX_SET_CP_REG(23, (u32)realFifo->loWatermark >> 16);

    PPCSync();

    if (CPUFifo == GPFifo) {
        CPGPLinked = GX_TRUE;
        __GXWriteFifoIntEnable(1, 0);
        __GXFifoLink(1);
    } else {
        CPGPLinked = GX_FALSE;
        __GXWriteFifoIntEnable(0, 0);
        __GXFifoLink(0);
    }

#if SDK_REVISION >= 2
    stbtmp = __GXData->cpEnable;
    SET_REG_FIELD(0, stbtmp, 1, 1, 0);
    SET_REG_FIELD(0, stbtmp, 1, 5, 0);
    GX_SET_CP_REG(1, stbtmp);
    GX_SET_CP_REG(1, __GXData->cpEnable);
#endif
    __GXWriteFifoIntReset(1, 1);
    __GXFifoReadEnable();
    OSRestoreInterrupts(enabled);
}

#define SOME_MACRO1(fifo) \
do { \
    u32 temp = GX_GET_CP_REG(29) << 16; \
    temp |= GX_GET_CP_REG(28); \
    fifo->rdPtr = OSPhysicalToCached(temp); \
} while (0)

#define SOME_MACRO2(fifo) \
do { \
    u32 temp = GX_GET_CP_REG(25) << 16; \
    temp |= GX_GET_CP_REG(24); \
    fifo->count = temp; \
} while (0)

#if SDK_REVISION >= 2
static void __GXSaveFifoCPStat(__GXFifoObj* realFifo) {
    u32 cpStatus;
    u8 readIdle;

#if DEBUG
    if (__gxVerif->verifyLevel != GX_WARN_NONE) {
        cpStatus = GX_GET_CP_REG(0);
        readIdle = cpStatus & 0x14;
        ASSERTMSGLINE(856, readIdle, "GXSaveGPFifo: GP is not idle");
    }
#endif

    SOME_MACRO1(realFifo);
    SOME_MACRO2(realFifo);
}

static void __GXSaveFifoPIStat(__GXFifoObj* realFifo) {
    realFifo->base = OSPhysicalToCached(GX_GET_PI_REG(3));
    realFifo->top = OSPhysicalToCached(GX_GET_PI_REG(4));
    realFifo->wrPtr = OSPhysicalToCached(GX_GET_PI_REG(5) & 0xFBFFFFFF);
}
#endif

static inline void __GXSaveCPUFifoAux(__GXFifoObj* realFifo) {
    BOOL enabled = OSDisableInterrupts();

#if SDK_REVISION < 2
    realFifo->base = OSPhysicalToCached(GX_GET_PI_REG(3));
    realFifo->top = OSPhysicalToCached(GX_GET_PI_REG(4));
    realFifo->wrPtr = OSPhysicalToCached(GX_GET_PI_REG(5) & 0xFBFFFFFF);
#else
    __GXSaveFifoPIStat(realFifo);
#endif

    if (CPGPLinked) {
#if SDK_REVISION < 2
        SOME_MACRO1(realFifo);
        SOME_MACRO2(realFifo);
#else
        __GXSaveFifoCPStat(realFifo);
#endif
    } else {
        realFifo->count = (u8*)realFifo->wrPtr - (u8*)realFifo->rdPtr;
        if (realFifo->count < 0)
            realFifo->count += realFifo->size;
    }
    OSRestoreInterrupts(enabled);
}

static inline void* GXGetFifoBase(const GXFifoObj* fifo) {
    __GXFifoObj* realFifo = (__GXFifoObj*)fifo;

    return realFifo->base;
}

GXBreakPtCallback GXSetBreakPtCallback(GXBreakPtCallback cb) {
    GXBreakPtCallback oldcb = BreakPointCB;
    BOOL enabled = OSDisableInterrupts();

    BreakPointCB = cb;
    OSRestoreInterrupts(enabled);
    return oldcb;
}

void* __GXCurrentBP;

void __GXFifoInit(void) {
    __OSSetInterruptHandler(0x11, GXCPInterruptHandler);
    __OSUnmaskInterrupts(0x4000);
    __GXCurrentThread = OSGetCurrentThread();
    GXOverflowSuspendInProgress = FALSE;
    CPUFifo = NULL;
    GPFifo = NULL;
}

static void __GXFifoReadEnable(void) {
    SET_REG_FIELD(0, __GXData->cpEnable, 1, 0, 1);
    GX_SET_CP_REG(1, __GXData->cpEnable);
}

static void __GXFifoReadDisable(void) {
    SET_REG_FIELD(0, __GXData->cpEnable, 1, 0, 0);
    GX_SET_CP_REG(1, __GXData->cpEnable);
}

static void __GXFifoLink(u8 en) {
    SET_REG_FIELD(LINE(1242, 1242, 1299), __GXData->cpEnable, 1, 4, (en != 0) ? 1 : 0);
    GX_SET_CP_REG(1, __GXData->cpEnable);
}

static void __GXWriteFifoIntEnable(u8 hiWatermarkEn, u8 loWatermarkEn) {
    SET_REG_FIELD(LINE(1264, 1264, 1321), __GXData->cpEnable, 1, 2, hiWatermarkEn);
    SET_REG_FIELD(LINE(1265, 1265, 1322), __GXData->cpEnable, 1, 3, loWatermarkEn);
    GX_SET_CP_REG(1, __GXData->cpEnable);
}

static void __GXWriteFifoIntReset(u8 hiWatermarkClr, u8 loWatermarkClr) {
    SET_REG_FIELD(LINE(1288, 1288, 1345), __GXData->cpClr, 1, 0, hiWatermarkClr);
    SET_REG_FIELD(LINE(1289, 1289, 1346), __GXData->cpClr, 1, 1, loWatermarkClr);
    GX_SET_CP_REG(2, __GXData->cpClr);
}

void __GXCleanGPFifo(void) {
    GXFifoObj dummyFifo;
    GXFifoObj* gpFifo;
    GXFifoObj* cpuFifo;
    void* base;

    gpFifo = GXGetGPFifo();
    if (gpFifo == (GXFifoObj*)NULL)
        return;

    cpuFifo = GXGetCPUFifo();
    base = GXGetFifoBase(gpFifo);

    dummyFifo = *gpFifo;
    GXInitFifoPtrs(&dummyFifo, base, base);
    GXSetGPFifo(&dummyFifo);
    if (cpuFifo == gpFifo) {
        GXSetCPUFifo(&dummyFifo);
    }
    GXInitFifoPtrs(gpFifo, base, base);
    GXSetGPFifo(gpFifo);
    if (cpuFifo == gpFifo) {
        GXSetCPUFifo(cpuFifo);
    }
}

GXFifoObj* GXGetCPUFifo(void) {
    return (GXFifoObj*)CPUFifo;
}

GXFifoObj* GXGetGPFifo(void) {
    return (GXFifoObj*)GPFifo;
}

// NONMATCHING
volatile void* GXRedirectWriteGatherPipe(void* ptr) {
    u32 reg = 0;
    BOOL enabled = OSDisableInterrupts();

    CHECK_GXBEGIN(LINE(1493, 1493, 1550), "GXRedirectWriteGatherPipe");
    ASSERTLINE(LINE(1494, 1494, 1551), OFFSET(ptr, 32) == 0);
    ASSERTLINE(LINE(1496, 1496, 1553), !IsWGPipeRedirected);

#if DEBUG
    IsWGPipeRedirected = TRUE;
#endif

    GXFlush();
    while (PPCMfwpar() & 1) {}
    PPCMtwpar((u32)OSUncachedToPhysical((void*)GXFIFO_ADDR));
    if (CPGPLinked) {
        __GXFifoLink(0);
        __GXWriteFifoIntEnable(0, 0);
    }
    CPUFifo->wrPtr = OSPhysicalToCached(GX_GET_PI_REG(5) & 0xFBFFFFFF);
    GX_SET_PI_REG(3, 0);
    GX_SET_PI_REG(4, 0x04000000);
    SET_REG_FIELD(LINE(1527, 1527, 1584), reg, 21, 5, ((u32)ptr & 0x3FFFFFFF) >> 5);
    reg &= 0xFBFFFFFF;
    GX_SET_PI_REG(5, reg);

    PPCSync();
    OSRestoreInterrupts(enabled);
    return (volatile void *)GXFIFO_ADDR;
}

// NONMATCHING
void GXRestoreWriteGatherPipe(void) {
    u32 reg = 0;
    u32 i;
    BOOL enabled;

    ASSERTLINE(1552, IsWGPipeRedirected);

#if DEBUG
    IsWGPipeRedirected = FALSE;
#endif

    enabled = OSDisableInterrupts();
    for (i = 0; i < 31; i++) {
        GXWGFifo.u8 = 0;
    }

    PPCSync();
    while (PPCMfwpar() & 1) {}
    PPCMtwpar((u32)OSUncachedToPhysical((void *)GXFIFO_ADDR));
    GX_SET_PI_REG(3, (u32)CPUFifo->base & 0x3FFFFFFF);
    GX_SET_PI_REG(4, (u32)CPUFifo->top & 0x3FFFFFFF);
    SET_REG_FIELD(1578, reg, 21, 5, ((u32)CPUFifo->wrPtr & 0x3FFFFFFF) >> 5);
    reg &= 0xFBFFFFFF;
    GX_SET_PI_REG(5, reg);
    if (CPGPLinked) {
        __GXWriteFifoIntReset(1, 1);
        __GXWriteFifoIntEnable(1, 0);
        __GXFifoLink(1);
    }

    PPCSync();
    OSRestoreInterrupts(enabled);
}
