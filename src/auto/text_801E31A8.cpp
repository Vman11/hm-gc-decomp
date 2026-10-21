// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
void __dl__FPv(void *);
extern u8 lbl_802ED7A0[];
extern f32 lbl_803652D4;
extern f32 lbl_803652D8;
typedef struct {
    s32 f0;
    s32 f4;
    f32 f8;
    f32 f12;
    f32 f16;
    s32 f20;
    s32 f24;
    void *arr28;
    s32 f32;
    s32 f36;
    u8 pad40[8];
    s32 f48;
    s32 f52;
    void *arr56;
    void *arr60;
    s32 f64;
    s32 f68;
    s32 f72;
    s32 f76;
    u8 pad80[8];
    s32 f88;
    s32 f92;
    u8 pad96[8];
    s32 f104;
    s32 f108;
    s32 f112;
    s32 f116;
    u8 *vt;
} C;

C *__dt__9C801E32DCFv(C *p, s16 f) {
    if (p) {
        p->vt = lbl_802ED7A0;
        if (p->arr28) {
            p->f32 = 0;
            p->f36 = 0;
            if (p->arr28) __dla__FPv((u8 *)p->arr28 - 16);
        }
        if (p->arr56) {
            p->f72 = 0;
            p->f76 = 0;
            if (p->arr56) __dla__FPv((u8 *)p->arr56 - 16);
        }
        if (p->arr60) {
            p->f88 = 0;
            p->f92 = 0;
            if (p->arr60) __dla__FPv((u8 *)p->arr60 - 16);
        }
        p->f112 = 0;
        p->f116 = 0;
        p->f4 = 30;
        p->f12 = p->f8 = lbl_803652D4;
        p->arr28 = 0;
        p->arr56 = 0;
        p->arr60 = 0;
        p->f64 = 0;
        p->f68 = 0;
        p->f48 = 0;
        p->f52 = 0;
        p->f104 = 0;
        p->f108 = 0;
        p->f0 = 0;
        p->f20 = 0;
        p->f24 = 0;
        p->f16 = lbl_803652D8;
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
