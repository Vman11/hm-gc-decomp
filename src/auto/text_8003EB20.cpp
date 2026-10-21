// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[28]; u8 flag; u8 pad2; } S30_8003EB20;
typedef struct {
    S30_8003EB20 slots[6];
    u8 pad180[664 - 180];
    s32 f664, f668, f672, f676, f680, f684, f688, f692, f696, f700;
    u8 pad704[736 - 704];
    s32 f736;
    u8 objs[1360 - 740];
    s32 a[31];
    s32 b[31];
    void *vt;
} C8003EB20;
extern u8 lbl_802B0470[];
extern C8003EB20 *lbl_8035A0A4;
void *__construct_array(void *p, void *ctor, void *dtor, u32 size, u32 n);
void *__ct__9C800F92E8Fv(void *p);
void *__dt__9C800F92E8Fv(void *p, s16 f);

static inline void reset(C8003EB20 *p) {
    u32 i;
    p->f664 = 0;
    p->f668 = 0;
    p->f672 = 0;
    p->f676 = 0;
    p->f680 = 0;
    p->f684 = 0;
    p->f688 = 1;
    p->f692 = 0;
    p->f696 = 1;
    p->f700 = 0;
    p->f736 = 0;
    for (i = 0; i < 31; i++) {
        p->b[i] = 0;
        p->a[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        p->slots[i].flag = 0;
    }
}

C8003EB20 *fn_8003EB20(C8003EB20 *p) {
    p->vt = lbl_802B0470;
    __construct_array(p->objs, __ct__9C800F92E8Fv, __dt__9C800F92E8Fv, 20, 31);
    lbl_8035A0A4 = p;
    reset(p);
    return p;
}

} /* extern "C" */
