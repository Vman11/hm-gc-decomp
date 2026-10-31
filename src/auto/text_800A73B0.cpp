// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct M { f32 x, y, z, w; };
struct L { u8 pad[12]; u32 n; };
struct S224 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void go();
    u8 pad4[272]; int f276; };
struct V72 { virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9(); virtual void b10(); virtual void b11(); virtual void b12(); virtual void get(M *, int, int, int, int); };
struct G308 { u8 pad[72]; V72 *f72; };
extern G308 *lbl_8035B308;
struct S192 { u8 pad[4]; void *f4; };
struct T { u8 pad[96]; int f96; u8 pad100[92]; S192 *f192; u8 pad196[28]; S224 *f224; u8 pad228[68]; f32 *f296; f32 *f300; u8 pad304[32]; f32 *f336; u8 pad340[12]; L *f352; L *f356; int f360; int f364; int f368; };
extern f32 lbl_80361F5C;
int fn_8022C558(S224 *);
void fn_800A7A1C(T *, int);
void fn_800A77D0(T *, int);
void fn_802494A4(T *, int);
void *fn_80245F8C(L *, int);
f32 fn_80101590(M *, void *);
void fn_80257A4C(void *, M *);
void fn_8023FE08(T *, f32);
void fn_800A73B0(T *t, f32 dt) {
    int s = t->f96;
    if (s == 5) {
        if (fn_8022C558(t->f224)) t->f224->go();
    } else if (t->f368 && t->f224->f276 == 0) {
        if (t->f356 && t->f356->n) {
            fn_800A7A1C(t, !t->f224->f276);
            fn_802494A4(t, 1);
        } else if (t->f352 && t->f352->n) {
            fn_800A77D0(t, !t->f224->f276);
            fn_802494A4(t, 3);
        } else {
            fn_802494A4(t, 5);
        }
        t->f368 = 0;
    } else if (s != 0) {
        f32 m[1];
        lbl_8035B308->f72->get((M *)m, 0, 0, 0, 0);
        m[2] = m[2] + *t->f336;
        f32 d = lbl_80361F5C;
        if (t->f356) { int n = t->f356->n; if (t->f360 > n) t->f360 = n - 1; }
        if (t->f360 >= 0) {
            void *o = fn_80245F8C(t->f356, t->f360);
            d = fn_80101590((M *)m, o);
        }
        t->f364 = d <= *t->f296;
        if (t->f96 == 4) {
            if (d < *t->f300) fn_80257A4C(t->f192->f4, (M *)m);
            else fn_802494A4(t, 1);
        }
    }
    fn_8023FE08(t, dt);
}

} /* extern "C" */
