#include "common.h"
extern "C" {
extern "C" void *memset(void *, int, unsigned long);
extern f32 lbl_80365010, lbl_80365030, lbl_8035AFF8, lbl_8035AFFC;
extern char lbl_80365034[8], lbl_80365038[8];
struct Rc { f32 x0, y0, x1, y1; };
struct P8 { u32 a, b; };
struct A { u8 pad[36]; void *f36; u8 pad40[8]; u8 f48[4]; };
struct E0 { u8 pad[8]; int f8; };
struct E { E0 *f0; u8 pad4[4]; virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void *val(int); u8 f12[20]; u8 f32[20]; int f52; };
struct H { u8 pad[104]; void *f104; u8 pad108[4]; void *f112; };
struct T { u8 pad[360]; H *f360; u8 pad364[20]; u8 f384[52]; u32 f436; };
void fn_801CCDDC(void *, u32 *, A **, void *);
void *fn_8010EE60(void *, u32);
E *fn_8010D0BC(void *, void *);
void fn_8012D0A4(void *, Rc *, void *, P8 *, void *, int, f32, f32, f32);
void fn_8012CF08(void *, Rc *, char *, P8 *, void *, int, f32, f32, f32);
void fn_800E8F6C(char *, const char *, ...);
f32 fn_801C9F7C(T *t, void *lang) {
    A *a = 0;
    u32 b = 0;
    f32 mx = lbl_80365010;
    P8 p;
    Rc r;
    char buf[20];
    void *nm;
    memset(buf, 0, 20);
    fn_801CCDDC(t->f360->f112, &b, &a, t->f360->f104);
    void *fnt = a->f36;
    for (u32 i = 0; i < t->f436; i++) {
        switch (fn_8010D0BC(fn_8010EE60(t->f384, i), lang)->f0->f8) {
        case 5: {
            E *e = fn_8010D0BC(fn_8010EE60(t->f384, i), lang);
            if (e->f52) nm = e->f32;
            else nm = e->f12;
            fn_8012D0A4(fnt, &r, nm, &p, a->f48, 17, lbl_80365030, lbl_8035AFF8, lbl_8035AFFC);
            break;
        }
        case 3: {
            f32 *v = (f32 *)fn_8010D0BC(fn_8010EE60(t->f384, i), lang)->val(0);
            fn_800E8F6C(buf, lbl_80365034, *v);
            fn_8012CF08(fnt, &r, buf, &p, a->f48, 17, lbl_80365030, lbl_8035AFF8, lbl_8035AFFC);
            break;
        }
        case 2: {
            int *v = (int *)fn_8010D0BC(fn_8010EE60(t->f384, i), lang)->val(0);
            fn_800E8F6C(buf, lbl_80365038, *v);
            fn_8012CF08(fnt, &r, buf, &p, a->f48, 17, lbl_80365030, lbl_8035AFF8, lbl_8035AFFC);
            break;
        }
        case 11:
            break;
        }
        f32 w = r.x1 - r.x0;
        if (w > mx) mx = w;
    }
    return mx;
}
}
