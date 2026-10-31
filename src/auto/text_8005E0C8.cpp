// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V3 { f32 x, y, z; };
struct U { u8 pad[104]; virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8_(); virtual void u9(); virtual void u10(); virtual void upd(f32 dt);
    u8 pad2[120 - 108]; void *f120; };
struct Y { u8 pad[20]; f32 x, y, z, w; };
struct Y2 { u8 pad[16]; Y *y; };
struct X { u8 pad[16]; void *f16; u8 pad2[12]; u32 f32_; };
struct E { u32 f0; u8 pad[44]; X *x; u8 pad2[108 - 52]; Y2 *f108; };
struct CL { u8 pad[12]; V3 *c; };
struct T { u8 pad[68]; u8 f68[620 - 68]; s32 f620; u8 pad2[728 - 624]; f32 s[3]; U *u0; U *u1; E *e; U *uu[2]; u8 pad3[840 - 760]; f32 f840; u8 pad4[852 - 844]; f32 f852; u8 pad5[860 - 856]; f32 f860;
    u8 pad6[868 - 864]; CL *f868; f32 f872; f32 *f876; u8 pad7[884 - 880]; u8 f884; };
struct FT { void *a, *b, *c; void (*f)(void *, void *); };
extern "C" {
extern FT lbl_803286D0;
extern T *lbl_8035A1A8;
extern u32 lbl_8035E49C;
extern f32 lbl_8035E4CC; extern const f32 lbl_8035E4C4; extern f32 lbl_8035E4A8;
void fn_8005E354(T *t, f32 dt);
void fn_80230928(T *t, f32 dt);
void fn_80190C98(E *e);
void fn_80107F3C(void *p, f32 *s);

static inline V3 mul(const V3 &a, f32 s) { V3 r; r.x = s * a.x; r.y = s * a.y; r.z = s * a.z; return r; }
void fn_8005E0C8(T *t, f32 dt) {
    if (t->f620) {
        E *e;
        u32 i;
        X *x;
        f32 r;
        fn_8005E354(t, dt);
        fn_80230928(t, dt);
        if (t->u0) t->u0->upd(dt);
        if (t->u1) t->u1->upd(dt);
        for (i = 0; i < 2; i++) {
            if (t->uu[i]) t->uu[i]->upd(dt);
        }
        e = t->e;
        if (e && lbl_8035A1A8 == t) {
            x = e->x;
            if (x) {
                lbl_803286D0.f(x->f16, t->f68);
                x->f32_ |= lbl_8035E49C;
                fn_80190C98(e);
            }
        }
        if (t->f840 < t->f860) r = t->f840 / t->f860; else r = lbl_8035E4CC;
        if (r < lbl_8035E4C4) r = lbl_8035E4C4;
        t->s[0] = t->f852 * r;
        t->s[1] = t->f852 * r;
        t->s[2] = t->f852 * r;
        if (t->u0 && t->u0->f120) fn_80107F3C(t->u0->f120, t->s);
        if (t->u1 && t->u1->f120) fn_80107F3C(t->u1->f120, t->s);
        t->f840 = t->f840 + dt;
    }
    if (t->f884 & 1) {
        E *e;
        t->f872 = t->f872 - dt * (lbl_8035E4CC / *t->f876);
if (t->f872 < lbl_8035E4A8) t->f872 = *(f32 *)&lbl_8035E4A8;
        if (t == lbl_8035A1A8 && (e = t->e)) {
            f32 v = t->f872;
            if (v > lbl_8035E4A8) {
                V3 *c = t->f868->c;
                Y *y = e->f108->y;
                f32 cx = v * c->x, cy = v * c->y, cz = v * c->z;
                y->x = cx; y->y = cy; y->z = cz;
                y->w = lbl_8035E4CC;
            } else {
                e->f0 &= ~0x800;
                lbl_8035A1A8 = 0;
            }
        }
    }
}

} /* extern "C" */
