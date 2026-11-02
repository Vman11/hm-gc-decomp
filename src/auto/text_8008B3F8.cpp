// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, V3 *, int, int, int);
};
struct P {
    u8 pad0[96];
    s32 st96;
    u8 pad100[124];
    OB *o224;
    u8 pad228[52];
    f32 *ang280;
    f32 *dist284;
    char *a288;
    char *a292;
    char *b296;
    char *b300;
    s32 *s304;
    u8 pad308[4];
    s32 *s312;
    s32 *s316;
    OB *o320;
    s32 i324;
    s32 i328;
};
extern f32 lbl_80360124, lbl_80360130, lbl_80360134, lbl_80360138;
extern f64 lbl_80360128;
extern char lbl_803600E0[4];
extern void *lbl_8035B65C;
void fn_80101820(V3 *);
f32 fn_80101590(V3 *, V3 *);
double fn_800F045C(double);
void fn_802494A4(P *, int);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, char *);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, char *, int, int, char *, int);

static inline f32 acosf_(f32 x) {
    if ((f32)__fabs(x) <= lbl_80360128) return fn_800F045C(x);
    if (x > lbl_80360124) return lbl_80360124;
    return lbl_80360130;
}

static inline void play(P *p, int n, char *b, char *a) {
    if (fn_800F6CD0(a, lbl_803600E0) == 0) {
        if (*p->s304) __ct__9C80253F24Fiiii(lbl_8035B65C, a, 0, 0, b);
        else fn_80242BC0(fn_80242144(p, n), a, 0, 0, b, 0);
    }
}

void fn_8008B3F8(P *p) {
    V3 a, b, c, d;
    f32 ang;
    bool near;
    if (p->o320) {
        p->o320->s13(&a, &b, 0, 0, 0);
        b.z = lbl_80360124;
        fn_80101820(&b);
        p->o224->s13(&c, 0, 0, 0, 0);
        {
            *(volatile f32 *)&d.x = c.x - a.x; *(volatile f32 *)&d.y = c.y - a.y; *(volatile f32 *)&d.z = c.z - a.z;
        }
        d.z = *(volatile f32 *)&lbl_80360124;
        fn_80101820(&d);
        ang = lbl_80360134 * acosf_(b.x * d.x + b.y * d.y + b.z * d.z);
        {
            f32 dist = fn_80101590(&a, &c);
            near = false;
            if (dist <= *p->dist284 && ang <= *p->ang280 * lbl_80360138) near = true;
        }
        if (!near || (*p->s312 && *p->s316 && !p->i324)) {
            p->i328 = 1;
            if (p->st96 != 1) {
                fn_802494A4(p, 1);
                play(p, 1, p->b296, p->a288);
            }
        } else {
            p->i328 = 0;
            if (p->st96 != 2) {
                fn_802494A4(p, 2);
                play(p, 2, p->b300, p->a292);
            }
        }
    }
}

} /* extern "C" */
