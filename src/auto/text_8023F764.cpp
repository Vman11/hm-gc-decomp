// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u8 pad[4];
    s32 f4;
    char name[16];
} Q;
extern char lbl_80366138[8];
void *fn_8019556C(void *);
int fn_800F6CD0(char *, char *);
void fn_80190604(void *, void *, char *);
void fn_801907D8(void *);

void fn_8023F764(void *p, void **pp, Q *q) {
    void *x;
    void *r;
    if (*pp) {
        if (q->f4 == 0) {
            r = 0;
            x = M2C_FIELD(M2C_FIELD(p, void **, 224), void **, 160);
            if (x) r = fn_8019556C(x);
            if (!x || r) {
                if (fn_800F6CD0(q->name, lbl_80366138) == 0)
                    fn_80190604(*pp, r, q->name);
                else
                    fn_801907D8(*pp);
            }
        }
        if (M2C_FIELD(*pp, volatile u32 *, 152) & 8) M2C_FIELD(*pp, volatile u32 *, 152) &= ~8;
        M2C_FIELD(*pp, u32 *, 0) &= ~0x800;
        M2C_FIELD(*pp, u32 *, 152) &= ~1;
        *pp = 0;
    }
}

} /* extern "C" */
