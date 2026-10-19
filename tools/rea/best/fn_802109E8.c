// auto/text_802109E8 fn_802109E8 95.6604
extern "C" {
extern s32 lbl_8035B1C0;
s32 fn_802160B8(int, int, int);
s32 fn_8021616C(int);
struct VCall_fn_802109E8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_802109E8_1 { char vptr_pad[0x6b8]; virtual void p0(); virtual int m(int, int, int); };

u32 fn_802109E8(s32 *param_1, u32 param_2, u32 param_3) {
    s32 iVar1;
    u32 uVar2;
    s32 local_18 [2];

    if ((param_3 & 1) != 0) {
        local_18[0] = fn_8021616C((int)(lbl_8035B1C0));
    }
    else {
        iVar1 = fn_802160B8((int)(lbl_8035B1C0), (int)(param_2), (int)(local_18));
        if (iVar1 != 0) {
            return 1;
        }
    }
    iVar1 = local_18[0];
    if (param_1[1] != 0) {
        ((VCall_fn_802109E8_0 *)((s32 *)(*param_1 + 0x6b8)))->m();
        *param_1 = 0;
        param_1[1] = 0;
    }
    *param_1 = iVar1;
    uVar2 = ((VCall_fn_802109E8_1 *)(*param_1))->m((s32)(param_2), (s32)(param_3), (s32)(param_1 + 1));
    return uVar2;
}
}
