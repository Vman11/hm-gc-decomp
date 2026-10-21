// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8018A704 { u8 pad[20]; void *f20; };
struct SubB8018A704 {
    u8 pad[116];
    void *f116;
    s32 f120;
    u8 pad124[8];
    void *f132;
    s32 f136;
    virtual void v0(); virtual void v1();
    virtual void v2(s32 a);
};
struct Sub8018A704 : SubB8018A704 {
    s32 *f144;
    s32 f148;
};
struct PB8018A704 {
    u32 flags;
    u8 pad4[68];
    void **f72;
    u8 pad76[28];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual C8018A704 *v4();
};
struct P8018A704 : PB8018A704 {
    void *f108;
    u8 pad112[32];
    void *f144;
    void *f148;
    Sub8018A704 sub;
};
struct Vec8018A704 { f32 x, y, z; };
typedef void (*FP8018A704)(void *, Vec8018A704 *);
extern FP8018A704 lbl_803286D0[];
extern f32 lbl_80364A30;
void fn_80104870(C8018A704 *c);
void fn_800FC408(Sub8018A704 *a, Sub8018A704 *b, Vec8018A704 *v);
void fn_8019A6CC(void *a, Sub8018A704 *b);
void fn_80189F24(void *a, P8018A704 *b, Vec8018A704 *v, void *d);

void fn_8018A704(P8018A704 *p, P8018A704 *b, C8018A704 *c) {
    Vec8018A704 v;
    void *t;
    if (c == 0) c = p->v4();
    if (c != 0) {
        fn_80104870(c);
        lbl_803286D0[76](c->f20, &v);
    } else {
        v.x = lbl_80364A30;
        v.y = lbl_80364A30;
        v.z = lbl_80364A30;
    }
    if (p->flags & 0x10000) {
        if (p->f148 != 0) t = p->f148;
        else t = *p->f72;
        if (p->sub.f116 == 0) p->sub.v2(1);
        fn_800FC408(&p->sub, &b->sub, &v);
        p->sub.f132 = 0;
        p->sub.f120 = 0;
        p->sub.f136 = 0;
        p->sub.f144[0] = 0;
        p->sub.f144[1] = 0;
        p->sub.f144[2] = 0;
        p->sub.f148 = 0;
        fn_8019A6CC(t, &p->sub);
        if (p->sub.f132 != 0) return;
    }
    fn_80189F24(p->f144, b, &v, p->f108);
}

} /* extern "C" */
