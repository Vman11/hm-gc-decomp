// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O8022BE28 {
    u8 pad0[4];
    u16 type;
    u8 pad6[108 - 6];
    s32 val;
    u8 pad70[152 - 112];
    u32 count;
    struct O8022BE28 **children;
    s32 index;
} O8022BE28;
O8022BE28 *fn_801954E8(O8022BE28 *o);
O8022BE28 *fn_801955D8(O8022BE28 *o);

static inline s32 getIndex(O8022BE28 *o) {
    u16 t = o->type;
    s32 i = 0;
    if (t == 13) {
        i = 0;
    } else if (t == 12) {
        i = o->index;
    }
    return i;
}

static inline O8022BE28 *resolve(void *p, O8022BE28 *o) {
    if (o == 0) return 0;
    if (o->type >= 11 && o->type <= 13) {
        O8022BE28 *g = fn_801954E8(o);
        return fn_801955D8(g->children[getIndex(M2C_FIELD(p, O8022BE28 **, 156))]);
    }
    if (o->type >= 2 && o->type <= 3) return fn_801955D8(o);
    return 0;
}

void fn_8022BE28(void *p, s32 v) {
    O8022BE28 *o = M2C_FIELD(p, O8022BE28 **, 156);
    O8022BE28 *r;
    u32 i;
    if (o != 0) {
        if (o->type >= 11 && o->type <= 13) {
            for (i = 0; i < o->count; i++) o->children[i]->val = v;
        } else {
            r = resolve(p, o);
            if (r != 0) r->val = v;
        }
    }
}

} /* extern "C" */
