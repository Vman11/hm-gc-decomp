// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct Obj {
    u8 pad[236]; s32 *p236; u8 pad1[40]; char *n280; char *n284; char *n288; char *n292; s32 *p296; s32 *p300;
    u8 pad2[8]; u32 i312; u32 i316; u32 i320; s32 i324; s32 i328; s32 i332; s32 i336;
};
extern char lbl_80361DC0[4];
extern char lbl_80361E1C[6];
extern char lbl_80361E24[5];
extern void *lbl_8035B65C;
s32 fn_800F6CD0(char *a, char *b);
void *fn_80242144(Obj *o, s32 slot);
void fn_80242BC0(void *t, char *n, s32, s32, s32, s32);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);

static inline void play(Obj *o, char *n, s32 slot) {
    if (!fn_800F6CD0(n, lbl_80361DC0)) fn_80242BC0(fn_80242144(o, slot), n, 0, 0, 0, 0);
}
static inline void play2(Obj *o, char *n, s32 f, s32 slot) {
    if (!fn_800F6CD0(n, lbl_80361DC0)) {
        if (f) __ct__9C80253F24Fiiii(lbl_8035B65C, n, 0, 0, 0);
        else fn_80242BC0(fn_80242144(o, slot), n, 0, 0, 0, 0);
    }
}

void fn_800A5494(Obj *o) {
    s32 st = *o->p236;
    s32 prev;
    u32 cnt;
    o->i320++;
    cnt = o->i320;
    if (cnt == 1 || st != (prev = o->i324)) {
        o->i320 = 1;
        if (st) play(o, lbl_80361E1C, 1);
        else play(o, lbl_80361E1C, 0);
        o->i324 = st;
        if (st && !o->i328) {
            o->i328 = 1;
            play2(o, o->n288, *o->p296, 4);
        } else if (!st && !o->i332) {
            o->i332 = 1;
            play2(o, o->n292, *o->p300, 5);
        }
    } else if (cnt == (prev ? o->i312 : o->i316)) {
        o->i336 |= (prev == 0);
        play2(o, o->i324 ? o->n280 : o->n284, o->i324 ? *o->p296 : *o->p300, (o->i324 != 0) ? 2 : 3);
        o->i320 = 0;
        if (o->i324) play(o, lbl_80361E24, 0);
        else play(o, lbl_80361E24, 1);
    }
}
}

} /* extern "C" */
