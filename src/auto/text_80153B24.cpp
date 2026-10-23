// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.5 */
typedef struct { u32 a; u32 b; u16 h8; u16 h10; u8 pad[16]; u32 c; u32 d; } E80153B24;
typedef struct { u8 pad[120]; u32 count; E80153B24 entries[9]; u32 *vals; } P80153B24;
void fn_8014CAA0(E80153B24 *dst, const E80153B24 *src);
u32 fn_80153B24(const P80153B24 *p, const E80153B24 *key, E80153B24 *out) {
    u32 i;
    for (i = 0; i < p->count; i++) {
        if (p->entries[i].a == key->a && p->entries[i].b == key->b && p->entries[i].h10 == key->h10 && p->entries[i].d == key->d) {
            fn_8014CAA0(out, &p->entries[i]);
            return p->vals[i];
        }
    }
    for (i = 0; i < p->count; i++) {
        if (p->entries[i].a == key->a && p->entries[i].b == key->b && p->entries[i].h10 == key->h10) {
            fn_8014CAA0(out, &p->entries[i]);
            return p->vals[i];
        }
    }
    for (i = 0; i < p->count; i++) {
        if (p->entries[i].a == key->a && p->entries[i].b == key->b && p->entries[i].h10 > key->h10) {
            fn_8014CAA0(out, &p->entries[i]);
            return p->vals[i];
        }
    }
    for (i = 0; i < p->count; i++) {
        if (p->entries[i].a >= key->a && p->entries[i].b >= key->b && p->entries[i].h10 >= key->h10) {
            fn_8014CAA0(out, &p->entries[i]);
            return p->vals[i];
        }
    }
    fn_8014CAA0(out, &p->entries[0]);
    return p->vals[0];
}

} /* extern "C" */
