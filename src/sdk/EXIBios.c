#include "common.h"
typedef struct OSContext { f64 data[89]; } OSContext;
typedef void (*EXICallback)(s32, OSContext *);
typedef struct EXIControl {
    EXICallback exiCallback;
    EXICallback tcCallback;
    EXICallback extCallback;
    volatile u32 state;
    int immLen;
    u8 *immBuf;
    u32 dev;
    u32 id;
    s32 idTime;
    int items;
    struct {
        u32 dev;
        EXICallback callback;
    } queue[3];
} EXIControl;
volatile u32 __EXIRegs[0x40] : 0xCC006800;
s32 __EXIProbeStartTime[2] : 0x800030C0;
u32 __OSBusClock : 0x800000F8;
u16 __OSDeviceCode : 0x800030E6;
#define REG(chan, idx) (__EXIRegs[((chan) * 5) + (idx)])
#define OS_TIMER_CLOCK (__OSBusClock / 4)
#define OSTicksToMilliseconds(ticks) ((ticks) / (OS_TIMER_CLOCK / 1000))
extern EXIControl Ecb_80328410[3];
#define Ecb Ecb_80328410
extern u32 IDSerialPort1_8035A9B8;
#define IDSerialPort1 IDSerialPort1_8035A9B8
extern int __OSInIPL;
extern char *__EXIVersion;
#define EXI_STATE_DMA 1
#define EXI_STATE_IMM 2
#define EXI_STATE_BUSY 3
#define EXI_STATE_SELECTED 4
#define EXI_STATE_ATTACHED 8
#define EXI_STATE_LOCKED 16
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void __OSMaskInterrupts(u32);
void __OSUnmaskInterrupts(u32);
void *fn_800B7290(s16);
#define __OSGetInterruptHandler fn_800B7290
void *__OSSetInterruptHandler(s16, void *);
s64 OSGetTime(void);
u32 fn_800B31A4(void);
#define OSGetConsoleType fn_800B31A4
u32 fn_800B3B28(void);
#define __OSGetDIConfig fn_800B3B28
void OSClearContext(OSContext *);
void OSSetCurrentContext(OSContext *);
void OSRegisterVersion(const char *);
void *memmove(void *, const void *, u32);
int __OSEnableBarnacle(s32, u32);
#define EXIImmEx fn_800F2120
#define EXISetExiCallback fn_800F2540
#define EXIProbe fn_800F2730
#define EXIProbeEx fn_800F27B0
#define EXIAttach fn_800F2864
#define EXIDetach fn_800F2970
#define EXIGetState fn_800F33BC
int EXIImm(s32 chan, void *buf, s32 len, u32 type, EXICallback callback);
int EXISync(s32 chan);
u32 EXIClearInterrupts(s32 chan, int exi, int tc, int ext);
int EXIProbe(s32 chan);
int EXIAttach(s32 chan, EXICallback extCallback);
int EXIDetach(s32 chan);
int EXISelect(s32 chan, u32 dev, u32 freq);
int EXIDeselect(s32 chan);
int EXILock(s32 chan, u32 dev, EXICallback unlockedCallback);
int EXIUnlock(s32 chan);
s32 EXIGetID(s32 chan, u32 dev, u32 *id);
#pragma scheduling off
static void SetExiInterruptMask(s32 chan, EXIControl *exi) {
    EXIControl *exi2 = &Ecb[2];

    switch (chan) {
    case 0:
        if ((exi->exiCallback == 0 && exi2->exiCallback == 0) || (exi->state & EXI_STATE_LOCKED)) {
            __OSMaskInterrupts(0x410000U);
        } else {
            __OSUnmaskInterrupts(0x410000U);
        }
        break;
    case 1:
        if (exi->exiCallback == 0 || (exi->state & EXI_STATE_LOCKED)) {
            __OSMaskInterrupts(0x80000U);
        } else {
            __OSUnmaskInterrupts(0x80000U);
        }
        break;
    case 2:
        if (__OSGetInterruptHandler(25) == 0 || (exi->state & EXI_STATE_LOCKED)) {
            __OSMaskInterrupts(0x40);
        } else {
            __OSUnmaskInterrupts(0x40);
        }
        break;
    }
}

static void CompleteTransfer(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    u8 *buf;
    u32 data;
    int i;
    int len;

    if (exi->state & EXI_STATE_BUSY) {
        if ((exi->state & EXI_STATE_IMM) && (len = exi->immLen)) {
            buf = exi->immBuf;
            data = REG(chan, 4);
            for (i = 0; i < len; i++) {
                *buf++ = (u8)((data >> ((3 - i) * 8)) & 0xFF);
            }
        }
        exi->state &= ~EXI_STATE_BUSY;
    }
}

int EXIImm(s32 chan, void *buf, s32 len, u32 type, EXICallback callback) {
    EXIControl *exi = &Ecb[chan];
    int enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & EXI_STATE_BUSY) || !(exi->state & EXI_STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->tcCallback = callback;
    if (exi->tcCallback) {
        EXIClearInterrupts(chan, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000U >> (chan * 3));
    }
    exi->state |= EXI_STATE_IMM;
    if (type != 0) {
        u32 data;
        int i;

        data = 0;
        for (i = 0; i < len; i++) {
            data |= ((u8 *)buf)[i] << ((3 - i) * 8);
        }
        REG(chan, 4) = data;
    }
    exi->immBuf = buf;
    exi->immLen = (type != 1) ? len : 0;
    REG(chan, 3) = (type << 2) | 1 | ((len - 1) << 4);
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXIImmEx(s32 chan, void *buf, s32 len, u32 mode) {
    s32 xLen;

    while (len) {
        xLen = (len < 4) ? len : 4;
        if (!EXIImm(chan, buf, xLen, mode, 0)) {
            return 0;
        }
        if (!EXISync(chan)) {
            return 0;
        }
        (u8 *)buf += xLen;
        len -= xLen;
    }
    return 1;
}

int EXIDma(s32 chan, void *buf, s32 len, u32 type, EXICallback callback) {
    EXIControl *exi = &Ecb[chan];
    int enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & EXI_STATE_BUSY) || !(exi->state & EXI_STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->tcCallback = callback;
    if ((u32)exi->tcCallback) {
        EXIClearInterrupts(chan, 0, 1, 0);
        __OSUnmaskInterrupts(0x200000U >> (chan * 3));
    }
    exi->state |= EXI_STATE_DMA;
    REG(chan, 1) = (u32)buf & 0x03FFFFE0;
    REG(chan, 2) = len;
    REG(chan, 3) = (type * 4) | 3;
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXISync(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    int rc = 0;
    int enabled;

    while (exi->state & EXI_STATE_SELECTED) {
        if (!(REG(chan, 3) & 1)) {
            enabled = OSDisableInterrupts();
            if (exi->state & EXI_STATE_SELECTED) {
                CompleteTransfer(chan);
                if (__OSGetDIConfig() != 0xFF || (OSGetConsoleType() & 0xF0000000U) == 0x20000000 || exi->immLen != 4 || (REG(chan, 0) & 0x70) ||
                    (REG(chan, 4) != 0x01010000 && REG(chan, 4) != 0x05070000 && REG(chan, 4) != 0x04220001) || __OSDeviceCode == 0x8200) {
                    rc = 1;
                }
            }
            OSRestoreInterrupts(enabled);
            break;
        }
    }
    return rc;
}

u32 EXIClearInterrupts(s32 chan, int exi, int tc, int ext) {
    u32 cpr;
    u32 prev;

    cpr = prev = REG(chan, 0);
    prev &= 0x7F5;
    if (exi) {
        prev |= 2;
    }
    if (tc) {
        prev |= 8;
    }
    if (ext) {
        prev |= 0x800;
    }
    REG(chan, 0) = prev;
    return cpr;
}

EXICallback EXISetExiCallback(s32 chan, EXICallback exiCallback) {
    EXIControl *exi = &Ecb[chan];
    EXICallback prev;
    int enabled;

    enabled = OSDisableInterrupts();
    prev = exi->exiCallback;
    exi->exiCallback = exiCallback;
    if (chan != 2) {
        SetExiInterruptMask(chan, exi);
    } else {
        SetExiInterruptMask(0, &Ecb[0]);
    }
    OSRestoreInterrupts(enabled);
    return prev;
}

static int __EXIProbe(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    int enabled;
    int rc;
    u32 cpr;
    s32 t;

    if (chan == 2) {
        return 1;
    }
    rc = 1;
    enabled = OSDisableInterrupts();
    cpr = REG(chan, 0);
    if (!(exi->state & EXI_STATE_ATTACHED)) {
        if (cpr & 0x800) {
            EXIClearInterrupts(chan, 0, 0, 1);
            __EXIProbeStartTime[chan] = exi->idTime = 0;
        }
        if (cpr & 0x1000) {
            t = (s32)(OSTicksToMilliseconds(OSGetTime()) / 100) + 1;
            if (__EXIProbeStartTime[chan] == 0) {
                __EXIProbeStartTime[chan] = t;
            }
            if (t - __EXIProbeStartTime[chan] < 300 / 100) {
                rc = 0;
            }
        } else {
            __EXIProbeStartTime[chan] = exi->idTime = 0;
            rc = 0;
        }
    } else if (!(cpr & 0x1000) || (cpr & 0x800)) {
        __EXIProbeStartTime[chan] = exi->idTime = 0;
        rc = 0;
    }
    OSRestoreInterrupts(enabled);
    return rc;
}

int EXIProbe(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    int rc;
    u32 id;

    rc = __EXIProbe(chan);
    if (rc && exi->idTime == 0) {
        rc = EXIGetID(chan, 0, &id) ? 1 : 0;
    }
    return rc;
}

s32 EXIProbeEx(s32 chan) {
    if (EXIProbe(chan)) {
        return 1;
    } else if (__EXIProbeStartTime[chan] != 0) {
        return 0;
    } else {
        return -1;
    }
}

static int __EXIAttach(s32 chan, EXICallback extCallback) {
    EXIControl *exi = &Ecb[chan];
    int enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & EXI_STATE_ATTACHED) || __EXIProbe(chan) == 0) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    EXIClearInterrupts(chan, 1, 0, 0);
    exi->extCallback = extCallback;
    __OSUnmaskInterrupts(0x100000U >> (chan * 3));
    exi->state |= EXI_STATE_ATTACHED;
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXIAttach(s32 chan, EXICallback extCallback) {
    EXIControl *exi = &Ecb[chan];
    int enabled;
    int rc;

    EXIProbe(chan);
    enabled = OSDisableInterrupts();
    if (exi->idTime == 0) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    rc = __EXIAttach(chan, extCallback);
    OSRestoreInterrupts(enabled);
    return rc;
}

int EXIDetach(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    int enabled;

    enabled = OSDisableInterrupts();
    if (!(exi->state & EXI_STATE_ATTACHED)) {
        OSRestoreInterrupts(enabled);
        return 1;
    }
    if ((exi->state & EXI_STATE_LOCKED) && exi->dev == 0) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->state &= ~EXI_STATE_ATTACHED;
    __OSMaskInterrupts(0x500000U >> (chan * 3));
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXISelect(s32 chan, u32 dev, u32 freq) {
    EXIControl *exi = &Ecb[chan];
    u32 cpr;
    int enabled;

    enabled = OSDisableInterrupts();
    if ((exi->state & EXI_STATE_SELECTED) ||
        (chan != 2 && ((dev == 0 && !(exi->state & EXI_STATE_ATTACHED) && !__EXIProbe(chan)) || !(exi->state & EXI_STATE_LOCKED) || exi->dev != dev))) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->state |= EXI_STATE_SELECTED;
    cpr = REG(chan, 0);
    cpr &= 0x405;
    cpr |= ((1 << dev) << 7) | (freq * 0x10);
    REG(chan, 0) = cpr;
    if (exi->state & EXI_STATE_ATTACHED) {
        switch (chan) {
        case 0:
            __OSMaskInterrupts(0x100000U);
            break;
        case 1:
            __OSMaskInterrupts(0x20000U);
            break;
        }
    }
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXIDeselect(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    u32 cpr;
    int enabled;

    enabled = OSDisableInterrupts();
    if (!(exi->state & EXI_STATE_SELECTED)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->state &= ~EXI_STATE_SELECTED;
    cpr = REG(chan, 0);
    REG(chan, 0) = cpr & 0x405;
    if (exi->state & EXI_STATE_ATTACHED) {
        switch (chan) {
        case 0:
            __OSUnmaskInterrupts(0x100000U);
            break;
        case 1:
            __OSUnmaskInterrupts(0x20000U);
            break;
        }
    }
    OSRestoreInterrupts(enabled);
    if (chan != 2 && (cpr & 0x80)) {
        return __EXIProbe(chan) ? 1 : 0;
    }
    return 1;
}

static void EXIIntrruptHandler(s16 interrupt, OSContext *context) {
    s32 chan;
    EXIControl *exi;
    EXICallback callback;

    chan = (interrupt - 9) / 3;
    exi = &Ecb[chan];
    EXIClearInterrupts(chan, 1, 0, 0);
    callback = exi->exiCallback;
    if (callback) {
        OSContext exceptionContext;

        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

static void TCIntrruptHandler(s16 interrupt, OSContext *context) {
    OSContext exceptionContext;
    s32 chan;
    EXIControl *exi;
    EXICallback callback;

    chan = (interrupt - 10) / 3;
    exi = &Ecb[chan];
    __OSMaskInterrupts(0x80000000U >> interrupt);
    EXIClearInterrupts(chan, 0, 1, 0);
    callback = exi->tcCallback;
    if (callback) {
        exi->tcCallback = 0;
        CompleteTransfer(chan);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

static void EXTIntrruptHandler(s16 interrupt, OSContext *context) {
    s32 chan;
    EXIControl *exi;
    EXICallback callback;

    chan = (interrupt - 11) / 3;
    __OSMaskInterrupts(0x500000U >> (chan * 3));
    exi = &Ecb[chan];
    callback = exi->extCallback;
    exi->state &= ~EXI_STATE_ATTACHED;
    if (callback) {
        OSContext exceptionContext;

        OSClearContext(&exceptionContext);
        OSSetCurrentContext(&exceptionContext);
        exi->extCallback = 0;
        callback(chan, context);
        OSClearContext(&exceptionContext);
        OSSetCurrentContext(context);
    }
}

void EXIInit(void) {
    u32 id;

    while ((REG(0, 3) & 1) == 1 || (REG(1, 3) & 1) == 1 || (REG(2, 3) & 1) == 1) {
    }
    __OSMaskInterrupts(0x7F8000);
    REG(0, 0) = 0;
    REG(1, 0) = 0;
    REG(2, 0) = 0;
    REG(0, 0) = 0x2000;
    __OSSetInterruptHandler(9, EXIIntrruptHandler);
    __OSSetInterruptHandler(10, TCIntrruptHandler);
    __OSSetInterruptHandler(11, EXTIntrruptHandler);
    __OSSetInterruptHandler(12, EXIIntrruptHandler);
    __OSSetInterruptHandler(13, TCIntrruptHandler);
    __OSSetInterruptHandler(14, EXTIntrruptHandler);
    __OSSetInterruptHandler(15, EXIIntrruptHandler);
    __OSSetInterruptHandler(16, TCIntrruptHandler);
    EXIGetID(0, 2, &IDSerialPort1);
    if (__OSInIPL) {
        __EXIProbeStartTime[0] = __EXIProbeStartTime[1] = 0;
        Ecb[0].idTime = Ecb[1].idTime = 0;
        __EXIProbe(0);
        __EXIProbe(1);
    } else if (EXIGetID(0, 0, &id) && id == 0x07010000U) {
        __OSEnableBarnacle(1, 0);
    } else if (EXIGetID(1, 0, &id) && id == 0x07010000U) {
        __OSEnableBarnacle(0, 2);
    }
    OSRegisterVersion(__EXIVersion);
}

int EXILock(s32 chan, u32 dev, EXICallback unlockedCallback) {
    EXIControl *exi = &Ecb[chan];
    int enabled;
    int i;

    enabled = OSDisableInterrupts();
    if (exi->state & EXI_STATE_LOCKED) {
        if (unlockedCallback) {
            for (i = 0; i < exi->items; i++) {
                if (exi->queue[i].dev == dev) {
                    OSRestoreInterrupts(enabled);
                    return 0;
                }
            }
            exi->queue[exi->items].callback = unlockedCallback;
            exi->queue[exi->items].dev = dev;
            exi->items++;
        }
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->state |= EXI_STATE_LOCKED;
    exi->dev = dev;
    SetExiInterruptMask(chan, exi);
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXIUnlock(s32 chan) {
    EXIControl *exi = &Ecb[chan];
    int enabled;
    EXICallback unlockedCallback;

    enabled = OSDisableInterrupts();
    if (!(exi->state & EXI_STATE_LOCKED)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    exi->state &= ~EXI_STATE_LOCKED;
    SetExiInterruptMask(chan, exi);
    if (exi->items > 0) {
        unlockedCallback = exi->queue[0].callback;
        if (--exi->items > 0) {
            memmove(&exi->queue[0], &exi->queue[1], sizeof(exi->queue[0]) * exi->items);
        }
        unlockedCallback(chan, 0);
    }
    OSRestoreInterrupts(enabled);
    return 1;
}

u32 EXIGetState(s32 chan) {
    EXIControl *exi = &Ecb[chan];

    return exi->state;
}

static void UnlockedHandler(s32 chan, OSContext *context) {
    u32 id;

    EXIGetID(chan, 0, &id);
}

s32 EXIGetID(s32 chan, u32 dev, u32 *id) {
    EXIControl *exi = &Ecb[chan];
    int err;
    u32 cmd;
    s32 startTime;
    int enabled;

    if (chan == 0 && dev == 2 && IDSerialPort1 != 0) {
        *id = IDSerialPort1;
        return 1;
    }
    if (chan < 2 && dev == 0) {
        if (!__EXIProbe(chan)) {
            return 0;
        }
        if (exi->idTime == __EXIProbeStartTime[chan]) {
            *id = exi->id;
            return exi->idTime;
        }
        if (!__EXIAttach(chan, 0)) {
            return 0;
        }
        startTime = __EXIProbeStartTime[chan];
    }
    enabled = OSDisableInterrupts();
    err = !EXILock(chan, dev, (chan < 2 && dev == 0) ? UnlockedHandler : 0);
    if (!err) {
        err = !EXISelect(chan, dev, 0);
        if (!err) {
            cmd = 0;
            err |= !EXIImm(chan, &cmd, 2, 1, 0);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, id, 4, 0, 0);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }
    OSRestoreInterrupts(enabled);
    if (chan < 2 && dev == 0) {
        EXIDetach(chan);
        enabled = OSDisableInterrupts();
        err |= (startTime != __EXIProbeStartTime[chan]);
        if (!err) {
            exi->id = *id;
            exi->idTime = startTime;
        }
        OSRestoreInterrupts(enabled);
        return err ? 0 : exi->idTime;
    }
    return err ? 0 : 1;
}
#pragma scheduling reset
