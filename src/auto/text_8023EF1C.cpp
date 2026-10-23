// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *memset(void *d, int c, u32 n);
extern void __dl__FPv(void *p);
extern u8 lbl_802F1A28[];
extern s32 lbl_8035B488;
extern f32 lbl_80366128;
extern f32 lbl_8036612C;

typedef struct Elem { u8 pad[16]; s32 flag; u8 pad2[80]; } Elem;
typedef struct Obj {
    s32 x0;
    s32 x4;
    s32 x8;
    s32 x12;
    s32 x16;
    f32 x20;
    s32 x24;
    u8 b28[1600];
    u8 b1628[8448];
    u8 b10076[128];
    s32 x10204;
    s32 x10208;
    s32 x10212;
    s32 x10216;
    f32 x10220;
    s32 x10224;
    Elem arr[128];
    s32 x23028;
    void *vt;
} Obj;

Obj *fn_8023EF1C(Obj *p, s16 f) {
    u32 i;
    if (p) {
        p->vt = lbl_802F1A28;
        lbl_8035B488 = 0;
        p->x0 = 0;
        p->x4 = 0;
        p->x8 = 0;
        p->x12 = 0;
        p->x16 = 0;
        p->x20 = lbl_80366128;
        memset(p->b28, 0, sizeof(p->b28));
        memset(p->b1628, 0, sizeof(p->b1628));
        memset(p->b10076, 0, sizeof(p->b10076));
        p->x10204 = 0;
        p->x10208 = 0;
        p->x10212 = 0;
        p->x10216 = 0;
        p->x10220 = lbl_8036612C;
        p->x23028 = 0;
        for (i = 0; i < 128; i++) {
            p->arr[i].flag = 1;
        }
        p->x10224 = 1;
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
