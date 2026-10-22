// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8035E488[6];
extern char lbl_80297120[15];

typedef struct {
    u8 b[8];
} N8005D138;

typedef struct {
    u8 pad0[16];
    s32 f10;
} H8005D138;

typedef struct {
    H8005D138 *f0;
    u8 pad4[8];
    N8005D138 *fC;
} D8005D138;

typedef struct {
    u8 pad0[12];
    u32 fC;
    u32 f10;
    u8 pad14[752];
    s32 f304;
    u8 pad308[8];
    N8005D138 f314[4];
    s32 f330;
} S8005D138;

s32 fn_8023D13C(S8005D138 *, char *, s32);
D8005D138 **fn_8010FEDC(u32, u32, char *, s32);
void fn_800F6E88(N8005D138 *, N8005D138 *);
void fn_80232C90(S8005D138 *);

void fn_8005D138(S8005D138 *p) {
    D8005D138 **r;
    D8005D138 *d;
    s32 i;
    s32 j;
    if (p->f10 != 0) {
        p->f304 = fn_8023D13C(p, lbl_8035E488, 0);
        r = fn_8010FEDC(p->fC, p->f10, lbl_80297120, 1);
        if (r != 0) {
            d = *r;
            p->f330 = d->f0->f10;
            for (i = 0, j = 0; i < p->f330; i++, j++) {
                fn_800F6E88(&p->f314[i], &d->fC[j]);
            }
        }
    }
    fn_80232C90(p);
}

} /* extern "C" */
