#include "common.h"
typedef struct OSContext OSContext;
typedef void (*MTRCallbackType)(u32, OSContext *);
typedef void (*DBGCallbackType)(u32, OSContext *);
volatile u32 __EXIRegs[0x40] : 0xCC006800;
volatile u32 __PIRegs[12] : 0xCC003000;
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void __OSMaskInterrupts(u32);
void __OSUnmaskInterrupts(u32);
void *__OSSetInterruptHandler(s16, void *);
extern u8 lbl_803596E8;
extern MTRCallbackType lbl_8035A990;
extern DBGCallbackType lbl_8035A994;
extern u32 lbl_8035A998;
extern s32 lbl_8035A99C;
extern u8 *lbl_8035A9A0;
extern u8 lbl_8035A9A4;
#define SendCount lbl_803596E8
#define MTRCallback lbl_8035A990
#define DBGCallback lbl_8035A994
#define SendMailData lbl_8035A998
#define RecvDataLeng lbl_8035A99C
#define pEXIInputFlag lbl_8035A9A0
#define EXIInputFlag lbl_8035A9A4
#define DBGEXIImm fn_800F0E4C
#define DBGReadMailbox fn_800F0DA0
#define DBGRead fn_800F0CC4
#define DBGWrite fn_800F0BE8
#define DBGReadStatus fn_800F0B3C
#define MWCallback fn_800F0B00
#define DBGHandler fn_800F0AC0

#pragma inline_depth(3)
#define IS_TRUE(x) ((x) != FALSE)
#define IS_FALSE(x) !IS_TRUE(x)
#define ROUND_UP(x, align) (((x) + (align) - 1) & (-(align)))

static inline u32 DBGEXIInit(void) {
    __OSMaskInterrupts(0x18000);
    __EXIRegs[10] = 0;
    return TRUE;
}

static inline u32 DBGEXISelect(u32 v) {
    u32 regs = __EXIRegs[10];

    regs &= 0x405;
    regs |= 0x80 | (v << 4);
    __EXIRegs[10] = regs;
    return TRUE;
}

static inline BOOL DBGEXIDeselect(void) {
    __EXIRegs[10] &= 0x405;
    return TRUE;
}

static inline BOOL DBGEXISync(void) {
    while (__EXIRegs[13] & 1) {
    }
    return TRUE;
}

static BOOL DBGEXIImm(void *buffer, s32 bytecounter, u32 write) {
    u8 *tempPointer;
    u32 writeOutValue;
    int i;

    if (write) {
        tempPointer = buffer;
        writeOutValue = 0;
        for (i = 0; i < bytecounter; i++) {
            u8 *temp = ((u8 *)buffer) + i;

            writeOutValue |= *temp << ((3 - i) << 3);
        }
        __EXIRegs[14] = writeOutValue;
    }
    __EXIRegs[13] = 1 | write << 2 | (bytecounter - 1) << 4;
    DBGEXISync();
    if (!write) {
        writeOutValue = __EXIRegs[14];
        tempPointer = buffer;
        for (i = 0; i < bytecounter; i++) {
            *tempPointer++ = writeOutValue >> ((3 - i) << 3);
        }
    }
    return TRUE;
}

static inline BOOL DBGWriteMailbox(u32 p1) {
    BOOL total = FALSE;
    u32 v;

    if (!DBGEXISelect(4)) {
        return FALSE;
    }
    v = (p1 & 0x1FFFFFFF) | 0xC0000000;
    total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 1));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}

#pragma push
#pragma dont_inline on
static BOOL DBGReadMailbox(u32 *p1) {
    BOOL total = FALSE;
    u32 v;

    DBGEXISelect(4);
    v = 0x60000000;
    total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}
#pragma pop

static BOOL DBGRead(u32 count, u32 *buffer, s32 param3) {
    BOOL total = FALSE;
    u32 *buf_p = (u32 *)buffer;
    u32 v1;
    u32 v;

    DBGEXISelect(4);
    v1 = (count & 0x1FFFC) << 8 | 0x20000000;
    total |= IS_FALSE(DBGEXIImm(&v1, sizeof(v1), 1));
    total |= IS_FALSE(DBGEXISync());
    while (param3) {
        total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 0));
        total |= IS_FALSE(DBGEXISync());
        *buf_p++ = v;
        param3 -= 4;
        if (param3 < 0) {
            param3 = 0;
        }
    }
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}

static BOOL DBGWrite(u32 count, void *buffer, s32 param3) {
    BOOL total = FALSE;
    u32 *buf_p = (u32 *)buffer;
    u32 v1;
    u32 v;

    DBGEXISelect(4);
    v1 = (count & 0x1FFFC) << 8 | 0xA0000000;
    total |= IS_FALSE(DBGEXIImm(&v1, sizeof(v1), 1));
    total |= IS_FALSE(DBGEXISync());
    while (param3 != 0) {
        v = *buf_p++;
        total |= IS_FALSE(DBGEXIImm(&v, sizeof(v), 1));
        total |= IS_FALSE(DBGEXISync());
        param3 -= 4;
        if (param3 < 0) {
            param3 = 0;
        }
    }
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}

#pragma push
#pragma dont_inline on
static BOOL DBGReadStatus(u32 *p1) {
    BOOL total = FALSE;
    u32 v;

    DBGEXISelect(4);
    v = 1 << 30;
    total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}
#pragma pop

static void MWCallback(u32 a, OSContext *b) {
    EXIInputFlag = TRUE;
    if (MTRCallback) {
        MTRCallback(0, b);
    }
}

static void DBGHandler(s16 a, OSContext *b) {
    *__PIRegs = 0x1000;
    if (DBGCallback) {
        DBGCallback(a, b);
    }
}

void DBInitComm(u8 **a, MTRCallbackType b) {
    BOOL interrupts = OSDisableInterrupts();

    pEXIInputFlag = &EXIInputFlag;
    *a = pEXIInputFlag;
    MTRCallback = b;
    DBGEXIInit();
    OSRestoreInterrupts(interrupts);
}

void DBInitInterrupts(void) {
    __OSMaskInterrupts(0x18000);
    __OSMaskInterrupts(0x40);
    DBGCallback = &MWCallback;
    __OSSetInterruptHandler(0x19, DBGHandler);
    __OSUnmaskInterrupts(0x40);
}

static inline void CheckMailBox(void) {
    u32 v;

    DBGReadStatus(&v);
    if (v & 1) {
        DBGReadMailbox(&v);
        v &= 0x1FFFFFFF;
        if ((v & 0x1F000000) == 0x1F000000) {
            SendMailData = v;
            RecvDataLeng = v & 0x7FFF;
            EXIInputFlag = 1;
        }
    }
}

u32 DBQueryData(void) {
    BOOL interrupts;

    EXIInputFlag = 0;
    if (!RecvDataLeng) {
        interrupts = OSDisableInterrupts();
        CheckMailBox();
        OSRestoreInterrupts(interrupts);
    }
    return RecvDataLeng;
}

BOOL DBRead(u32 *buffer, s32 count) {
    u32 interrupts = OSDisableInterrupts();
    u32 v = SendMailData & 0x10000 ? 0x1000 : 0;

    DBGRead(v + 0x1E000, buffer, ROUND_UP(count, 4));
    RecvDataLeng = 0;
    EXIInputFlag = 0;
    OSRestoreInterrupts(interrupts);
    return 0;
}

static inline BOOL wA_ReadStatus(u32 *p1) {
    BOOL total = FALSE;
    u32 v;

    if (!DBGEXISelect(4)) {
        return FALSE;
    }
    v = 1 << 30;
    total |= IS_FALSE(DBGEXIImm(&v, 2, 1));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIImm(p1, 4, 0));
    total |= IS_FALSE(DBGEXISync());
    total |= IS_FALSE(DBGEXIDeselect());
    return IS_FALSE(total);
}
BOOL DBWrite(const void *src, u32 size) {
    u32 v;
    u32 busyFlag;
    BOOL interrupts = OSDisableInterrupts();

    do {
        wA_ReadStatus(&busyFlag);
    } while (busyFlag & 2);
    SendCount++;
    v = ((SendCount & 1) ? 0x1000 : 0);
    while (!DBGWrite(v | 0x1C000, (void *)src, ROUND_UP(size, 4))) {
    }
    do {
        wA_ReadStatus(&busyFlag);
    } while (busyFlag & 2);
    v = SendCount;
    while (!DBGWriteMailbox((0x1F000000) | v << 0x10 | size)) {
    }
    do {
        while (!wA_ReadStatus(&busyFlag)) {
        }
    } while (busyFlag & 2);
    OSRestoreInterrupts(interrupts);
    return 0;
}

void DBOpen(void) {
}

void DBClose(void) {
}
