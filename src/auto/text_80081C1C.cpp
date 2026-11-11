// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct E { u8 pad[52]; u16 f52; };
struct R4 { u8 pad[4]; f32 f4; };
struct P { u8 pad[208]; E **f208; u8 pad2[12]; void *f224; u32 f228; u8 pad3[4]; f32 *f236; u8 pad4[116]; f32 *f356;
    u8 pad5[64]; s32 f424; u32 f428; u8 pad6[4]; u32 f436; u32 *f440; u8 pad7[12]; u32 f456; u32 f460; };
extern "C" {
extern f32 lbl_8035FC28;
extern f64 lbl_8035FC20;
extern u8 lbl_8035FBF4[4];
R4 *fn_8022D694(void *);
f64 fn_800F04FC(f64, f64);
P *fn_80242144(P *, int);
void fn_80242BC0(P *, void *, void *, int, f32 *, int);
static inline u32 bits(P *p) { return (s32)(*p->f440 & p->f456) >> 27; }
static inline u32 idx(P *p) { u32 v = bits(p); return v == 3 ? 1 : v; }
static inline void set(P *p, f32 v) {
    f32 s;
    u32 k;
    u32 w = *p->f440;
    E **a = p->f208;
    w = (s32)(w & p->f456) >> 27;
    f32 c = (f32)a[w == 3 ? 1 : w]->f52;
    fn_8022D694(p->f224)->f4 = c * v;
    *p->f440 &= ~p->f460;
    s = lbl_8035FC28;
    k = idx(p);
    if (k == 1 && p->f208[k] && p->f208[k]->f52) s = fn_8022D694(p->f224)->f4 / p->f208[k]->f52;
    *p->f440 |= (u32)(s * (f32)fn_800F04FC(lbl_8035FC20, p->f436));
}
void fn_80081C1C(P *p) {
    f32 tmp;
    if (*p->f356 > lbl_8035FC28) {
        set(p, *p->f356);
        if (p->f424 == 0) {
            f64 d = fn_800F04FC(lbl_8035FC20, p->f436);
            tmp = (s32)(*p->f440 & p->f460) / (f32)d;
            p->f236 = &tmp;
        } else {
            p->f428 = p->f228;
            tmp = *p->f236;
            set(p, tmp);
        }
        fn_80242BC0(fn_80242144(p, 1), lbl_8035FBF4, p->f224, 0, p->f236, 0);
    }
}

} /* extern "C" */
