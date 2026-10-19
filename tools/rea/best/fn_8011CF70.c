// auto/text_8011CF70 fn_8011CF70 96.3000
void fn_80118F3C();
void fn_8011DD10();
void fn_8011DE7C();

void fn_8011CF70(u32 param_1) {
    u32 iVar1;
    u32 *piVar2;

    while (*(u32 *)(param_1 + 0x30) != 0) {
        piVar2 = (u32 *)**(u32 **)(param_1 + 0x28);
        fn_8011DE7C(piVar2[5],piVar2);
        fn_80118F3C(param_1 + 0x28,piVar2);
        iVar1 = *(u32 *)(param_1 + 0x20);
        *piVar2 = iVar1;
        if (iVar1 != 0) {
            *(u32 **)(*(u32 *)(param_1 + 0x20) + 4) = piVar2;
        }
        else {
            *(u32 **)(param_1 + 0x24) = piVar2;
        }
        *(u32 **)(param_1 + 0x20) = piVar2;
        piVar2[1] = 0;
    }
    while (*(u32 *)(param_1 + 0x40) != 0) {
        piVar2 = (u32 *)**(u32 **)(param_1 + 0x38);
        fn_8011DD10(piVar2[5],piVar2);
        fn_80118F3C(param_1 + 0x38,piVar2);
        iVar1 = *(u32 *)(param_1 + 0x20);
        *piVar2 = iVar1;
        if (iVar1 == 0) {
            *(u32 **)(param_1 + 0x24) = piVar2;
        }
        else {
            *(u32 **)(*(u32 *)(param_1 + 0x20) + 4) = piVar2;
        }
        *(u32 **)(param_1 + 0x20) = piVar2;
        piVar2[1] = 0;
    }
}
