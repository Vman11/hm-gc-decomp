// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct N110 { u8 pad[4]; char *f4; u8 pad8[4]; N110 *fc; N110 *f10; };
struct T110 { u8 pad[8]; N110 root; };
int strcmp(const char *, const char *);
int stricmp(const char *, const char *);
inline char *fn_8010CA74( N110 *n) { return n->f4; }
inline N110 *fn_8010F1B8( N110 *n) { return n->f10; }
inline N110 *fn_8010F1B0( N110 *n) { return n->fc; }
inline N110 *fn_80110A9C(T110 *t) { return &t->root; }

N110 *fn_801104C0(T110 *t, const char *name, N110 *n, s32 cs) {
    N110 *r;
    if (!n) n = fn_80110A9C(t);
    if (cs) {
        if (fn_8010CA74(n) && strcmp(fn_8010CA74(n), name) == 0) return n;
    } else {
        if (fn_8010CA74(n) && stricmp(fn_8010CA74(n), name) == 0) return n;
    }
    r = 0;
    if (fn_8010F1B8(n)) r = fn_801104C0(t, name, fn_8010F1B8(n), cs);
    if (r) return r;
    if (fn_8010F1B0(n)) r = fn_801104C0(t, name, fn_8010F1B0(n), cs);
    if (r) return r;
    return 0;
}

}

} /* extern "C" */
