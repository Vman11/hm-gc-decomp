/* Functions from 0x801FB984 to 0x801FBA4C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[0x2C];
    u32 count;
    u32 items[4];
} UnkList_801FB984;

void fn_801FB984(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}

void fn_801FB990(UnkList_801FB984 *list, u32 item) {
    u32 n = list->count;
    u32 i;

    for (i = 0; i < n; i++) {
        if (list->items[i] == item) {
            break;
        }
    }
    if (i < n) {
        list->count--;
        for (; i < list->count; i++) {
            list->items[i] = list->items[i + 1];
        }
    }
}

void fn_801FBA00(UnkList_801FB984 *list, u32 item) {
    u32 n = list->count;

    if (n < 4) {
        list->count = n + 1;
        list->items[n] = item;
    }
}

void fn_801FBA24(void *arg0, f32 farg0) {
    extern f32 lbl_80365588;
    extern f32 lbl_8036558C;
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_80365588) {
        var_f1 = lbl_80365588;
    }
    if (var_f1 > lbl_8036558C) {
        var_f1 = lbl_8036558C;
    }
    M2C_FIELD(arg0, f32 *, 0x18) = var_f1;
}

} /* extern "C" */
