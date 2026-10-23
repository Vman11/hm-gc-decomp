// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct E800F79FC {
    u8 pad0[8];
    void *f8;
    u8 pad1[24];
    u32 f36;
} E800F79FC;
typedef struct M800F79FC {
    u8 pad0[12];
    E800F79FC e[16];
    u32 f652;
} M800F79FC;
extern char lbl_8029C9F8[];
void fn_80060568(const char *, s32, s32, s32);
void fn_800F7520(E800F79FC *, void *, void *, s32, void *);

E800F79FC *fn_800F79FC(M800F79FC *m, void *a, void *b, void *c) {
    E800F79FC *end;
    s32 i;
    E800F79FC *e;
    E800F79FC *e2;
    u32 id;
    i = 0;
    end = m->e + 16;
    for (e = m->e; e < end; e++) {
        if (e->f8 == 0) break;
        i++;
    }
    if (e >= end) fn_80060568(lbl_8029C9F8, 0, 0, 0);
    end = m->e + 16;
    do {
        m->f652++;
        for (e2 = m->e; e2 < end; e2++) {
            if (m->f652 == e2->f36) break;
        }
    } while (e2 < end);
    id = m->f652;
    fn_800F7520(e, a, b, i, c);
    e->f36 = id;
    return e;
}

} /* extern "C" */
