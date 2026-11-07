/* Matched (wQU): path lookup loop moved into static inline FindA (late vregs give walker r26); loop2 list index uses n1 instead of n2. */
#include "common.h"
extern "C" {
extern "C" {
struct Ent { char s[16]; };
struct X { u8 pad[16]; u16 id; };
struct Y { u32 size; u8 pad[4]; u16 id; u8 b; };
struct Nd { u8 pad[12]; u16 nx; u16 ny; };
struct Cfg { u8 pad[1764]; u32 v; };
struct Arc { u8 pad[4]; u8 tbl[24]; Cfg *cfg; u8 pad2[8]; Nd root; };
struct L;
extern u8 lbl_802E07C8[];
char *strcpy(char *, const char *);
u32 strlen(const char *);
char *strchr(const char *, int);
s32 fn_8021263C(void *, char *);
Nd *fn_80212998(Nd *, s32, u32);
void fn_80212DA4(Nd *, u32);
X *fn_80212968(Nd *, u32);
Y *fn_802128E0(Nd *, u32);
s32 fn_8021272C(void *, u32, u32, Ent *);
s32 fn_802121C4(Arc *, Ent *, char *, char *);
void fn_8020EFE4(L *, u32, u32);
void fn_8020EBB0(L *, u32, s32);
void fn_8020EA90(L *, u32, Ent *);
void fn_8020EDB8(L *, u32, s32);
void fn_8020EC24(L *, u32, Ent *);
void fn_8020ED44(L *, u32, u32);

static inline int toupper(int c) { return c == -1 ? -1 : lbl_802E07C8[(u8)c]; }
static inline void upcase(char *s, u32 n) {
    u32 i;
    u32 n2;
    for (i = 0; i < n; i++, s++) *s = toupper(*s);
}

static inline Nd *FindA(Arc *a, char *d) {
    Nd *nd = &a->root;
    char *p;
    while (strlen(d)) {
        s32 idx;
        p = strchr(d, '\\');
        if (p) *p = 0;
        idx = fn_8021263C(a->tbl, d);
        if (idx < 0) { nd = 0; break; }
        nd = fn_80212998(nd, idx, a->cfg->v);
        if (nd == 0) { nd = 0; break; }
        if (p == 0) *d = 0;
        else d = p + 1;
    }
    return nd;
}
void fn_80213B1C(Arc *a, char *dir, char *filter, L *list) {
    Ent ent;
    char name[16];
    char path[272];
    Nd *nd;
    char *p;
    u32 n1;
    char *e;
    u32 n2;
    u32 j;
    u32 i;
    if (dir == 0) {
        nd = &a->root;
    } else {
        strcpy(path, dir);
        upcase(path, strlen(dir));
        nd = FindA(a, path);
    }
    if (nd == 0) {
        fn_8020EFE4(list, 0, 0);
        return;
    }
    strcpy(name, filter);
    upcase(name, strlen(name));
    p = strchr(name, '.');
    if (p == 0) {
        e = name + strlen(name);
    } else {
        *p = 0;
        e = p + 1;
    }
    fn_80212DA4(nd, a->cfg->v);
    {
        n1 = 0;
        for (i = 0; i < nd->nx; i++) {
            X *x = fn_80212968(nd, i);
            if (fn_8021272C(a->tbl, x->id, 0, &ent) && fn_802121C4(a, &ent, name, e)) n1++;
        }
        n2 = 0;
        for (j = 0; j < nd->ny; j++) {
            Y *y = fn_802128E0(nd, j);
            if (fn_8021272C(a->tbl, y->id, y->b, &ent) && fn_802121C4(a, &ent, name, e)) n2++;
        }
        fn_8020EFE4(list, n2, n1);
    }
    {
        n1 = 0;
        for (i = n1; i < nd->nx; i++) {
            X *x = fn_80212968(nd, i);
            if (fn_8021272C(a->tbl, x->id, 0, &ent) && fn_802121C4(a, &ent, name, e)) {
                fn_8020EBB0(list, n1, 3);
                fn_8020EA90(list, n1, &ent);
                n1++;
            }
        }
    }
    {
        n2 = 0;
        for (j = n2; j < nd->ny; j++) {
            Y *y = fn_802128E0(nd, j);
            if (fn_8021272C(a->tbl, y->id, y->b, &ent) && fn_802121C4(a, &ent, name, e)) {
                fn_8020EDB8(list, n2, 2);
                fn_8020EC24(list, n2, &ent);
                fn_8020ED44(list, n2, y->size);
                n2++;
            }
        }
    }
}
}
}
