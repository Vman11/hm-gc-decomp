// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011ACE4 { u8 pad[0x27BC]; virtual void p0(); virtual void p1(); virtual void m(); };
extern "C" { void fn_80115088(void *); void fn_80115114(void *); void fn_80116318(void *); void fn_80114F70(void *); }

void fn_8011ACE4(V_8011ACE4 *q, u8 *s, void *c) {
    u8 *p = (u8 *)q;
    if (*(s32 *)p != 0) {
        q->m();
    }
    *(void **)(p + 4) = c;
    if (*(void **)(s + 8) != NULL) {
        fn_80115088(*(void **)(s + 8));
    } else {
        fn_80115088(*(void **)(s + 4));
    }
    if (*(void **)(s + 12) != NULL) {
        fn_80115114(*(void **)(s + 12));
    } else {
        fn_80115114(*(void **)(s + 4));
    }
    if (*(void **)(s + 16) != NULL) {
        fn_80116318(*(void **)(s + 16));
    } else {
        fn_80116318(*(void **)(s + 4));
    }
    fn_80114F70(p + 8);
    *(s32 *)p = 1;
}

} /* extern "C" */
