// auto/text_8015C00C fn_8015C00C 99.4231
extern "C" {
extern u32 lbl_8035ABEC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8015BEE8 { char pad[0xcc]; C8015BEE8(); ~C8015BEE8(); };

void fn_8015C00C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035ABEC == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ABEC));
    iVar3 = *(u32 *)(param_1 + 0x1c);
    uVar2 = (u32) new C8015BEE8[iVar3];
    *(u32 *)(param_1 + 0x2c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x2c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
