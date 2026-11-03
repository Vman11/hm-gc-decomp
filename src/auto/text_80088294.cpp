// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct G { u8 pad[16]; void *h; u8 pad20[12]; u32 fl; };
struct N {
    u8 pad0[48];
    G *g;
    u8 pad52[52];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void s11();
};
struct T { u8 pad[12]; void (*f12)(void *, V3 *); };
extern T lbl_803286D0;
struct F152 { u32 fl0; u8 pad[148]; u32 fl152; };
struct P {
    u8 pad0[524];
    void *a524;
    u8 pad528[92];
    s32 i620;
    u8 pad624[80];
    N *n704;
    u8 pad708[32];
    F152 *f740;
    u8 pad744[8];
    F152 *f752;
    F152 *f756;
    u8 pad760[112];
    f32 f872;
    u8 pad876[16];
    s32 st892;
    u8 pad896[4];
    f32 f900;
    u8 pad904[4];
    s32 i908;
    u8 pad912[24];
    V3 base;
};
extern f32 lbl_8035FEB8, lbl_8035FEF4, lbl_8035FF08;
extern u32 lbl_8035FEA0, lbl_8035FEA4;
extern char lbl_8035FEF8[8], lbl_8035FF00[8];
extern void *lbl_8035B65C;
void fn_800885A0(P *, f32);
void __ct__9C80253F24Fiiii(void *, char *, P *, int, int);
void fn_802494A4(void *, int);
void fn_80241DD0(void *, char *, P *, int, int, int);
void fn_80190C98(N *);
void fn_80088B54(P *, f32);
void fn_8005E6BC(P *, f32);
void fn_8005E00C(P *, f32);
int rand(void);

void fn_80088294(P *p, f32 dt) {
    if (p->i620) {
        switch (p->st892) {
        case 0:
            fn_800885A0(p, dt);
            break;
        case 1:
            p->f900 -= dt;
            if (p->f900 <= lbl_8035FEB8) {
                if (p->f740) p->f740->fl0 &= ~0x800;
                if (p->f752) {
                    p->f752->fl152 |= lbl_8035FEA0;
                    p->f752->fl0 &= ~0x800;
                }
                if (p->f756) {
                    p->f756->fl152 |= lbl_8035FEA0;
                    p->f756->fl0 &= ~0x800;
                }
                if (p->i908 == 0) __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035FEF8, p, 0, 0);
                fn_802494A4(p->a524, 0);
                fn_80241DD0(p->a524, lbl_8035FF00, p, 0, 0, 0);
                p->st892 = 2;
            }
            break;
        case 2:
            if (p->n704) {
                V3 v;
                f32 z, b;
                f32 a;
                N *n;
                G *g;
                p->n704->s11();
                {
                    s32 r = rand() % 1000u;
                    a = lbl_8035FEF4 * (f32)r;
                }
                {
                    s32 r = rand() % 1000u;
                    b = lbl_8035FEF4 * (f32)r;
                    v.y = a;
                    *(volatile f32 *)&v.x = b; z = *(volatile f32 *)&lbl_8035FEB8; v.z = z;
                }
                v.x = b + p->base.x;
                v.y += p->base.y;
                v.z = z + p->base.z;
                n = p->n704;
                g = n->g;
                if (g) {
                    lbl_803286D0.f12(g->h, &v);
                    g->fl |= lbl_8035FEA4;
                    fn_80190C98(n);
                }
            }
            {
                s32 r = rand() % 30000u;
                f32 d = lbl_8035FEF4 * (f32)r;
                d = lbl_8035FF08 + d;
                p->f872 = d;
            }
            p->st892 = 3;
            break;
        case 3:
            fn_80088B54(p, dt);
            break;
        }
    }
    fn_8005E6BC(p, dt);
    fn_8005E00C(p, dt);
}

} /* extern "C" */
