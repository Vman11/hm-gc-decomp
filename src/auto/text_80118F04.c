/* Functions from 0x80118F04 to 0x80118FF8, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32* items;
    s32 unk4;
    u32 count;
    s32 unkC;
    s32 unk10;
} UnkList_80118F3C;

void fn_80118D98(void*);
void fn_80118F04(u8* arg0) {
    fn_80118D98(arg0 + *(s32*)(arg0 + 0xD4) - 0x10);
}

void fn_80118F2C(UnkList_80118F3C* list, s32 arg1, s32 arg2, s32 arg3) {
    list->unkC = arg1;
    list->unk10 = arg2;
    list->count = arg3;
}

BOOL fn_80118F3C(UnkList_80118F3C* list, u32 item) {
    u32 i;

    for (i = 0; item != list->items[i] && i < list->count; i++) {
    }
    if (item != list->items[i]) {
        return FALSE;
    }
    for (; i < list->count - 1; i++) {
        list->items[i] = list->items[i + 1];
    }
    list->count--;
    return TRUE;
}

void fn_80118FC0(void) {

}

BOOL fn_80118FC4(UnkList_80118F3C* list, u32 item) {
    if (list->count == (u32)list->unk4) {
        return FALSE;
    }
    list->items[list->count++] = item;
    return TRUE;
}

