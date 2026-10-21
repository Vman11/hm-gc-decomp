// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8018E150 {
    u8 pad[168];
    C8018E150();
};
struct S80089878 {
    u8 pad[720];
    s32 a;
    s32 b;
    u8 pad2[1000 - 728];
    C8018E150 *arr[6];
};
extern u8 **lbl_8035B684;
extern void *lbl_8035B320;
extern u8 *lbl_8035B460;
extern const char lbl_8035FF38[8];
void fn_8005E77C(S80089878 *self, s32 arg);
void fn_800E8F6C(char *buf, const char *fmt, ...);
void *fn_800F9398(u8 *tab, char *name);
void fn_800604C4(s32 a, s32 b, s32 c, s32 d);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_8018DFAC(C8018E150 *p, void *a, void *b);
void fn_80233030(S80089878 *self, s32 arg);

void fn_80089878(S80089878 *self, s32 arg) {
    u8 *base;
    u32 i;
    void *res;
    char buf[16];
    self->a = 3;
    self->b = 2;
    fn_8005E77C(self, arg);
    base = *lbl_8035B684;
    fn_800E8F6C(buf, lbl_8035FF38, self->a, self->b);
    base = (u8 *)fn_800F9398(base + 12496, buf);
    if (base != 0) {
        for (i = 0; i < 6; i++) {
            C8018E150 *p;
            res = base;
            if (lbl_8035B320 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B320);
            p = new C8018E150;
            fn_800F7E98();
            if (p == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
            fn_8018DFAC(p, *(void **)(lbl_8035B460 + 8), res);
            self->arr[i] = p;
        }
    }
    fn_80233030(self, arg);
}

} /* extern "C" */
