// auto/text_801F6A7C fn_801F6A7C 98.8064
extern "C" {
void fn_801F7694(int, int);
struct VCall_fn_801F6A7C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801F6A7C(s32 *param_1, s32 param_2) {
    s32 iVar1;
    s32 iVar2;

    if (param_1[2] != 0) {
        ((VCall_fn_801F6A7C_0 *)(param_1))->m();
    }
    fn_801F7694((int)(param_1), (int)(param_2));
    iVar2 = *(s32 *)(param_2 + 0x38);
    param_1[0x1e] = *(s32 *)(param_2 + 0x34);
    iVar1 = *(s32 *)(param_2 + 0x3c);
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1f] = iVar2;
    param_1[0x20] = iVar1;
}
}
