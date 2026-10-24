// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Name { char s[8]; };
struct Tbl { u8 pad[12]; Name *names; };
struct Obj {
    u8 pad[280]; void *anim; Tbl *t284; Tbl *t288; Tbl *t292; Tbl *t296; Tbl *t300; Tbl *t304; Tbl *t308; Tbl *t312;
    u8 pad2[36]; s32 i352; s32 i356; u32 idx; s32 i364; s32 i368; s32 i372; s32 i376; u8 pad3[4]; void *cur;
};
extern char lbl_80361C90[4];
void fn_800F6E88(char *d, char *s);
s32 fn_800F6CD0(char *a, char *b);
void *fn_800F8274(void *a, char *n);
void fn_800A41DC(Obj *o);

static inline void nameA(Obj *o, char *buf) {
    switch (o->i356) {
    case 2:
        fn_800F6E88(buf, o->t304->names[o->idx].s);
        break;
    case 1:
        fn_800F6E88(buf, o->t300->names[o->idx].s);
        break;
    case 0:
    default:
        fn_800F6E88(buf, o->t296->names[o->idx].s);
        break;
    }
}
static inline void nameB(Obj *o, char *buf) {
    switch (o->i352) {
    case 2:
        fn_800F6E88(buf, o->t292->names[o->idx].s);
        break;
    case 1:
        fn_800F6E88(buf, o->t288->names[o->idx].s);
        break;
    case 0:
    default:
        fn_800F6E88(buf, o->t284->names[o->idx].s);
        break;
    }
}

void fn_800A41DC(Obj *o) {
    char a[8];
    char b[8];
    if (o->i364) {
        o->i356++;
        if (o->i356 >= 3) o->i356 = 0;
    } else if (o->i376) {
        o->i352++;
        if (o->i352 >= 3) o->i352 = 0;
    }
    o->idx = 0;
    if (o->i364) {
        nameA(o, a);
    } else if (o->i376) {
        nameB(o, a);
    }
    if (fn_800F6CD0(a, lbl_80361C90)) fn_800A41DC(o);
    if (o->i364) {
        nameA(o, b);
    } else if (o->i368) {
        if (o->t308) fn_800F6E88(b, o->t308->names[o->idx].s);
    } else if (o->i372) {
        if (o->t312) fn_800F6E88(b, o->t312->names[o->idx].s);
    } else if (o->i376) {
        nameB(o, b);
    }
    o->cur = fn_800F8274(o->anim, b);
    if (o->cur == 0 && o->idx != 0) fn_800A41DC(o);
}
}

} /* extern "C" */
