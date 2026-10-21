// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
struct C801D8A7C { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual s32 m21(void *, void *); };
struct D801D8A7C { char vptr_pad[128]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void m45(void *); };

typedef struct N801D8A7C {
    C801D8A7C *obj;
    s32 enabled;
    struct N801D8A7C *next;
} N801D8A7C;

s32 fn_801D8A7C(void *p, void *a) {
    N801D8A7C *n;
    s32 failed;
    N801D8A7C *m;
    s32 r;
    failed = 0;
    for (n = F(p, N801D8A7C *, 136); n != 0; n = n->next) {
        if (n->enabled != 0) {
            if (n->obj->m21(p, a) == 0) {
                failed = 1;
            }
        }
    }
    if (failed) {
        return 0;
    }
    if (F(p, D801D8A7C *, 284) != 0) {
        F(p, D801D8A7C *, 284)->m45(a);
    }
    r = 0;
    for (m = F(p, N801D8A7C *, 136); m != 0; m = m->next) {
        if (m->enabled == 0) {
            if (m->obj->m21(p, a) == 0) {
                r = 1;
            }
        }
    }
    return r ? 0 : 0;
}

} /* extern "C" */
