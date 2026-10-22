// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VA_801AF27C { u8 pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual void p68();  virtual void m(void *); };
struct VB_801AF27C { u8 pad[0xC]; virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual s32 getI(); virtual f32 getF(); };
struct In_801AF27C { u8 pad[0xC]; union { s32 i; f32 f; } v; };
struct Mid_801AF27C { u8 pad[0x28]; In_801AF27C *in; };
struct Obj_801AF27C {
    u8 pad0[0x11C];
    VA_801AF27C *f11C;
    u8 pad1[0x174 - 0x120];
    s32 f174;
    u8 pad2[0x180 - 0x178];
    s32 f180;
    s32 f184;
    Mid_801AF27C *f188;
    VB_801AF27C *f18C;
    u8 pad3[0x198 - 0x190];
    s32 f198;
};
void fn_800FA69C(void *, void *);
void fn_801B1D54(void *, s32);

void fn_801AF27C(Obj_801AF27C *p, void *a) {
    if (p->f18C != 0) {
        fn_800FA69C(p->f18C, a);
        if (p->f198 == 5) {
            if (p->f11C != 0) {
                p->f11C->m(p);
            }
        } else if (p->f198 == 2) {
            s32 old = p->f188->in->v.i;
            s32 v = p->f18C->getI();
            if (old != v) {
                p->f188->in->v.i = v;
                if (p->f11C != 0) {
                    p->f11C->m(p);
                }
            }
        } else if (p->f198 == 3) {
            f32 oldf = p->f188->in->v.f;
            f32 vf = p->f18C->getF();
            if (oldf != vf) {
                p->f188->in->v.f = vf;
                if (p->f11C != 0) {
                    p->f11C->m(p);
                }
            }
        }
        p->f180 = 0;
        p->f184 = 0;
        fn_801B1D54(p, 0);
        p->f174 = 0;
    }
}

} /* extern "C" */
