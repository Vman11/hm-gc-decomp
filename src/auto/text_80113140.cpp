// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 b[20]; } T20;
extern void *lbl_8035AAB8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void fn_8010C4B8(void *, u32 *, u32 *);
u32 strlen(const char *);
void fn_800FB700(void *, void *, u32);
void fn_800FA5D8(void *, const char *);

void fn_80113140(u8 *p, u32 i, const char *s) {
    u32 x;
    u32 y;
    u32 n;
    fn_8010C4B8(*(void **)p, &x, &y);
    n = strlen(s) + 1;
    if (y != 0x7FFFFFFF && y > n) {
        n = y;
    }
    if (lbl_8035AAB8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AAB8);
    (*(void ***)(p + 12))[i] = __nwa__FUl(n * 2);
    fn_800F7E98();
    if ((*(void ***)(p + 12))[i] == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_800FB700(&(*(T20 **)(p + 16))[i], (*(void ***)(p + 12))[i], n);
    fn_800FA5D8(&(*(T20 **)(p + 16))[i], s);
}

} /* extern "C" */
