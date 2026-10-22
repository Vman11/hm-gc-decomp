// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_803601D0[6];

typedef struct {
    u8 pad0[224];
    void *fE0;
    u8 padE4[76];
    void **f130;
    u8 pad134[4];
    u32 f138;
    s32 f13C;
} S8008BEA0;

void *fn_80242144(S8008BEA0 *, void *);
void fn_80242BC0(void *, char *, void *, s32, char *, s32);
void fn_8023FE08(S8008BEA0 *, f32);

void fn_8008BEA0(S8008BEA0 *p, f32 f) {
    u32 i;
    char buf[2];
    if (p->f13C != 0) {
        for (i = 0; i < p->f138; i++) {
            buf[0] = i + '1';
            buf[1] = 0;
            fn_80242BC0(fn_80242144(p, p->f130[i]), lbl_803601D0, p->fE0, 0, buf, 0);
        }
        p->f13C = 0;
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
