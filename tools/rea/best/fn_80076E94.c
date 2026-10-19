// auto/text_80076E94 fn_80076E94 97.9688
extern char lbl_802981D4[];
extern s32 lbl_8035B308;
extern s32 lbl_8035B460;
extern s32 lbl_8035B684;
extern u8 lbl_8035F3F4[0x1];
extern char lbl_8035F5D4[0x6];
extern char lbl_8035F5DC[0x8];
extern char lbl_8035F5E4[0x8];
void fn_8002FD10();
s32 fn_800F6CD0();
void fn_800F6E88();
s32 fn_800F9398();
s32 fn_802288FC();
void fn_80238CF4();
void fn_80241DD0();

void fn_80076E94(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    u8 auStack_18[4];
    u8 auStack_10 [12];

    fn_80238CF4();
    uVar1 = fn_802288FC(lbl_8035B308,(void *)lbl_8035F5DC); /* "GameCam" */
    *(u32 *)(param_1 + 600) = uVar1;
    uVar1 = fn_802288FC(lbl_8035B308,(void *)lbl_8035F5E4); /* "lantern" */
    *(u32 *)(param_1 + 0x434) = uVar1;
    fn_8002FD10(lbl_8035B684,auStack_18);
    fn_800F6E88(auStack_10,(void *)lbl_8035F3F4);
    iVar2 = fn_800F6CD0(auStack_18,(void *)lbl_8035F3F4);
    if ((iVar2 == 0) &&
          (iVar2 = fn_800F9398(*(s32 *)(lbl_8035B460 + 8) + 0x90,auStack_18), iVar2 != 0)) {
        fn_800F6E88(auStack_10,auStack_18);
    }
    else {
        iVar2 = fn_800F9398(*(s32 *)(lbl_8035B460 + 8) + 0x90,(void *)lbl_8035F5D4); /* "Start" */
        if (iVar2 != 0) {
            fn_800F6E88(auStack_10,"Start");
        }
    }
    iVar2 = fn_800F6CD0(auStack_10,(void *)lbl_8035F3F4);
    if (iVar2 == 0) {
        fn_80241DD0(*(u32 *)(param_1 + 0x20c),(void *)lbl_802981D4,0,0,auStack_10,0); /* "TELEPORT" */
    }
}
