// auto/text_8017133C fn_8017133C 95.1587
extern u8 lbl_802E8310[];
extern u32 lbl_8035AC50;
u32 __nw__FUl();
void fn_800604C4();
void fn_800F6E88();
void fn_800F7E98();
void fn_800F7EC0();
void fn_80138050();
void fn_80138B64();

void fn_8017133C(u32 param_1) {
    u32 iVar1;
    u8 local_18 [16];

    if (lbl_8035AC50 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AC50);
    iVar1 = __nw__FUl(0x40);
    if (iVar1 != 0) {
        fn_80138B64(iVar1);
        *(u8 **)(iVar1 + 0x10) = (u8 *)lbl_802E8310;
        *(u32 *)(iVar1 + 0x3c) = 0;
        *(u32 *)(iVar1 + 0x30) = 0;
        *(u32 *)(iVar1 + 0x34) = 0;
        *(u32 *)(iVar1 + 0x2c) = 0;
        *(u32 *)(iVar1 + 0x38) = 0;
    }
    *(u32 *)(param_1 + 0x28) = iVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x28) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    if (*(u32 *)(param_1 + 0xc) == 0) {
        local_18[0] = 0;
    }
    else {
        fn_800F6E88(local_18);
    }
    fn_80138050(*(u32 *)(param_1 + 0x28),*(u32 *)(param_1 + 0x2c),
                            *(u32 *)(param_1 + 0x14),*(u32 *)(param_1 + 0x18),
                            *(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 0x20),
                            *(u32 *)(param_1 + 0x24),local_18);
}
