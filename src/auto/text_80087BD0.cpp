// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct FT { u8 pad[12]; void (*f12)(void *, V *); };
extern FT lbl_803286D0;
extern f32 lbl_8035FEB0, lbl_8035FEB4, lbl_8035FEB8, lbl_8035FEC8;
extern f64 lbl_8035FEC0;
extern u32 lbl_8035FEA0, lbl_8035FEA4, lbl_8035FEA8, lbl_8035FEAC;
struct E52 { u8 pad[52]; };
struct G5E4 { u8 pad[104]; int f104; u8 pad108[4]; E52 *f112; };
extern G5E4 *lbl_8035B5E4;
struct P { u8 pad[16]; void *f16; u8 pad20[12]; u32 f32; };
struct O { u32 f0; u8 pad4[44]; P *f48; u8 pad52[100]; u32 f152; f32 f156; u8 pad160[12]; f32 f172; };
struct Q { u8 pad[152]; u32 f152; };
struct S888 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void go(); };
struct A740 { u8 pad[48]; void *f48; };
struct T { u8 pad[740]; A740 *f740; u8 pad744[8]; Q *f752; Q *f756; O *f760[5]; u8 pad780[92]; f32 f872; u8 pad876[8]; u8 f884; u8 pad885[3]; S888 *f888; int f892; int f896; f32 f900; f32 *f904; int f908; V f912; u8 pad924[12]; f32 f936, f940, f944; u8 pad948[124]; f32 f1072; f32 *f1076; u8 pad1080[8]; f32 *f1088; };
void fn_80253304(E52 *, int, f32);
void fn_80107244(void *, V *);
void fn_80190C98(O *);
void fn_80196688(O *);
void fn_8008930C(T *, V *, int, f32);
void fn_80087BD0(T *t, int a, V *v) {
    if (t->f884 & 1) return;
    t->f872 = lbl_8035FEB0;
    fn_80253304(&lbl_8035B5E4->f112[lbl_8035B5E4->f104], 2500, lbl_8035FEB4);
    t->f884 |= 1;
    t->f896 = 1;
    t->f900 = *t->f904;
    if (v) {
        t->f912.x = v->x;
        t->f912.y = v->y;
        t->f912.z = v->z;
    }
    t->f908 = a;
    if (t->f752) t->f752->f152 |= lbl_8035FEA0;
    if (t->f756) t->f756->f152 |= lbl_8035FEA0;
    t->f888->go();
    t->f892 = 1;
    for (u32 i = 0; i < 5; i++) {
        if (t->f760[i]) {
            if (t->f740) {
                V p;
                void *q = t->f740->f48;
                if (q) fn_80107244(q, &p);
                else p.z = p.y = p.x = lbl_8035FEB8;
                p.z = p.z - lbl_8035FEC0;
                O *o = t->f760[i];
                P *pp = o->f48;
                if (pp) {
                    lbl_803286D0.f12(pp->f16, &p);
                    pp->f32 |= lbl_8035FEA4;
                    fn_80190C98(o);
                }
            }
            t->f760[i]->f0 |= lbl_8035FEA8;
            O *o3 = t->f760[i];
            o3->f156 = lbl_8035FEB8;
            o3->f152 &= ~6;
            o3->f172 = lbl_8035FEB8;
            fn_80196688(o3);
            t->f760[i]->f152 |= lbl_8035FEAC;
            t->f760[i]->f152 &= ~8;
        }
    }
    t->f1072 = *t->f1076;
    V w;
    w.x = t->f936;
    w.y = t->f940;
    f32 z = t->f944;
    *(volatile f32 *)&w.z = z;
    w.z = z - *(volatile f32 *)&lbl_8035FEC8;
    fn_8008930C(t, &w, 1, *t->f1088);
}

} /* extern "C" */
