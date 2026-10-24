// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802449C4 {
    u8 d[56];
    C802449C4();
    ~C802449C4();
};
struct O { u8 pad[272]; f32 f272; u8 pad276[324]; O *o600; };
struct G { u8 pad[72]; O *o72; };
struct P {
    u8 pad0[284];
    s32 *a284;
    s32 *a288;
    s32 *a292;
    f32 *lo;
    u8 pad300[28];
    f32 hi;
    O *o332;
    char *s336;
};
extern G *lbl_8035B308;
extern u8 *lbl_8035B488;
extern f32 lbl_8035FD94, lbl_8035FD98;
void *fn_80242144(P *self, s32 n);
void fn_802448C8(C802449C4 *it, void *p);
void fn_80244750(C802449C4 *it, s32 n);
O *fn_8024457C(C802449C4 *it);
void fn_80244594(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_800F6E88(char *, char *);
O *fn_802288FC(G *, char *);

void fn_80084A54(P *p, s32 a, s32 b, f32 t) {
    f32 v;
    u32 n;
    if (t < lbl_8035FD94) t = lbl_8035FD94;
    if (a) {
        if (b) v = *p->lo;
        else v = p->hi;
    } else {
        f32 hi = p->hi;
        f32 lo = *p->lo;
        v = hi - t * (hi - lo);
        if ((v < lo && lo < hi) || (v > lo && lo > hi)) v = lo;
    }
    n = 0;
    C802449C4 it;
    fn_802448C8(&it, fn_80242144(p, 0));
    fn_80244750(&it, 0);
    while (!fn_80244584(&it)) {
        n++;
        fn_8024457C(&it)->f272 = v;
        fn_80244594(&it);
    }
    if (*p->a284 != 0 && p->o332) {
        p->o332->f272 = v;
        n++;
    }
    if (n == 0) {
        f32 w;
        if (lbl_8035FD94 == v) w = lbl_8035FD98;
        else w = lbl_8035FD98 / v;
        C802449C4 it2;
        fn_802448C8(&it2, fn_80242144(p, 1));
        fn_80244750(&it2, 0);
        while (!fn_80244584(&it2)) {
            fn_8024457C(&it2)->f272 = w;
            fn_80244594(&it2);
        }
        if (*p->a284 == 0 && p->o332) p->o332->f272 = w;
        if (*p->a288 == 0 || (*p->a284 == 0 && p->o332 == lbl_8035B308->o72)) lbl_8035B308->o72->f272 = w;
        if (*p->a292 == 0 || (*p->a284 == 0 && p->o332 == lbl_8035B308->o72->o600)) lbl_8035B308->o72->o600->f272 = w;
        if (p->s336) {
            char buf[8];
            O *o;
            fn_800F6E88(buf, p->s336);
            o = fn_802288FC(lbl_8035B308, buf);
            if (o) o->f272 = w;
        }
        if (b || (!b && !a)) *(f32 *)(lbl_8035B488 + 10220) = v;
        else *(f32 *)(lbl_8035B488 + 10220) = lbl_8035FD98;
    }
    if (!b && a) *(f32 *)(lbl_8035B488 + 10220) = lbl_8035FD98;
}

} /* extern "C" */
