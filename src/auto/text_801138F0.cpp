// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AAB8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void __dla__FPv(void *);
void *memcpy(void *, const void *, u32);

s32 fn_801138F0(u8 *p, u32 n) {
    u32 sz;
    void *r;
    if (lbl_8035AAB8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AAB8);
    sz = n << 3;
    r = __nwa__FUl(sz);
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (r == NULL) {
        return -4;
    }
    if (*(void **)(p + 0xC) != NULL) {
        if (n > *(u32 *)(*(u8 **)p + 0x10)) {
            memcpy(r, *(void **)(p + 0xC), *(u32 *)(*(u8 **)p + 0x10) << 3);
        } else {
            memcpy(r, *(void **)(p + 0xC), sz);
        }
        __dla__FPv(*(void **)(p + 0xC));
    }
    *(void **)(p + 0xC) = r;
    *(u32 *)(*(u8 **)p + 0x10) = n;
    return 0;
}

} /* extern "C" */
