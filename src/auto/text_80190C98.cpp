// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Owner80190C98 {
    u8 pad[0x50];
    struct Node80190C98 *heads[4];
} Owner80190C98;

typedef struct Node80190C98 {
    Owner80190C98 *owner;
    u8 pad4[0x10];
    struct Node80190C98 *next;
    u8 pad18[4];
    struct Node80190C98 *link;
} Node80190C98;

typedef struct Obj80190C98 {
    u32 flags;
    u8 pad4[0x3C];
    Node80190C98 *lists[4];
    u8 pad50[4];
    struct Obj80190C98 *sibling;
    struct Obj80190C98 *child;
} Obj80190C98;

void fn_80190C98(Obj80190C98 *p) {
    Obj80190C98 *q;
    if ((p->flags & 4) == 0) {
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[0];
            if (n != 0 && (p->flags & 0x20) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[0];
                    o->heads[0] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x20;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[1];
            if (n != 0 && (p->flags & 0x40) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[1];
                    o->heads[1] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x40;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[2];
            if (n != 0 && (p->flags & 0x80) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[2];
                    o->heads[2] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x80;
            }
        }
        {
            Owner80190C98 *o;
            Node80190C98 *n;
            n = p->lists[3];
            if (n != 0 && (p->flags & 0x100) == 0) {
                do {
                    o = n->owner;
                    n->link = o->heads[3];
                    o->heads[3] = n;
                    n = n->next;
                } while (n != 0);
                p->flags |= 0x100;
            }
        }
        p->flags |= 4;
        for (q = p->child; q != 0; q = q->sibling) {
            fn_80190C98(q);
        }
    }
}

} /* extern "C" */
