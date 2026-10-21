/* dvderror.c (Dolphin SDK 2003) : 0x800C0360 - 0x800C04F8 of auto/text_800B2E70. */
#include "common.h"

typedef struct OSSramEx {
    u8 flashID[2][12];
    u32 wirelessKeyboardID;
    u16 wirelessPadID[4];
    u8 dvdErrorCode;
    u8 _padding0;
    u8 flashIDCheckSum[2];
    u16 gbs;
    u8 _padding1[2];
} OSSramEx;

OSSramEx *__OSLockSramEx(void);
BOOL __OSUnlockSramEx(BOOL commit);

static u32 ErrorTable[] = {
    0,          0x00023A00, 0x00062800, 0x00030200, 0x00031100, 0x00052000,
    0x00052001, 0x00052100, 0x00052400, 0x00052401, 0x00052402, 0x000B5A01,
    0x00056300, 0x00020401, 0x00020400, 0x00040800, 0x00100007, 0,
};

u8 ErrorCode2Num(u32 errorCode) {
    int i;

    for (i = 0; i < 18; i++) {
        if (ErrorTable[i] == errorCode) {
            return (u8)i;
        }
    }
    if ((errorCode >= 0x00100000) && (errorCode <= 0x00100008)) {
        return 17;
    }
    return 29;
}

static inline u8 Convert(u32 error) {
    u32 statusCode;
    u32 errorCode;
    u8 errorNum;

    if (error == 0x01234567) {
        return 255;
    }
    if (error == 0x01234568) {
        return 254;
    }
    statusCode = (error & 0xFF000000) >> 24;
    errorCode = error & 0x00FFFFFF;
    errorNum = ErrorCode2Num(errorCode);
    if (statusCode >= 6) {
        statusCode = 6;
    }
    return (u8)(errorNum + statusCode * 30);
}

void __DVDStoreErrorCode(u32 error) {
    OSSramEx *sram;
    u8 num;

    num = Convert(error);
    sram = __OSLockSramEx();
    sram->dvdErrorCode = num;
    __OSUnlockSramEx(TRUE);
}
