#include "common.h"
extern "C" {
typedef struct { u8 id[8]; s32 idx; } TArg_802491DC;
typedef struct { f32 x0; s32 x4; f32 x8; char *name; } TEnt_802491DC;
typedef struct { u8 pad[16]; s32 x16; } Timer_802491DC;
typedef struct {
    u8 pad[112];
    Timer_802491DC **timers;
    s32 *ids;
    TEnt_802491DC *ents;
} SM_802491DC;

int fn_800E8F6C(char *, const char *, ...);
void fn_8023E914(void *, Timer_802491DC *);
void fn_800F6FBC(char *, TArg_802491DC *);
Timer_802491DC *fn_8023E96C(void *, SM_802491DC *, TArg_802491DC *, s32, void (*)(void), f32, s32, f32);
void fn_802492F0(void);
extern void *lbl_8035B488;
extern char lbl_802A9170[];

void fn_802491DC(SM_802491DC *p, s32 i) {
    TArg_802491DC arg;
    char buf[260];
    TEnt_802491DC *e;
    if (p->timers[i] != 0 && p->timers[i]->x16 == 0) {
        fn_800E8F6C(buf, lbl_802A9170, p->ents[i].name);
        fn_8023E914(lbl_8035B488, p->timers[i]);
    }
    e = &p->ents[i];
    fn_800F6FBC(e->name, &arg);
    arg.idx = i;
    p->timers[i] = fn_8023E96C(lbl_8035B488, p, &arg, 12, fn_802492F0, e->x0, e->x4, e->x8);
    p->ids[i] = e->x4;
}
}
