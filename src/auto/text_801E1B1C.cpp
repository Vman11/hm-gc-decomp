// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct ItemB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void f(); };
struct Item : ItemB { s32 type; };
struct Node { Node *next; Node *prev; Item *data; };
struct List {
    Node *head;
    Node *tail;
    Node *freeHead;
    Node *freeTail;
    void push(Item *d) {
        Node *n = freeHead;
        if (n != 0) {
            if ((freeHead = n->next) != 0) {
                freeHead->prev = 0;
            } else {
                freeTail = 0;
            }
        }
        n->data = d;
        if ((n->prev = tail) != 0) {
            tail->next = n;
        } else {
            head = n;
        }
        tail = n;
        n->next = 0;
    }
};
struct Mgr {
    u8 pad[72];
    List all;
    List special;
    u32 count;
    u32 max;
    u32 pad70;
    s32 notify;
};

void fn_801E1B1C(Mgr *m, Item *it) {
    if (m->count < m->max) {
        m->all.push(it);
        m->count++;
        switch (it->type) {
        case 8:
        case 13:
        case 15:
        case 18:
        case 23:
        case 24:
        case 28:
            m->special.push(it);
            break;
        }
        if (m->notify != 0) {
            it->f();
        }
    }
}

} /* extern "C" */
