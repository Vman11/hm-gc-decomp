// auto/text_802492F0 fn_802492F0 98.0893
extern "C" {
s32 fn_800F8274(int);
struct VCall_fn_802492F0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };
struct VCall_fn_802492F0_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };

void fn_802492F0(s32 *param_1, s32 param_2) {
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;
    u32 *puVar4;

    iVar3 = *(s32 *)(param_2 + 8) * 4;
    iVar2 = *(s32 *)(param_1[0x1d] + iVar3);
    if (iVar2 == 0) {
        *(u32 *)(param_1[0x1c] + iVar3) = 0;
    }
    else if (0 < iVar2) {
        *(s32 *)(param_1[0x1d] + iVar3) = iVar2 + -1;
    }
    piVar1 = (s32 *)fn_800F8274((int)(param_1 + 5));
    if (piVar1 != (s32 *)0x0) {
        puVar4 = (u32 *)(param_1[0xc] + *piVar1 * 4);
        for (iVar3 = piVar1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
            iVar2 = ((VCall_fn_802492F0_0 *)(param_1))->m((s32)(*puVar4));
            if (iVar2 != 0) {
                ((VCall_fn_802492F0_1 *)(param_1))->m((s32)(*puVar4));
                return;
            }
            puVar4 = puVar4 + 1;
        }
    }
}
}
