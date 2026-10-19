// auto/text_8018C13C fn_8018C13C 99.6000
extern "C" {
extern u32 lbl_8035AA28;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_8018B674(int, int, int, int, int);
struct C8018B724 { char pad[0x98]; C8018B724(); ~C8018B724(); };

void fn_8018C13C(u32 *param_1) {
    u32 iVar1;
    u32 iVar2;
    u32 uVar3;
    u32 uVar4;
    u32 iVar5;

    if (lbl_8035AA28 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA28));
    iVar5 = *param_1;
    iVar2 = (u32) new C8018B724[iVar5];
    param_1[0xd] = iVar2;
    fn_800F7E98();
    if (param_1[0xd] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (lbl_8035AA28 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035AA28));
    iVar2 = (u32) new u8[*param_1 * param_1[2] * 0x10];
    param_1[0xe] = iVar2;
    fn_800F7E98();
    if (param_1[0xe] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    iVar2 = 0;
    uVar4 = param_1[0xd];
    uVar3 = uVar4 + *param_1 * 0x98;
    for (; uVar4 < uVar3; uVar4 = uVar4 + 0x98) {
        fn_8018B674((int)(uVar4), (int)(param_1[2]), (int)(param_1[3] + iVar2 * 8), (int)(param_1[4] + iVar2 * 0x2c), (int)(param_1[0xe] + iVar2 * 0x10));
        iVar2 = iVar2 + param_1[2];
    }
}
}
