// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801E43C4 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
extern u8 lbl_802ED9A8[];
void fn_800F9638(void *);
void __dt__9C800F9B64Fv(void *, s32);
void __dl__FPv(void *);

void *fn_801E43C4(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 0xEC) = lbl_802ED9A8;
        fn_800F9638(p + 0x0);
        ((S_801E43C4 *)(p + 0x18))->m();
        fn_800F9638(p + 0x3C);
        ((S_801E43C4 *)(p + 0x54))->m();
        fn_800F9638(p + 0x78);
        ((S_801E43C4 *)(p + 0x90))->m();
        *(s32 *)(p + 192) = 0;
        *(s32 *)(p + 200) = 0;
        *(s32 *)(p + 204) = 0;
        *(s32 *)(p + 184) = 0;
        *(s32 *)(p + 212) = 0;
        *(s32 *)(p + 224) = 0;
        *(s32 *)(p + 228) = 0;
        *(s32 *)(p + 208) = 0;
        *(s32 *)(p + 216) = 0;
        *(s32 *)(p + 220) = 0;
        *(s32 *)(p + 196) = 0;
        *(s32 *)(p + 180) = 0;
        *(s32 *)(p + 188) = 0;
        __dt__9C800F9B64Fv(p + 0x90, -1);
        __dt__9C800F9B64Fv(p + 0x54, -1);
        __dt__9C800F9B64Fv(p + 0x18, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
