#include "common.h"

extern "C" {
extern const volatile f32 lbl_80364500;
extern const char lbl_80364504[];
extern const char lbl_8036450C[];
extern f32 lbl_80364514;
const volatile f32 lbl_80364500 = 0.0f;
const char lbl_80364504[] = "Axis %d";
const char lbl_8036450C[] = "POV %d";
__declspec(section ".sdata2") f32 lbl_80364514 = 0.8f;
}
namespace m8014D7E8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_802A0270[];
int fn_800E8F6C(char *buf, const char *fmt, ...);
void fn_800FA5D8(void *out, char *s);

void fn_8014D7E8(void *unused, s32 key, void *out) {
    char buf[64];
    switch (key & ~0x0FFFFFFF) {
    case 0x30000000:
        fn_800E8F6C(buf, lbl_802A0270, key - 0x30000000);
        break;
    case 0x40000000:
        fn_800E8F6C(buf, (char *)lbl_80364504, key - 0x40000000);
        break;
    case 0x50000000:
        fn_800E8F6C(buf, (char *)lbl_8036450C, key - 0x50000000);
        break;
    }
    fn_800FA5D8(out, buf);
}

} /* extern "C" */

} /* namespace m8014D7E8 */
namespace m8014D89C {
/* Functions from 0x8014D89C to 0x8014D8D8, found by decomp-toolkit. */

extern "C" {

s32 fn_8014D89C(void) {
    return 0;
}

s32 fn_8014D8A4(void) {
    return 0;
}

s32 fn_8014D8AC(void) {
    return 0;
}

s32 fn_8014D8B4(void) {
    return 6;
}

s32 fn_8014D8BC(void) {
    return 12;
}

void* fn_8014D8C4(u8* arg0, s32 arg1) {
    return arg0 + 0x24 + arg1 * 0x40;
}

} /* extern "C" */

} /* namespace m8014D89C */
namespace m8014D8D8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

// fn_8014D8D8: NonMatching draft (SDIFF 0, DIFF 14: fn-scope int h fixed blocks 2-6 (wRF); r0/r4/r5 rotation left in the 1st int->float block; needs .sdata2 int2float const 0x80364518 in-unit), see hm-work/wA_8014D8D8/STATUS.txt.
struct D { u16 bits; s8 a[4]; u8 b[2]; u8 pad[2]; s8 flag; };
struct Obj { u32 n; u8 pad[0x14]; int has; };
struct P { Obj *obj; u8 pad[0xc]; D *d; void *x14; f32 x18; f32 x1c; u32 st; };
extern const u32 lbl_802A0240[];
void fn_8011D8A4(Obj *, u32, int);
f32 fn_8011D82C(Obj *, int);
void fn_8011D79C(Obj *, int, f32);
void fn_800C3AEC(void *, u32);
int fn_8014D8D8(P *p) {
    u32 i;
    int h;
    for (i = 0; i < p->obj->n; ++i)
        fn_8011D8A4(p->obj, i, (lbl_802A0240[i] & p->d->bits) != 0);
    {
        s32 v = p->d->a[0];
        f32 f = v;
        h = *(int volatile *)&p->obj->has;
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
        h = (p->obj->has);
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
            p->x18 = *(f32 *)&lbl_80364500;
            if (p->st != 1) { p->st = 1; fn_800C3AEC(p->x14, p->st); }
        } else if (0 != p->st) { p->st = 0; fn_800C3AEC(p->x14, p->st); }
    }
    return 0;
}

}

} /* namespace m8014D8D8 */
