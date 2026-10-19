// auto/text_80203EF8 fn_80203EF8 97.6923
extern "C" {
}


extern "C" void fn_80203EF8(u32 param_1, u32 param_2, s8 *param_3) {
    u32 sVar1;
    u32 uVar2;

    *(u32 *)(param_1 + 0x18) = param_2;
    if (*(u32 *)(param_1 + 0x20) != 0) {
        __dla__FPv((int)(*(u32 *)(param_1 + 0x20)));
        *(u32 *)(param_1 + 0x20) = 0;
    }
    if (param_3 != (s8 *)0x0) {
        sVar1 = strlen((int)(param_3)) + 1;
        if (lbl_8035B140 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035B140));
        uVar2 = __nwa__FUl((int)(sVar1));
        *(u32 *)(param_1 + 0x20) = uVar2;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 0x20) == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
        fn_800EB764((int)(*(u32 *)(param_1 + 0x20)), (int)(param_3));
    }
}
