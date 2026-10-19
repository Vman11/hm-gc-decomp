// auto/text_801FF300 fn_801FF300 99.2188
extern "C" {
struct VCall_fn_801FF300_0 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(int, int); };
struct VCall_fn_801FF300_1 { char vptr_pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m(int, int, int); };

void fn_801FF300(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    ((VCall_fn_801FF300_0 *)(param_1))->m((s32)(param_2), (s32)(param_4));
    ((VCall_fn_801FF300_1 *)(param_1))->m((s32)(param_3), (s32)(param_4), (s32)(param_5));
}
}
