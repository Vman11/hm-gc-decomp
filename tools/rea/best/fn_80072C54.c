// auto/text_80072C54 fn_80072C54 96.5574
extern s32 lbl_80359F2C;
void fn_8002B14C();
void fn_8002B26C();
void fn_8002B42C();
void fn_8022BF30();

u32 fn_80072C54(s32 param_1) {
    u32 *puVar1;

    fn_8022BF30(0,param_1,0x7f,1);
    *(u32 *)(param_1 + 0x228) = *(u32 *)(param_1 + 0x228) & 0xfffffffe;
    puVar1 = *(u32 **)(param_1 + 0x428);
    if (puVar1 != (u32 *)0x0) {
        *puVar1 = *puVar1 & 0xfffff7ff;
    }
    puVar1 = *(u32 **)(param_1 + 0x438);
    if (puVar1 != (u32 *)0x0) {
        *puVar1 = *puVar1 & 0xfffff7ff;
    }
    fn_8002B42C(lbl_80359F2C,0);
    *(u32 *)(param_1 + 0x6d8) = 0;
    fn_8002B26C(lbl_80359F2C,0);
    **(u32 **)(param_1 + 0x540) = 0;
    if (**(s32 **)(param_1 + 0x540) < 0) {
        **(s32 **)(param_1 + 0x540) = 0;
    }
    **(s32 **)(param_1 + 0x540) = **(s32 **)(param_1 + 0x540) + 5;
    if (**(s32 **)(param_1 + 0x540) < 0) {
        **(s32 **)(param_1 + 0x540) = 0;
    }
    *(u32 *)(param_1 + 0x68c) = 1;
    fn_8002B14C(lbl_80359F2C,1);
    return 0;
}
