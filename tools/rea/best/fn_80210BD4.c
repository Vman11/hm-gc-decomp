// auto/text_80210BD4 fn_80210BD4 97.2500
extern "C" {
struct VCall_fn_80210BD4_0 { char vptr_pad[0x6b8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_80210BD4_1 { char vptr_pad[0x6b8]; virtual void p0(); virtual void m(int, int, int); };

void fn_80210BD4(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (param_1[1] != 0) {
        ((VCall_fn_80210BD4_0 *)(*param_1))->m();
        *param_1 = 0;
        param_1[1] = 0;
    }
    *param_1 = param_2;
    ((VCall_fn_80210BD4_1 *)(*param_1))->m((u32)(param_3), (u32)(param_4), (u32)(param_1 + 1));
}
}
