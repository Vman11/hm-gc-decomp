// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T { u8 pad[0x6C]; void *res; };
struct O { u32 pad0; u16 type; u8 pad6[0x92]; u32 n; T **arr; u32 idx; };
struct G { u8 pad[0x9C]; void **arr; };
struct Set { u8 a[0x18]; u8 b[0x18]; };
struct Tb { u8 pad[0x168]; Set s; };
struct M { u8 pad[0x2C4C]; Tb *tb; };
struct P { u8 pad[0x9C]; O *o; };
extern "C" { void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); G *fn_801954E8(O *); T *fn_801955D8(void *); extern M **lbl_8035B684; }

static inline void *find(Tb *t, char *grp, void *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(t->s.a, key);
    }
    return fn_800F9788(t->s.b, grp, key);
}

#define isGroup(o) ((o)->type >= 11 && (o)->type <= 13)
#define isItem(o) ((o)->type >= 2 && (o)->type <= 3)

static inline void setAll(O *o, void *res) {
    u32 i;
    for (i = 0; i < o->n; i++) {
        o->arr[i]->res = res;
    }
}

static inline T *target(P *p, O *o) {
    if (o == 0) {
        return 0;
    }
    if (isGroup(o)) {
        G *g = fn_801954E8(o);
        u32 idx = 0;
        if (p->o->type == 13) {
            idx = 0;
        } else if (p->o->type == 12) {
            idx = p->o->idx;
        }
        return fn_801955D8(g->arr[idx]);
    }
    if (isItem(o)) {
        return fn_801955D8(o);
    }
    return 0;
}

extern "C" void fn_8022BCD8(P *p, void *key, char *grp) {
    void *res = find((*lbl_8035B684)->tb, grp, key);
    O *o = p->o;
    if (o != 0) {
        if (isGroup(o)) {
            setAll(o, res);
        } else {
            T *t = target(p, o);
            if (t != 0) {
                t->res = res;
            }
        }
    }
}

} /* extern "C" */
