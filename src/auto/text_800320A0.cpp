// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Key { u32 a, b; } Key;
typedef struct Q { u8 pad[8]; s32 f8; } Q;
typedef struct P { Q *f0; } P;
typedef struct Node { P *f0; void *f4; u8 pad[4]; struct Node *f12; struct Node *f16; } Node;
typedef struct Self { u8 pad[16]; void *f16; } Self;
typedef struct G { u8 pad[16]; void *f16; } G;
extern G *lbl_8035B754;
void fn_800F6FBC(void *, Key *);
void fn_800F7044(Key *);
void *fn_800F8274(void *, Key *);
void fn_80031D80(Self *, void *, Key *, void *);

#pragma auto_inline off
void fn_800320A0(Self *self, Node *node) {
    if (node != 0) {
        void *g = lbl_8035B754->f16;
        if (node->f0->f0->f8 == 0) {
            Key key;
            void *r;
            fn_800F6FBC(node->f4, &key);
            fn_800F7044(&key);
            r = fn_800F8274(g, &key);
            if (r != 0) {
                fn_80031D80(self, self->f16, &key, r);
            }
        }
        if (node->f16 != 0) {
            fn_800320A0(self, node->f16);
        }
        if (node->f12 != 0) {
            fn_800320A0(self, node->f12);
        }
    }
}
#pragma auto_inline reset

} /* extern "C" */
