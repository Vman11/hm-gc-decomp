// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R;
struct Nd { void *obj; int kind; f32 val; Nd *next; };
extern void *lbl_8035AFCC;
void fn_800FB0F8(R *, char **);
void fn_800FB064(R *, char *);
f32 fn_800FB2E0(R *);
void *fn_80207198(void *, char *, char *);
void fn_801DCA84(void *, int, void *, R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
static inline void add(u8 *p, R *r, char **s, char *b, int kind) {
    Nd *n;
    fn_800FB0F8(r, s);
    fn_800FB064(r, b);
    if (!lbl_8035AFCC) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AFCC);
    n = new Nd;
    fn_800F7E98();
    if (!n) fn_800604C4(-4, 0, 0, 0);
    n->next = F(p,356,Nd*);
    F(p,356,Nd*) = n;
    F(p,356,Nd*) = n;
    F(p,356,Nd*)->obj = fn_80207198(F(F(p,116,u8*),8,void*), *s, b);
    F(p,356,Nd*)->val = fn_800FB2E0(r);
    delete[] *s;
    F(p,356,Nd*)->kind = kind;
}
void fn_801A6EC8(u8 *p, int tok, void *a, R *r) {
    char *s = 0;
    char b[8];
    switch (tok) {
    case 74: add(p, r, &s, b, 1); break;
    case 75: add(p, r, &s, b, 2); break;
    case 76: add(p, r, &s, b, 3); break;
    default: fn_801DCA84(p, tok, a, r); break;
    }
}

} /* extern "C" */
