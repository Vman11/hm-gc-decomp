// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Q801907D8;
struct R801907D8 {
    u8 pad[36];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(Q801907D8 *q);
};
struct Q801907D8 { R801907D8 *r; };
struct Self801907D8;
struct Owner801907D8 { u8 pad[88]; Self801907D8 *head; };
struct Self801907D8 {
    u8 pad[80];
    Owner801907D8 *owner;
    Self801907D8 *next;
    u8 pad2[104 - 88];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual Q801907D8 *GetQ();
};
extern "C" {
void fn_80190C98(Self801907D8 *p);

static inline void Unlink801907D8(Owner801907D8 *o, Self801907D8 *p) {
    Self801907D8 *n;
    Self801907D8 **pp;
    n = o->head;
    pp = &o->head;
    for (; n != 0; n = n->next) {
        if (n == p) {
            *pp = n->next;
            n->next = 0;
            n->owner = 0;
            return;
        }
        pp = &n->next;
    }
}

void fn_801907D8(Self801907D8 *p) {
    Q801907D8 *q = p->GetQ();
    if (q->r == 0 || p->owner == 0) {
        return;
    }
    q->r->v5(q);
    Unlink801907D8(p->owner, p);
    fn_80190C98(p);
}

} /* extern "C" */
