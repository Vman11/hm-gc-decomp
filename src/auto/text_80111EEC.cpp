// NonMatching draft (wHY): SDIFF 0 / DIFF 32. Original likely had the recursive call inlined (2 levels, accessors
// fn_8011217C/fn_80112168/fn_8010F1D8/fn_8010CA74 inline at levels 1-2); hand-inlined here. Left: levels 2/3 loop i/off regs swapped (target i r30, off r29).
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
s32 fn_8011217C(Tbl *);
BOOL fn_80112168(Tbl *);
s32 fn_8010F1D8(Entry *);
char *fn_8010CA74(Entry *);

Entry *fn_80111EEC(Tbl *t, const char *name, int cs) {
    u32 i;
    Tbl *u;
    if (t->n == 0) return 0;
    if (t->f10 == 0) return 0;
    for (i = 0; i < t->n; i++) {
        Entry *e = &t->items[i];
        if (e->f14 != 0 && e->name != 0 && *e->name != 0) {
            if (cs) {
                if (strcmp(name, e->name) == 0) return &t->items[i];
            } else {
                if (stricmp(name, e->name) == 0) return &t->items[i];
            }
        }
    }
    u = t->next;
    if (u) {
        if (u->n == 0) return 0;
        if (u->f10 == 0) return 0;
        for (i = 0; i < u->n; i++) {
            Entry *e = &u->items[i];
            if (e->f14 != 0 && e->name != 0 && *e->name != 0) {
                if (stricmp(name, e->name) == 0) return &u->items[i];
            }
        }
        u = u->next;
        if (u) {
            if (fn_8011217C(u) == 0) return 0;
            if (fn_80112168(u) == 0) return 0;
            for (i = 0; i < u->n; i++) {
                if (fn_8010F1D8(&u->items[i]) != 0) {
                    char *s = fn_8010CA74(&u->items[i]);
                    if (s != 0 && *s != 0 && stricmp(name, fn_8010CA74(&u->items[i])) == 0) return &u->items[i];
                }
            }
            if (u->next) return fn_80111EEC(u->next, name, 0);
            return 0;
        }
        return 0;
    }
    return 0;
}

}
