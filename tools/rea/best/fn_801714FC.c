// auto/text_801714FC fn_801714FC 99.4231
extern "C" {
extern u32 lbl_8035AC50;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C80155E80 { char pad[0x44]; C80155E80(); ~C80155E80(); };

void fn_801714FC(u32 param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 iVar3;

    if (lbl_8035AC50 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC50));
    iVar3 = *(u32 *)(param_1 + 0x1c);
    uVar2 = (u32) new C80155E80[iVar3];
    *(u32 *)(param_1 + 0x34) = uVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x34) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
