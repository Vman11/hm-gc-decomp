// auto/text_80243440 fn_80243440 95.3913
extern u32 lbl_8035B4C0;
u32 __nw__FUl();
void fn_800604C4();
u32 fn_800F6CD0();
void fn_800F7E98();
void fn_800F7EC0();
void fn_80243868();

void fn_80243440(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 iVar2;
    u32 *puVar3;

    iVar2 = fn_800F6CD0(param_2,param_1 + 0xc);
    iVar1 = param_1;
    if (iVar2 != 0) {
        do {
            iVar2 = iVar1;
            iVar1 = *(u32 *)(iVar2 + 0x20);
        } while (*(u32 *)(iVar2 + 0x20) != 0);
        if (lbl_8035B4C0 == 0) {
            fn_800604C4(0xfffffffe,0,0,0);
        }
        fn_800F7EC0(lbl_8035B4C0);
        puVar3 = (u32 *)__nw__FUl(0x2c);
        if (puVar3 != (u32 *)0x0) {
            *puVar3 = 0;
            *(u8 *)(puVar3 + 1) = 0;
            *(u8 *)(puVar3 + 3) = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0;
            puVar3[10] = 0;
        }
        *(u32 **)(iVar2 + 0x20) = puVar3;
        fn_800F7E98();
        if (*(u32 *)(iVar2 + 0x20) == 0) {
            fn_800604C4(0xfffffffc,0,0,0);
        }
        fn_80243868(*(u32 *)(iVar2 + 0x20),*(u32 *)(param_1 + 0x1c),param_1 + 4,param_2,
                                param_3);
    }
    else {
        do {
            iVar2 = iVar1;
            iVar1 = *(u32 *)(iVar2 + 0x24);
        } while (*(u32 *)(iVar2 + 0x24) != 0);
        if (lbl_8035B4C0 == 0) {
            fn_800604C4(0xfffffffe,0,0,0);
        }
        fn_800F7EC0(lbl_8035B4C0);
        puVar3 = (u32 *)__nw__FUl(0x2c);
        if (puVar3 != (u32 *)0x0) {
            *puVar3 = 0;
            *(u8 *)(puVar3 + 1) = 0;
            *(u8 *)(puVar3 + 3) = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3[9] = 0;
            puVar3[10] = 0;
        }
        *(u32 **)(iVar2 + 0x24) = puVar3;
        fn_800F7E98();
        if (*(u32 *)(iVar2 + 0x24) == 0) {
            fn_800604C4(0xfffffffc,0,0,0);
        }
        fn_80243868(*(u32 *)(iVar2 + 0x24),*(u32 *)(param_1 + 0x1c),param_1 + 4,param_2,
                                param_3);
    }
}
