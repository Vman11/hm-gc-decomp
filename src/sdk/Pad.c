/* Pad.c (Dolphin SDK 2003, "Apr 17 2003") : 0x800C2AC4 - 0x800C4594 of auto/text_800B2E70.
 * The 2003 controller library (SIGetTypeAsync based reset, no wireless fix-up). Based on dolsdk2001 src/pad/Pad.c. */
#include "common.h"
#define ATTRIBUTE_ALIGN(num) __attribute__((aligned(num)))

typedef s64 OSTime;
typedef struct OSContext OSContext;
typedef struct OSResetFunctionInfo OSResetFunctionInfo;
struct OSResetFunctionInfo {
    BOOL (*func)(BOOL final);
    u32 priority;
    OSResetFunctionInfo *next;
    OSResetFunctionInfo *prev;
};
typedef struct PADStatus {
    u16 button;
    s8 stickX;
    s8 stickY;
    s8 substickX;
    s8 substickY;
    u8 triggerLeft;
    u8 triggerRight;
    u8 analogA;
    u8 analogB;
    s8 err;
} PADStatus;
typedef void (*SICallback)(s32 chan, u32 sr, OSContext *context);
typedef void (*SITypeAndStatusCallback)(s32 chan, u32 type);
typedef void (*PADSamplingCallback)(void);

#define PAD_CHAN0_BIT 0x80000000
#define PAD_ALL 0xF0000000
#define SI_ERROR_UNDER_RUN 0x0001
#define SI_ERROR_OVER_RUN 0x0002
#define SI_ERROR_COLLISION 0x0004
#define SI_ERROR_NO_RESPONSE 0x0008
#define SI_TYPE_MASK 0x18000000u
#define SI_TYPE_GC 0x08000000u
#define SI_GC_WIRELESS 0x80000000u
#define SI_GC_NOMOTOR 0x20000000u
#define SI_GC_STANDARD 0x01000000u
#define SI_WIRELESS_RECEIVED 0x40000000u
#define SI_WIRELESS_IR 0x04000000u
#define SI_WIRELESS_STATE 0x02000000u
#define SI_WIRELESS_FIX_ID 0x00100000u
#define SI_WIRELESS_CONT_MASK 0x00080000u
#define SI_WIRELESS_LITE 0x00040000u
#define SI_GC_CONTROLLER 0x09000000u

u16 __OSWirelessPadFixMode : 0x800030E0;
u8 __OSPadFlags : 0x800030E3;

void OSRegisterVersion(const char *id);
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
OSTime OSGetTime(void);
void OSRegisterResetFunction(OSResetFunctionInfo *info);
void *memset(void *dst, int c, u32 n);
void fn_800B93CC(s32 chan, u16 id); /* OSSetWirelessID */
BOOL fn_800F3D80(void);             /* SIBusy */
BOOL fn_800F3DA0(s32 chan);         /* SIIsChanBusy */
BOOL fn_800F44B4(void *handler);    /* SIRegisterPollingHandler */
BOOL fn_800F4580(void *handler);    /* SIUnregisterPollingHandler */
u32 fn_800F4934(s32 chan);          /* SIGetStatus */
void fn_800F49B0(s32 chan, u32 command); /* SISetCommand */
void fn_800F49C4(void);             /* SITransferCommands */
u32 fn_800F4A40(u32 poll);          /* SIEnablePolling */
u32 fn_800F4ADC(u32 poll);          /* SIDisablePolling */
BOOL fn_800F4C1C(s32 chan, void *data); /* SIGetResponse */
BOOL SITransfer(s32 chan, void *output, u32 outputBytes, void *input, u32 inputBytes, SICallback callback, OSTime delay);
u32 SIGetType(s32 chan);
u32 fn_800F5334(s32 chan, SITypeAndStatusCallback callback); /* SIGetTypeAsync */
void fn_800F5554(void);             /* SIRefreshSamplingRate */
#define OSSetWirelessID fn_800B93CC
#define SIBusy fn_800F3D80
#define SIIsChanBusy fn_800F3DA0
#define SIRegisterPollingHandler fn_800F44B4
#define SIUnregisterPollingHandler fn_800F4580
#define SIGetStatus fn_800F4934
#define SISetCommand fn_800F49B0
#define SITransferCommands fn_800F49C4
#define SIEnablePolling fn_800F4A40
#define SIDisablePolling fn_800F4ADC
#define SIGetResponse fn_800F4C1C
#define SIGetTypeAsync fn_800F5334
#define SIRefreshSamplingRate fn_800F5554

extern u32 lbl_8035A9D8;
#define __PADFixBits lbl_8035A9D8

/* names used by the rest of the program (and by symbols.txt) */
#define UpdateOrigin fn_800C2AC4
#define PADOriginCallback fn_800C2C68
#define PADOriginUpdateCallback fn_800C2D2C
#define PADProbeCallback fn_800C2DEC
#define PADTypeAndStatusCallback fn_800C2EC4
#define PADReceiveCheckCallback fn_800C31F0
#define PADReset fn_800C3324
#define PADRecalibrate fn_800C3424
#define PADInit fn_800C3528
#define PADRead fn_800C3740
#define PADControlMotor fn_800C3AEC
#define PADSetSpec fn_800C3B90
#define SPEC0_MakeStatus fn_800C3BF0
#define SPEC1_MakeStatus fn_800C3D64
#define SPEC2_MakeStatus fn_800C3ED8
#define OnReset fn_800C42D0
#define SamplingHandler fn_800C4464
#define PADSetSamplingCallback fn_800C44C4

static void PADTypeAndStatusCallback(s32 chan, u32 type);
void SPEC2_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);
static BOOL OnReset(BOOL f);
BOOL PADRecalibrate(u32 mask);
PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback callback);

char *__PADVersion = "<< Dolphin SDK - PAD\trelease build: Apr 17 2003 12:33:44 (0x2301) >>";
static s32 ResettingChan = 32;
static u32 XPatchBits = PAD_ALL;
static u32 AnalogMode = 0x300;
static u32 Spec = 5;
static void (*MakeStatus)(s32, PADStatus *, u32 *) = SPEC2_MakeStatus;
static u32 CmdReadOrigin = 0x41 << 24;
static u32 CmdCalibrate = 0x42 << 24;

static BOOL Initialized;
static u32 EnabledBits;
static u32 ResettingBits;
static u32 RecalibrateBits;
static u32 WaitingBits;
static u32 CheckingBits;
static u32 PendingBits;
static PADSamplingCallback SamplingCallback;
u32 __PADSpec;

static u32 Type[4];
static PADStatus Origin[4];
static u32 CmdProbeDevice[4];

static OSResetFunctionInfo ResetFunctionInfo = {OnReset, 127, NULL, NULL};

static inline void PADEnable(s32 chan) {
    u32 cmd;
    u32 chanBit;
    u32 data[2];

    chanBit = PAD_CHAN0_BIT >> chan;
    EnabledBits |= chanBit;
    SIGetResponse(chan, data);
    cmd = (0x40 << 16) | AnalogMode;
    SISetCommand(chan, cmd);
    SIEnablePolling(EnabledBits);
}

static inline void PADDisable(s32 chan) {
    BOOL enabled;
    u32 chanBit;

    enabled = OSDisableInterrupts();
    chanBit = PAD_CHAN0_BIT >> chan;
    SIDisablePolling(chanBit);
    EnabledBits &= ~chanBit;
    WaitingBits &= ~chanBit;
    CheckingBits &= ~chanBit;
    PendingBits &= ~chanBit;
    OSSetWirelessID(chan, 0);
    OSRestoreInterrupts(enabled);
}

static inline void DoReset(void) {
    u32 chanBit;

    ResettingChan = __cntlzw(ResettingBits);
    if (ResettingChan == 32) {
        return;
    }
    chanBit = PAD_CHAN0_BIT >> ResettingChan;
    ResettingBits &= ~chanBit;
    memset(&Origin[ResettingChan], 0, sizeof(PADStatus));
    SIGetTypeAsync(ResettingChan, PADTypeAndStatusCallback);
}

static void UpdateOrigin(s32 chan) {
    PADStatus *origin;
    u32 chanBit = PAD_CHAN0_BIT >> chan;

    origin = &Origin[chan];
    switch (AnalogMode & 0x00000700u) {
    case 0x00000000u:
    case 0x00000500u:
    case 0x00000600u:
    case 0x00000700u:
        origin->triggerLeft &= ~15;
        origin->triggerRight &= ~15;
        origin->analogA &= ~15;
        origin->analogB &= ~15;
        break;
    case 0x00000100u:
        origin->substickX &= ~15;
        origin->substickY &= ~15;
        origin->analogA &= ~15;
        origin->analogB &= ~15;
        break;
    case 0x00000200u:
        origin->substickX &= ~15;
        origin->substickY &= ~15;
        origin->triggerLeft &= ~15;
        origin->triggerRight &= ~15;
        break;
    case 0x00000300u:
        break;
    case 0x00000400u:
        break;
    }
    origin->stickX -= 128;
    origin->stickY -= 128;
    origin->substickX -= 128;
    origin->substickY -= 128;
    if (XPatchBits & chanBit) {
        if (64 < origin->stickX && (SIGetType(chan) & 0xFFFF0000) == SI_GC_CONTROLLER) {
            origin->stickX = 0;
        }
    }
}

static void PADOriginCallback(s32 chan, u32 error, OSContext *context) {
    if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
        UpdateOrigin(ResettingChan);
        PADEnable(ResettingChan);
    }
    DoReset();
}

static void PADOriginUpdateCallback(s32 chan, u32 error, OSContext *context) {
    if (!(EnabledBits & (PAD_CHAN0_BIT >> chan))) {
        return;
    }
    if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
        UpdateOrigin(chan);
    }
    if (error & SI_ERROR_NO_RESPONSE) {
        PADDisable(chan);
    }
}

static void PADProbeCallback(s32 chan, u32 error, OSContext *context) {
    if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
        PADEnable(ResettingChan);
        WaitingBits |= PAD_CHAN0_BIT >> ResettingChan;
    }
    DoReset();
}

static void PADTypeAndStatusCallback(s32 chan, u32 type) {
    u32 chanBit;
    u32 recalibrate;
    BOOL rc = TRUE;
    u32 error;

    chanBit = PAD_CHAN0_BIT >> ResettingChan;
    error = type & 0xFF;
    recalibrate = RecalibrateBits & chanBit;
    RecalibrateBits &= ~chanBit;
    if (error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION)) {
        DoReset();
        return;
    }
    type &= ~0xFF;
    Type[ResettingChan] = type;
    if ((type & SI_TYPE_MASK) != SI_TYPE_GC || !(type & SI_GC_STANDARD)) {
        DoReset();
        return;
    }
    if (Spec < 2) {
        PADEnable(ResettingChan);
        DoReset();
        return;
    }
    if (!(type & SI_GC_WIRELESS) || (type & SI_WIRELESS_IR)) {
        if (recalibrate) {
            rc = SITransfer(ResettingChan, &CmdCalibrate, 3, &Origin[ResettingChan], 10, PADOriginCallback, 0);
        } else {
            rc = SITransfer(ResettingChan, &CmdReadOrigin, 1, &Origin[ResettingChan], 10, PADOriginCallback, 0);
        }
    } else if ((type & SI_WIRELESS_FIX_ID) && !(type & SI_WIRELESS_CONT_MASK) && !(type & SI_WIRELESS_LITE)) {
        if (type & SI_WIRELESS_RECEIVED) {
            rc = SITransfer(ResettingChan, &CmdReadOrigin, 1, &Origin[ResettingChan], 10, PADOriginCallback, 0);
        } else {
            rc = SITransfer(ResettingChan, &CmdProbeDevice[ResettingChan], 3, &Origin[ResettingChan], 8,
                            PADProbeCallback, 0);
        }
    }
    if (!rc) {
        PendingBits |= chanBit;
        DoReset();
        return;
    }
}

static void PADReceiveCheckCallback(s32 chan, u32 type) {
    u32 error;
    u32 chanBit;

    chanBit = PAD_CHAN0_BIT >> chan;
    if (!(EnabledBits & chanBit)) {
        return;
    }
    error = type & 0xFF;
    type &= ~0xFF;
    WaitingBits &= ~chanBit;
    CheckingBits &= ~chanBit;
    if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION)) &&
        (type & SI_GC_WIRELESS) && (type & SI_WIRELESS_FIX_ID) && (type & SI_WIRELESS_RECEIVED) &&
        !(type & SI_WIRELESS_IR) && !(type & SI_WIRELESS_CONT_MASK) && !(type & SI_WIRELESS_LITE)) {
        SITransfer(chan, &CmdReadOrigin, 1, &Origin[chan], 10, PADOriginUpdateCallback, 0);
    } else {
        PADDisable(chan);
    }
}

BOOL PADReset(u32 mask) {
    BOOL enabled;
    u32 disableBits;

    enabled = OSDisableInterrupts();
    mask |= PendingBits;
    PendingBits = 0;
    mask &= ~(WaitingBits | CheckingBits);
    ResettingBits |= mask;
    disableBits = ResettingBits & EnabledBits;
    EnabledBits &= ~mask;
    if (Spec == 4) {
        RecalibrateBits |= mask;
    }
    SIDisablePolling(disableBits);
    if (ResettingChan == 32) {
        DoReset();
    }
    OSRestoreInterrupts(enabled);
    return TRUE;
}

BOOL PADRecalibrate(u32 mask) {
    BOOL enabled;
    u32 disableBits;

    enabled = OSDisableInterrupts();
    mask |= PendingBits;
    PendingBits = 0;
    mask &= ~(WaitingBits | CheckingBits);
    ResettingBits |= mask;
    disableBits = ResettingBits & EnabledBits;
    EnabledBits &= ~mask;
    if (!(__OSPadFlags & 0x40)) {
        RecalibrateBits |= mask;
    }
    SIDisablePolling(disableBits);
    if (ResettingChan == 32) {
        DoReset();
    }
    OSRestoreInterrupts(enabled);
    return TRUE;
}

void PADSetSpec(u32 spec);

BOOL PADInit(void) {
    s32 chan;

    if (Initialized) {
        return TRUE;
    }
    OSRegisterVersion(__PADVersion);
    if (__PADSpec) {
        PADSetSpec(__PADSpec);
    }
    Initialized = TRUE;
    if (__PADFixBits != 0) {
        OSTime time = OSGetTime();

        __OSWirelessPadFixMode = (u16)((((time)&0xFFFF) + ((time >> 16) & 0xFFFF) + ((time >> 32) & 0xFFFF) +
                                        ((time >> 48) & 0xFFFF)) &
                                       0x3FFFu);
        RecalibrateBits = PAD_ALL;
    }
    for (chan = 0; chan < 4; ++chan) {
        CmdProbeDevice[chan] = (0x4D << 24) | (chan << 22) | ((__OSWirelessPadFixMode & 0x3FFFu) << 8);
    }
    SIRefreshSamplingRate();
    OSRegisterResetFunction(&ResetFunctionInfo);
    return PADReset(PAD_ALL);
}

u32 PADRead(PADStatus *status) {
    BOOL enabled;
    s32 chan;
    u32 data[2];
    u32 chanBit;
    u32 sr;
    int chanShift;
    u32 motor;

    enabled = OSDisableInterrupts();
    motor = 0;
    for (chan = 0; chan < 4; chan++, status++) {
        chanBit = PAD_CHAN0_BIT >> chan;
        chanShift = 8 * (4 - 1 - chan);
        if (PendingBits & chanBit) {
            PADReset(0);
            status->err = -2;
            memset(status, 0, 10);
            continue;
        }
        if ((ResettingBits & chanBit) || ResettingChan == chan) {
            status->err = -2;
            memset(status, 0, 10);
            continue;
        }
        if (!(EnabledBits & chanBit)) {
            status->err = -1;
            memset(status, 0, 10);
            continue;
        }
        if (SIIsChanBusy(chan)) {
            status->err = -3;
            memset(status, 0, 10);
            continue;
        }
        sr = SIGetStatus(chan);
        if (sr & SI_ERROR_NO_RESPONSE) {
            SIGetResponse(chan, data);
            if (WaitingBits & chanBit) {
                status->err = 0;
                memset(status, 0, 10);
                if (!(CheckingBits & chanBit)) {
                    CheckingBits |= chanBit;
                    SIGetTypeAsync(chan, PADReceiveCheckCallback);
                }
                continue;
            }
            PADDisable(chan);
            status->err = -1;
            memset(status, 0, 10);
            continue;
        }
        if (!(SIGetType(chan) & SI_GC_NOMOTOR)) {
            motor |= chanBit;
        }
        if (!SIGetResponse(chan, data)) {
            status->err = -3;
            memset(status, 0, 10);
            continue;
        }
        if (data[0] & 0x80000000) {
            status->err = -3;
            memset(status, 0, 10);
            continue;
        }
        MakeStatus(chan, status, data);
        if (status->button & 0x2000) {
            status->err = -3;
            memset(status, 0, 10);
            SITransfer(chan, &CmdReadOrigin, 1, &Origin[chan], 10, PADOriginUpdateCallback, 0);
            continue;
        }
        status->err = 0;
        status->button &= ~0x0080;
    }
    OSRestoreInterrupts(enabled);
    return motor;
}

void PADControlMotor(s32 chan, u32 command) {
    BOOL enabled;
    u32 chanBit;

    enabled = OSDisableInterrupts();
    chanBit = PAD_CHAN0_BIT >> chan;
    if ((EnabledBits & chanBit) && !(SIGetType(chan) & SI_GC_NOMOTOR)) {
        if (Spec < 2 && command == 2) {
            command = 0;
        }
        SISetCommand(chan, (0x40 << 16) | AnalogMode | (command & 3));
        SITransferCommands();
    }
    OSRestoreInterrupts(enabled);
}

void SPEC0_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);
void SPEC1_MakeStatus(s32 chan, PADStatus *status, u32 data[2]);

void PADSetSpec(u32 spec) {
    __PADSpec = 0;
    switch (spec) {
    case 0:
        MakeStatus = SPEC0_MakeStatus;
        break;
    case 1:
        MakeStatus = SPEC1_MakeStatus;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        MakeStatus = SPEC2_MakeStatus;
        break;
    }
    Spec = spec;
}

static void SPEC0_MakeStatus(s32 chan, PADStatus *status, u32 data[2]) {
    status->button = 0;
    status->button |= ((data[0] >> 16) & 0x0008) ? 0x0100 : 0;
    status->button |= ((data[0] >> 16) & 0x0020) ? 0x0200 : 0;
    status->button |= ((data[0] >> 16) & 0x0100) ? 0x0400 : 0;
    status->button |= ((data[0] >> 16) & 0x0001) ? 0x0800 : 0;
    status->button |= ((data[0] >> 16) & 0x0010) ? 0x1000 : 0;
    status->stickX = (s8)(data[1] >> 16);
    status->stickY = (s8)(data[1] >> 24);
    status->substickX = (s8)(data[1]);
    status->substickY = (s8)(data[1] >> 8);
    status->triggerLeft = (u8)(data[0] >> 8 & 0xFF);
    status->triggerRight = (u8)(data[0] & 0xFF);
    status->analogA = 0;
    status->analogB = 0;
    if (170 <= status->triggerLeft) {
        status->button |= 0x0040;
    }
    if (170 <= status->triggerRight) {
        status->button |= 0x0020;
    }
    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;
}

static void SPEC1_MakeStatus(s32 chan, PADStatus *status, u32 data[2]) {
    status->button = 0;
    status->button |= ((data[0] >> 16) & 0x0080) ? 0x0100 : 0;
    status->button |= ((data[0] >> 16) & 0x0100) ? 0x0200 : 0;
    status->button |= ((data[0] >> 16) & 0x0020) ? 0x0400 : 0;
    status->button |= ((data[0] >> 16) & 0x0010) ? 0x0800 : 0;
    status->button |= ((data[0] >> 16) & 0x0200) ? 0x1000 : 0;
    status->stickX = (s8)(data[1] >> 16);
    status->stickY = (s8)(data[1] >> 24);
    status->substickX = (s8)(data[1]);
    status->substickY = (s8)(data[1] >> 8);
    status->triggerLeft = (u8)(data[0] >> 8 & 0xFF);
    status->triggerRight = (u8)(data[0] & 0xFF);
    status->analogA = 0;
    status->analogB = 0;
    if (170 <= status->triggerLeft) {
        status->button |= 0x0040;
    }
    if (170 <= status->triggerRight) {
        status->button |= 0x0020;
    }
    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;
}

static inline s8 ClampS8(s8 var, s8 org) {
    if (0 < org) {
        s8 min = (s8)(-128 + org);
        if (var < min) {
            var = min;
        }
    } else if (org < 0) {
        s8 max = (s8)(127 + org);
        if (max < var) {
            var = max;
        }
    }
    return var -= org;
}

static inline u8 ClampU8(u8 var, u8 org) {
    if (var < org) {
        var = org;
    }
    return var -= org;
}

static void SPEC2_MakeStatus(s32 chan, PADStatus *status, u32 data[2]) {
    PADStatus *origin;

    status->button = (u16)((data[0] >> 16) & 0x3FFF);
    status->stickX = (s8)(data[0] >> 8);
    status->stickY = (s8)(data[0]);
    switch (AnalogMode & 0x00000700) {
    case 0x00000000:
    case 0x00000500:
    case 0x00000600:
    case 0x00000700:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = (u8)(((data[1] >> 12) & 0x0F) << 4);
        status->triggerRight = (u8)(((data[1] >> 8) & 0x0F) << 4);
        status->analogA = (u8)(((data[1] >> 4) & 0x0F) << 4);
        status->analogB = (u8)(((data[1] >> 0) & 0x0F) << 4);
        break;
    case 0x00000100:
        status->substickX = (s8)(((data[1] >> 28) & 0x0F) << 4);
        status->substickY = (s8)(((data[1] >> 24) & 0x0F) << 4);
        status->triggerLeft = (u8)(data[1] >> 16);
        status->triggerRight = (u8)(data[1] >> 8);
        status->analogA = (u8)(((data[1] >> 4) & 0x0F) << 4);
        status->analogB = (u8)(((data[1] >> 0) & 0x0F) << 4);
        break;
    case 0x00000200:
        status->substickX = (s8)(((data[1] >> 28) & 0x0F) << 4);
        status->substickY = (s8)(((data[1] >> 24) & 0x0F) << 4);
        status->triggerLeft = (u8)(((data[1] >> 20) & 0x0F) << 4);
        status->triggerRight = (u8)(((data[1] >> 16) & 0x0F) << 4);
        status->analogA = (u8)(data[1] >> 8);
        status->analogB = (u8)(data[1] >> 0);
        break;
    case 0x00000300:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = (u8)(data[1] >> 8);
        status->triggerRight = (u8)(data[1] >> 0);
        status->analogA = 0;
        status->analogB = 0;
        break;
    case 0x00000400:
        status->substickX = (s8)(data[1] >> 24);
        status->substickY = (s8)(data[1] >> 16);
        status->triggerLeft = 0;
        status->triggerRight = 0;
        status->analogA = (u8)(data[1] >> 8);
        status->analogB = (u8)(data[1] >> 0);
        break;
    }
    status->stickX -= 128;
    status->stickY -= 128;
    status->substickX -= 128;
    status->substickY -= 128;
    origin = &Origin[chan];
    status->stickX = ClampS8(status->stickX, origin->stickX);
    status->stickY = ClampS8(status->stickY, origin->stickY);
    status->substickX = ClampS8(status->substickX, origin->substickX);
    status->substickY = ClampS8(status->substickY, origin->substickY);
    status->triggerLeft = ClampU8(status->triggerLeft, origin->triggerLeft);
    status->triggerRight = ClampU8(status->triggerRight, origin->triggerRight);
}

static inline BOOL PADSync(void) {
    return ResettingBits == 0 && ResettingChan == 32 && !SIBusy();
}

static BOOL OnReset(BOOL f) {
    static BOOL recalibrated = FALSE;
    BOOL sync;

    if (SamplingCallback) {
        PADSetSamplingCallback(NULL);
    }
    if (!f) {
        sync = PADSync();
        if (!recalibrated && sync) {
            recalibrated = PADRecalibrate(PAD_ALL);
            return FALSE;
        }
        return sync;
    } else {
        recalibrated = FALSE;
    }
    return TRUE;
}

static void SamplingHandler(s16 interrupt, OSContext *context) {
    u8 exceptionContext[712] ATTRIBUTE_ALIGN(8);

    if (SamplingCallback) {
        OSClearContext((OSContext *)exceptionContext);
        OSSetCurrentContext((OSContext *)exceptionContext);
        SamplingCallback();
        OSClearContext((OSContext *)exceptionContext);
        OSSetCurrentContext(context);
    }
}

PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback callback) {
    PADSamplingCallback prev;

    prev = SamplingCallback;
    SamplingCallback = callback;
    if (callback) {
        SIRegisterPollingHandler(SamplingHandler);
    } else {
        SIUnregisterPollingHandler(SamplingHandler);
    }
    return prev;
}

BOOL __PADDisableRecalibration(BOOL disable) {
    BOOL enabled;
    BOOL prev;

    enabled = OSDisableInterrupts();
    prev = (__OSPadFlags & 0x40) ? TRUE : FALSE;
    __OSPadFlags &= 0xBF;
    if (disable) {
        __OSPadFlags |= 0x40;
    }
    OSRestoreInterrupts(enabled);
    return prev;
}
