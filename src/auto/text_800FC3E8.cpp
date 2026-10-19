/* Functions from 0x800FC3E8 to 0x800FC558, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct {
    f32 x, y, z;
} UnkVec3;

typedef struct {
    u32 flags;
    UnkVec3 unk4;
    UnkVec3 unk10;
    u8 pad1C[8];
    UnkVec3 unk24;
    UnkVec3 unk30;
    UnkVec3 unk3C;
    UnkVec3 unk48;
} UnkBox;

typedef struct {
    f32 key;
    u32 value;
} UnkPair;

typedef struct {
    u8 pad0[0x74];
    u32 capacity;
    u32 value;
    UnkPair* pairs;
    u32 unk80;
    u32 count;
} UnkPairList;

extern u8 lbl_802E2220[];
void __ct__9C800FC3E8Fv(s32* arg0) {
    arg0[3] = (s32)lbl_802E2220;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

void fn_800FC408(UnkBox* box, UnkVec3* a, UnkVec3* b) {
    f32 bz;
    f32 by;
    f32 bx;
    f32 az;
    f32 ay;
    f32 ax;
    ax = a->x;
    ay = a->y;
    box->unk4.x = ax;
    az = a->z;
    box->unk4.y = ay;
    bx = b->x;
    box->unk4.z = az;
    by = b->y;
    box->unk10.x = bx;
    bz = b->z;
    box->unk10.y = by;
    box->unk10.z = bz;
    box->unk3C.x = ax;
    box->unk3C.y = ay;
    box->unk3C.z = az;
    box->unk48.x = bx;
    box->unk48.y = by;
    box->unk48.z = bz;
    box->unk24.x = ax;
    box->unk24.y = ay;
    box->unk24.z = az;
    box->unk30.x = bx;
    box->unk30.y = by;
    box->unk30.z = bz;
    box->flags &= ~8;
    box->flags |= 5;
}

void fn_800FC484(UnkPairList* list) {
    if (list->count < list->capacity) {
        list->count++;
    }
}

s32 fn_800FC4A0(UnkPairList* list, f32 key) {
    UnkPair* pos = list->pairs;
    u32 count;
    list->value = list->count;
    count = list->count;
    if (count != 0) {
        UnkPair* before = list->pairs - 1;
        UnkPair* last = before + count;
        pos = last;
        do {
            if (key > pos->key) {
                break;
            }
            pos--;
        } while (pos > before);
        if (pos != last) {
            pos++;
            if (count >= list->capacity) {
                list->value = last->value;
                last--;
            }
            for (; pos <= last; last--) {
                last[1].key = last[0].key;
                last[1].value = last[0].value;
            }
        } else {
            if (count >= list->capacity) {
                return 0;
            }
            pos++;
        }
    }
    pos->key = key;
    pos->value = list->value;
    return 1;
}

} /* extern "C" */
