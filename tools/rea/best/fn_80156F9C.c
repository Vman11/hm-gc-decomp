// auto/text_80156F9C fn_80156F9C 99.6154
extern "C" {
extern u32 lbl_8035ABC0;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8016096C { char pad[0x48]; C8016096C(); ~C8016096C(); };

void fn_80156F9C(u32 param_1) {
    u16 uVar1;
    u32 iVar2;
    u32 uVar3;

    if (lbl_8035ABC0 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035ABC0));
    uVar1 = *(u16 *)(param_1 + 0x7e);
    uVar3 = (u32) new C8016096C[uVar1];
    *(u32 *)(param_1 + 0xb4) = uVar3;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0xb4) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
