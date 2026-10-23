// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801EB474 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 x);
    virtual void v5();
};
extern "C" {
extern void *lbl_8035B0A8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
u32 fn_800FADA8(V801EB474 *o);
void fn_800FB064(V801EB474 *o, char *buf);
void *fn_800F9398(void *tbl, char *name);
void *fn_800F9788(void *tbl, char *a, char *b);

typedef struct T801EB474 { u8 pad[184]; u8 *f184; } T801EB474;
typedef struct S801EB474 { u8 pad[4]; u32 f4; void **f8; u32 f12; T801EB474 *f16; } S801EB474;

static inline void *lookup801EB474(u8 *tbl, char *name, char *sub) {
    if (sub == 0 || sub[0] == 0) return fn_800F9398(tbl + 4, name);
    return fn_800F9788(tbl + 28, sub, name);
}

void fn_801EB474(S801EB474 *p, V801EB474 *o, s32 code) {
    char sub[8];
    char name[8];
    u32 i;
    switch (code) {
    case 58:
        p->f12 = fn_800FADA8(o);
        if (lbl_8035B0A8 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B0A8);
        p->f8 = new void *[p->f12];
        fn_800F7E98();
        if (p->f8 == 0) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->f12; i++) {
            fn_800FB064(o, name);
            fn_800FB064(o, sub);
            p->f8[i] = lookup801EB474(p->f16->f184, name, sub);
        }
        o->v5();
        break;
    case 135:
        p->f4 |= 4;
        break;
    default:
        o->v4(39);
        break;
    }
}

} /* extern "C" */
