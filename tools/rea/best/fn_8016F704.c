// auto/text_8016F704 fn_8016F704 96.2644
extern "C" {
extern u8 lbl_8032ED28[];
extern u32 lbl_8035AD30;
extern u32 lbl_8035AD34;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80175570(int, int);
struct C80175748 { char pad[0x30]; C80175748(); ~C80175748(); };

void fn_8016F704(u16 *param_1) {
    u32 iVar1;
    u32 uVar2;
    u32 uVar3;
    u8 *puVar4;

    if (lbl_8035AD34 != 0) {
        param_1[9] = (u16)lbl_8035AD34;
        if (lbl_8035AD30 == 0) {
            fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
        }
        fn_800F7EC0((int)(lbl_8035AD30));
        uVar3 = lbl_8035AD34;
        uVar2 = (u32) new C80175748[uVar3];
        *(u32 *)(param_1 + 2) = uVar2;
        fn_800F7E98();
        if (*(u32 *)(param_1 + 2) == 0) {
            fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
        }
        puVar4 = (u8 *)lbl_8032ED28;
        iVar1 = 0;
        for (uVar3 = 0; uVar3 < lbl_8035AD34; uVar3 = uVar3 + 1) {
            fn_80175570((int)(*(u32 *)(param_1 + 2) + iVar1), (int)(puVar4));
            puVar4 = puVar4 + 0x30;
            iVar1 = iVar1 + 0x30;
        }
        iVar1 = 0;
        for (uVar3 = lbl_8035AD34; uVar3 != 0; uVar3 = uVar3 - 1) {
            if ((*(u32 *)(*(u32 *)(param_1 + 2) + iVar1 + 0x1c) & 0x10) != 0) {
                *param_1 = *param_1 | 1;
                return;
            }
            iVar1 = iVar1 + 0x30;
        }
    }
}
}
