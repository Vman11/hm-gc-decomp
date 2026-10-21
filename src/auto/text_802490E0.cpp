// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 id[8]; s32 idx; } TArg_802490E0;
typedef struct { s32 x0; s32 x4; s32 x8; char *name; } TEnt_802490E0;
typedef struct { u8 pad[16]; s32 x16; } Timer_802490E0;
typedef struct {
    u8 pad[112];
    Timer_802490E0 **timers;
    s32 *ids;
    TEnt_802490E0 *ents;
} SM_802490E0;

int fn_800E8F6C(char *, const char *, ...);
void fn_8023E914(void *, Timer_802490E0 *);
void fn_800F6FBC(char *, TArg_802490E0 *);
Timer_802490E0 *fn_8023E96C(void *, SM_802490E0 *, TArg_802490E0 *, s32, void (*)(void), s32, f32, f32);
void fn_802492F0(void);
extern void *lbl_8035B488;
extern char lbl_802A9170[];

void fn_802490E0(SM_802490E0 *p, s32 i, f32 t) {
    TArg_802490E0 arg;
    char buf[260];
    TEnt_802490E0 *e;
    if (p->timers[i] != 0 && p->timers[i]->x16 == 0) {
        fn_800E8F6C(buf, lbl_802A9170, p->ents[i].name);
        fn_8023E914(lbl_8035B488, p->timers[i]);
    }
    e = &p->ents[i];
    fn_800F6FBC(e->name, &arg);
    arg.idx = i;
    p->timers[i] = fn_8023E96C(lbl_8035B488, p, &arg, 12, fn_802492F0, e->x4, t, t);
    p->ids[i] = e->x4;
}

} /* extern "C" */
