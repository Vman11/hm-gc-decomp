// auto/text_8020402C fn_8020402C 99.4231
extern "C" {
extern u32 lbl_8035B140;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80203E84 { char pad[0x2c]; C80203E84(); ~C80203E84(); };

void fn_8020402C(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035B140 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B140));
    iVar3 = *(u32 *)(param_1 + 0x14);
    uVar2 = (u32) new C80203E84[iVar3];
    *(u32 *)(param_1 + 0x1c) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x1c) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
