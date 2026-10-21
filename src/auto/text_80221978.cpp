#include "common.h"

extern "C" {

extern const f32 lbl_80365A20;
extern const f32 lbl_80365A08;
u32 __cvt_fp2unsigned(f32);
s32 fn_802796A8(u8 *);
void fn_8027A538(u8 *, u32, u32);
struct V80221978 { u8 vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m8(); virtual void p9(); virtual void p10(); virtual void m11(); };

void fn_80221978(u8 *param_1) {
    s32 n;
    u8 *q;

    if ((*(u32 *)(param_1 + 0x50) & 2) != 0) {
        switch (fn_802796A8(*(u8 **)(param_1 + 0x64))) {
        case 0:
            q = *(u8 **)(param_1 + 0x64);
            if (*(u32 *)(q + 0xc) == *(u32 *)(q + 8) - 1) {
                n = *(s32 *)(param_1 + 0x48);
                if (n == -1) {
                    *(u32 *)(q + 0xc) = 0;
                }
                else if (n == 0) {
                    ((V80221978 *)param_1)->m8();
                }
                else if (*(s32 *)(param_1 + 0x54) == n) {
                    ((V80221978 *)param_1)->m8();
                }
                else {
                    *(s32 *)(param_1 + 0x54) = *(s32 *)(param_1 + 0x54) + 1;
                    *(u32 *)(*(u8 **)(param_1 + 0x64) + 0xc) = 0;
                }
            }
            if (*(f32 *)(param_1 + 0x20) > lbl_80365A08) {
                fn_8027A538(*(u8 **)(param_1 + 0x64), *(u32 *)(param_1 + 0x24), __cvt_fp2unsigned(lbl_80365A20 * *(f32 *)(param_1 + 0x20)));
            }
            ((V80221978 *)param_1)->m11();
        }
    }
}

} /* extern "C" */
