// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern char lbl_80359A20[8];
s32 fn_800F6CD0(const char *, const char *);
void *fn_8023A490(void *, void *);
} /* extern "C" */

struct I80244750 {
    u8 pad[8];
    void *a;
    void *b;
    u8 pad2[12];
};

struct X80244750 {
    void *f0;
};

struct N80244750 {
    u8 pad[12];
    char name[12];
    X80244750 *f24;
    u8 pad2[8];
    N80244750 *f36;
};

struct C80244750 {
    u8 pad[4];
    N80244750 *f4;
    N80244750 *f8;
    N80244750 *f12;
    void *f16;
    u32 f20;
    I80244750 it;
    s32 f52;
};

extern "C" {
void fn_8023C528(I80244750 *, const char *);
void fn_80244594(C80244750 *);

void fn_80244750(C80244750 *p, const char *name) {
    p->f4 = p->f12;
    p->f8 = p->f12;
    if (name != 0) {
        p->f52 = 1;
        while (p->f4 != 0 && fn_800F6CD0(p->f4->name, name) == 0) {
            p->f8 = p->f8->f36;
            p->f4 = p->f8;
        }
        if (p->f4 == 0) {
            p->f16 = 0;
            return;
        }
    } else {
        p->f52 = 0;
        while (p->f4 != 0 && (p->f4->name[0] == 0 || fn_800F6CD0(p->f4->name, lbl_80359A20) != 0)) {
            p->f8 = p->f8->f36;
            p->f4 = p->f8;
        }
        if (p->f4 == 0) {
            p->f16 = 0;
            return;
        }
    }
    if (p->f4->f24 != 0) {
        p->f16 = p->f4->f24->f0;
        p->f20 = 0;
        if (p->f16 == 0) {
            fn_80244594(p);
        }
    } else {
        fn_8023C528(&p->it, p->f4->name);
        p->f16 = p->it.a != 0 ? fn_8023A490(p->it.a, p->it.b) : 0;
        if (p->f16 == 0) {
            fn_80244594(p);
        }
    }
}

} /* extern "C" */
