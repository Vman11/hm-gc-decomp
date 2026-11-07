#include "common.h"
extern "C" {
typedef struct Ent { u32 a; char *name; } Ent;
typedef struct T { u8 pad[0x168]; Ent *arr; u32 n; Ent *tab[331]; } T;
extern u8 lbl_802E07C8[];
void *memset(void *, int, u32);
static int tolow(int c) { return (c == -1) ? -1 : (int)lbl_802E07C8[(u8)c]; }
static void cpylow(char *s, char *d) {
    char c;
    while ((c = *s) != 0) {
        *d++ = tolow(c);
        s++;
    }
    *d = 0;
}
static void ins(T *t, Ent *e, char *buf) {
    u32 h;
    u32 sh;
    cpylow(e->name, buf);
    {
        char *p;
        h = 0;
        sh = 0;
        for (p = buf; *p; p++) {
            h += (*p - '0') << (sh & 31);
            sh += 6;
        }
    }
    sh = h % 331;
    while (t->tab[sh]) {
        if (++sh >= 331) sh = 0;
    }
    t->tab[sh] = e;
}
void fn_800F5F40(T *t, Ent *arr, u32 n, T *o) {
    char buf[64];
    u32 extra;
    u32 i;
    Ent *e;
    Ent *end;
    t->arr = arr;
    t->n = n;
    memset(t->tab, 0, sizeof(t->tab));
    extra = 0;
    if (o) {
        extra = o->n;
        for (i = 0; i < 331; i++) {
            if (o->tab[i]) ins(t, o->tab[i], buf);
        }
    }
    e = t->arr;
    end = e + t->n;
    for (; e < end; e++) ins(t, e, buf);
    t->n += extra;
}
}
