/* dvdfs.c (Dolphin SDK 2003) : 0x800BD00C - 0x800BDA6C of auto/text_800B2E70.
 * Taken from dolsdk2001 src/dvd/dvdfs.c (asserts compile away); unused functions omitted. */
#include "common.h"

typedef struct OSThreadQueue { void *head; void *tail; } OSThreadQueue;
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
    void *id;
    DVDCBCallback callback;
    void *userData;
};
typedef struct DVDFileInfo DVDFileInfo;
typedef void (*DVDCallback)(s32 result, DVDFileInfo *fileInfo);
struct DVDFileInfo {
    DVDCommandBlock cb;
    u32 startAddr;
    u32 length;
    DVDCallback callback;
};
typedef struct DVDDir {
    u32 entryNum;
    u32 location;
    u32 next;
} DVDDir;
typedef struct DVDDirEntry {
    u32 entryNum;
    BOOL isDir;
    char *name;
} DVDDirEntry;
typedef struct OSBootInfo_s {
    u8 DVDDiskID[32];
    u32 magic;
    u32 version;
    u32 memorySize;
    u32 consoleType;
    void *arenaLo;
    void *arenaHi;
    void *FSTLocation;
    u32 FSTMaxLength;
} OSBootInfo_s;

struct FSTEntry {
    u32 isDirAndStringOff;
    u32 parentOrPosition;
    u32 nextEntryOrLength;
};

#define OSPhysicalToCached(paddr) ((void *)((u32)(paddr) + 0x80000000))
#define DVD_STATE_END 0
#define DVD_MIN_TRANSFER_SIZE 32

void fn_800B5520(char *file, int line, char *msg, ...); /* OSPanic */
void OSReport(const char *msg, ...);
int tolower(int c);                                  /* tolower */
s32 fn_800BFE7C(DVDCommandBlock *block);                 /* DVDCancel */
BOOL fn_800BF658(DVDCommandBlock *block, void *addr, s32 length, s32 offset, DVDCBCallback callback, s32 prio);
#define OSPanic fn_800B5520
#define tolower tolower
#define DVDCancel fn_800BFE7C
#define DVDReadAbsAsyncPrio fn_800BF658

/* names used by the rest of the program (and by symbols.txt) */
#define DVDConvertPathToEntrynum fn_800BD044
#define DVDFastOpen fn_800BD338
#define DVDOpen fn_800BD3AC
#define DVDClose fn_800BD474
#define entryToPath fn_800BD498
#define DVDConvertEntrynumToPath fn_800BD5F8
#define DVDGetCurrentDir fn_800BD74C
#define DVDReadAsyncPrio fn_800BD810
#define cbForReadAsync fn_800BD8D0
#define DVDOpenDir fn_800BD900
#define DVDReadDir fn_800BD9C0
#define DVDCloseDir fn_800BDA64

/* .sbss */
static OSBootInfo_s *BootInfo;
static struct FSTEntry *FstStart;
static char *FstStringStart;
static u32 MaxEntryNum;
static u32 currentDirectory;
OSThreadQueue __DVDThreadQueue;
u32 __DVDLongFileNameFlag;

static BOOL isSame(const char *path, const char *string);
static u32 myStrncpy(char *dest, char *src, u32 maxlen);
static u32 entryToPath(u32 entry, char *path, u32 maxlen);
static BOOL DVDConvertEntrynumToPath(s32 entrynum, char *path, u32 maxlen);
BOOL DVDGetCurrentDir(char *path, u32 maxlen);
static void cbForReadAsync(s32 result, DVDCommandBlock *block);

void __DVDFSInit() {
    BootInfo = (void*)OSPhysicalToCached(0);
    FstStart = BootInfo->FSTLocation;
    if (FstStart) {
        MaxEntryNum = FstStart->nextEntryOrLength;
        FstStringStart = (char*)FstStart + (MaxEntryNum * 0xC);
    }
}

/* For convenience */
#define entryIsDir(i) (((FstStart[i].isDirAndStringOff & 0xff000000) == 0) ? FALSE : TRUE)
#define stringOff(i) (FstStart[i].isDirAndStringOff & ~0xff000000)
#define parentDir(i) (FstStart[i].parentOrPosition)
#define nextDir(i) (FstStart[i].nextEntryOrLength)
#define filePosition(i) (FstStart[i].parentOrPosition)
#define fileLength(i) (FstStart[i].nextEntryOrLength)

static inline BOOL isSame(const char* path, const char* string) {
    while (*string != '\0') {
        if (tolower(*path++) != tolower(*string++)) {
            return FALSE;
        }
    }
    
    if ((*path == '/') || (*path == '\0')) {
        return TRUE;
    }
    
    return FALSE;
}

s32 DVDConvertPathToEntrynum(char* pathPtr) {
    const char* ptr;
    char* stringPtr;
    BOOL isDir;
    u32 length;
    u32 dirLookAt;
    u32 i;
    const char* origPathPtr = pathPtr;
    const char* extentionStart;
    BOOL illegal;
    BOOL extention;
    
    dirLookAt = currentDirectory;
    
    while (1) {
    
    if (*pathPtr == '\0') {
        return (s32)dirLookAt;
    } else if (*pathPtr == '/') {
        dirLookAt = 0;
        pathPtr++;
        continue;
    } else if (*pathPtr == '.') {
        if (*(pathPtr + 1) == '.') {
            if (*(pathPtr + 2) == '/') {
                dirLookAt = parentDir(dirLookAt);
                pathPtr += 3;
                continue;
            } else if (*(pathPtr + 2) == '\0') {
                return (s32)parentDir(dirLookAt);
            }
        } else if (*(pathPtr + 1) == '/') {
            pathPtr += 2;
            continue;
        } else if (*(pathPtr + 1) == '\0') {
            return (s32)dirLookAt;
        }
    }
    
    if (__DVDLongFileNameFlag == 0) {
        extention = FALSE;
        illegal = FALSE;
    
        for (ptr = pathPtr; (*ptr != '\0') && (*ptr != '/'); ptr++) {
            if (*ptr == '.') {
                if ((ptr - pathPtr > 8) || (extention == TRUE)) {
                    illegal = TRUE;
                    break;
                }
                extention = TRUE;
                extentionStart = ptr + 1;
        
            } else if (*ptr == ' ')
                illegal = TRUE;
        }
    
        if ((extention == TRUE) && (ptr - extentionStart > 3))
            illegal = TRUE;
    
        if (illegal)
            OSPanic("dvdfs.c", 383,
                "DVDConvertEntrynumToPath(possibly DVDOpen or DVDChangeDir or DVDOpenDir): "
                "specified directory or file (%s) doesn't match standard 8.3 format. This is a "
                "temporary restriction and will be removed soon\n",
                origPathPtr);
    } else {
        for (ptr = pathPtr; (*ptr != '\0') && (*ptr != '/'); ptr++)
            ;
    }
    
    isDir = (*ptr == '\0') ? FALSE : TRUE;
    length = (u32)(ptr - pathPtr);
    
    ptr = pathPtr;
    
    for (i = dirLookAt + 1; i < nextDir(dirLookAt); i = entryIsDir(i) ? nextDir(i) : (i + 1)) {
        if ((entryIsDir(i) == FALSE) && (isDir == TRUE)) {
            continue;
        }
    
        stringPtr = FstStringStart + stringOff(i);
    
        if (isSame(ptr, stringPtr) == TRUE) {
            goto next_hier;
        }
    }
    
    return -1;
    
next_hier:
        if (!isDir) {
            return (s32)i;
        }
        
        dirLookAt = i;
        pathPtr += length + 1;
    }
}

BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo) {
    
    if ((entrynum < 0) || (entrynum >= MaxEntryNum) || entryIsDir(entrynum)) {
        return FALSE;
    }
    
    fileInfo->startAddr = filePosition(entrynum);
    fileInfo->length = fileLength(entrynum);
    fileInfo->callback = (DVDCallback)NULL;
    fileInfo->cb.state = DVD_STATE_END;
    
    return TRUE;
}

BOOL DVDOpen(char* fileName, DVDFileInfo* fileInfo) {
    s32 entry;
    char currentDir[128];
    
    entry = DVDConvertPathToEntrynum(fileName);
    
    if (0 > entry) {
        DVDGetCurrentDir(currentDir, 128);
        OSReport("Warning: DVDOpen(): file '%s' was not found under %s.\n", fileName, currentDir);
        return FALSE;
    }
    
    if (entryIsDir(entry)) {
        return FALSE;
    }
    
    fileInfo->startAddr = filePosition(entry);
    fileInfo->length = fileLength(entry);
    fileInfo->callback = (DVDCallback)NULL;
    fileInfo->cb.state = DVD_STATE_END;
    
    return TRUE;
}

BOOL DVDClose(DVDFileInfo* fileInfo) {
    DVDCancel(&(fileInfo->cb));
    return TRUE;
}

static inline u32 myStrncpy(char* dest, char* src, u32 maxlen) {
    u32 i = maxlen;
    
    while ((i > 0) && (*src != 0)) {
        *dest++ = *src++;
        i--;
    }
    
    return (maxlen - i);
}

static u32 entryToPath(u32 entry, char* path, u32 maxlen) {
    char* name;
    u32 loc;
    
    if (entry == 0) {
        return 0;
    }
    
    name = FstStringStart + stringOff(entry);
    
    loc = entryToPath(parentDir(entry), path, maxlen);
    
    if (loc == maxlen) {
        return loc;
    }
    
    *(path + loc++) = '/';
    
    loc += myStrncpy(path + loc, name, maxlen - loc);
    
    return loc;
}

static BOOL DVDConvertEntrynumToPath(s32 entrynum, char* path, u32 maxlen) {
    u32 loc;
    
    loc = entryToPath((u32)entrynum, path, maxlen);
    
    if (loc == maxlen) {
        path[maxlen - 1] = '\0';
        return FALSE;
    }
    
    if (entryIsDir(entrynum)) {
        if (loc == maxlen - 1) {
            path[loc] = '\0';
            return FALSE;
        }
    
        path[loc++] = '/';
    }
    
    path[loc] = '\0';
    return TRUE;
}

BOOL DVDGetCurrentDir(char* path, u32 maxlen) {
    return DVDConvertEntrynumToPath((s32)currentDirectory, path, maxlen);
}

BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset,
                      DVDCallback callback, s32 prio) {
        
        if (!((0 <= offset) && (offset < fileInfo->length))) {
            OSPanic("dvdfs.c", 746, "DVDReadAsync(): specified area is out of the file  ");
        }
        
        if (!((0 <= offset + length) && (offset + length < fileInfo->length + DVD_MIN_TRANSFER_SIZE))) {
            OSPanic("dvdfs.c", 752, "DVDReadAsync(): specified area is out of the file  ");
        }
        
        fileInfo->callback = callback;
        DVDReadAbsAsyncPrio(&(fileInfo->cb), addr, length, (s32)(fileInfo->startAddr + offset),
                            cbForReadAsync, prio);
        
        return TRUE;
}

#ifndef offsetof
#define offsetof(type, memb) ((u32) & ((type*)0)->memb)
#endif

static void cbForReadAsync(s32 result, DVDCommandBlock* block) {
  DVDFileInfo* fileInfo;

  fileInfo = (DVDFileInfo*)((char*)block - offsetof(DVDFileInfo, cb)); 
  if (fileInfo->callback) {
    (fileInfo->callback)(result, fileInfo);
  }
}

BOOL DVDOpenDir(char *dirName, DVDDir *dir) {
    s32 entry;
    char currentDir[128];

    entry = DVDConvertPathToEntrynum(dirName);
    if (entry < 0) {
        DVDGetCurrentDir(currentDir, 128);
        OSReport("Warning: DVDOpenDir(): file '%s' was not found under %s.\n", dirName, currentDir);
        return FALSE;
    }
    if (!entryIsDir(entry)) {
        return FALSE;
    }
    dir->entryNum = (u32)entry;
    dir->location = (u32)entry + 1;
    dir->next = nextDir(entry);
    return TRUE;
}

BOOL DVDReadDir(DVDDir *dir, DVDDirEntry *dirent) {
    u32 loc = dir->location;

    if ((loc <= dir->entryNum) || (dir->next <= loc)) {
        return FALSE;
    }
    dirent->entryNum = loc;
    dirent->isDir = entryIsDir(loc);
    dirent->name = FstStringStart + stringOff(loc);
    dir->location = entryIsDir(loc) ? nextDir(loc) : (loc + 1);
    return TRUE;
}

BOOL DVDCloseDir(DVDDir *dir) {
    return TRUE;
}
