// auto/text_801FE0E4 fn_801FE0E4 99.6154
extern "C" {
extern u32 lbl_8035B118;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80204170 { char pad[0x24]; C80204170(); ~C80204170(); };

void fn_801FE0E4(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035B118 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B118));
    iVar3 = *(u32 *)(param_1 + 4);
    uVar2 = (u32) new C80204170[iVar3];
    *(u32 *)(param_1 + 0x28) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x28) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
