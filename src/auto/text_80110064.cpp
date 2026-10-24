// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct N { u32 type; char *name; u8 pad[4]; N *next; N *child; };
struct T { u8 pad[8]; N root; };

inline N *fn_8010F1B0(N *n) { return n->next; }
inline N *fn_8010F1B8(N *n) { return n->child; }
inline BOOL fn_8010F1C0(N *n) { return n->type == 0; }
inline char *fn_8010CA74(N *n) { return n->name; }
inline BOOL fn_801103B4(T *t, char *a, char *b) {
    BOOL r;
    while (*a && *b && *a != '\\' && *b != '\\') {
        if (*a != *b) { r = FALSE; goto done; }
        a++;
        b++;
    }
    if ((*a != 0 && *a != '\\') || (*b != 0 && *b != '\\')) r = FALSE;
    else r = TRUE;
done:
    return r;
}

N *fn_80110064(T *t, char *path, N *dir) {
    N *c;
    if (dir == 0) c = fn_8010F1B8(&t->root);
    else c = fn_8010F1B8(dir);
    for (; c; c = fn_8010F1B0(c)) {
        char *nm = fn_8010CA74(c);
        if (fn_8010F1C0(c)) {
            N *r = fn_80110064(t, path, c);
            if (r) return r;
        } else if (fn_801103B4(t, nm, path)) {
            break;
        }
    }
    return c;
}
}

} /* extern "C" */
