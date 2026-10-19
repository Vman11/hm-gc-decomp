// auto/text_8015EE00 fn_8015EE00 99.6154
extern "C" {
extern u32 lbl_8035AC08;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801768A4 { char pad[0x68]; C801768A4(); ~C801768A4(); };

void fn_8015EE00(u32 *param_1) {
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;

    if (lbl_8035AC08 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AC08));
    iVar3 = *param_1;
    iVar2 = (u32) new C801768A4[iVar3];
    param_1[0x10] = iVar2;
    fn_800F7E98();
    if (param_1[0x10] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
