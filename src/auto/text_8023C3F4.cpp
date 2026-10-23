// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node { u32 count; u8 pad4[0x14]; struct Node *next; u8 pad1C[4]; } Node;
typedef struct Cont { u8 pad0[0x1C]; s32 count; u8 pad20[8]; Node *base; } Cont;
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual s32 Valid(); };
typedef struct Iter { Cont *cont; Node *block; Node *node; u32 idx; s32 flag; } Iter;
Obj *fn_8023A490(Node *, u32);

static inline Obj *Get(Iter *it) {
    return it->node ? fn_8023A490(it->node, it->idx) : 0;
}
static inline u32 NCount(Node *n) { return n->count; }
static inline s32 CCount(Cont *c) { return c->count; }

void fn_8023C3F4(Iter *it) {
    if (it->node == 0) return;
    do {
        it->idx++;
        if (it->idx >= NCount(it->node)) {
            if (it->node->next != 0) {
                it->node = it->node->next;
                it->idx = 0;
            } else {
                if (it->block == 0) {
                    it->node = 0;
                    return;
                }
                it->node = it->block + 1;
                it->block = it->node;
                if (it->flag != 0 || it->node - it->cont->base >= CCount(it->cont)) {
                    it->node = 0;
                    return;
                }
                it->idx = 0;
            }
        }
    } while (Get(it) == 0 || Get(it)->Valid() == 0);
}

} /* extern "C" */
