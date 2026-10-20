// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FA938 { u8 pad[0x100]; virtual void p0(); virtual void p1(); virtual void m(); };
extern "C" { void fn_800F9654(void *, void *); void fn_800F994C(void *, void *); }

void fn_801FA938(u8 *p, void *a, void *b, void *c, void *d, void *e, void *f) {
    char buf[8];
    if (*(void **)(p + 8) != NULL) {
        ((V_801FA938 *)p)->m();
    }
    *(void **)(p + 4) = a;
    *(void **)(p + 8) = b;
    buf[0] = 0;
    fn_800F9654(p + 12, buf);
    fn_800F994C(p + 36, c);
    fn_800F9654(p + 72, buf);
    fn_800F994C(p + 96, d);
    fn_800F9654(p + 132, buf);
    fn_800F994C(p + 156, e);
    fn_800F9654(p + 192, buf);
    fn_800F994C(p + 216, f);
}

} /* extern "C" */
