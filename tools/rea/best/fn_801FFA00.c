// auto/text_801FFA00 fn_801FFA00 99.6154
extern "C" {
extern u32 lbl_8035B130;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801FF850 { char pad[0x70]; C801FF850(); ~C801FF850(); };

void fn_801FFA00(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035B130 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B130));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C801FF850[iVar3];
    *(u32 *)(param_1 + 0x24) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x24) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
