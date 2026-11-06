#include "common.h"

extern "C" {
struct A;
struct O;
struct A {
    u8 pad_[28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void f24(s32);
};
struct O {
    u8 pad_[88];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void attach(A *, s32, s32);
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void set(s32, f32);
    virtual void v23();
    virtual void setF(f32);
};
struct N {
    u8 pad_[16];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual O *child(u32);
    virtual O *child2(u32);
    u32 f14;
    u32 f18;
};
struct L {
    u8 pad_[36];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void *get(u32);
    virtual N *first(s32);
};
#define F(p, o, T) (*(T *)((u8 *)(p) + (o)))
struct LH { u8 pad[8]; u32 n; u32 fC; };
struct T { u8 pad[0x14]; L *f14; L *f18; u8 pad1c[4]; f32 *f20; u8 pad24[0x38 - 0x24]; u32 f38; u32 *f3c; };
struct S128 { u32 w[32]; };
extern char lbl_802AA558[];
extern char lbl_80366DD8[4];
extern f32 lbl_80366DE4, lbl_80366DD0;
extern struct H8 { u8 pad[8]; u8 *f8; } *lbl_8035B460;
int fn_800F6CD0(const char *, const char *);
A *fn_800F8274(void *, const char *);
void fn_800F6E40(char *, const char *);
void fn_800E8F6C(char *, const char *, ...);
void fn_800F806C(N *, O *, char *);
void fn_801FEC18(O *, A *, u32, u32, s32);
void *fn_800F9398(void *, const char *);
u32 strlen(const char *);
void fn_800F6FBC(const char *, char *);
void fn_800F6F68(char *, const char *);
static inline void findA(T *t, char *name, A *&out, char *b) {
    u32 i;
    char msg[64];
    char tmp[12];
    for (i = 0; i < ((LH *)t->f14)->n; i++) {
        A *a = fn_800F8274(t->f14->get(i), name);
        if (a) { out = a; return; }
    }
    if (t->f18) {
        u32 j;
        for (j = 0; j < ((LH *)t->f18)->n; j++) {
            A *a = fn_800F8274(t->f18->get(j), name);
            if (a) { out = a; return; }
        }
    }
    fn_800F6E40(tmp, name);
    fn_800E8F6C(msg, b + 0x2a0, tmp);
    out = 0;
}
static inline A *getA(T *t, char *name, char *b) {
    A *a;
    if (fn_800F6CD0(name, lbl_80366DD8)) a = 0; else findA(t, name, a, b);
    return a;
}
void fn_8026BD38(T *t) {
    char *b = lbl_802AA558;
    N *node;
    u32 i;
    char name[8];
    char nm2[8];
    char tn[8];
    O *o;
    if (t->f18 == 0 || ((LH *)t->f18)->fC == 0) return;
    node = t->f18->first(0);
    for (i = 0; i < t->f38; i++) {
        o = node->child(i);
        fn_800F806C(node, o, name);
        if (((volatile char *)name)[i]) {
            s32 k;
            char *s;
            {
                u32 j;
                k = -1;
                for (j = 0; j < 8; j++) {
                    if (name[j] == 0) { k = name[j - 1]; break; }
                }
                if (k == -1) k = j - 1;
            }
            s = name;
            s32 c = s[k];
            if (c == 'L') continue;
            if (c == 'R') {
                A *a;
                a = getA(t, name, b);
                if (a && o) {
                    A *a2;
                    s32 q;
                    a->f24(-1);
                    s[k] = 'L';
                    a2 = getA(t, name, b);
                    k = -1;
                    s = 0;
                    for (q = 0; (u32)q < t->f38; q++) {
                        O *c = node->child(q);
                        s = (char *)c;
                        fn_800F806C(node, c, tn);
                        if (fn_800F6CD0(tn, name)) { k = q; break; }
                    }
                    if (k == -1) continue;
                    ((O *)s)->set(0, *t->f20);
                    o->set(0, *t->f20);
                    fn_801FEC18((O *)s, a2, t->f3c[k], t->f3c[i], 0);
                    fn_801FEC18(o, a, t->f3c[i], t->f3c[k], 0);
                    ((O *)s)->setF(lbl_80366DE4);
                    o->setF(lbl_80366DD0);
                }
            } else {
                A *a;
                a = getA(t, name, b);
                if (o && !(*(u32 *)o & 4) && a) {
                    a->f24(-1);
                    o->set(0, *t->f20);
                    o->attach(a, 0, 0);
                }
            }
        }
    }
    for (i = 0; i < node->f18; i++) {
        o = node->child2(i);
        fn_800F806C(node, o, name);
        if (fn_800F9398(lbl_8035B460->f8 + 0x90, name)) {
            char tmp2[16];
            char *e;
            A *a;
            fn_800F6E40(tmp2, name);
            { s32 n = strlen(tmp2) - 1; while (tmp2[n] >= '0' && tmp2[n] <= '9') { tmp2[n] = 0; n--; } }
            fn_800F6FBC(tmp2, nm2);
            a = getA(t, nm2, b);
            if (o && (*(u32 *)o & 4) && a) {
                a->f24(-1);
                o->set(0, *t->f20);
                o->attach(a, 0, 0);
            } else {
                S128 m = *(S128 *)(b + 0x170);
                fn_800F6F68((char *)&m, name);
            }
        } else {
            S128 m = *(S128 *)(b + 0x1f0);
            fn_800F6F68((char *)&m, name);
        }
    }
}
}
