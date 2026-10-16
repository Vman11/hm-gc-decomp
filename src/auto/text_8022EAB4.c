/* Functions from 0x8022EAB4 to 0x8022EB48, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 flags;
    u8 pad4[0x94];
    union {
        u32 flags98;
        struct {
            u32 unk98_pad : 28;
            u32 unk98_b3 : 1;
            u32 unk98_b2 : 1;
            u32 unk98_b1 : 1;
            u32 unk98_b0 : 1;
        };
    };
    u8 pad9C[0x48];
} UnkElem8022EAB4;

typedef struct {
    u8 pad0[4];
    u32 *counts;
    u8 pad8[4];
    u32 num;
    UnkElem8022EAB4 **elems;
} UnkObj8022EAB4;

void fn_8022EAB4(UnkObj8022EAB4 *obj) {
    u32 i;
    u32 j;

    for (i = 0; i < obj->num; i++) {
        for (j = 0; j < obj->counts[i]; j++) {
            obj->elems[i][j].flags98 &= ~1;
            obj->elems[i][j].flags &= ~0x800;
            if (obj->elems[i][j].flags98 & 8) {
                obj->elems[i][j].flags98 &= ~8;
            }
        }
    }
}
