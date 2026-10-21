// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802981D4[];
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern u32 lbl_8035B684;
extern char lbl_8035F3F4[0x1];
extern char lbl_8035F5D4[0x6];
extern char lbl_8035F5DC[0x8];
extern char lbl_8035F5E4[0x8];
void fn_8002FD10(u32, void *);
s32 fn_800F6CD0(void *, char *);
void fn_800F6E88(void *, char *);
u32 fn_800F9398(u8 *, char *);
u32 fn_802288FC(u32, char *);
void fn_80238CF4(void);
void fn_80241DD0(u32, char *, u32, u32, void *, u32);

void fn_80076E94(u8 *param_1) {
    char auStack_10[8];
    char auStack_18[8];

    fn_80238CF4();
    *(u32 *)(param_1 + 0x258) = fn_802288FC(lbl_8035B308, lbl_8035F5DC);
    *(u32 *)(param_1 + 0x434) = fn_802288FC(lbl_8035B308, lbl_8035F5E4);
    fn_8002FD10(lbl_8035B684, auStack_18);
    fn_800F6E88(auStack_10, lbl_8035F3F4);
    if (fn_800F6CD0(auStack_18, lbl_8035F3F4) == 0 && fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 0x90, auStack_18) != 0) {
        fn_800F6E88(auStack_10, auStack_18);
    } else if (fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 0x90, lbl_8035F5D4) != 0) {
        fn_800F6E88(auStack_10, lbl_8035F5D4);
    }
    if (fn_800F6CD0(auStack_10, lbl_8035F3F4) == 0) {
        fn_80241DD0(*(u32 *)(param_1 + 0x20c), lbl_802981D4, 0, 0, auStack_10, 0);
    }
}

} /* extern "C" */
