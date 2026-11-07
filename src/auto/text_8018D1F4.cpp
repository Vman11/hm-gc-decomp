// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T64 { u8 pad[0x10]; s32 f10; s32 f14; };
struct E64 { u8 p0[4]; f32 f4; u8 p8[8]; T64 *f10; u32 f14; s32 f18; s32 f1c; };
struct P64 { u8 pad[0x98]; u8 *f98; s32 f9c; E64 *fa0; u32 fa4; };
void fn_801A0A1C(P64 *p, f32 t);
void fn_80107018(E64 *e, s32 a, s32 b, f32 t);
u32 fn_8013FCD0(T64 *a, u8 *b, s32 c, f32 f, s32 d, s32 e);
static inline void Upd(E64 *e, f32 t) { if (e->f14 & 1) { T64 *a = e->f10; s32 hi = *(volatile s32 *)&a->f14; s32 lo = *(volatile s32 *)&a->f10; fn_80107018(e, lo, hi, t); } }
void fn_8018D1F4(P64 *p, f32 t) {
    fn_801A0A1C(p, t);
    if (p->fa4 != 0) {
        u8 *b; u32 i;
        for (i = 0; i < p->fa4; i++) Upd(&p->fa0[i], t);
        i = 0;
        p->f9c = i; b = p->f98;
        for (; i < p->fa4; i++) {
            E64 *e = &p->fa0[i];
            if (e->f14 & 1) {
                u32 n = fn_8013FCD0(e->f10, b, 4 - p->f9c, e->f4, e->f18, e->f1c);
                if (n != 0) {
                    b += n * 8;
                    p->f9c += n;
                }
            }
        }
    }
}

} /* extern "C" */
