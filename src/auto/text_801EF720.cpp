// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V801EF720 {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32 x);
};
extern "C" {
extern u32 lbl_8036542C;
void fn_800FB064(V801EF720 *o, char *buf);
void *fn_800F9398(void *tbl, char *name);
void *fn_800F9788(void *tbl, char *a, char *b);

typedef struct T801EF720 { u8 pad[184]; u8 *f184; } T801EF720;
typedef struct S801EF720 { u8 pad[8]; T801EF720 *f8; u8 pad2[16]; void *f28; u32 f32; u32 f36; } S801EF720;

static inline void *lookup801EF720(u8 *tbl, char *name, char *sub) {
    if (sub == 0 || sub[0] == 0) return fn_800F9398(tbl + 4, name);
    return fn_800F9788(tbl + 28, sub, name);
}

void fn_801EF720(S801EF720 *p, V801EF720 *o, s32 code) {
    char sub[8];
    char name[8];
    switch (code) {
    case 92:
        fn_800FB064(o, name);
        fn_800FB064(o, sub);
        p->f28 = lookup801EF720(p->f8->f184, name, sub);
        break;
    case 93:
        p->f32 |= 1;
        break;
    case 94:
        p->f32 |= 2;
        break;
    case 95:
        p->f32 |= 4;
        break;
    case 156:
        p->f36 |= lbl_8036542C;
        break;
    default:
        o->v4(39);
        break;
    }
}

} /* extern "C" */
