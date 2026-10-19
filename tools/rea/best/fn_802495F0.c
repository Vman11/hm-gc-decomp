// auto/text_802495F0 fn_802495F0 97.7831
extern "C" {
extern char lbl_803662E4[0x5];
extern char lbl_803662EC[0x5];
s32 fn_800F8274(int, void *);
struct VCall_fn_802495F0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };
struct VCall_fn_802495F0_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };
struct VCall_fn_802495F0_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };
struct VCall_fn_802495F0_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };

void fn_802495F0(s32 *param_1, s32 param_2) {
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;
    u32 *puVar4;

    if ((param_1[0x18] != -1) &&
          (piVar1 = (s32 *)fn_800F8274((int)(param_1 + 5), lbl_803662E4), piVar1 != (s32 *)0x0)) {
        puVar4 = (u32 *)(param_1[0xc] + *piVar1 * 4);
        for (iVar3 = piVar1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
            iVar2 = ((VCall_fn_802495F0_0 *)(param_1))->m((s32)(*puVar4));
            if (iVar2 != 0) {
                ((VCall_fn_802495F0_1 *)(param_1))->m((s32)(*puVar4));
                break;
            }
            puVar4 = puVar4 + 1;
        }
    }
    param_1[0x19] = -1;
    param_1[0x18] = param_2;
    piVar1 = (s32 *)fn_800F8274((int)(param_1 + 5), lbl_803662EC);
    if (piVar1 != (s32 *)0x0) {
        puVar4 = (u32 *)(param_1[0xc] + *piVar1 * 4);
        for (iVar3 = piVar1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
            iVar2 = ((VCall_fn_802495F0_2 *)(param_1))->m((s32)(*puVar4));
            if (iVar2 != 0) {
                ((VCall_fn_802495F0_3 *)(param_1))->m((s32)(*puVar4));
                return;
            }
            puVar4 = puVar4 + 1;
        }
    }
}
}
