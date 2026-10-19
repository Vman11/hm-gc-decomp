// auto/text_8004B930 fn_8004B930 98.8000
extern "C" {
extern u32 lbl_8035B530;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_802416D4(int, int);

void fn_8004B930(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    uVar1 = (u32) new u8[*(u32 *)(param_1 + 0x1d4) << 2];
    *(u32 *)(param_1 + 400) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 400) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar2 = 0;
    for (uVar3 = 0; uVar3 < *(u32 *)(param_1 + 0x1d4); uVar3 = uVar3 + 1) {
        *(u32 *)(*(u32 *)(param_1 + 400) + iVar2) = 0;
        iVar2 = iVar2 + 4;
    }
    fn_802416D4((int)(param_1), (int)(param_2));
}
}
