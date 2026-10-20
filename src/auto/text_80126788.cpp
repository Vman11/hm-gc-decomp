// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8029DF48[4];
extern char lbl_8029DF58[];
void *fn_802108B4(void *, void *, s32, void *);
void fn_801485B4(void *, void *);
void fn_801486B4(void *, const char *);
void fn_80148288(void *, s32, u32, u32, u32, u32, s32);

void fn_80126788(u8 *p) {
    u8 tmp[4];
    u8 b[16];
    void *r = fn_802108B4(p + 48, b, 16, tmp);
    if (r != NULL) {
        fn_801485B4(p, r);
    }
    if (((u32)lbl_8029DF48[3] + ((u32)lbl_8029DF48[2] << 8) + ((u32)lbl_8029DF48[1] << 16) + ((u32)lbl_8029DF48[0] << 24)) != ((u32)b[0] + ((u32)b[1] << 8) + ((u32)b[2] << 16) + ((u32)b[3] << 24))) {
        fn_801486B4(p, lbl_8029DF58);
    }
    *(u32 *)(p + 16) = ((u32)b[8] + ((u32)b[9] << 8) + ((u32)b[10] << 16) + ((u32)b[11] << 24));
    *(u32 *)(p + 20) = ((u32)b[12] + ((u32)b[13] << 8) + ((u32)b[14] << 16) + ((u32)b[15] << 24));
    *(u32 *)(p + 24) = *(u32 *)(p + 16) << 2;
    fn_80148288(p + 28, 32, 0xFF0000, 0xFF00, 0xFF, 0xFF000000, 0);
}

} /* extern "C" */
