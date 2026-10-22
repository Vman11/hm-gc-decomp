#include "common.h"

extern "C" {

extern char lbl_803636E4[0x8];
extern char lbl_803636EC[0x4];
void fn_80060568(char *, s32, s32, s32);
void strncat(char *, void *, s32);
void strcat(char *, char *);
void strncpy(char *, char *, s32);
char *fn_800FAB98(void *, u32);
void fn_800FBB6C(u32, char *);
u32 strlen(char *);

void fn_800FA9B0(u32 *param_1, u32 param_2) {
    u32 len;
    char *s;
    char buf[128];

    if (param_1[0x47] != 0 && *param_1 != 0) {
        strncpy(buf, (char *)param_1[0x47], 0x3f);
        buf[0x3f] = 0;
        len = strlen(buf);
        strncat(buf + len, param_1 + 0x48, 4);
        len = strlen(buf);
        strcat(buf + len, lbl_803636E4); /* ": line " */
        len = strlen(buf);
        fn_800FBB6C(*(u32 *)(*param_1 + 0x14), buf + len);
        strcat(buf, lbl_803636EC);
    }
    s = fn_800FAB98(param_1, param_2);
    strcat(buf, s);
    fn_80060568(buf, 0, 0, 0);
}

} /* extern "C" */
