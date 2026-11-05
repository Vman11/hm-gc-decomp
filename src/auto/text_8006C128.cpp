#include "common.h"
extern "C" {
}
struct V4 { f32 a, b, c, d; };
struct Vo { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void play(const char *, s32, s32, s32, s32); };
struct Y { u32 f0; f32 f4; u8 pad[40]; u32 f48; };
struct Z { u8 pad[8]; Y *y; };
struct Sh { u8 pad[4]; f32 len; u8 pad2[44]; u16 n; };
struct M { u8 pad[16]; Sh *sh; };
struct M2 { u32 f0; f32 f4; };
struct E { u32 f0; u8 pad[128]; Z *z; u32 f136; u8 pad2[176 - 140]; M *m; };
struct Tb { u8 pad[12]; u32 *u; };
struct Tf { u8 pad[12]; f32 *f; };
struct G { u8 pad[12]; void *f12; };
struct O { u8 pad[224]; void *f224; u8 pad2[280 - 228]; void *f280; u8 pad3[372 - 284]; f32 f372; u8 pad4[384 - 376]; Vo *f384; u8 pad5[496 - 388]; Vo *f496; u8 pad6[512 - 500]; u32 cnt; u8 pad7[524 - 516]; Tb *f524; Tf *f528; u8 pad8[548 - 532]; E **f548; Vo **f552; E *f556; u8 pad9[580 - 560]; u8 f580[16]; s32 f596; };
extern "C" {
extern G *lbl_8035B65C;
extern char lbl_80297D98[];
extern char lbl_8035F248[4];
extern char lbl_8035EE98[4];
extern u32 lbl_8035F218;
extern f32 lbl_8035F0C0; extern volatile f32 lbl_8035F244, lbl_8035F1C8;
u32 fn_8007239C(void *p);
void __ct__9C80253F24Fiiii(G *, const char *, void *, s32, s32);
void fn_8019B7E8(void *, E *);
void fn_80074660(void *, void *);
void fn_800746A4(void *, V4 *);
void fn_802490E0(O *, s32, f32);

static inline Y *getY(Z *z) { if (z == 0) return 0; else return z->y; }


static inline u32 mx(O *o) { u32 i = fn_8007239C(o->f280) - 1; return o->f524->u[i]; }
static inline f32 tm(O *o) { u32 i = fn_8007239C(o->f280) - 1; f32 *f = o->f528->f; return f[i]; }
s32 fn_8006C128(O *o) {
    s32 r = 0;
    if (o->cnt < mx(o)) {
        o->f372 = tm(o);
        o->f384 = 0;
        __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_80297D98, o->f224, 0, 0);
        if (o->f384) {
            E *e;
            o->f552[o->cnt] = o->f384;
            e = o->f548[o->cnt];
            e->f0 |= lbl_8035F218;
            if (!e->f136) fn_8019B7E8(lbl_8035B65C->f12, e);
            {
                Z *z = e->z;
                if (getY(z)) {
                    Y *y = getY(z);
                    if (y->f48 & 1) {
                        y->f4 = lbl_8035F0C0;
                        y->f0 &= ~0x18;
                    }
                }
            }
            if (o->cnt == 0) {
                if (!o->f596) { o->f596 = 1; fn_80074660(o->f224, o->f580); }
                { V4 c; void *q = o->f224; *(volatile f32 *)&c.a = lbl_8035F0C0; *(volatile f32 *)&c.b = lbl_8035F244; *(volatile f32 *)&c.c = lbl_8035F0C0; *(volatile f32 *)&c.d = lbl_8035F1C8; fn_800746A4(q, &c); }
            }
            o->f496->play(lbl_8035F248, 0, 0, 0, 0);
            o->f552[o->cnt]->play(lbl_8035EE98, 0, 0, 0, 0);
            o->cnt++;
            r = 1;
        }
    }
    if (!r) {
        f32 v;
        o->f556->f0 |= lbl_8035F218;
        ((M2 *)o->f556->m)->f4 = lbl_8035F0C0;
        v = (f32)o->f556->m->sh->n / o->f556->m->sh->len;
        if (!o->f556->f136) fn_8019B7E8(lbl_8035B65C->f12, o->f556);
        fn_802490E0(o, 16, v);
    }
    return r;
}

}
