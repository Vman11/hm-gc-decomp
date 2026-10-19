// auto/text_801A2824 fn_801A2824 99.7059

void fn_801A2824(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = *(u32 *)(param_2 + 4);
    fn_8011FC1C(uVar1);
    fn_8011F7C0(uVar1);
    fn_8011893C(uVar1);
    fn_8011D748(uVar1);
    fn_8011C284(uVar1);
    fn_80118144(uVar1);
    fn_80117D5C(uVar1);
    fn_801191A0(uVar1);
    iVar2 = *(u32 *)(param_2 + 0x14);
    if (iVar2 != 0) {
        fn_8011893C(iVar2);
        fn_8011D748(iVar2);
    }
    if (*(u32 *)(param_2 + 0xc) != 0) {
        fn_8011FC1C(*(u32 *)(param_2 + 0xc));
    }
    if (*(u32 *)(param_2 + 0x10) != 0) {
        fn_8011F7C0(*(u32 *)(param_2 + 0x10));
    }
    if (*(u32 *)(param_2 + 0x18) != 0) {
        fn_8011893C(*(u32 *)(param_2 + 0x18));
    }
    if (*(u32 *)(param_2 + 0x1c) != 0) {
        fn_8011D748(*(u32 *)(param_2 + 0x1c));
    }
    if (*(u32 *)(param_2 + 0x24) != 0) {
        fn_8011C284(*(u32 *)(param_2 + 0x24));
    }
    if (*(u32 *)(param_2 + 0x28) != 0) {
        fn_80117D5C(*(u32 *)(param_2 + 0x28));
    }
    if (*(u32 *)(param_2 + 0x2c) != 0) {
        fn_80118144(*(u32 *)(param_2 + 0x2c));
    }
    if (*(u32 *)(param_2 + 0x20) != 0) {
        fn_801191A0(*(u32 *)(param_2 + 0x20));
    }
}
