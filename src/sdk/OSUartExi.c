#include "common.h"
typedef struct OSContext OSContext;
typedef void (*EXICallback)(s32, OSContext *);
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
u32 fn_800B31A4(void);
#define OSGetConsoleType fn_800B31A4
int EXIImm(s32 chan, void *buf, s32 len, u32 type, EXICallback callback);
int EXISync(s32 chan);
int fn_800F2864(s32 chan, EXICallback extCallback);
int fn_800F2970(s32 chan);
#define EXIAttach fn_800F2864
#define EXIDetach fn_800F2970
int EXISelect(s32 chan, u32 dev, u32 freq);
int EXIDeselect(s32 chan);
int EXILock(s32 chan, u32 dev, EXICallback unlockedCallback);
int EXIUnlock(s32 chan);
s32 EXIGetID(s32 chan, u32 dev, u32 *id);
extern s32 lbl_8035A9C0;
extern u32 lbl_8035A9C4;
extern u32 lbl_8035A9C8;
extern u32 lbl_8035A9CC;
#define Chan lbl_8035A9C0
#define Dev lbl_8035A9C4
#define Enabled lbl_8035A9C8
#define BarnacleEnabled lbl_8035A9CC
#define ProbeBarnacle fn_800F37AC
#define InitializeUART fn_800F3AF4
#define WriteUARTN fn_800F3B64

static int ProbeBarnacle(s32 chan, u32 dev, u32 *revision) {
    int err;
    u32 cmd;

    if (chan != 2 && dev == 0 && !EXIAttach(chan, 0)) {
        return 0;
    }
    err = !EXILock(chan, dev, 0);
    if (!err) {
        err = !EXISelect(chan, dev, 0);
        if (!err) {
            cmd = 0x20011300;
            err = !EXIImm(chan, &cmd, 4, 1, 0);
            err |= !EXISync(chan);
            err |= !EXIImm(chan, revision, 4, 0, 0);
            err |= !EXISync(chan);
            err |= !EXIDeselect(chan);
        }
        EXIUnlock(chan);
    }
    if (chan != 2 && dev == 0) {
        EXIDetach(chan);
    }
    if (err) {
        return 0;
    }
    return (*revision != 0xFFFFFFFF) ? 1 : 0;
}

void __OSEnableBarnacle(s32 chan, u32 dev) {
    u32 id;

    if (EXIGetID(chan, dev, &id)) {
        switch (id) {
        case 0xFFFFFFFF:
        case 0x00000004:
        case 0x00000008:
        case 0x00000010:
        case 0x00000020:
        case 0x80000004:
        case 0x80000008:
        case 0x80000010:
        case 0x80000020:
        case 0x01010000:
        case 0x01020000:
        case 0x02020000:
        case 0x03010000:
        case 0x04020100:
        case 0x04020200:
        case 0x04020300:
        case 0x04040404:
        case 0x04060000:
        case 0x04120000:
        case 0x04130000:
        case 0x04220000:
            break;
        default:
            if (ProbeBarnacle(chan, dev, &id)) {
                Chan = chan;
                Dev = dev;
                Enabled = BarnacleEnabled = 0xA5FF005A;
            }
            break;
        }
    }
}

u32 InitializeUART(void) {
    if (BarnacleEnabled == 0xA5FF005A) {
        return 0;
    }
    if (!(OSGetConsoleType() & 0x10000000)) {
        Enabled = 0;
        return 2;
    }
    Enabled = 0xA5FF005A;
    Chan = 0;
    Dev = 1;
    return 0;
}

static int QueueLength(void) {
    u32 cmd;

    if (!EXISelect(Chan, Dev, 3)) {
        return -1;
    }
    cmd = 0x20010000;
    EXIImm(Chan, &cmd, 4, 1, 0);
    EXISync(Chan);
    EXIImm(Chan, &cmd, 1, 0, 0);
    EXISync(Chan);
    EXIDeselect(Chan);
    return 16 - (int)(cmd >> 24);
}

u32 WriteUARTN(void *buf, u32 len) {
    u32 cmd;
    char *ptr;
    int locked;
    s32 xLen;
    int enabled;
    int qLen;
    u32 error;

    if (Enabled != 0xA5FF005A) {
        return 2;
    }
    enabled = OSDisableInterrupts();
    locked = EXILock(Chan, Dev, 0);
    if (!locked) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    for (ptr = (char *)buf; (u32)(ptr - (char *)buf) < len; ptr++) {
        if (*ptr == '\n') {
            *ptr = '\r';
        }
    }
    error = 0;
    cmd = 0xA0010000;
    while (len) {
        qLen = QueueLength();
        if (qLen < 0) {
            error = 3;
            break;
        }
        if (qLen < 12 && (u32)qLen < len) {
            continue;
        }
        if (!EXISelect(Chan, Dev, 3)) {
            error = 3;
            break;
        }
        EXIImm(Chan, &cmd, 4, 1, 0);
        EXISync(Chan);
        while (qLen && len) {
            if (qLen < 4 && (u32)qLen < len) {
                break;
            }
            xLen = (len < 4) ? (s32)len : 4;
            EXIImm(Chan, buf, xLen, 1, 0);
            (u8 *)buf += xLen;
            len -= xLen;
            qLen -= xLen;
            EXISync(Chan);
        }
        EXIDeselect(Chan);
    }
    EXIUnlock(Chan);
    OSRestoreInterrupts(enabled);
    return error;
}
