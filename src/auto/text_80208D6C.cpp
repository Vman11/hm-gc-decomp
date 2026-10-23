// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct Buf80208D6C { void *f0; void *f4; u32 f8; u32 f12; u32 f16; u32 f20; } Buf80208D6C;
typedef struct Info80208D6C { u32 f0; u32 f4; u8 pad[12]; s32 f20; } Info80208D6C;
} /* extern "C" */
struct S80208D6C {
    Buf80208D6C *f0;
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 busy();
    Info80208D6C *f8;
    u8 fi[44];
    S80208D6C *f56;
    u8 pad60[12];
    s32 f72;
};
extern "C" {
extern u32 lbl_803657C8;
s32 fn_800BD338(s32, void *);
s32 fn_800BD810(void *, void *, u32, u32, void (*)(s32, void *), s32);
void fn_80209050(s32, void *);

s32 fn_80208D6C(S80208D6C *p, u32 off) {
    s32 r;
    Buf80208D6C *b;
    r = p->busy();
    if (r != 0) return r;
    b = p->f0;
    if (off == b->f12 && (b->f8 & 8)) return 0;
    if (off >= p->f8->f4) {
        b->f0 = p->f8;
        b->f8 |= lbl_803657C8;
        p->f0->f20 = 0;
        p->f0->f12 = off;
        return 3;
    }
    if (fn_800BD338(p->f8->f20, p->fi) != 0) {
        p->f56 = p;
        { void *fi; u32 rm; Buf80208D6C *bb; void *ad; u32 ln; fi = p->fi; bb = p->f0; ln = bb->f16; rm = p->f8->f4 - off; ad = bb->f4; if (rm < ln) ln = (rm + 31) & ~31;
        if (fn_800BD810(fi, ad, ln, off, fn_80209050, 2) != 0) {
            p->f0->f12 = off;
            p->f72 = 1;
            b = p->f0; b->f0 = p->f8; b->f8 |= lbl_803657C8;
            if (off + p->f0->f16 <= p->f8->f4) {
                p->f0->f20 = p->f0->f16;
            } else {
                p->f0->f20 = p->f8->f4 - off;
            }
            return 0;
        }
    }}
    return 3;
}

} /* extern "C" */
