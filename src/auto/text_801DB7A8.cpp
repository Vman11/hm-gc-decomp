// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
inline int fn_801DBAC0(u8 *p) { return (F(p,0x6c,u32) & 1) ? 1 : 0; }
int fn_801BDAD0(u8 *, f32, f32);
int fn_801DB7A8(u8 *p, f32 x, f32 y) {
    u8 *c;
    if (!fn_801DBAC0(p)) return 0;
    for (c = F(p,0x138,u8*); c; c = F(c,0x134,u8*)) {
        if (fn_801DBAC0(c)) {
            if (fn_801DB7A8(c, x, y)) return 1;
            if (fn_801BDAD0(c, x, y)) return 1;
        }
    }
    return 0;
}

} /* extern "C" */
