#include "common.h"

struct Res { u32 a, b; Res *next; };
struct Node;
struct Child { Node *node; u8 pad[0x30]; };
struct Node { u32 a; Child *kids; u32 n; u32 stamp; Res *list; };
struct Ctx { u8 pad[0x230]; s32 f230; u8 pad2[0xC]; Res *list; };
extern "C" {

extern s32 lbl_8035ADD0;
Res *fn_801988DC(Child *, Ctx *, Res *);

inline void fn_8017DEA0(Res *r, Res *next) {
    r->next = next;
}

inline void fn_8017DE50(Node *n, u32 stamp, Res *r) {
    if (stamp != n->stamp) {
        n->stamp = stamp;
        n->list = 0;
    }
    fn_8017DEA0(r, n->list);
    n->list = r;
}

inline void fn_8017DE78(Ctx *c, Res *r) {
    fn_8017DEA0(r, c->list);
    c->list = r;
}

inline s32 fn_8017DE88(Ctx *c) {
    return c->f230;
}

inline Node *fn_8017DE90(Child *c) {
    return c->node;
}

inline s32 fn_8017DE98(void) {
    return lbl_8035ADD0;
}

void fn_8017DBDC(Node *node, Ctx *ctx, Res *res) {
    Node *k;
    Child *p = node->kids;
    Child *end = p + node->n;
    for (; p < end; p++) {
        k = fn_8017DE90(p);
        if (k == 0 && fn_8017DE88(ctx) != 0) continue;
        Res *q = fn_801988DC(p, ctx, res);
        if (q == 0) continue;
        if (k == 0) {
            fn_8017DE78(ctx, q);
        } else {
            fn_8017DE50(k, fn_8017DE98(), q);
            fn_8017DBDC(k, ctx, q);
        }
    }
}

}
