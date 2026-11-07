// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

// fn_8014D8D8: NonMatching draft (SDIFF 0, DIFF 14: fn-scope int h fixed blocks 2-6 (wRF); r0/r4/r5 rotation left in the 1st int->float block; needs .sdata2 int2float const 0x80364518 in-unit), see hm-work/wA_8014D8D8/STATUS.txt.
struct D { u16 bits; s8 a[4]; u8 b[2]; u8 pad[2]; s8 flag; };
struct Obj { u32 n; u8 pad[0x14]; int has; };
struct P { Obj *obj; u8 pad[0xc]; D *d; void *x14; f32 x18; f32 x1c; u32 st; };
extern const u32 lbl_802A0240[];
extern f32 lbl_80364514;
extern f32 lbl_80364500;
void fn_8011D8A4(Obj *, u32, int);
f32 fn_8011D82C(Obj *, int);
void fn_8011D79C(Obj *, int, f32);
void fn_800C3AEC(void *, u32);
int fn_8014D8D8(P *p) {
    u32 i;
    int h;
    for (i = 0; i < p->obj->n; i++)
        fn_8011D8A4(p->obj, i, (p->d->bits & lbl_802A0240[i]) != 0);
    {
        int v = p->d->a[0];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 0);
        fn_8011D79C(p->obj, 0, f);
    }
    {
        int v = p->d->a[1];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 1);
        fn_8011D79C(p->obj, 1, f);
    }
    {
        int v = p->d->a[2];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 2);
        fn_8011D79C(p->obj, 2, f);
    }
    {
        int v = p->d->a[3];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 3);
        fn_8011D79C(p->obj, 3, f);
    }
    {
        int v = p->d->b[0];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 4);
        fn_8011D79C(p->obj, 4, f);
    }
    {
        int v = p->d->b[1];
        f32 f = v;
        h = p->obj->has;
        if (h) f += fn_8011D82C(p->obj, 5);
        fn_8011D79C(p->obj, 5, f);
    }

    if (!p->d->flag) {
        p->x18 += p->x1c;
        if (p->x1c >= lbl_80364514 || p->x18 > lbl_80364514) {
            p->x18 = lbl_80364500;
            if (p->st != 1) { p->st = 1; fn_800C3AEC(p->x14, p->st); }
        } else if (p->st != 0) { p->st = 0; fn_800C3AEC(p->x14, p->st); }
    }
    return 0;
}

}
