// auto/text_801EE540 fn_801EE540 99.6571
extern "C" {
void fn_801EF9A0(int, int);
struct VCall_fn_801EE540_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
struct VCall_fn_801EE540_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual int m(); };

void fn_801EE540(s32 *param_1, s32 param_2) {
    s32 iVar1;

    ((VCall_fn_801EE540_0 *)(param_1))->m();
    fn_801EF9A0((int)(param_1), (int)(param_2));
    iVar1 = ((VCall_fn_801EE540_1 *)((s32 *)**(u32 **)(param_1[2] + 0xe4)))->m();
    param_1[10] = iVar1;
    iVar1 = *(s32 *)(param_2 + 0xc);
    param_1[0xd] = *(s32 *)(param_2 + 8);
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xb] = iVar1;
}
}
