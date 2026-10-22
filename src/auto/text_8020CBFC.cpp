// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A6C28[];
extern u32 lbl_8036580C;
extern u32 lbl_80365810;
extern u32 lbl_80365814;
void fn_80060568(char *fmt, s32 a, s32 b, s32 c);

struct V_8020CBFC {
    u8 *ptr;
    virtual void f0(void *e, void *p);
    virtual void f1();
    virtual s32 f2(s32);
    virtual s32 f3();
    virtual s32 f4();
};

struct S_8020CBFC {
    u32 x0;
    u32 x4;
    u32 flags;
    u8 pad[8];
    u8 *x14;
    V_8020CBFC v;
};

void *fn_8021141C(S_8020CBFC *p);

s32 fn_8020CBFC(S_8020CBFC *p, s32 a, s32 b, u32 flags)
{
    void *e;
    s32 r;

    p->flags = flags;
    p->x4 = *(u32 *)(p->x14 + 2180);
    e = fn_8021141C(p);
    if (e == 0) {
        fn_80060568(lbl_802A6C28, 0, 0, 0);
    }
    p->v.f0(e, p);
    r = p->v.f2(0);
    if (p->flags & 4) {
        if (r == 7) {
            r = p->v.f4();
        }
        if (r == 0) {
            *(u32 *)(*(u8 **)(p->v.ptr + 4) + 64) |= lbl_80365810;
            *(u32 *)(p->v.ptr + 8) |= lbl_8036580C;
            r = p->v.f3();
            if (r == 0) {
                p->flags |= lbl_80365814;
                p->x0 = 0;
            }
        }
    } else {
        if (r == 0 || r == 7) {
            p->flags |= lbl_80365814;
            p->x0 = 0;
        }
    }
    return r;
}

} /* extern "C" */
