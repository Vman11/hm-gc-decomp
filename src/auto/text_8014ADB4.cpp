// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Error(int);
    virtual u32 Next();
};
struct P { u32 f0; u8 f4[16]; u32 f20; u32 f24; u16 f28; u16 f30; };
extern u16 lbl_80364470;
extern u16 lbl_80364472;
extern u16 lbl_80364474;
extern u16 lbl_80364476;
extern u16 lbl_80364478;
extern u16 lbl_8036447A;
void fn_800FB000(S *, int);
void fn_800FAEF8(S *);
void fn_8014B14C(void *, u32, S *, u32);
void fn_8014AC64(P *, S *);
u16 fn_800FB33C(S *);
void fn_8014ADB4(P *p, u32 a, S *s, u32 c, u32 d) {
    u32 t;
    fn_800FB000(s, 97);
    fn_800FAEF8(s);
    while ((t = s->Next()) != 6) {
        switch ((int)t) {
        case 63: fn_8014B14C(p->f4, a, s, d); break;
        case 60: fn_8014AC64(p, s); break;
        case 98:
            switch (s->Next()) {
            case 100: p->f20 = 1; break;
            case 101: p->f20 = 2; break;
            case 102: p->f20 = 0; break;
            case 104: p->f20 = 3; break;
            case 105: p->f20 = 4; break;
            case 106: p->f20 = 5; break;
            default: s->Error(30); break;
            }
            break;
        case 99:
            switch ((int)s->Next()) {
            case 100: p->f24 = 1; break;
            case 101: p->f24 = 2; break;
            case 102: p->f24 = 0; break;
            case 103: p->f24 = 3; break;
            default: s->Error(30); break;
            }
            break;
        case 107: p->f28 &= 0xFFC0; p->f28 |= lbl_80364470; break;
        case 108: p->f28 &= 0xFFC0; p->f28 |= lbl_80364472; break;
        case 109: p->f28 &= 0xFFC0; p->f28 |= lbl_80364474; break;
        case 110: p->f28 &= 0xFFC0; p->f28 |= lbl_80364476; break;
        case 111: p->f28 &= 0xFFC0; p->f28 |= lbl_80364478; p->f30 = fn_800FB33C(s); break;
        case 112: p->f28 &= 0xFFC0; p->f28 |= lbl_8036447A; p->f30 = fn_800FB33C(s); break;
        default: s->Error(1); break;
        }
    }
}

} /* extern "C" */
