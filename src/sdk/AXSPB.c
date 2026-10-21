/* AXSPB.c (Dolphin SDK 2003) : 0x800C8864 - 0x800C8D2C of auto/text_800B2E70. = dolsdk2001 src/ax/AXSPB.c */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef struct _AXSPB {
    /* 0x00 */ u16 dpopLHi;
    /* 0x02 */ u16 dpopLLo;
    /* 0x04 */ s16 dpopLDelta;
    /* 0x06 */ u16 dpopRHi;
    /* 0x08 */ u16 dpopRLo;
    /* 0x0A */ s16 dpopRDelta;
    /* 0x0C */ u16 dpopSHi;
    /* 0x0E */ u16 dpopSLo;
    /* 0x10 */ s16 dpopSDelta;
    /* 0x12 */ u16 dpopALHi;
    /* 0x14 */ u16 dpopALLo;
    /* 0x16 */ s16 dpopALDelta;
    /* 0x18 */ u16 dpopARHi;
    /* 0x1A */ u16 dpopARLo;
    /* 0x1C */ s16 dpopARDelta;
    /* 0x1E */ u16 dpopASHi;
    /* 0x20 */ u16 dpopASLo;
    /* 0x22 */ s16 dpopASDelta;
    /* 0x24 */ u16 dpopBLHi;
    /* 0x26 */ u16 dpopBLLo;
    /* 0x28 */ s16 dpopBLDelta;
    /* 0x2A */ u16 dpopBRHi;
    /* 0x2C */ u16 dpopBRLo;
    /* 0x2E */ s16 dpopBRDelta;
    /* 0x30 */ u16 dpopBSHi;
    /* 0x32 */ u16 dpopBSLo;
    /* 0x34 */ s16 dpopBSDelta;
} AXSPB;
typedef struct _AXPBDPOP {
    /* 0x00 */ s16 aL;
    /* 0x02 */ s16 aAuxAL;
    /* 0x04 */ s16 aAuxBL;
    /* 0x06 */ s16 aR;
    /* 0x08 */ s16 aAuxAR;
    /* 0x0A */ s16 aAuxBR;
    /* 0x0C */ s16 aS;
    /* 0x0E */ s16 aAuxAS;
    /* 0x10 */ s16 aAuxBS;
} AXPBDPOP;
typedef struct _AXPB {
    u8 _pad[82];
    AXPBDPOP dpop;
} AXPB;

void DCFlushRange(void *addr, u32 nBytes);
#define __AXGetStudio fn_800C8864
#define __AXPrintStudio fn_800C8870
#define __AXSPBInit fn_800C8C68
#define __AXSPBQuit fn_800C8C94
#define __AXDepopVoice fn_800C8C98

// .bss
static AXSPB __AXStudio ATTRIBUTE_ALIGN(32);

// .sbss
static long __AXSpbAL;
static long __AXSpbAR;
static long __AXSpbAS;
static long __AXSpbAAL;
static long __AXSpbAAR;
static long __AXSpbAAS;
static long __AXSpbABL;
static long __AXSpbABR;
static long __AXSpbABS;

u32 __AXGetStudio(void) {
    return (u32)&__AXStudio;
}

static inline void __AXDepopFade(long * hostSum, long * dspVolume, s16 * dspDelta) {
    int frames;
    long delta;

    frames = *hostSum / 160;

    if (frames) {
        delta = *hostSum / 160;
        if (delta > 0x14) {
            delta = 0x14;
        }
        if (delta < -0x14) {
            delta = -0x14;
        }
        *dspVolume = *hostSum;
        *hostSum -= delta * 0xA0;
        *dspDelta = delta * -1;
        return;
    }
    *hostSum = 0;
    *dspVolume = 0;
    *dspDelta = 0;
}

void __AXPrintStudio(void) {
    __AXDepopFade(&__AXSpbAL, (void*)&__AXStudio.dpopLHi, &__AXStudio.dpopLDelta);
    __AXDepopFade(&__AXSpbAR, (void*)&__AXStudio.dpopRHi, &__AXStudio.dpopRDelta);
    __AXDepopFade(&__AXSpbAS, (void*)&__AXStudio.dpopSHi, &__AXStudio.dpopSDelta);
    __AXDepopFade(&__AXSpbAAL, (void*)&__AXStudio.dpopALHi, &__AXStudio.dpopALDelta);
    __AXDepopFade(&__AXSpbAAR, (void*)&__AXStudio.dpopARHi, &__AXStudio.dpopARDelta);
    __AXDepopFade(&__AXSpbAAS, (void*)&__AXStudio.dpopASHi, &__AXStudio.dpopASDelta);
    __AXDepopFade(&__AXSpbABL, (void*)&__AXStudio.dpopBLHi, &__AXStudio.dpopBLDelta);
    __AXDepopFade(&__AXSpbABR, (void*)&__AXStudio.dpopBRHi, &__AXStudio.dpopBRDelta);
    __AXDepopFade(&__AXSpbABS, (void*)&__AXStudio.dpopBSHi, &__AXStudio.dpopBSDelta);
    DCFlushRange(&__AXStudio, sizeof(__AXStudio));
}

void __AXSPBInit(void) {
    __AXSpbAL = 
    __AXSpbAR = 
    __AXSpbAS = 
    __AXSpbAAL = 
    __AXSpbAAR = 
    __AXSpbAAS = 
    __AXSpbABL = 
    __AXSpbABR = 
    __AXSpbABS = 0;
}

void __AXSPBQuit(void) {
}

void __AXDepopVoice(AXPB * p) {
    __AXSpbAL += p->dpop.aL;
    __AXSpbAAL += p->dpop.aAuxAL;
    __AXSpbABL += p->dpop.aAuxBL;
    __AXSpbAR += p->dpop.aR;
    __AXSpbAAR += p->dpop.aAuxAR;
    __AXSpbABR += p->dpop.aAuxBR;
    __AXSpbAS += p->dpop.aS;
    __AXSpbAAS += p->dpop.aAuxAS;
    __AXSpbABS += p->dpop.aAuxBS;
}
