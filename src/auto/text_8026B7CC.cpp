// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_Nm { u32 a; u32 b; };
struct wA_J { u8 pad[0x1c]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void play(s32 a); };
struct wA_L { u8 pad[8]; u32 n; u32 cnt; u8 pad10[0x14]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void *get(u32 i); virtual void *first(s32 a); };
struct wA_R { u8 pad[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *bone(s32 i); };
struct wA_B { u8 pad[0x58];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20(); virtual void reset(s32 a); virtual void setw(s32 a, f32 w); virtual void v23(); virtual void setr(f32 r); };
struct wA_P { u8 pad[0x14]; wA_L *l1; wA_L *l2; u8 pad1c[4]; f32 *w; u8 pad24[0x18]; u32 *ids; };
extern const wA_Nm lbl_80366DD8;
extern const char lbl_80366DDC[2];
extern const char lbl_80366DE0[2];
extern char lbl_802AA7F8[];
extern const f32 lbl_80366DE4;
extern const f32 lbl_80366DD0;
extern "C" u32 strlen(const char *s);
extern "C" char *strcat(char *d, const char *s);
s32 fn_800F6CD0(const wA_Nm *a, const wA_Nm *b);
void fn_800F806C(void *r, void *b, wA_Nm *n);
void fn_800F6E40(char *d, wA_Nm *n);
void fn_800F6FBC(char *s, wA_Nm *n);
void fn_800F6E88(wA_Nm *d, const wA_Nm *s);
wA_J *fn_800F8274(void *o, wA_Nm *n);
void fn_800E8F6C(char *d, const char *fmt, ...);
void fn_801FEC18(wA_B *b, wA_J *j, u32 x, u32 y, s32 z);

inline void wA_find(wA_P *p, wA_Nm *n, wA_J *&out) {
    u32 i;
    char msg[0x40];
    char nm[0xc];
    for (i = 0; i < p->l1->n; i++) {
        wA_J *j = fn_800F8274(p->l1->get(i), n);
        if (j != 0) {
            out = j;
            return;
        }
    }
    if (p->l2 != 0) {
        for (i = 0; i < p->l2->n; i++) {
            wA_J *j = fn_800F8274(p->l2->get(i), n);
            if (j != 0) {
                out = j;
                return;
            }
        }
    }
    fn_800F6E40(nm, n);
    fn_800E8F6C(msg, lbl_802AA7F8, nm);
    out = 0;
}

void fn_8026B7CC(wA_P *p, wA_Nm *name) {
    wA_Nm n10;
    wA_Nm n8;
    char buf[0xc];
    wA_R *r;
    wA_B *a;
    wA_B *b;
    wA_J *ja;
    wA_J *jb;
    if (p->l2 == 0 || p->l2->cnt == 0) {
        return;
    }
    r = (wA_R *)p->l2->first(0);
    a = (wA_B *)r->bone(0);
    b = (wA_B *)r->bone(1);
    if (fn_800F6CD0(name, &lbl_80366DD8) != 0) {
        fn_800F806C(r, a, &n10);
        fn_800F6E40(buf, &n10);
        buf[strlen(buf) - 1] = 0;
        fn_800F6FBC(buf, &n10);
    } else {
        fn_800F6E88(&n10, name);
    }
    fn_800F6E40(buf, &n10);
    strcat(buf, lbl_80366DDC);
    fn_800F6FBC(buf, &n8);
    if (fn_800F6CD0(&n8, &lbl_80366DD8) != 0) {
        ja = 0;
    } else {
        wA_find(p, &n8, ja);
    }
    fn_800F6E40(buf, &n10);
    strcat(buf, lbl_80366DE0);
    fn_800F6FBC(buf, &n8);
    if (fn_800F6CD0(&n8, &lbl_80366DD8) != 0) {
        jb = 0;
    } else {
        wA_find(p, &n8, jb);
    }
    if (a != 0 && b != 0 && ja != 0 && jb != 0) {
        ja->play(-1);
        jb->play(-1);
        a->reset(0);
        b->reset(0);
        a->setw(0, *p->w);
        b->setw(0, *p->w);
        fn_801FEC18(a, ja, p->ids[0], p->ids[1], 0);
        fn_801FEC18(b, jb, p->ids[1], p->ids[0], 0);
        a->setr(lbl_80366DE4);
        b->setr(lbl_80366DD0);
    }
}

} /* extern "C" */
