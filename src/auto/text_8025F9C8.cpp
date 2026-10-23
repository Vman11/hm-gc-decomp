// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct C25F { u8 pad[8]; s32 f8; };
struct B25F { C25F *f0; };
struct N25F { B25F *f0; u8 pad4[8]; N25F *fc; N25F *f10; };
inline s32 fn_8025FF8C(C25F *y) { return y->f8; }
inline s32 fn_8025FF80(B25F *x) { return fn_8025FF8C(x->f0); }
inline s32 fn_80229770(const N25F *n) { return fn_8025FF80(n->f0); }
inline N25F *fn_8010F1B8(const N25F *n) { return n->f10; }
inline N25F *fn_8010F1B0(const N25F *n) { return n->fc; }

s32 fn_8025F9C8(void *c, const N25F *n) {
    s32 r;
    if (!n) return 0;
    r = 0;
    if (fn_80229770(n) == 0) r = 1;
    if (fn_8010F1B8(n)) r += fn_8025F9C8(c, fn_8010F1B8(n));
    if (fn_8010F1B0(n)) r += fn_8025F9C8(c, fn_8010F1B0(n));
    return r;
}

}

} /* extern "C" */
