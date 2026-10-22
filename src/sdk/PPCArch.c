#define __GEKKO__ 1

#define PPCMthid0 fn_800B2E88
#define PPCSync fn_800B2EA8
#define PPCMfwpar fn_800B2F4C
#define OSGetCurrentThread fn_800B9790
#define OSResumeThread fn_800B9ED0
#define OSSleepThread fn_800BA2C8
#define OSSuspendThread fn_800BA158
#define OSWakeupThread fn_800BA3B4
#define OSYieldThread fn_800B9CD8
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
#define __cvt_fp2unsigned __cvt_fp2unsigned
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
#include <dolphin.h>
#include <dolphin/base/PPCArch.h>

asm u32 PPCMfmsr() {
    nofralloc
    mfmsr r3
    blr    
}

asm void PPCMtmsr(register u32 newMSR) {
    nofralloc
    mtmsr newMSR
    blr
}

asm u32 PPCMfhid0() {
    nofralloc
    mfspr r3, HID0
    blr
}

asm void PPCMthid0(register u32 newHID0) {
    nofralloc
    mtspr HID0, newHID0
    blr
}

asm u32 PPCMfl2cr() {
    nofralloc
    mfspr r3, L2CR
    blr
}

asm void PPCMtl2cr(register u32 newL2cr) {
    nofralloc
    mtspr L2CR, newL2cr
    blr
}

asm void PPCMtdec(register u32 newDec) {
    nofralloc
    mtdec newDec
    blr
}

asm void PPCSync() {
    nofralloc
    sc
    blr
}

asm void PPCHalt() {
    nofralloc
    sync
loop:
    nop
    li r3, 0
    nop
    b loop
}

asm void PPCMtmmcr0(register u32 newMmcr0) {
    nofralloc
    mtspr MMCR0, newMmcr0
    blr
}

asm void PPCMtmmcr1(register u32 newMmcr1) {
    nofralloc
    mtspr MMCR1, newMmcr1
    blr
}

asm void PPCMtpmc1(register u32 newPmc1) {
    nofralloc
    mtspr PMC1, newPmc1
    blr
}

asm void PPCMtpmc2(register u32 newPmc2) {
    nofralloc
    mtspr PMC2, newPmc2
    blr
}

asm void PPCMtpmc3(register u32 newPmc3) {
    nofralloc
    mtspr PMC3, newPmc3
    blr
}

asm void PPCMtpmc4(register u32 newPmc4) {
    nofralloc
    mtspr PMC4, newPmc4
    blr
}

u32 PPCMffpscr() {
    union FpscrUnion m;

    asm {
        mffs fp31
        stfd fp31, m.f;
    }

    return m.u.fpscr; 
}

void PPCMtfpscr(register u32 newFPSCR) {
    union FpscrUnion m;

    asm {
        li    r4, 0
        stw   r4, m.u.fpscr_pad;
        stw   newFPSCR, m.u.fpscr
        lfd   fp31, m.f
        mtfsf 0xff, fp31
    }
}

asm u32 PPCMfhid2() {
    nofralloc
    mfspr r3, HID2
    blr
}

asm void PPCMthid2(register u32 newhid2) {
    nofralloc
    mtspr HID2, newhid2
    blr
}

asm u32 PPCMfwpar() {
    nofralloc
    sync
    mfspr r3, WPAR
    blr
}

asm void PPCMtwpar(register u32 newwpar) {
    nofralloc
    mtspr WPAR, newwpar
    blr
}

void PPCDisableSpeculation(void) {
    PPCMthid0(PPCMfhid0() | HID0_SPD);
}

asm void PPCSetFpNonIEEEMode() {
	nofralloc
	mtfsb1 29
	blr
}
