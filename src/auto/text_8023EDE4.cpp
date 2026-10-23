// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memset(void *, int, u32);
extern f32 lbl_80366128;
extern f32 lbl_8036612C;

typedef struct {
    u8 pad0[16];
    s32 f10;
    u8 pad14[80];
} E_8023EDE4;

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wC;
    s32 w10;
    f32 f14;
    s32 w18;
    u8 m1C[1600];
    u8 m65C[8448];
    u8 m275C[128];
    s32 w27DC;
    s32 w27E0;
    s32 w27E4;
    s32 w27E8;
    f32 f27EC;
    s32 w27F0;
    E_8023EDE4 e[128];
    s32 w59F4;
} S_8023EDE4;

void fn_8023EDE4(S_8023EDE4 *p) {
    int i;
    p->w0 = 0;
    p->w4 = 0;
    p->w8 = 0;
    p->wC = 0;
    p->w10 = 0;
    p->f14 = lbl_80366128;
    memset(p->m1C, 0, 1600);
    memset(p->m65C, 0, 8448);
    memset(p->m275C, 0, 128);
    p->w27DC = 0;
    p->w27E0 = 0;
    p->w27E4 = 0;
    p->w27E8 = 0;
    p->f27EC = lbl_8036612C;
    p->w59F4 = 0;
    for (i = 0; i < 128; i++) {
        p->e[i].f10 = 1;
    }
    p->w27F0 = 1;
}

} /* extern "C" */
