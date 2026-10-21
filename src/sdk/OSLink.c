/* OSLink.c (Dolphin SDK 2003) : 0x800B7A94 - 0x800B7AAC. Only __OSModuleInit is linked into this program. */
#include <dolphin.h>
#include <dolphin/os.h>

typedef struct OSModuleQueue_ {
    void *head;
    void *tail;
} OSModuleQueue_;

OSModuleQueue_ __OSModuleInfoList_ : 0x800030C8;
const void *__OSStringTable_ : 0x800030D0;

void __OSModuleInit(void) {
    __OSModuleInfoList_.head = __OSModuleInfoList_.tail = 0;
    __OSStringTable_ = 0;
}
