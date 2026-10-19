// auto/text_800FC804 fn_800FC804 95.0000
extern "C" {
struct VCall_fn_800FC804_0 { char vptr_pad[0x8c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

void fn_800FC804(u32 *param_1, u32 param_2, u32 param_3, u32 param_4) {
    if (param_1[0x1d] != 0) {
        ((VCall_fn_800FC804_0 *)(param_1))->m();
    }
    param_1[0x1d] = param_2;
    param_1[0x1f] = param_3;
    param_1[0x20] = param_4;
    *param_1 = *param_1 | 2;
}
}
