// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FBF5C { u8 pad[0x8]; virtual void p0(); virtual void m1(u32); virtual void p2(); virtual void m3(void *, u32); virtual void m4(); };
extern "C" u32 fn_800FB33C(void *);

void fn_800FBF5C(V_800FBF5C *q, void *s) {
    u8 *p = (u8 *)q;
    void *d[2];
    u16 f;
    q->m1(*(u32 *)p);
    q->m3(d, 8);
    f = *(u16 *)(p + 4);
    if (f & 0x10) {
        u8 *e = (u8 *)d[0];
        u8 *end = e + *(u32 *)p;
        while (e < end) {
            *e++ = fn_800FB33C(s);
        }
    } else if (!(f & 0x30)) {
        u16 *e = (u16 *)d[0];
        u16 *end = e + *(u32 *)p;
        while (e < end) {
            *e++ = fn_800FB33C(s);
        }
    } else {
        u32 *e = (u32 *)d[0];
        u32 *end = e + *(u32 *)p;
        while (e < end) {
            *e++ = fn_800FB33C(s);
        }
    }
    q->m4();
}

} /* extern "C" */
