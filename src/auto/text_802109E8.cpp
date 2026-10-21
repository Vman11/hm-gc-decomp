#include "common.h"

extern "C" {

extern u32 lbl_8035B1C0;
struct O802109E8 { u8 vptr_pad[0x6b8]; virtual void p0(); virtual u32 m1(u32, u32, void **); virtual void p2(); virtual void Release(void *); };
s32 fn_802160B8(u32, u32, O802109E8 **);
O802109E8 *fn_8021616C(u32);
struct S802109E8 { O802109E8 *owner; void *handle; };

u32 fn_802109E8(S802109E8 *p, u32 a, u32 flags) {
    O802109E8 *o;
    O802109E8 *x;

    if ((flags & 1) != 0) {
        o = fn_8021616C(lbl_8035B1C0);
    }
    else {
        if (fn_802160B8(lbl_8035B1C0, a, &o) != 0) {
            return 1;
        }
    }
    x = o;
    if (p->handle != 0) {
        if (p->handle != 0) {
            p->owner->Release(p->handle);
        }
        p->owner = 0;
        p->handle = 0;
    }
    p->owner = x;
    return p->owner->m1(a, flags, &p->handle);
}

} /* extern "C" */
