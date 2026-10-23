// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_8036525C[4];

typedef struct { u32 v[2]; } Name;

} /* extern "C" */
struct NodeBase {
    u8 pad[128];
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
    virtual void v18();
    virtual u32 GetType();
};

struct Node : NodeBase {
    u8 pad2[284 - 132];
    Node *parent;   /* 284 */
    Node *f288;     /* 288 */
    u8 pad3[300 - 292];
    Name name;      /* 300 */
    Node *next;     /* 308 */
    Node *child;    /* 312 */
    Node *f316;     /* 316 */
};
extern "C" {

typedef struct {
    u8 pad[12];
    void *f12;
} Q;

void fn_801BDCCC(Node *p, Q *q);
void fn_800F6E88(Name *dst, void *src);
void fn_800F6FBC(char *str, Name *dst);
s32 fn_800F6CD0(Name *a, Name *b);
Node *fn_801C05EC(Node *p, Q *q, Node *x);

static inline void AttachTo(Node *p, Node *o) {
    Node *c;
    p->parent = o;
    c = o->child;
    if (c == 0) {
        o->child = p;
    } else {
        while (c->next != 0) {
            if (c->next->GetType() == 95) break;
            c = c->next;
        }
        p->next = c->next;
        c->next = p;
    }
}

s32 fn_801DBE0C(Node *p, Q *q) {
    Name name;
    p->f288 = p->parent;
    fn_801BDCCC(p, q);
    if (q->f12 != 0) {
        fn_800F6E88(&name, q->f12);
    } else {
        fn_800F6FBC(lbl_8036525C, &name);
    }
    if (fn_800F6CD0(&p->name, &name) != 0) {
        if (p->parent != 0) {
            p->parent = fn_801C05EC(p, q, p->parent);
        }
        if (p->parent != 0) {
            AttachTo(p, p->parent);
        }
    }
    if (p->f316 != 0) {
        p->f316 = fn_801C05EC(p, q, p->f316);
    }
    return 0;
}

} /* extern "C" */
