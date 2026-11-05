#include "common.h"
extern "C" {
struct B60 { u8 pad[0x60]; };
struct O53 : B60 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual s32 v13(void *b); virtual void v14(void *b);
};
struct M53 { virtual void m0(); virtual void m1(); virtual O53 *m2(s32 a, s32 b); };
struct H53 { s32 f0; M53 **f4; };
struct G53 { u8 pad[0x2b8]; s32 f2b8; };
struct P53 { u8 pad[0x2dc]; s32 f2dc; };
extern s8 lbl_8035A41C;
extern u32 lbl_8035A418;
extern G53 *lbl_8035A0A4;
extern H53 *lbl_8035B690;
extern char lbl_8029A24C[];
extern char lbl_8036157C[4];
u32 fn_800FBB9C(void);
void fn_802494A4(P53 *p, s32 a);
void fn_8009BAD0(P53 *p);
void fn_80272F28(P53 *p, char *a, char *b);
void fn_80099BF8(P53 *p) {
    u8 buf[0x10];
    if (lbl_8035A41C == 0) {
        lbl_8035A418 = fn_800FBB9C();
        lbl_8035A41C = 1;
    }
    if (fn_800FBB9C() - lbl_8035A418 > 500 && p->f2dc != 0 && lbl_8035A0A4->f2b8 != 0) {
        lbl_8035A418 = fn_800FBB9C();
        O53 *o = (*lbl_8035B690->f4)->m2(0, 0);
        if (o->v13(buf)) {
            o->v14(buf);
            fn_802494A4(p, 2);
            fn_8009BAD0(p);
            fn_80272F28(p, lbl_8036157C, lbl_8029A24C);
        }
        o->v14(buf);
    }
}
}
