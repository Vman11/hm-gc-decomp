// auto/text_80158854 fn_80158854 95.3614
void fn_800D61A0();
void fn_800D6DAC();
void fn_800D7C68();
void fn_800D7CA4();
void fn_800D9188();
void fn_800D937C();
void fn_800D9958();
void fn_800D9A04();
void fn_800D9A38();
void fn_80157A10();
void fn_80175634();

void fn_80158854(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    u32 local_18 [2];

    uVar1 = 0;
    iVar2 = param_1;
    do {
        *(u8 *)(iVar2 + 0x38) = 0xff;
        *(u8 *)(iVar2 + 0x39) = 0xff;
        *(u8 *)(iVar2 + 0x3a) = 0xff;
        *(u8 *)(iVar2 + 0x3b) = 0xff;
        local_18[0] = *(u32 *)(iVar2 + 0x38);
        fn_800D9188(uVar1,local_18);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 4;
    } while (uVar1 < 4);
    fn_800D9958(*(u32 *)(param_1 + 0x4c0),*(u32 *)(param_1 + 0x4c4),
                            *(u32 *)(param_1 + 0x4c8),*(u32 *)(param_1 + 0x4cc));
    fn_800D9A04(*(u8 *)(param_1 + 0x4b4),*(u32 *)(param_1 + 0x4b8),
                            *(u8 *)(param_1 + 0x4bc));
    fn_800D937C(*(u32 *)(param_1 + 0x488),*(u8 *)(param_1 + 0x48c),0,
                            *(u32 *)(param_1 + 0x488),*(u8 *)(param_1 + 0x48c));
    fn_800D6DAC(*(u32 *)(param_1 + 0x490));
    fn_800D61A0(*(u32 *)(param_1 + 0x4d0) & 0xff);
    fn_800D7C68(1);
    fn_800D7CA4(0,*(u8 *)(param_1 + 0x46c),0,*(u32 *)(param_1 + 0x478),
                            *(u32 *)(param_1 + 0x47c),*(u32 *)(param_1 + 0x480),
                            *(u32 *)(param_1 + 0x484));
    fn_800D7CA4(2,0,0,1,0,2,2);
    fn_800D9A38(0);
    fn_80157A10(param_1);
    uVar1 = 0;
    do {
        fn_80175634(param_1 + 0x4d8,uVar1);
        uVar1 = uVar1 + 1;
        param_1 = param_1 + 0x30;
    } while (uVar1 < 0x10);
}
