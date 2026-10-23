// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct {
    u32 f0;
    u8 pad4[16];
} T_8023BB0C;

typedef struct It_8023BB0C {
    u8 pad0[4];
    u8 f4[8];
    u8 fC[8];
    struct It_8023BB0C *f14;
    struct It_8023BB0C *f18;
} It_8023BB0C;

typedef struct P_8023BB0C {
    T_8023BB0C table;
    u8 name[8];
    s32 f1C;
    struct P_8023BB0C *f20;
    It_8023BB0C *f24;
} P_8023BB0C;

extern T_8023BB0C lbl_8035756C;
extern It_8023BB0C *lbl_8035B3F8;
void fn_800F6E88(void *, void *);
P_8023BB0C *fn_800F8274(T_8023BB0C *, void *);
void fn_800F8E38(T_8023BB0C *, s32);
void fn_800F87F0(T_8023BB0C *, void *, void *);
s32 fn_800F6CD0(void *, void *);

void fn_8023BB0C(P_8023BB0C *p, void *name) {
    P_8023BB0C *q;
    It_8023BB0C *it;
    It_8023BB0C *prev;
    u8 buf24[8];
    u8 buf16[8];
    u8 buf8[8];

    fn_800F6E88(p->name, name);
    q = 0;
    if (lbl_8035756C.f0 != 0) {
        q = fn_800F8274(&lbl_8035756C, p->name);
    } else {
        fn_800F8E38(&lbl_8035756C, 50);
    }
    if (q == 0) {
        fn_800F87F0(&lbl_8035756C, p->name, p);
    } else {
        while (q->f20 != 0) {
            q = q->f20;
        }
        q->f20 = p;
    }
    for (it = lbl_8035B3F8; it != 0; it = it->f14) {
        fn_800F6E88(buf24, it->f4);
        if (fn_800F6CD0(p->name, buf24) != 0) {
            p->f1C++;
        }
    }
    fn_800F8E38(&p->table, p->f1C);
    prev = 0;
    for (it = lbl_8035B3F8; it != 0; it = it->f14) {
        fn_800F6E88(buf16, it->f4);
        if (fn_800F6CD0(p->name, buf16) != 0) {
            if (prev != 0) {
                prev->f18 = it;
            } else {
                p->f24 = it;
            }
            prev = it;
            fn_800F6E88(buf8, it->fC);
            fn_800F87F0(&p->table, buf8, it);
        }
    }
}

} /* extern "C" */
