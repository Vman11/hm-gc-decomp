// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[16]; s32 f; u8 pad2[80]; } E8023EC94;
typedef struct {
    s32 f0, f4, f8, fC, f10;
    f32 f14;
    s32 f18;
    u8 a1C[1600];
    u8 a65C[8448];
    u8 a275C[128];
    s32 f27DC, f27E0, f27E4, f27E8;
    f32 f27EC;
    s32 f27F0;
    E8023EC94 e[128];
    s32 f59F4;
} B8023EC94;
extern f32 lbl_80366128;
extern f32 lbl_8036612C;
void *memset(void *, s32, u32);

s32 fn_8023EC94(B8023EC94 *p) {
    u32 i;
    if (p->f0 != 0) {
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->fC = 0;
        p->f10 = 0;
        p->f14 = lbl_80366128;
        memset(p->a1C, 0, 1600);
        memset(p->a65C, 0, 8448);
        memset(p->a275C, 0, 128);
        p->f27DC = 0;
        p->f27E0 = 0;
        p->f27E4 = 0;
        p->f27E8 = 0;
        p->f27EC = lbl_8036612C;
        p->f59F4 = 0;
        for (i = 0; i < 128; i++) {
            p->e[i].f = 1;
        }
        p->f27F0 = 1;
    }
    p->f0 = 1;
    return 0;
}

} /* extern "C" */
