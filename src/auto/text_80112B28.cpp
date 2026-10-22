// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Nm { u8 d[8]; };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); u8 key[8]; char *name; u32 n; void **items; s32 loaded; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FAEF8(R *); void fn_800FAEA0(R *); char *fn_800FB284(R *); u32 strlen(const char *); void strcpy(char *, char *); void fn_800F6E88(void *, void *); void *fn_800F8274(void *, void *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_800F87F0(P *, void *, void *); extern void *lbl_8035AAE8; extern u8 lbl_802E26D0[]; }
void *__nwa__FUl(u32);

extern "C" s32 fn_80112B28(P *p, R *r, void *tbl) {
    Nm key;
    u32 i;
    char *s;
    if (p->loaded != 0) {
        p->clr();
    }
    r->setup(lbl_802E26D0, 34, 0);
    if (r->next() != 60) {
        r->err(30);
    }
    fn_800FAEF8(r);
    if (r->next() != 64) {
        r->err(30);
    }
    fn_800FB064(r, &key);
    fn_800F6E88(p->key, &key);
    if (r->next() != 71) {
        r->err(30);
    }
    s = fn_800FB284(r);
    if (!lbl_8035AAE8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAE8);
    p->name = (char *)__nwa__FUl(strlen(s) + 1);
    fn_800F7E98();
    if (!p->name) fn_800604C4(-4, 0, 0, 0);
    strcpy(p->name, s);
    if (r->next() != 72) {
        r->err(30);
    }
    p->n = fn_800FADA8(r);
    fn_800F8E38(p, p->n);
    if (!lbl_8035AAE8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAE8);
    p->items = (void **)__nwa__FUl(p->n * 4);
    fn_800F7E98();
    if (!p->items) fn_800604C4(-4, 0, 0, 0);
    for (i = 0; i < p->n; i++) {
        fn_800FB064(r, &key);
        p->items[i] = fn_800F8274(tbl, &key);
        fn_800F87F0(p, &key, &p->items[i]);
    }
    fn_800FAEA0(r);
    fn_800FAEA0(r);
    p->loaded = 1;
    return 0;
}

} /* extern "C" */
