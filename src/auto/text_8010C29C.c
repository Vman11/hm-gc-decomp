// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C8010C29C[];
void __ct__9C800F92E8Fv(void *);
extern u8 *lbl_8035AAB4;

u8 *__ct__9C8010C29CFv(u8 *this) {
    u8 *p, *q;
    __ct__9C800F92E8Fv(this);
    *(u8 **)(this + 16) = __vt__9C8010C29C;
    __ct__9C800F92E8Fv(this + 32);
    *(s32 *)(this + 20) = 0;
    *(s32 *)(this + 24) = 0;
    *(s32 *)(this + 28) = 0;
    *(s32 *)(this + 72) = 0;
    lbl_8035AAB4 = NULL;
    *(s32 *)(this + 68) = 0;
    *(s32 *)(this + 76) = 0;
    *(s32 *)(this + 64) = 1;
    if (lbl_8035AAB4 != NULL) {
        p = lbl_8035AAB4;
        q = p;
        while (p != NULL) {
            q = p;
            p = *(u8 **)(p + 68);
        }
        *(u8 **)(q + 68) = this;
    } else {
        lbl_8035AAB4 = this;
    }
    return this;
}
