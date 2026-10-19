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

u32 fn_80118F3C(u32 *param_1, u32 param_2) {
    u32 *puVar1;
    u32 *piVar2;
    u32 iVar3;
    u32 uVar4;

    piVar2 = (u32 *)*param_1;
    for (uVar4 = 0; (param_2 != *piVar2 && (uVar4 < (u32)param_1[2])); uVar4 = uVar4 + 1) {
        piVar2 = piVar2 + 1;
    }
    iVar3 = uVar4 * 4;
    if (param_2 != ((u32 *)*param_1)[uVar4]) {
        return 0;
    }
    for (; uVar4 < param_1[2] - 1U; uVar4 = uVar4 + 1) {
        puVar1 = (u32 *)(*param_1 + iVar3);
        iVar3 = iVar3 + 4;
        *puVar1 = puVar1[1];
    }
    param_1[2] = param_1[2] - 1U;
    return 1;
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

