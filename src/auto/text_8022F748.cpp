// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8022F748 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(void *); };
struct S_8022F748 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void n(); };
void fn_80238BF4(void *);
void fn_8023B324(void *);

void fn_8022F748(u8 *p) {
    fn_80238BF4(p);
    if (*(V_8022F748 **)(p + 0x260) != NULL) {
        (*(V_8022F748 **)(p + 0x260))->m(*(void **)(p + 0x264));
        (*(V_8022F748 **)(p + 0x260))->m(*(void **)(p + 0x268));
    }
    ((S_8022F748 *)(p + 0x26C))->n();
    fn_8023B324(p + 0x294);
    *(s32 *)(p + 0x25C) = -1;
    *(s32 *)(p + 0x254) = 0;
    *(s32 *)(p + 0x260) = 0;
    *(s32 *)(p + 0x264) = 0;
    *(s32 *)(p + 0x268) = 0;
    *(s32 *)(p + 0x338) = 0;
    *(s32 *)(p + 0x33C) = 0;
}

} /* extern "C" */
