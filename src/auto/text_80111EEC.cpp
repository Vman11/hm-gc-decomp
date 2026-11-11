// Self-recursive lookup in chained tables; MWCC inlines the recursion two levels deep.
#include "common.h"

extern "C" {

struct Entry {
    u8 pad0[4];
    char *name;
    u8 pad8[0x14 - 0x8];
    s32 f14;
    u8 pad18[4];
};
struct Tbl {
    u32 n;
    u8 pad4[0xc];
    void *f10;
    u8 pad14[4];
    Entry *items;
    Tbl *next;
};
int strcmp(const char *, const char *);
int stricmp(const char *, const char *);
// Tiny accessors: inlined at recursion levels 1-2, called out of line at level 3 (weak copies link away).
inline BOOL fn_8011217C(Tbl *t) { return t->n != 0; }
inline BOOL fn_80112168(Tbl *t) { return t->f10 != 0; }
inline s32 fn_8010F1D8(Entry *e) { return e->f14; }
inline char *fn_8010CA74(Entry *e) { return e->name; }

Entry *fn_80111EEC(Tbl *t, const char *name, int cs);

Entry *fn_80111EEC(Tbl *t, const char *name, int cs) {
    u32 i;
    if (fn_8011217C(t) == 0) return 0;
    if (fn_80112168(t) == 0) return 0;
    for (i = 0; i < t->n; i++) {
        if (fn_8010F1D8(&t->items[i]) != 0) {
            char *s = fn_8010CA74(&t->items[i]);
            if (s != 0 && *s != 0) {
                if (cs) { if (strcmp(name, fn_8010CA74(&t->items[i])) == 0) return &t->items[i]; }
                else { if (stricmp(name, fn_8010CA74(&t->items[i])) == 0) return &t->items[i]; }
            }
        }
    }
    if (t->next) return fn_80111EEC(t->next, name, 0);
    return 0;
}

}
