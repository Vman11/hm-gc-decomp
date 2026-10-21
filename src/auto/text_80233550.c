// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[8]; void *cur; void *ctx; } It_80233550;
typedef struct { u8 pad[20]; It_80233550 *it; } S_80233550;
extern void fn_8023C528(It_80233550 *);
extern u8 *fn_8023A490(void *, void *);
extern void fn_8023C3F4(It_80233550 *);
extern u8 *lbl_8035B488;

static inline u8 *itCur_80233550(It_80233550 *it) {
    return it->cur ? fn_8023A490(it->cur, it->ctx) : NULL;
}

u8 *fn_80233550(S_80233550 *p) {
    u8 *best = NULL;
    u8 *o;
    for (fn_8023C528(p->it); p->it->cur != NULL; fn_8023C3F4(p->it)) {
        o = itCur_80233550(p->it);
        if (M2C_FIELD(o, s32 *, 620) == 0) {
            if (best == NULL || M2C_FIELD(o, u32 *, 716) < M2C_FIELD(best, u32 *, 716)) {
                best = o;
            }
        }
    }
    if (best != NULL) {
        M2C_FIELD(best, u32 *, 716) = M2C_FIELD(lbl_8035B488, u32 *, 12);
    }
    return best;
}
