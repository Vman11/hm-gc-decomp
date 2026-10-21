// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Key { u8 d[8]; };
struct Set { u8 a[0x18]; u8 b[0x18]; };
struct Tb { u8 pad[0x90]; Set s1; u8 padC0[0xC]; Set s2; };
struct Own { u8 pad[0xD4]; Tb *tb; };
struct P { u8 pad[8]; Own *own; s32 mode; u8 pad10[0x18]; void *h; u32 h2; void *x30; };
extern "C" { void fn_800FB064(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); void *fn_8019565C(void *); void fn_801EF720(P *, void *); }

static inline void *find1(Tb *t, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(t->s1.a, key);
    }
    return fn_800F9788(t->s1.b, grp, key);
}

static inline void *find2(Tb *t, char *grp, Key *key) {
    if (grp == 0 || grp[0] == 0) {
        return fn_800F9398(t->s2.a, key);
    }
    return fn_800F9788(t->s2.b, grp, key);
}

extern "C" void fn_801DE654(P *p, void *r, s32 k) {
    Key key;
    char grp[8];
    void *f;
    switch (k) {
    case 98:
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        f = find1(p->own->tb, grp, &key);
        if (f) {
            f = fn_8019565C(f);
        }
        p->h2 = 0;
        p->h = 0;
        p->h = f;
        break;
    case 106:
        fn_800FB064(r, &key);
        fn_800FB064(r, grp);
        p->x30 = find2(p->own->tb, grp, &key);
        break;
    case 165:
        p->mode = 11;
        break;
    case 166:
        p->mode = 12;
        break;
    default:
        fn_801EF720(p, r);
        break;
    }
}

} /* extern "C" */
