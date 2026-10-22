// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AAD8;
u32 strlen(const char *);
void __dla__FPv(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
char *__nwa__FUl(u32);
void strcpy(char *, const char *);

void fn_8010F01C(u8 *p, const char *s) {
    if (*(char **)(p + 0x1E4) != NULL) {
        u32 n = strlen(*(char **)(p + 0x1E4));
        if (strlen(s) <= n) {
            goto copy;
        }
    }
    {
        if (*(char **)(p + 0x1E4) != NULL) {
            __dla__FPv(*(char **)(p + 0x1E4));
        }
        if (lbl_8035AAD8 == NULL) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AAD8);
        *(char **)(p + 0x1E4) = __nwa__FUl(strlen(s) + 1);
        fn_800F7E98();
        if (*(char **)(p + 0x1E4) == NULL) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
copy:
    strcpy(*(char **)(p + 0x1E4), s);
}

} /* extern "C" */
