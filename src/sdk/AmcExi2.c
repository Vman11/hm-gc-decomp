#include "common.h"
#pragma dont_inline on
typedef struct OSContext OSContext;
typedef void (*EXICallback)(s32, OSContext *);
typedef struct EXI2Control {
    EXICallback exiCallback;
    EXICallback tcCallback;
    EXICallback extCallback;
    volatile u32 state;
    int immLen;
    u8 *immBuf;
} EXI2Control;
volatile u32 __EXIRegs[0x40] : 0xCC006800;
volatile u32 __SIRegs[0x40] : 0xCC006400;
volatile u32 __PIRegs[12] : 0xCC003000;
#define REG(idx) (__EXIRegs[10 + (idx)])
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void __OSMaskInterrupts(u32);
void __OSUnmaskInterrupts(u32);
void *__OSSetInterruptHandler(s16, void *);
void *memset(void *, int, u32);
void fn_800E91D0(const char *, ...);
extern EXI2Control lbl_803283F8;
extern EXI2Control *lbl_803596F0;
extern u8 *lbl_803596F8;
extern EXICallback lbl_8035A9B0;
extern int lbl_8035A9AC;
extern char lbl_802E0B78[];
#define Exi lbl_803596F0
#define pExiInputFlag lbl_803596F8
#define ExiCallback lbl_8035A9B0
#define SessionOpen lbl_8035A9AC
#define EXI2Imm fn_800F10E4
#define EXI2Sync fn_800F1328
#define EXI2ClearInterrupts fn_800F14C0
#define EXI2SetExiCallback fn_800F1500
#define EXI2Select fn_800F156C
#define EXI2Deselect fn_800F15EC
#define EXI2IntrruptHandler fn_800F1654
#define EXI2InstallHandler fn_800F16A4
#define EXI2InitRegs fn_800F16E4
#define EXI2Callback fn_800F1724

void EXI2ClearInterrupts(int exi, int tc);

int EXI2Imm(void *buf, s32 len, u32 type, EXICallback callback) {
    int enabled;
    s32 chan = 2;

    enabled = OSDisableInterrupts();
    if ((Exi->state & 3) || !(Exi->state & 4)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    Exi->tcCallback = callback;
    if (Exi->tcCallback) {
        EXI2ClearInterrupts(0, 1);
        __OSUnmaskInterrupts(0x200000U >> (chan * 3));
    }
    Exi->state |= 2;
    if (type != 0) {
        u32 data;
        int i;

        data = 0;
        for (i = 0; i < len; i++) {
            data |= ((u8 *)buf)[i] << ((3 - i) * 8);
        }
        REG(4) = data;
    }
    Exi->immBuf = buf;
    Exi->immLen = (type != 1) ? len : 0;
    REG(3) = (type << 2) | 1 | ((len - 1) << 4);
    OSRestoreInterrupts(enabled);
    return 1;
}

#pragma push
#pragma dont_inline off
static inline int EXI2CompleteTransfer(void) {
    u8 *buf;
    u32 data;
    int i;
    int len;

    if (Exi->state & 3) {
        if ((Exi->state & 2) && (len = Exi->immLen)) {
            buf = Exi->immBuf;
            data = REG(4);
            for (i = 0; i < len; i++) {
                *buf++ = data >> ((3 - i) * 8);
            }
        }
        Exi->state &= ~3;
        return 1;
    }
    return 0;
}
void EXI2Sync(void) {
    int enabled;

    while (Exi->state & 4) {
        if (!(REG(3) & 1)) {
            enabled = OSDisableInterrupts();
            EXI2CompleteTransfer();
            OSRestoreInterrupts(enabled);
            break;
        }
    }
}
#pragma pop

void EXI2ClearInterrupts(int exi, int tc) {
    if (exi) {
        __PIRegs[0] = (__PIRegs[0] & 0x1000) | 0x1000;
    }
    if (tc) {
        REG(0) = (REG(0) & 0x7F5) | 8;
    }
}

EXICallback EXI2SetExiCallback(EXICallback exiCallback) {
    EXICallback prev;
    int enabled;

    enabled = OSDisableInterrupts();
    if (exiCallback) {
        __OSUnmaskInterrupts(0x40);
    } else {
        __OSMaskInterrupts(0x40);
    }
    prev = Exi->exiCallback;
    Exi->exiCallback = exiCallback;
    OSRestoreInterrupts(enabled);
    return prev;
}

int EXI2Select(u32 freq) {
    int enabled;
    u32 cpr;

    enabled = OSDisableInterrupts();
    if (Exi->state & 4) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    Exi->state |= 4;
    cpr = REG(0);
    cpr &= 0x405;
    cpr |= (freq << 4) | 0x80;
    REG(0) = cpr;
    OSRestoreInterrupts(enabled);
    return 1;
}

int EXI2Deselect(void) {
    int enabled;

    enabled = OSDisableInterrupts();
    if (!(Exi->state & 4)) {
        OSRestoreInterrupts(enabled);
        return 0;
    }
    Exi->state &= ~4;
    REG(0) &= 0x405;
    OSRestoreInterrupts(enabled);
    return 1;
}

void EXI2IntrruptHandler(s16 interrupt, OSContext *context) {
    EXICallback callback;

    __PIRegs[0] = (__PIRegs[0] & 0x1000) | 0x1000;
    callback = Exi->exiCallback;
    if (callback) {
        callback(2, context);
    }
}

void EXI2InstallHandler(void) {
    __OSMaskInterrupts(0x8000);
    __OSSetInterruptHandler(25, EXI2IntrruptHandler);
    __OSUnmaskInterrupts(0x40);
}

void EXI2InitRegs(void) {
    memset(&lbl_803283F8, 0, sizeof(EXI2Control));
    REG(0) = 0;
    __SIRegs[15] = 0;
}

void EXI2Callback(s32 chan, OSContext *context) {
    *pExiInputFlag = 1;
    if (ExiCallback) {
        ExiCallback(0, context);
    }
}

void EXI2_Init(u8 **inputFlag, EXICallback callback) {
    int enabled;
    u32 b;
    u32 a;
    u32 cmd[3];
    int ok;

    *inputFlag = pExiInputFlag;
    enabled = OSDisableInterrupts();
    ExiCallback = callback;
    OSRestoreInterrupts(enabled);
    EXI2InitRegs();
    b = ok = 0;
    a = 0x01000003;
    while (!ok) {
        ok = EXI2Select(5);
    }
    cmd[0] = 0x80000000;
    EXI2Imm(cmd, 2, 1, 0);
    EXI2Sync();
    EXI2Imm(&a, 4, 1, 0);
    EXI2Sync();
    EXI2Imm(&b, 4, 1, 0);
    EXI2Sync();
    EXI2Deselect();
}

void EXI2_EnableInterrupts(void) {
    EXI2SetExiCallback(EXI2Callback);
    EXI2InstallHandler();
}

int EXI2_Poll(void) {
    u32 ret;
    u32 dummy;
    u32 cmd[3];

    if (!(__PIRegs[0] & 0x1000) && *pExiInputFlag == 0) {
        ret = 0;
    } else {
        if (SessionOpen == 0) {
            int ok = 0;

            while (ok == 0) {
                ok = EXI2Select(5);
            }
            if (!ok) {
                fn_800E91D0(lbl_802E0B78);
            } else {
                SessionOpen = 1;
                cmd[0] = 0;
                EXI2Imm(cmd, 2, 1, 0);
                EXI2Sync();
                EXI2Imm(&dummy, 2, 0, 0);
                EXI2Sync();
            }
        }
        EXI2Imm(&ret, 4, 0, 0);
        EXI2Sync();
        if (*pExiInputFlag == 0) {
            __PIRegs[0] = __PIRegs[0] & 0x1000;
            *pExiInputFlag = 1;
        }
    }
    return ret;
}

int EXI2_ReadN(void *bytes, u32 length) {
    u32 i;
    u32 tail;
    s32 rem;
    int off;
    int ok;
    u32 data;
    u32 dummy;
    u32 cmd[2];
    u32 n;

    if (SessionOpen) {
        ok = 1;
    } else {
        int r = 0;
        while (r == 0) {
            r = EXI2Select(5);
        }
        ok = r;
        if (!ok) {
            fn_800E91D0(lbl_802E0B78);
            ok = 0;
        } else {
            SessionOpen = 1;
            cmd[0] = 0;
            EXI2Imm(cmd, 2, 1, 0);
            EXI2Sync();
            EXI2Imm(&dummy, 2, 0, 0);
            EXI2Sync();
        }
    }
    if (!ok) {
        return 1;
    }
    n = (length >> 2) + ((length & 3) ? 1 : 0);
    tail = (length & 3) + (length & 1);
    rem = (s32)length % 4;
    off = 0;
    i = 0;
    while (off < length) {
        int j;
        int nb;

        EXI2Imm(&data, (i < n - 1) ? 4 : ((tail == 2) ? 2 : 4), 0, 0);
        EXI2Sync();
        if (length - off >= 4) {
            nb = 4;
        } else {
            nb = rem;
        }
        for (j = 0; j < nb; j++) {
            ((u8 *)bytes)[j + off] = data >> ((3 - j) * 8);
        }
        off = (i + 1) * 4;
        i++;
    }
    EXI2Deselect();
    SessionOpen = 0;
    *pExiInputFlag = 0;
    return 0;
}

int EXI2_WriteN(void *bytes, u32 length) {
    u32 i;
    u32 len;
    u32 *p;
    u32 status;
    u32 cmd[3];
    u32 cmd2[2];
    u32 n;
    int ok;
    p = bytes;
    len = length;
    ok = 0;
    while (ok == 0) {
        ok = EXI2Select(5);
    }
    if (!ok) {
        return 1;
    }
    cmd[0] = 0x80000000;
    EXI2Imm(cmd, 2, 1, 0);
    EXI2Sync();
    EXI2Imm(&len, 4, 1, 0);
    EXI2Sync();
    n = (len >> 2) + ((len & 3) ? 1 : 0);
    for (i = 0; i < n; i++) {
        EXI2Imm(p++, (i < n - 1) ? 4 : ((((len & 3) + (len & 1)) == 2) ? 2 : 4), 1, 0);
        EXI2Sync();
    }
    EXI2Deselect();
    ok = 0;
    while (ok == 0) {
        ok = EXI2Select(5);
    }
    if (!ok) {
        return 1;
    }
    cmd2[0] = 0x10000;
    EXI2Imm(cmd2, 2, 1, 0);
    EXI2Sync();
    EXI2Imm(&status, 2, 0, 0);
    EXI2Sync();
    do {
        EXI2Imm(&status, 2, 0, 0);
        EXI2Sync();
    } while (!((status >> 16) & 1));
    EXI2Deselect();
    return 0;
}

void EXI2_Reserve(void) {
}

void EXI2_Unreserve(void) {
}

int AMC_IsStub(void) {
    return 0;
}
