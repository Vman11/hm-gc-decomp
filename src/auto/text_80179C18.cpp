// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AD68;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8016CB68(void *, void *);

struct C8015D9A4 {
    C8015D9A4();
    ~C8015D9A4();
    u8 data[300];
};

void fn_80179C18(u8 *self, void *arg) {
    if (lbl_8035AD68 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AD68);
    *(C8015D9A4 **)(self + 56) = new C8015D9A4[*(s32 *)(self + 20)];
    fn_800F7E98();
    if (*(void **)(self + 56) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(void **)(self + 52) = arg;
    fn_8016CB68(*(void **)(self + 52), self);
}

} /* extern "C" */
