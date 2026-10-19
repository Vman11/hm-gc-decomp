// auto/text_802514F0 fn_802514F0 97.8571
extern "C" {
extern u32 lbl_8035B1C0;
extern u32 lbl_8035B5E0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80117FE4(int, int, int, int);
void fn_802079F0(int, int);
void fn_80207BF4(int, int);
u32 fn_8021616C(int);
struct C801180F8 { char pad[0x20]; C801180F8(void); };

void fn_802514F0(u32 param_1, u32 param_2, u32 param_3) {
    u32 iVar1;
    u32 uVar2;

    if (lbl_8035B5E0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B5E0));
    iVar1 = (u32) new C801180F8();
    *(u32 *)(param_1 + 0x20) = iVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x20) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    uVar2 = fn_8021616C((int)(lbl_8035B1C0));
    fn_80207BF4((int)(uVar2), (int)(param_2));
    fn_80117FE4((int)(*(u32 *)(param_1 + 0x20)), (int)(*(u32 *)(param_1 + 0x24)), (int)(param_3), (int)(0));
    fn_802079F0((int)(uVar2), (int)(0));
}
}
