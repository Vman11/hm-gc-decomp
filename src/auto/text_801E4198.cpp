// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801E4198 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_800F9638(void *);

void fn_801E4198(u8 *p) {
    fn_800F9638(p + 0x0);
    ((S_801E4198 *)(p + 0x18))->m();
    fn_800F9638(p + 0x3C);
    ((S_801E4198 *)(p + 0x54))->m();
    fn_800F9638(p + 0x78);
    ((S_801E4198 *)(p + 0x90))->m();
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
}

} /* extern "C" */
