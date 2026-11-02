// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
extern char lbl_8036153C[8];
extern char lbl_80361544[8];
extern char lbl_803615BC[8];
extern char lbl_80361604[8];
extern char lbl_8036160C[8];
extern char lbl_80361614[8];
extern char lbl_8036161C[8];
extern char lbl_80361624[8];
extern char lbl_8036162C[8];
extern char lbl_80361634[8];
extern char lbl_8036163C[8];
extern char lbl_80361644[8];
extern char lbl_8036164C[8];
extern char lbl_80361654[8];
extern char lbl_8029A1C8[];
extern u8 **lbl_8035B684;
extern u8 *lbl_8035A1DC;
void *fn_801AA960(void *, const char *, const char *);
void *fn_800F9398(void *, const char *);
void fn_801FE33C(void *, int);
struct T { u8 pad[0x88]; void *f[0x5c / 4]; void *fe4; };
void fn_8009C018(T *t) {
    char *str = lbl_8029A1C8;
    void *m = *(void **)(*lbl_8035B684 + 0x33b0);
    t->f[(0x88 - 0x88) / 4] = fn_801AA960(m, lbl_80361604, 0);
    t->f[(0x8c - 0x88) / 4] = fn_801AA960(m, lbl_8036160C, 0);
    t->f[(0x90 - 0x88) / 4] = fn_801AA960(m, lbl_80361614, 0);
    t->f[(0x94 - 0x88) / 4] = fn_801AA960(m, lbl_8036153C, 0);
    t->f[(0x98 - 0x88) / 4] = fn_801AA960(m, lbl_8036161C, 0);
    t->f[(0x9c - 0x88) / 4] = fn_801AA960(m, lbl_80361624, 0);
    t->f[(0xa0 - 0x88) / 4] = fn_801AA960(m, lbl_8036162C, 0);
    t->f[(0xa4 - 0x88) / 4] = fn_801AA960(m, lbl_80361634, 0);
    t->f[(0xa8 - 0x88) / 4] = fn_801AA960(m, str + 0xfc, 0);
    t->f[(0xac - 0x88) / 4] = fn_801AA960(m, lbl_8036163C, 0);
    t->f[(0xb0 - 0x88) / 4] = fn_801AA960(m, lbl_80361544, 0);
    t->f[(0xb4 - 0x88) / 4] = fn_801AA960(m, str + 0x108, 0);
    t->f[(0xb8 - 0x88) / 4] = fn_801AA960(m, str + 0x114, 0);
    t->f[(0xbc - 0x88) / 4] = fn_801AA960(m, lbl_80361644, 0);
    t->f[(0xc0 - 0x88) / 4] = fn_801AA960(m, str + 0x120, 0);
    t->f[(0xcc - 0x88) / 4] = fn_801AA960(m, str + 0x12c, 0);
    t->f[(0xd0 - 0x88) / 4] = fn_801AA960(m, lbl_8036164C, 0);
    t->f[(0xc4 - 0x88) / 4] = fn_801AA960(m, str + 0x138, 0);
    t->f[(0xc8 - 0x88) / 4] = fn_801AA960(m, str + 0x6c, 0);
    t->f[(0xd8 - 0x88) / 4] = fn_801AA960(m, lbl_803615BC, str + 0xb4);
    t->f[(0xdc - 0x88) / 4] = fn_801AA960(m, str + 0x144, str + 0xb4);
    t->f[(0xe0 - 0x88) / 4] = fn_801AA960(m, str + 0x150, 0);
    t->fe4 = fn_800F9398(*(u8 **)(*lbl_8035B684 + 0x2c4c) + 0x3c, lbl_80361654);
    u8 *o = *(u8 **)(lbl_8035A1DC + 0x2f4c);
    if (*(s32 *)(o + 0x14) != 1) fn_801FE33C(o, 3);
    else fn_801FE33C(o, 1);
}
#pragma opt_propagation reset

} /* extern "C" */
