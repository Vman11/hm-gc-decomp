// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[8];
    void *data;
} E80240C2C;

typedef struct {
    u8 pad[48];
    void *obj;
} C80240C2C;

typedef struct {
    u8 pad[156];
    C80240C2C *c;
} B80240C2C;

typedef struct {
    u8 pad0[164];
    s32 *mode;
    u8 pad1[204 - 168];
    E80240C2C *entries;
    u8 pad2[212 - 208];
    void **items;
    u8 pad3[224 - 216];
    B80240C2C *b;
    u8 pad4[264 - 228];
    void *player;
} P80240C2C;

extern f32 lbl_8036613C;
extern f32 lbl_80366198;
void fn_80107244(void *, f32 *);
void fn_802482F8(void *, s32, s32);
void fn_80248668(void *, void *, s32, f32 *, void *, f32);

void fn_80240C2C(P80240C2C *p, s32 i) {
    void *a;
    void *b;
    C80240C2C *c;
    f32 v[3];
    b = p->entries[i].data;
    a = p->items[i];
    if (a != 0 && p->player != 0) {
        c = p->b->c;
        if (c != 0) {
            if (c->obj != 0) {
                fn_80107244(c->obj, v);
            } else {
                v[0] = lbl_8036613C;
                v[1] = lbl_8036613C;
                v[2] = lbl_8036613C;
            }
        }
        if (p->mode != 0) {
            fn_802482F8(p->player, 0, *p->mode);
        } else {
            fn_802482F8(p->player, 0, 2);
        }
        fn_80248668(p->player, a, 0, v, b, lbl_80366198);
    }
}

} /* extern "C" */
