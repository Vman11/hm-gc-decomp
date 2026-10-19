// auto/text_8020EC24 fn_8020EC24 99.1667
extern "C" {
void fn_80060568(void *, int, int, int);
u32 strlen(int);

void fn_8020EC24(u32 *param_1, u32 param_2, s8 *param_3) {
    u32 sVar1;
    u32 uVar2;
    u32 iVar3;

    if (param_2 >= (u32)param_1[2]) {
        fn_80060568(lbl_802A6D48, (int)(0), (int)(0), (int)(0)); /* "AtIoDirectoryListing::vSetFileName:  offset out of boudns!\n" */
    }
    if ((s8 *)0x0 == param_3) {
        fn_80060568(lbl_802A6D84, (int)(0), (int)(0), (int)(0)); /* "AtIoDirectoryListing::vSetFileName:  invalid name supplied!\n" */
    }
    iVar3 = param_2 * 0x1c;
    if (0 != *(u32 *)(*param_1 + iVar3)) {
        __dla__FPv((int)(*(u32 *)(*param_1 + iVar3)));
    }
    sVar1 = strlen((int)(param_3));
    if (0 == lbl_8035A9F4) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    uVar2 = (u32) new u8[sVar1 + 1];
    *(u32 *)(*param_1 + iVar3) = uVar2;
    fn_800F7E98();
    if (0 == *(u32 *)(*param_1 + iVar3)) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_800EB764((int)(*(u32 *)(*param_1 + iVar3)), (int)(param_3));
}
}
