// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1A28[];
extern void *lbl_8035B488;
extern f32 lbl_80366128;
extern f32 lbl_8036612C;
void *memset(void *, s32, u32);

typedef struct { u8 pad[16]; s32 flag; u8 pad2[80]; } E_8023F088;
typedef struct {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 xc;
    s32 x10;
    f32 x14;
    s32 x18;
    u8 a[1600];
    u8 b[8448];
    u8 c[128];
    s32 x27DC;
    s32 x27E0;
    s32 x27E4;
    s32 x27E8;
    f32 x27EC;
    s32 x27F0;
    E_8023F088 arr[128];
    s32 x59F4;
    u8 *vt;
} C8023F088;

C8023F088 *__ct__9C8023F088Fv(C8023F088 *p) {
    int i;
    p->vt = lbl_802F1A28;
    lbl_8035B488 = p;
    p->x0 = 0;
    p->x4 = 0;
    p->x8 = 0;
    p->xc = 0;
    p->x10 = 0;
    p->x14 = lbl_80366128;
    memset(p->a, 0, sizeof(p->a));
    memset(p->b, 0, sizeof(p->b));
    memset(p->c, 0, sizeof(p->c));
    p->x27DC = 0;
    p->x27E0 = 0;
    p->x27E4 = 0;
    p->x27E8 = 0;
    p->x27EC = lbl_8036612C;
    p->x59F4 = 0;
    for (i = 0; i < 128; i++) p->arr[i].flag = 1;
    p->x27F0 = 1;
    return p;
}

} /* extern "C" */
