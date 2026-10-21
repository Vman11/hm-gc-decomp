// auto/text_80214FF0 __dt__9C80214FF0Fv 95.0000
extern "C" {
extern u8 lbl_802EFFC0[];
void __dl__FPv(int);
void fn_800FA1A0(int);
void fn_800FA324(int, int);
struct VCall_dtor_80214FF0_0 { char vptr_pad[0x18]; virtual void p0(); virtual void m(); };

s32 __dt__9C80214FF0Fv(s32 param_1, s16 param_2) {
    s32 bVar1;
    s32 iVar2;
    u32 uVar3;

    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x18) = (u8 *)lbl_802EFFC0;
        if (*(u32 *)(param_1 + 0x1c) != 0) {
            iVar2 = *(u32 *)(*(u32 *)(param_1 + 0x1c) + 4);
            if (iVar2 == 0) {
                bVar1 = false;
            }
            else {
                uVar3 = *(u32 *)(iVar2 + 8);
                bVar1 = false;
                if (((uVar3 & 4) != 0) || ((uVar3 & 8) != 0)) {
                    bVar1 = true;
                }
            }
            if (bVar1) {
                ((VCall_dtor_80214FF0_0 *)(param_1))->m();
            }
        }
        *(u32 *)(param_1 + 0x1c) = 0;
        *(u32 *)(param_1 + 0x20) = 0;
        fn_800FA1A0((int)(param_1));
        fn_800FA324((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
