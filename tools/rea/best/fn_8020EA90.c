// auto/text_8020EA90 fn_8020EA90 99.1667
extern "C" {
void fn_80060568(void *, int, int, int);
u32 strlen(int);

void fn_8020EA90(u32 param_1, u32 param_2, s8 *param_3) {
    u32 sVar1;
    u32 uVar2;
    u32 iVar3;

    if (param_2 >= *(u32 *)(param_1 + 0xc)) {
        fn_80060568(lbl_802A6C70, (int)(0), (int)(0), (int)(0)); /* "AtIoDirectoryListing::vSetDirectoryName:  offset out of bounds!\n" */
    }
    if ((s8 *)0x0 == param_3) {
        fn_80060568(lbl_802A6CB4, (int)(0), (int)(0), (int)(0 /* "AtIoDirectoryListing::vSetDirectoryName:  invalid directory name supplied!\n" */));
    }
    iVar3 = param_2 * 0x1c;
    if (*(u32 *)(*(u32 *)(param_1 + 4) + iVar3) != 0) {
        __dla__FPv((int)(*(u32 *)(*(u32 *)(param_1 + 4) + iVar3)));
    }
    sVar1 = strlen((int)(param_3));
    if (0 == lbl_8035A9F4) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    uVar2 = (u32) new u8[sVar1 + 1];
    *(u32 *)(*(u32 *)(param_1 + 4) + iVar3) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(*(u32 *)(param_1 + 4) + iVar3) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_800EB764((int)(*(u32 *)(*(u32 *)(param_1 + 4) + iVar3)), (int)(param_3));
}
}
