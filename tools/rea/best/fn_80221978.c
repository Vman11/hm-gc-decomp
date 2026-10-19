// auto/text_80221978 fn_80221978 95.8088
extern "C" {
extern const f32 lbl_80365A20;
extern const f32 lbl_80365A08;
s32 fn_800E2584(f64);
s32 fn_802796A8(int);
void fn_8027A538(int, int, int);
struct VCall_fn_80221978_0 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };
struct VCall_fn_80221978_1 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(); };
struct VCall_fn_80221978_2 { char vptr_pad[0x60]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };

void fn_80221978(s32 param_1) {
    s32 iVar1;
    s32 iVar2;
    u32 uVar3;

    if (((*(u32 *)(param_1 + 0x50) & 2) != 0) &&
          (iVar2 = fn_802796A8((int)(*(u32 *)(param_1 + 100))), iVar2 == 0)) {
        iVar2 = *(s32 *)(param_1 + 100);
        if (*(s32 *)(iVar2 + 0xc) == *(s32 *)(iVar2 + 8) + -1) {
            iVar1 = *(s32 *)(param_1 + 0x48);
            if (iVar1 == -1) {
                *(u32 *)(iVar2 + 0xc) = 0;
            }
            else if (iVar1 == 0) {
                ((VCall_fn_80221978_0 *)(param_1))->m();
            }
            else if (*(s32 *)(param_1 + 0x54) == iVar1) {
                ((VCall_fn_80221978_1 *)(param_1))->m();
            }
            else {
                *(s32 *)(param_1 + 0x54) = *(s32 *)(param_1 + 0x54) + 1;
                *(u32 *)(*(s32 *)(param_1 + 100) + 0xc) = 0;
            }
        }
        if (*(f32 *)(param_1 + 0x20) > lbl_80365A08) {
            uVar3 = fn_800E2584((f64)(*(f32 *)(param_1 + 0x20) * lbl_80365A20));
            fn_8027A538((int)(*(u32 *)(param_1 + 100)), (int)(*(u32 *)(param_1 + 0x24)), (int)(uVar3));
        }
        ((VCall_fn_80221978_2 *)(param_1))->m();
    }
}
}
