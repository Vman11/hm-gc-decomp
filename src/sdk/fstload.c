/* fstload.c (Dolphin SDK 2003) : 0x800C071C - 0x800C095C of auto/text_800B2E70. Based on dolsdk2001. */
#include "common.h"

typedef struct DVDDiskID {
    char gameName[4];
    char company[2];
    u8 diskNumber;
    u8 gameVersion;
    u8 streaming;
    u8 streamingBufSize;
    u8 padding[22];
} DVDDiskID;
typedef struct DVDBB2 {
    u32 bootFilePosition;
    u32 FSTPosition;
    u32 FSTLength;
    u32 FSTMaxLength;
    void *FSTAddress;
    u32 userPosition;
    u32 userLength;
    u32 padding0;
} DVDBB2;
typedef struct DVDCommandBlock DVDCommandBlock;
typedef void (*DVDCBCallback)(s32 result, DVDCommandBlock *block);
struct DVDCommandBlock {
    DVDCommandBlock *next;
    DVDCommandBlock *prev;
    u32 command;
    s32 state;
    u32 offset;
    u32 length;
    void *addr;
    u32 currTransferSize;
    u32 transferredSize;
    DVDDiskID *id;
    DVDCBCallback callback;
    void *userData;
};
typedef struct OSBootInfo_s {
    DVDDiskID DVDDiskID;
    u32 magic;
    u32 version;
    u32 memorySize;
    u32 consoleType;
    void *arenaLo;
    void *arenaHi;
    void *FSTLocation;
    u32 FSTMaxLength;
} OSBootInfo_s;

#define OSPhysicalToCached(paddr) ((void *)((u32)(paddr) + 0x80000000))
#define OSRoundUp32B(x) (((u32)(x) + 32 - 1) & ~(32 - 1))

void *OSGetArenaHi(void);
void OSSetArenaHi(void *addr);
void OSReport(const char *msg, ...);
void *memcpy(void *dst, const void *src, u32 n);
void DVDReset(void);
BOOL DVDReadDiskID(DVDCommandBlock *block, DVDDiskID *diskID, DVDCBCallback callback);
s32 DVDGetDriveStatus(void);
BOOL fn_800BF734(DVDCommandBlock *block, void *addr, s32 length, s32 offset, DVDCBCallback callback);
#define DVDReadAbsAsyncForBS fn_800BF734

static u8 bb2Buf[63];
static u32 status;
static DVDBB2 *bb2;
static DVDDiskID *idTmp;

static void cb(s32 result, DVDCommandBlock *block) {
    if (result > 0) {
        switch (status) {
        case 0:
            status = 1;
            DVDReadAbsAsyncForBS(block, bb2, 0x20, 0x420, cb);
            break;
        case 1:
            status = 2;
            DVDReadAbsAsyncForBS(block, bb2->FSTAddress, OSRoundUp32B(bb2->FSTLength), bb2->FSTPosition, cb);
            break;
        }
    } else if (result == -1) {
    } else if (result == -4) {
        status = 0;
        DVDReset();
        DVDReadDiskID(block, idTmp, cb);
    }
}

void __fstLoad(void) {
    OSBootInfo_s *bootInfo;
    DVDDiskID *id;
    u8 idTmpBuf[63];
    void *arenaHi;
    static DVDCommandBlock block;

    arenaHi = OSGetArenaHi();
    bootInfo = OSPhysicalToCached(0);
    idTmp = (DVDDiskID *)OSRoundUp32B(idTmpBuf);
    bb2 = (DVDBB2 *)OSRoundUp32B(bb2Buf);
    DVDReset();
    DVDReadDiskID(&block, idTmp, cb);
    while (DVDGetDriveStatus() != 0) {
    }
    bootInfo->FSTLocation = bb2->FSTAddress;
    bootInfo->FSTMaxLength = bb2->FSTMaxLength;
    id = &bootInfo->DVDDiskID;
    memcpy(id, idTmp, sizeof(DVDDiskID));
    OSReport("\n");
    OSReport("  Game Name ... %c%c%c%c\n", id->gameName[0], id->gameName[1], id->gameName[2], id->gameName[3]);
    OSReport("  Company ..... %c%c\n", id->company[0], id->company[1]);
    OSReport("  Disk # ...... %d\n", id->diskNumber);
    OSReport("  Game ver .... %d\n", id->gameVersion);
    OSReport("  Streaming ... %s\n", (id->streaming == 0) ? "OFF" : "ON");
    OSReport("\n");
    OSSetArenaHi(bb2->FSTAddress);
}
