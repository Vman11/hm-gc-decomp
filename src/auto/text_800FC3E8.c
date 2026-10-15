/* Functions from 0x800FC3E8 to 0x800FC558, found by decomp-toolkit. */
#include "common.h"

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
void fn_800FC3E8(s32* arg0) {
    arg0[3] = (s32)lbl_802E2220;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
}

void fn_800FC408(s32* arg0, f32* arg1, f32* arg2) {
    f32* m = (f32*)arg0;
    m[1] = arg1[0];
    m[2] = arg1[1];
    m[3] = arg1[2];
    m[4] = arg2[0];
    m[5] = arg2[1];
    m[6] = arg2[2];
    m[15] = m[1];
    m[16] = m[2];
    m[17] = m[3];
    m[18] = m[4];
    m[19] = m[5];
    m[20] = m[6];
    m[9] = m[1];
    m[10] = m[2];
    m[11] = m[3];
    m[12] = m[4];
    m[13] = m[5];
    m[14] = m[6];
    arg0[0] &= ~8;
    arg0[0] |= 5;
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

