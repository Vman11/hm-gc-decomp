// auto/text_8015FEA4 fn_8015FEA4 95.1587
extern u8 lbl_802E7058[];
extern u32 lbl_8035AC18;
u32 __nw__FUl();
void fn_800604C4();
void fn_800F6E88();
void fn_800F7E98();
void fn_800F7EC0();
void fn_80133A18();
void fn_80133FF4();

void fn_8015FEA4(u32 param_1) {
    u32 iVar1;
    u8 local_18 [16];

    if (lbl_8035AC18 == 0) {
        fn_800604C4(0xfffffffe,0,0,0);
    }
    fn_800F7EC0(lbl_8035AC18);
    iVar1 = __nw__FUl(0x48);
    if (iVar1 != 0) {
        fn_80133FF4(iVar1);
        *(u8 **)(iVar1 + 0x10) = (u8 *)lbl_802E7058;
        *(u32 *)(iVar1 + 0x28) = 0;
        *(u32 *)(iVar1 + 0x24) = 0;
        *(u32 *)(iVar1 + 0x2c) = 0;
        *(u32 *)(iVar1 + 0x30) = 0;
        *(u32 *)(iVar1 + 0x34) = 0;
        *(u32 *)(iVar1 + 0x38) = 0;
        *(u32 *)(iVar1 + 0x3c) = 0;
        *(u32 *)(iVar1 + 0x40) = 0;
        *(u32 *)(iVar1 + 0x44) = 0;
    }
    *(u32 *)(param_1 + 0x18) = iVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x18) == 0) {
        fn_800604C4(0xfffffffc,0,0,0);
    }
    if (*(u32 *)(param_1 + 0xc) == 0) {
        local_18[0] = 0;
    }
    else {
        fn_800F6E88(local_18);
    }
    fn_80133A18(*(u32 *)(param_1 + 0x18),*(u32 *)(param_1 + 0x24),
                            *(u32 *)(param_1 + 0x14),local_18);
}
