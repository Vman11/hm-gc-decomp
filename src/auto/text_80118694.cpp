// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class N { public: N *next; N *prev; void *data; N &operator=(const N &); };
struct D { u8 d[28]; };
struct P { u32 pad0; u32 c; u8 pad8[8]; N *head; N *tail; D *buf; N *nodes; u32 v; u32 w; };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memset(void *, int, u32); extern void *lbl_8035AB20; }
void *__nwa__FUl(u32);

extern "C" void fn_80118694(P *p, u32 n, u32 v) {
    u32 i;
    N *node;
    if (p->buf) delete[] p->buf;
    if (p->nodes) delete[] p->nodes;
    p->buf = 0;
    p->nodes = 0;
    p->c = 0;
    p->v = 0;
    p->w = 0;
    p->v = v;
    if (!lbl_8035AB20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB20);
    p->buf = new D[n];
    fn_800F7E98();
    if (!p->buf) fn_800604C4(-4, 0, 0, 0);
    if (!lbl_8035AB20) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AB20);
    p->nodes = new N[n];
    fn_800F7E98();
    if (!p->nodes) fn_800604C4(-4, 0, 0, 0);
    memset(p->buf, 0, n * sizeof(D));
    for (i = 0; i < n; i++) {
        p->nodes[i].data = &p->buf[i];
        node = &p->nodes[i];
        if ((node->next = p->head) != 0) {
            p->head->prev = node;
        } else {
            p->tail = node;
        }
        p->head = node;
        node->prev = 0;
    }
}

} /* extern "C" */
