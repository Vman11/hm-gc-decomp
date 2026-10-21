// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8020A1A4 { u8 pad[184]; C8020A1A4(); ~C8020A1A4(); };
void __dt__9C8020A1A4Fv(void);
void fn_800E1E88(C8020A1A4 *, void (*)(void));
void fn_802114B4(void *);
void fn_802114FC(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
extern void *lbl_8035B1A8;

struct FS_8020ABA0 {
    u8 pad[1696];
    s32 x1696;
    s32 x1700;
    s32 n;
    s32 x1708;
    s32 x1712;
    s32 x1716;
    s32 x1720;
    C8020A1A4 *arr;
};

void fn_8020ABA0(FS_8020ABA0 *p, s32 n, s32 x) {
    bool has = p->arr != 0;
    if (has) {
        if (has) {
            fn_800E1E88(p->arr, __dt__9C8020A1A4Fv);
            fn_802114B4(p);
        }
        p->arr = 0;
    }
    p->n = n;
    if (lbl_8035B1A8 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B1A8);
    p->arr = new C8020A1A4[n];
    fn_800F7E98();
    if (p->arr == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    p->x1696 = x;
    p->x1696 = 4;
    p->x1716 = 32;
    fn_802114FC(p);
}

} /* extern "C" */
