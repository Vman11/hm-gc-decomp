/* AXVPB.c (Dolphin SDK 2003) : 0x800C8D2C - 0x800C9EC4 of auto/text_800B2E70. Based on dolsdk2001 src/ax/AXVPB.c. */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))
typedef s64 OSTime;

typedef struct _AXPBMIX {
    /* 0x00 */ u16 vL;
    /* 0x02 */ u16 vDeltaL;
    /* 0x04 */ u16 vR;
    /* 0x06 */ u16 vDeltaR;
    /* 0x08 */ u16 vAuxAL;
    /* 0x0A */ u16 vDeltaAuxAL;
    /* 0x0C */ u16 vAuxAR;
    /* 0x0E */ u16 vDeltaAuxAR;
    /* 0x10 */ u16 vAuxBL;
    /* 0x12 */ u16 vDeltaAuxBL;
    /* 0x14 */ u16 vAuxBR;
    /* 0x16 */ u16 vDeltaAuxBR;
    /* 0x18 */ u16 vAuxBS;
    /* 0x1A */ u16 vDeltaAuxBS;
    /* 0x1C */ u16 vS;
    /* 0x1E */ u16 vDeltaS;
    /* 0x20 */ u16 vAuxAS;
    /* 0x22 */ u16 vDeltaAuxAS;
} AXPBMIX;

typedef struct _AXPBITD {
    /* 0x00 */ u16 flag;
    /* 0x02 */ u16 bufferHi;
    /* 0x04 */ u16 bufferLo;
    /* 0x06 */ u16 shiftL;
    /* 0x08 */ u16 shiftR;
    /* 0x0A */ u16 targetShiftL;
    /* 0x0C */ u16 targetShiftR;
} AXPBITD;

typedef struct _AXPBUPDATE {
    /* 0x00 */ u16 updNum[5];
    /* 0x0A */ u16 dataHi;
    /* 0x0C */ u16 dataLo;
} AXPBUPDATE;

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

typedef struct _AXPBVE {
    /* 0x00 */ u16 currentVolume;
    /* 0x02 */ s16 currentDelta;
} AXPBVE;

typedef struct _AXPBFIR {
    /* 0x00 */ u16 numCoefs;
    /* 0x02 */ u16 coefsHi;
    /* 0x04 */ u16 coefsLo;
} AXPBFIR;

typedef struct _AXPBADDR {
    /* 0x00 */ u16 loopFlag;
    /* 0x02 */ u16 format;
    /* 0x04 */ u16 loopAddressHi;
    /* 0x06 */ u16 loopAddressLo;
    /* 0x08 */ u16 endAddressHi;
    /* 0x0A */ u16 endAddressLo;
    /* 0x0C */ u16 currentAddressHi;
    /* 0x0E */ u16 currentAddressLo;
} AXPBADDR;

typedef struct _AXPBADPCM {
    /* 0x00 */ u16 a[8][2];
    /* 0x20 */ u16 gain;
    /* 0x22 */ u16 pred_scale;
    /* 0x24 */ u16 yn1;
    /* 0x26 */ u16 yn2;
} AXPBADPCM;

typedef struct _AXPBSRC {
    /* 0x00 */ u16 ratioHi;
    /* 0x02 */ u16 ratioLo;
    /* 0x04 */ u16 currentAddressFrac;
    /* 0x06 */ u16 last_samples[4];
} AXPBSRC;

typedef struct _AXPBADPCMLOOP {
    /* 0x00 */ u16 loop_pred_scale;
    /* 0x02 */ u16 loop_yn1;
    /* 0x04 */ u16 loop_yn2;
} AXPBADPCMLOOP;

typedef struct _AXPB {
    /* 0x00 */ u16 nextHi;
    /* 0x02 */ u16 nextLo;
    /* 0x04 */ u16 currHi;
    /* 0x06 */ u16 currLo;
    /* 0x08 */ u16 srcSelect;
    /* 0x0A */ u16 coefSelect;
    /* 0x0C */ u16 mixerCtrl;
    /* 0x0E */ u16 state;
    /* 0x10 */ u16 type;
    /* 0x12 */ AXPBMIX mix;
    /* 0x36 */ AXPBITD itd;
    /* 0x44 */ AXPBUPDATE update;
    /* 0x52 */ AXPBDPOP dpop;
    /* 0x64 */ AXPBVE ve;
    /* 0x68 */ AXPBFIR fir;
    /* 0x6E */ AXPBADDR addr;
    /* 0x7E */ AXPBADPCM adpcm;
    /* 0xA6 */ AXPBSRC src;
    /* 0xB4 */ AXPBADPCMLOOP adpcmLoop;
    /* 0xBA */ u16 pad[29]; /* 2003: lpf + remote mixer fields */
} AXPB;

typedef struct _AXVPB {
    /* 0x000 */ void * next;
    /* 0x004 */ void * prev;
    /* 0x008 */ void * next1;
    /* 0x00C */ u32 priority;
    /* 0x010 */ void (* callback)(void *);
    /* 0x014 */ u32 userContext;
    /* 0x018 */ u32 index;
    /* 0x01C */ u32 sync;
    /* 0x020 */ u32 depop;
    /* 0x024 */ u32 updateMS;
    /* 0x028 */ u32 updateCounter;
    /* 0x02C */ u32 updateTotal;
    /* 0x030 */ u16 * updateWrite;
    /* 0x034 */ u16 updateData[128];
    /* 0x134 */ void * itdBuffer;
    /* 0x138 */ AXPB pb;
} AXVPB;

typedef struct _AXPBITDBUFFER {
    /* 0x00 */ s16 data[32];
} AXPBITDBUFFER;

typedef struct _AXPBU {
    /* 0x00 */ u16 data[128];
} AXPBU;

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

typedef struct _AXPROFILE {
    /* 0x00 */ u64 axFrameStart;
    /* 0x08 */ u64 auxProcessingStart;
    /* 0x10 */ u64 auxProcessingEnd;
    /* 0x18 */ u64 userCallbackStart;
    /* 0x20 */ u64 userCallbackEnd;
    /* 0x28 */ u64 axFrameEnd;
    /* 0x30 */ u32 axNumVoices;
} AXPROFILE;

struct AX_AUX_DATA {
    /* 0x00 */ long * l;
    /* 0x00 */ long * r;
    /* 0x00 */ long * s;
};

#define AX_DSP_SLAVE_LENGTH 3264
#define AX_MAX_VOICES 64

#define AX_SRC_TYPE_NONE     0
#define AX_SRC_TYPE_LINEAR   1
#define AX_SRC_TYPE_4TAP_8K  2
#define AX_SRC_TYPE_4TAP_12K 3
#define AX_SRC_TYPE_4TAP_16K 4

// sync flags
#define AX_SYNC_FLAG_COPYALL       (1 << 31)
#define AX_SYNC_FLAG_UNK1          (1 << 30) // reserved, unused?
#define AX_SYNC_FLAG_UNK2          (1 << 29) // reserved, unused?
#define AX_SYNC_FLAG_UNK3          (1 << 28) // reserved, unused?
#define AX_SYNC_FLAG_UNK4          (1 << 27) // reserved, unused?
#define AX_SYNC_FLAG_UNK5          (1 << 26) // reserved, unused?
#define AX_SYNC_FLAG_UNK6          (1 << 25) // reserved, unused?
#define AX_SYNC_FLAG_UNK7          (1 << 24) // reserved, unused?
#define AX_SYNC_FLAG_UNK8          (1 << 23) // reserved, unused?
#define AX_SYNC_FLAG_UNK9          (1 << 22) // reserved, unused?
#define AX_SYNC_FLAG_UNK10         (1 << 21) // reserved, unused?
#define AX_SYNC_FLAG_COPYADPCMLOOP (1 << 20)
#define AX_SYNC_FLAG_COPYRATIO     (1 << 19)
#define AX_SYNC_FLAG_COPYSRC       (1 << 18)
#define AX_SYNC_FLAG_COPYADPCM     (1 << 17)
#define AX_SYNC_FLAG_COPYCURADDR   (1 << 16)
#define AX_SYNC_FLAG_COPYENDADDR   (1 << 15)
#define AX_SYNC_FLAG_COPYLOOPADDR  (1 << 14)
#define AX_SYNC_FLAG_COPYLOOP      (1 << 13)
#define AX_SYNC_FLAG_COPYADDR      (1 << 12)
#define AX_SYNC_FLAG_COPYFIR       (1 << 11)
#define AX_SYNC_FLAG_SWAPVOL       (1 << 10)
#define AX_SYNC_FLAG_COPYVOL       (1 << 9)
#define AX_SYNC_FLAG_COPYDPOP      (1 << 8)
#define AX_SYNC_FLAG_COPYUPDATE    (1 << 7)
#define AX_SYNC_FLAG_COPYTSHIFT    (1 << 6)
#define AX_SYNC_FLAG_COPYITD       (1 << 5)
#define AX_SYNC_FLAG_COPYAXPBMIX   (1 << 4)
#define AX_SYNC_FLAG_COPYTYPE      (1 << 3)
#define AX_SYNC_FLAG_COPYSTATE     (1 << 2)
#define AX_SYNC_FLAG_COPYMXRCTRL   (1 << 1)
#define AX_SYNC_FLAG_COPYSELECT    (1 << 0)

#define AX_PRIORITY_STACKS 32

// AX.c

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void DCFlushRange(void *addr, u32 nBytes);
void DCInvalidateRange(void *addr, u32 nBytes);
void DCFlushRangeNoSync(void *addr, u32 nBytes);
void *memset(void *dst, int c, u32 n);
AXVPB *fn_800C6F6C(u32 priority); /* __AXGetStackHead */
void fn_800C7160(AXVPB *p);       /* __AXPushFreeStack */
void fn_800C7180(AXVPB *p);       /* __AXPushCallbackStack */
u32 fn_800C7964(void);            /* __AXGetCommandListCycles */
void fn_800C8C98(AXPB *p);        /* __AXDepopVoice */
#define __AXGetStackHead fn_800C6F6C
#define __AXPushFreeStack fn_800C7160
#define __AXPushCallbackStack fn_800C7180
#define __AXGetCommandListCycles fn_800C7964
#define __AXDepopVoice fn_800C8C98
u32 __OSBusClock : 0x800000F8;
#define OS_BUS_CLOCK __OSBusClock
extern u32 lbl_8035A838;
#define __AXClMode lbl_8035A838
#define __AXGetNumVoices fn_800C8D2C
#define __AXServiceVPB fn_800C8D34
#define __AXSyncPBs fn_800C9480
#define __AXGetPBs fn_800C96F8
#define __AXSetPBDefault fn_800C9704
#define __AXVPBInit fn_800C9744
#define __AXVPBQuit fn_800C9944
#define AXSetVoiceSrcType fn_800C9948
#define AXSetVoiceState fn_800C9A0C
#define AXSetVoiceType fn_800C9A68
#define AXSetVoiceItdOn fn_800C9AB4
#define AXSetVoiceItdTarget fn_800C9B18
#define AXSetVoiceAddr fn_800C9B74
#define AXSetVoiceAdpcm fn_800C9C84
#define AXSetVoiceSrc fn_800C9D28
#define AXSetVoiceSrcRatio fn_800C9DC0
#define AXSetVoiceAdpcmLoop fn_800C9E58

static u32 __AXSrcCycles[5] = {3576, 3960, 5304, 6648, 6648};
static u32 __AXMainMixCycles[16] = {0, 760, 760, 1470, 760, 1520, 1520, 2230, 0, 1265, 1265, 2470, 1265, 2530, 2530, 3735};
static u32 __AXAuxMixCycles[32] = {0,    760,  760,  1470, 0,    1265, 1265, 2470, 760,  1520, 1520,
                                   2230, 760,  2025, 2025, 3230, 0,    760,  760,  1470, 0,    1265,
                                   1265, 2470, 1265, 2025, 2025, 2735, 1265, 2530, 2530, 3735};
static u32 __AXZeroCycles[5] = {0, 0, 0, 0, 0}; /* 0x14 zero bytes present in the original .data */

static AXPB __AXPB[AX_MAX_VOICES] ATTRIBUTE_ALIGN(32);
static AXPBITDBUFFER __AXITD[AX_MAX_VOICES] ATTRIBUTE_ALIGN(32);
static AXPBU __AXUpdates[AX_MAX_VOICES] ATTRIBUTE_ALIGN(32);
static AXVPB __AXVPB[AX_MAX_VOICES];

static u32 __AXMaxDspCycles;
static u32 __AXRecDspCycles;
static u32 __AXNumVoices;

u32 __AXGetNumVoices(void) {
    return __AXNumVoices;
}

void __AXServiceVPB(AXVPB *pvpb) {
    AXPB * ppbDsp;
    AXPB * ppbUser;
    u32 sync;
    __AXNumVoices += 1;
    ppbDsp = &__AXPB[pvpb->index];
    ppbUser = &pvpb->pb;
    sync = pvpb->sync;
    if (sync == 0) {
        ppbUser->state = ppbDsp->state;
        ppbUser->ve.currentVolume = ppbDsp->ve.currentVolume;
        ppbUser->addr.currentAddressHi = ppbDsp->addr.currentAddressHi;
        ppbUser->addr.currentAddressLo = ppbDsp->addr.currentAddressLo;
        return;
    }
    if (sync & AX_SYNC_FLAG_COPYALL) {
        // copy the whole PB struct. (size: 0xC0)
        u32 *src;
        u32 *dst;
        src = (void*)ppbUser;
        dst = (void*)ppbDsp;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
        if (pvpb->updateCounter != 0) {
            u32 count;
            src = (void*)&__AXUpdates[pvpb->index];
            dst = (void*)pvpb->updateData;
            for(count = pvpb->updateCounter; count; count--) {
                *(dst) = *(src); dst+=1; src+=1;
            }
        }
        return;
    }
    if (sync & AX_SYNC_FLAG_COPYSELECT) {
        ppbDsp->srcSelect = ppbUser->srcSelect;
        ppbDsp->coefSelect = ppbUser->coefSelect;
    }
    if (sync & AX_SYNC_FLAG_COPYMXRCTRL) {
        ppbDsp->mixerCtrl = ppbUser->mixerCtrl;
    }
    if (sync & AX_SYNC_FLAG_COPYSTATE) {
        ppbDsp->state = ppbUser->state;
    } else {
        ppbUser->state = ppbDsp->state;
    }
    if (sync & AX_SYNC_FLAG_COPYTYPE) {
        ppbDsp->type = ppbUser->type;
    }
    if (sync & AX_SYNC_FLAG_COPYAXPBMIX) {
        // copy AXPBMIX.
        u16 * src;
        u16 * dst;
        src = (void*)&ppbUser->mix;
        dst = (void*)&ppbDsp->mix;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
    if (sync & AX_SYNC_FLAG_COPYTSHIFT) {
        ppbDsp->itd.targetShiftL = ppbUser->itd.targetShiftL;
        ppbDsp->itd.targetShiftR = ppbUser->itd.targetShiftR;
    } else if (sync & AX_SYNC_FLAG_COPYITD) {
        // copy ITD struct.
        u16 * src;
        u16 * dst;
        u32 * dst_;
        src = (void*)&ppbUser->itd;
        dst = (void*)&ppbDsp->itd;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); src+=1;
        dst_ = pvpb->itdBuffer;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0; dst_+=1;
        *(dst_) = 0;
    }
    if (sync & AX_SYNC_FLAG_COPYUPDATE) {
        // copy UPDATE struct.
        u16 * src;
        u16 * dst;
        dst = (void*)&ppbDsp->update;
        src = (void*)&ppbUser->update;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); 
        if (pvpb->updateCounter) {
            u32 * src_;
            u32 * dst_;
            u32 count;

            dst_ = (void*)&__AXUpdates[pvpb->index];
            src_ = (void*)&pvpb->updateData;

            for(count = pvpb->updateCounter; count; count--) {
                *(dst_) = *(src_); dst_+=1; src_+=1;
            }
        }
    }
    if (sync & AX_SYNC_FLAG_COPYDPOP) {
        // copy DPOP struct.
        u16 * src;
        u16 * dst;
        dst = (u16*)&ppbDsp->dpop;
        src = (u16*)&ppbUser->dpop;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
    if (sync & AX_SYNC_FLAG_SWAPVOL) {
        ppbUser->ve.currentVolume = ppbDsp->ve.currentVolume;
        ppbDsp->ve.currentDelta = ppbUser->ve.currentDelta;
    } else if (sync & AX_SYNC_FLAG_COPYVOL) {
        ppbDsp->ve.currentVolume = ppbUser->ve.currentVolume;
        ppbDsp->ve.currentDelta = ppbUser->ve.currentDelta;
    }
    if (sync & AX_SYNC_FLAG_COPYFIR) {
        // copy FIR struct.
        u16 * src;
        u16 * dst;
        dst = (void*)&ppbDsp->fir;
        src = (void*)&ppbUser->fir;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
    if (sync & (AX_SYNC_FLAG_COPYLOOP | AX_SYNC_FLAG_COPYLOOPADDR | AX_SYNC_FLAG_COPYENDADDR | AX_SYNC_FLAG_COPYCURADDR)) {
        if (sync & AX_SYNC_FLAG_COPYLOOP) {
            ppbDsp->addr.loopFlag = ppbUser->addr.loopFlag;
        }
        if (sync & AX_SYNC_FLAG_COPYLOOPADDR) {
            *(u32*)&ppbDsp->addr.loopAddressHi = *(u32*)&ppbUser->addr.loopAddressHi;
        }
        if (sync & AX_SYNC_FLAG_COPYENDADDR) {
            *(u32*)&ppbDsp->addr.endAddressHi = *(u32*)&ppbUser->addr.endAddressHi;
        }
        if (sync & AX_SYNC_FLAG_COPYCURADDR) {
            *(u32*)&ppbDsp->addr.currentAddressHi = *(u32*)&ppbUser->addr.currentAddressHi;
        } else {
            *(u32*)&ppbUser->addr.currentAddressHi = *(u32*)&ppbDsp->addr.currentAddressHi;
        }
    } else if (sync & AX_SYNC_FLAG_COPYADDR) {
        // copy ADDR struct.
        u32 * src;
        u32 * dst;
        dst = (void*)&ppbDsp->addr;
        src = (void*)&ppbUser->addr;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); 
    } else {
        ppbUser->addr.currentAddressHi = ppbDsp->addr.currentAddressHi;
        ppbUser->addr.currentAddressLo = ppbDsp->addr.currentAddressLo;
    }
    if (sync & AX_SYNC_FLAG_COPYADPCM) {
        // copy ADPCM struct.
        u32 * src;
        u32 * dst;
        dst = (void*)&ppbDsp->adpcm;
        src = (void*)&ppbUser->adpcm;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
    }
    if (sync & AX_SYNC_FLAG_COPYRATIO) {
        ppbDsp->src.ratioHi = ppbUser->src.ratioHi;
        ppbDsp->src.ratioLo = ppbUser->src.ratioLo;
    } else if (sync & AX_SYNC_FLAG_COPYSRC) {
        // copy SRC struct.
        u16 * src;
        u16 * dst;
        dst = (void*)&ppbDsp->src;
        src = (void*)&ppbUser->src;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
    }
    if (sync & AX_SYNC_FLAG_COPYADPCMLOOP) {
        // copy ADPCMLOOP struct.
        u16 * src;
        u16 * dst;
        dst = (void*)&ppbDsp->adpcmLoop;
        src = (void*)&ppbUser->adpcmLoop;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
    /* 2003: low-pass filter (pad[0..3] = lpf.on, yn1, a0, b0) */
    if (sync & (1 << 22)) {
        ppbDsp->pad[2] = ppbUser->pad[2];
        ppbDsp->pad[3] = ppbUser->pad[3];
    } else if (sync & (1 << 21)) {
        u16 *src;
        u16 *dst;
        dst = (void*)&ppbDsp->pad[0];
        src = (void*)&ppbUser->pad[0];
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
}

static inline void __AXDumpVPB(AXVPB *pvpb) {
    AXPB *ppbDsp;

    ppbDsp = &__AXPB[pvpb->index];
    if (ppbDsp->state == 1) {
        __AXDepopVoice(ppbDsp);
    }
    ppbDsp->state = ppbDsp->update.updNum[0] = ppbDsp->update.updNum[1] = ppbDsp->update.updNum[2] =
        ppbDsp->update.updNum[3] = ppbDsp->update.updNum[4] = 0;
    pvpb->pb.state = 0;
    __AXPushCallbackStack(pvpb);
}

void __AXSyncPBs(u32 lessDspCycles) {
    u32 cycles;
    u32 i;
    AXVPB * pvpb;

    __AXNumVoices = 0;
    DCInvalidateRange(__AXPB, sizeof(__AXPB));
    DCInvalidateRange(__AXITD, sizeof(__AXITD));
    cycles = (__AXGetCommandListCycles() + 0x10000) - 22000 + lessDspCycles;
    for (i = 31; i; i--) {
        for (pvpb = __AXGetStackHead(i); pvpb; pvpb = pvpb->next) {
            if (pvpb->depop) {
                __AXDepopVoice(&__AXPB[pvpb->index]);
            }
            if ((pvpb->pb.state == 1) || (pvpb->updateCounter != 0)) {
                if (pvpb->pb.srcSelect != 2) {
                    cycles += __AXSrcCycles[pvpb->pb.src.ratioHi];
                }
                if (pvpb->pb.pad[0]) {
                    cycles += 555;
                }
                cycles = __AXMainMixCycles[pvpb->pb.mixerCtrl & 0xF] + __AXAuxMixCycles[(pvpb->pb.mixerCtrl >> 4) & 0x1F] + __AXAuxMixCycles[(pvpb->pb.mixerCtrl >> 9) & 0x1F] + 140 + cycles;
                if (__AXMaxDspCycles > cycles) {
                    __AXServiceVPB(pvpb);
                } else {
                    __AXDumpVPB(pvpb);
                }
            } else {
                __AXServiceVPB(pvpb);
            }
            pvpb->sync = 0;
            pvpb->depop = 0;
            pvpb->updateMS = pvpb->updateCounter = 0;
            pvpb->updateWrite = pvpb->updateData;
        }
    }
    __AXRecDspCycles = cycles;
    for (pvpb = __AXGetStackHead(0); pvpb; pvpb = pvpb->next) {
        if (pvpb->depop != 0U) {
            __AXDepopVoice(&__AXPB[pvpb->index]);
        }
        pvpb->depop = 0;
        __AXPB[pvpb->index].state = __AXPB[pvpb->index].update.updNum[0] = __AXPB[pvpb->index].update.updNum[1]
                                  = __AXPB[pvpb->index].update.updNum[2] = __AXPB[pvpb->index].update.updNum[3]
                                  = __AXPB[pvpb->index].update.updNum[4] = 0;
    }
    DCFlushRange(__AXPB, sizeof(__AXPB));
    DCFlushRange(__AXITD, sizeof(__AXITD));
    DCFlushRange(__AXUpdates, sizeof(__AXUpdates));
}

AXPB * __AXGetPBs(void) {
    return __AXPB;
}

void __AXSetPBDefault(AXVPB * p) {
    p->pb.state = 0;
    p->pb.itd.flag = 0;
    p->sync = 0xA4;
    p->updateMS = p->updateCounter = 0;
    p->updateWrite = p->updateData;
    p->pb.update.updNum[0] = p->pb.update.updNum[1] = p->pb.update.updNum[2] = p->pb.update.updNum[3] = p->pb.update.updNum[4] = 0;
    p->pb.pad[0] = 0; /* 2003: lpf.on */
}

void __AXVPBInit(void) {
    u32 i;
    AXPB * ppb;
    AXPBITDBUFFER * ppbi;
    AXPBU * ppbu;
    AXVPB * pvpb;

    __AXMaxDspCycles = OS_BUS_CLOCK / 400;
    __AXRecDspCycles = 0U;
    for (i = 0; i < sizeof(__AXPB); i += 4) {
        *(u32 *)((u8 *)__AXPB + i) = 0;
    }
    for (i = 0; i < sizeof(__AXITD); i += 4) {
        *(u32 *)((u8 *)__AXITD + i) = 0;
    }
    for (i = 0; i < sizeof(__AXVPB); i += 4) {
        *(u32 *)((u8 *)__AXVPB + i) = 0;
    }
    for(i = 0; i < AX_MAX_VOICES; i++) {
        ppb = &__AXPB[i];
        ppbi = &__AXITD[i];
        ppbu = &__AXUpdates[i];
        pvpb = &__AXVPB[i];
        pvpb->index = i;
        pvpb->updateWrite = pvpb->updateData;
        pvpb->itdBuffer = ppbi;
        __AXSetPBDefault(pvpb);
        if (i == 0x3F) {
            pvpb->pb.nextHi = pvpb->pb.nextLo = ppb->nextHi = ppb->nextLo = 0;
        } else {
            pvpb->pb.nextHi = (u16)(  (u32)((char*)ppb + sizeof(AXPB)) >> 16 );
            pvpb->pb.nextLo = (u16)(  (u32)((char*)ppb + sizeof(AXPB)) );
            ppb->nextHi = (u16)(  (u32)((char*)ppb + sizeof(AXPB)) >> 16 );
            ppb->nextLo = (u16)(  (u32)((char*)ppb + sizeof(AXPB)) );
        }
        pvpb->pb.currHi = (u16)(((u32)ppb) >> 16);
        pvpb->pb.currLo = (u16)((u32)ppb);
        ppb->currHi = (u16)(((u32)ppb) >> 16);
        ppb->currLo = (u16)((u32)ppb);
        pvpb->pb.itd.bufferHi = (u16)(((u32)ppbi) >> 16);
        pvpb->pb.itd.bufferLo = (u16)((u32)ppbi);
        ppb->itd.bufferHi = (u16)(((u32)ppbi) >> 16);
        ppb->itd.bufferLo = (u16)((u32)ppbi);
        pvpb->pb.update.dataHi = (u16)(((u32)ppbu) >> 16);
        pvpb->pb.update.dataLo = (u16)((u32)ppbu);
        ppb->update.dataHi = (u16)(((u32)ppbu) >> 16);
        ppb->update.dataLo = (u16)((u32)ppbu);
        pvpb->priority = 1;
        __AXPushFreeStack(pvpb);
    }
    DCFlushRange(__AXPB, sizeof(__AXPB));
}

void __AXVPBQuit(void) {
}

void AXSetVoiceSrcType(AXVPB * p, u32 type) {
    int old;
    AXPB * ppb;
    old = OSDisableInterrupts();
    ppb = &p->pb;
    switch(type) {
        case AX_SRC_TYPE_NONE:
            ppb->srcSelect = 2;
            break;
        case AX_SRC_TYPE_LINEAR:
            ppb->srcSelect = 1;
            break;
        case AX_SRC_TYPE_4TAP_8K:
            ppb->srcSelect = 0;
            ppb->coefSelect = 0;
            break;
        case AX_SRC_TYPE_4TAP_12K:
            ppb->srcSelect = 0;
            ppb->coefSelect = 1;
            break;
        case AX_SRC_TYPE_4TAP_16K:
            ppb->srcSelect = 0;
            ppb->coefSelect = 2;
            break;
    }
    p->sync |= AX_SYNC_FLAG_COPYSELECT;
    OSRestoreInterrupts(old);
}

void AXSetVoiceState(AXVPB * p, u16 state) {
    int old;

    old = OSDisableInterrupts();
    p->pb.state = state;
    p->sync |= AX_SYNC_FLAG_COPYSTATE;
    if (state == 0) {
        p->depop = 1;
    }
    OSRestoreInterrupts(old);
}

void AXSetVoiceType(AXVPB * p, u16 type) {
    int old;

    old = OSDisableInterrupts();
    p->pb.type = type;
    p->sync |= AX_SYNC_FLAG_COPYTYPE;
    OSRestoreInterrupts(old);
}

void AXSetVoiceItdOn(AXVPB * p) {
    int old;

    old = OSDisableInterrupts();
    p->pb.itd.flag = 1;
    p->pb.itd.shiftL = p->pb.itd.shiftR = p->pb.itd.targetShiftL = p->pb.itd.targetShiftR = 0;
    p->sync &= ~(AX_SYNC_FLAG_COPYTSHIFT);
    p->sync |= AX_SYNC_FLAG_COPYITD;
    OSRestoreInterrupts(old);
}

void AXSetVoiceItdTarget(AXVPB * p, u16 lShift, u16 rShift) {
    int old;

    old = OSDisableInterrupts();
    p->pb.itd.targetShiftL = lShift;
    p->pb.itd.targetShiftR = rShift;
    p->sync |= AX_SYNC_FLAG_COPYTSHIFT;
    OSRestoreInterrupts(old);
}

void AXSetVoiceAddr(AXVPB * p, AXPBADDR * addr) {
    int old;
    u32 * dst;
    u32 * src;

    dst = (void*)&p->pb.addr;
    src = (void*)addr;

    old = OSDisableInterrupts();
    {
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src);
    }
    switch(addr->format) {
        case 0:
            break;
        case 10:
            dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0x08000000; dst+=1;
            *(dst) = 0; dst+=1;
            break;
        case 25:
            dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0; dst+=1;
            *(dst) = 0x01000000; dst+=1;
            *(dst) = 0; dst+=1;
            break;
        default:
            break;
    }
    p->sync &= ~(AX_SYNC_FLAG_COPYLOOP | AX_SYNC_FLAG_COPYLOOPADDR | AX_SYNC_FLAG_COPYENDADDR | AX_SYNC_FLAG_COPYCURADDR);
    p->sync |= (AX_SYNC_FLAG_COPYADDR | AX_SYNC_FLAG_COPYADPCM);
    OSRestoreInterrupts(old);
}

void AXSetVoiceAdpcm(AXVPB * p, AXPBADPCM * adpcm) {
    int old;
    u32 * dst;
    u32 * src;

    dst = (void*)&p->pb.adpcm;
    src = (void*)adpcm;

    old = OSDisableInterrupts();

    {
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
    }
    p->sync |= AX_SYNC_FLAG_COPYADPCM;
    OSRestoreInterrupts(old);
}

void AXSetVoiceSrc(AXVPB * p, AXPBSRC * src_) {
    int old;
    u16 * dst;
    u16 * src;

    dst = (void*)&p->pb.src;
    src = (void*)src_;

    old = OSDisableInterrupts();
    {
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
    }
    p->sync &= ~(AX_SYNC_FLAG_COPYRATIO);
    p->sync |= AX_SYNC_FLAG_COPYSRC;
    OSRestoreInterrupts(old);
}

void AXSetVoiceSrcRatio(AXVPB * p, float ratio) {
    u32 r;
    int old;

    old = OSDisableInterrupts();
    r = 65536.0f * ratio;
    if (r > 0x40000) {
        r = 0x40000;
    }
    p->pb.src.ratioHi = ((u32)r >> 0x10);
    p->pb.src.ratioLo = ((u32)r);
    p->sync |= AX_SYNC_FLAG_COPYRATIO;
    OSRestoreInterrupts(old);
}

void AXSetVoiceAdpcmLoop(AXVPB * p, AXPBADPCMLOOP * adpcmloop) {
    int old;
    u16 * dst;
    u16 * src;

    dst = (void*)&p->pb.adpcmLoop;
    src = (void*)adpcmloop;
    old = OSDisableInterrupts();
    {
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
        *(dst) = *(src); dst+=1; src+=1;
    }
    p->sync |= AX_SYNC_FLAG_COPYADPCMLOOP;
    OSRestoreInterrupts(old);
}

