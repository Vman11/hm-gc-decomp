// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80126464 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *m(u32); };
void fn_801485B4(void *, void *);
void *fn_802108B4(void *, void *, u32, void *);

void fn_80126464(u8 *p, u8 *o) {
    u8 buf[16];
    void *r;
    o[0] = *(u32 *)(p + 0x10);
    o[1] = *(u32 *)(p + 0x10) >> 8;
    o[2] = *(u32 *)(p + 0x10) >> 16;
    o[3] = *(u32 *)(p + 0x10) >> 24;
    o[4] = *(u32 *)(p + 0x14);
    o[5] = *(u32 *)(p + 0x14) >> 8;
    o[6] = *(u32 *)(p + 0x14) >> 16;
    o[7] = *(u32 *)(p + 0x14) >> 24;
    r = (*(V_80126464 **)(p + 0x34))->m(16);
    if (r != NULL) {
        fn_801485B4(p, r);
    }
    r = fn_802108B4(p + 0x30, o + 8, ((*(u32 *)(p + 0x10) >> 3) * (*(u32 *)(p + 0x14) >> 2)) << 4, buf);
    if (r != NULL) {
        fn_801485B4(p, r);
    }
}

} /* extern "C" */
