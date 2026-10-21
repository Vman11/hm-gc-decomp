#include "common.h"

extern "C" {

extern u8 lbl_802E5F20[];
extern char lbl_80364340[0x4];
extern char lbl_80364344[0x6];
void fn_80060E30(...);
struct V8013EF3C_1 { u8 vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void m(u8 *, s32, s32); };
void fn_8013ED50(void *, u32, V8013EF3C_1 *);
struct C80215F50 { u8 pad[0x2c]; V8013EF3C_1 *m2c; u8 pad2[0x8]; C80215F50(void); ~C80215F50(); };
void fn_80215BFC(C80215F50 *);
s32 fn_80215C84(C80215F50 *, u32, char *, s32, s32);
struct V8013EF3C_0 { u8 vptr_pad[0x10]; virtual void p0(); virtual void m(); };

void fn_8013EF3C(u8 *param_1, u32 param_2, u32 param_3) {
    C80215F50 obj;
    V8013EF3C_1 *v;
    s32 r;
    if (*(u32 *)(param_1 + 0x18) != 0) {
        ((V8013EF3C_0 *)param_1)->m();
    }
    r = fn_80215C84(&obj, param_3, lbl_80364340, 2, 0);
    if (r != 0) {
        fn_80060E30(r, lbl_80364344, param_3, lbl_80364340); /* "%s.%s" */
    }
    v = obj.m2c;
    v->m(lbl_802E5F20, 3, 0);
    fn_8013ED50(param_1, param_2, v);
    fn_80215BFC(&obj);
}

} /* extern "C" */
