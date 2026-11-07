// NonMatching draft (wHY, wQZ): SDIFF 0 / DIFF 10. Original likely had the recursive call inlined (2 levels, accessors
// fn_8011217C/fn_80112168/fn_8010F1D8/fn_8010CA74 inline at levels 1-2); hand-inlined here. Explicit shared 'off' counter in all 3 loops; left: loop-1 off r29 vs cs r30.
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

Entry *fn_80111EEC(Tbl *t, const char *name, int cs);
Entry *fn_80111EEC(Tbl *t, const char *name, int cs) {
    u32 off;
    Tbl *u;
    u32 i;
    Tbl *w;
    if (t->n == 0) return 0;
    if (t->f10 == 0) return 0;
    for (i = 0, off = 0; i < t->n; off += 28, i++) {
        Entry *e = (Entry *)((u8 *)t->items + off);
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
        for (i = 0, off = 0; i < u->n; off += 28, i++) {
            Entry *e = (Entry *)((u8 *)u->items + off);
            if (e->f14 != 0 && e->name != 0 && *e->name != 0) {
                if (stricmp(name, e->name) == 0) return &u->items[i];
            }
        }
        w = u->next;
        if (w) {
            if (fn_8011217C(w) == 0) return 0;
            if (fn_80112168(w) == 0) return 0;
            for (i = 0, off = 0; i < w->n; off += 28, i++) {
                if (fn_8010F1D8((Entry *)((u8 *)w->items + off)) != 0) {
                    char *s = fn_8010CA74((Entry *)((u8 *)w->items + off));
                    if (s != 0 && *s != 0 && stricmp(name, fn_8010CA74((Entry *)((u8 *)w->items + off))) == 0) return &w->items[i];
                }
            }
            if (w->next) return fn_80111EEC(w->next, name, 0);
            return 0;
        }
        return 0;
    }
    return 0;
}

}
