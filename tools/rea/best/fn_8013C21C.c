// auto/text_8013C21C fn_8013C21C 97.8125
extern "C" {
extern u32 lbl_8035A9F4;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C8013C324 { char pad[0x44]; C8013C324(); ~C8013C324(); };

u32 fn_8013C21C(u32 param_1, u32 param_2) {
    u32 iVar1;
    u32 iVar2;

    if (lbl_8035A9F4 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A9F4));
    iVar2 = (u32) new C8013C324[param_2];
    fn_800F7E98();
    if (iVar2 == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    return iVar2;
}
}
