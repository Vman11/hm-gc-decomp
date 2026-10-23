// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct Vec802354B4 { f32 x, y, z; } Vec802354B4;
} /* extern "C" */
struct O802354B4 {
    u32 f0;
    u8 pad4[20];
    Vec802354B4 pos;
    u8 pad36[12];
    void *f48;
    u8 pad52[52];
    virtual void v0();
    virtual void v1();
    virtual void upd();
};
extern "C" {
typedef struct Slot802354B4 {
    u32 f0;
    u8 f4[24];
    s32 f28;
    u8 pad32[152];
    u32 f184;
    u8 pad188[8];
} Slot802354B4;
typedef struct S802354B4 { Slot802354B4 slots[4]; } S802354B4;
extern f32 lbl_80365EB8;
extern f32 lbl_80365EBC;
extern f32 lbl_80365EC0;
void fn_80107244(void *, Vec802354B4 *);
u8 *fn_8022C3F4(void *);
void fn_8024B0AC(void *, Vec802354B4 *, s32, f32, f32);

static inline u8 *get802354B4(u8 *r) {
    u8 *t = *(u8 **)(r + 108);
    if (t == 0) t = *(u8 **)(r + 144) + 28;
    return t;
}

void fn_802354B4(S802354B4 *p, u8 *o) {
    s32 i;
    Vec802354B4 a;
    Vec802354B4 b;
    O802354B4 *q;
    for (i = 0; i < 4; i++) {
        if (p->slots[i].f28 == 0) {
            q = *(O802354B4 **)(o + 156);
            if (q->f0 & 4) q->upd();
            a = q->pos;
            if ((*(O802354B4 **)(o + 156))->f48 != 0) {
                fn_80107244((*(O802354B4 **)(o + 156))->f48, &b);
            } else {
                b.x = lbl_80365EB8;
                b.y = lbl_80365EB8;
                b.z = lbl_80365EB8;
            }
            if (get802354B4(fn_8022C3F4(o)) != 0) {
                p->slots[i].f184 = **(u32 **)(get802354B4(fn_8022C3F4(o)) + 4);
            } else {
                p->slots[i].f184 = **(u32 **)(*(u8 **)(fn_8022C3F4(o) + 144) + 32);
            }
            fn_8024B0AC(p->slots[i].f4, &a, 0, lbl_80365EBC, b.z - lbl_80365EC0);
            return;
        }
    }
}

} /* extern "C" */
