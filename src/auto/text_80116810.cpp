// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035AB08;
s32 strlen(const char *);
void *memcpy(void *, const void *, u32);

s32 fn_80116810(u32 *dst, char *src, s32 pack) {
    s32 n = strlen(src);
    if (pack) {
        dst[(u32)n >> 2] = 0;
        memcpy(dst, src, n);
        if (lbl_8035AB08) {
            for (n = n / 4; n >= 0; n--) {
                u8 *b = (u8 *)((u32)dst + n * 4);
                u8 t = b[0];
                b[0] = b[3];
                b[3] = t;
                t = b[1];
                b[1] = b[2];
                b[2] = t;
            }
        }
    } else {
        s32 i;
        for (i = 0; i < n; i++) dst[i] = (s8)src[i];
        dst[n] = 0;
    }
    return 0;
}

} /* extern "C" */
