/* dvdidutils.c (Dolphin SDK 2003) : 0x800C04F8 - 0x800C05F0 of auto/text_800B2E70. */
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

int strncmp(const char *s1, const char *s2, u32 n); /* strncmp */
#define strncmp strncmp
#define DVDCompareDiskID fn_800C04F8

BOOL DVDCompareDiskID(DVDDiskID *id1, DVDDiskID *id2) {
    if (id1->gameName[0] && id2->gameName[0] && strncmp(id1->gameName, id2->gameName, 4)) {
        return FALSE;
    }
    if (!id1->company[0] || !id2->company[0] || strncmp(id1->company, id2->company, 2)) {
        return FALSE;
    }
    if (id1->diskNumber != 0xFF && id2->diskNumber != 0xFF && id1->diskNumber != id2->diskNumber) {
        return FALSE;
    }
    if (id1->gameVersion != 0xFF && id2->gameVersion != 0xFF && id1->gameVersion != id2->gameVersion) {
        return FALSE;
    }
    return TRUE;
}
