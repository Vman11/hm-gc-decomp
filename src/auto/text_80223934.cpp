// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365A70;
extern const char lbl_80365ADC[8];
extern const char lbl_80365AE4[8];
extern const char lbl_802A8268[];
extern void *lbl_8035B7BC;
int strncmp(const char *a, const char *b, u32 n);
void fn_80263044(char *s);
void fn_8026B524(void *a);
void fn_8026B3B4(void *a);
void fn_8026B7CC(void *a, const char *s);
struct Q50 { u8 pad[0xc0]; char **fc0; char **fc4; u8 pc8[0xd8 - 0xc8]; s32 fd8; };
struct P50 { u8 pad[0x20c]; Q50 *q; u8 p210[0x280 - 0x210]; s32 f280; s32 f284; u8 p288[8]; f32 f290, f294; s32 f298, f29c, f2a0; u8 p2a4[0x2ec - 0x2a4]; f32 f2ec; u8 p2f0[0x300 - 0x2f0]; s32 f300; u8 p304[0x328 - 0x304]; s32 f328, f32c; };
void fn_80223934(P50 *p) {
    p->f300 = 1;
    p->f2ec = lbl_80365A70;
    if (strncmp(p->q->fc4[p->q->fd8], lbl_80365ADC, 5) == 0) fn_80263044(p->q->fc0[p->q->fd8]);
    p->f300 = 0;
    fn_8026B524(lbl_8035B7BC);
    fn_8026B3B4(lbl_8035B7BC);
    if (p->f328 != 0) {
        p->f328 = 0;
        if (p->f32c == 0) fn_8026B7CC(lbl_8035B7BC, lbl_80365AE4);
        p->f32c = 0;
    }
    p->f294 = lbl_80365A70;
    p->f290 = lbl_80365A70;
    p->f29c = 0;
    p->f2a0 = 0;
    p->f298 = 0;
    p->f284 = 0;
    if (strncmp(p->q->fc4[p->q->fd8], lbl_802A8268, 8) != 0) p->f280 = 1;
}

} /* extern "C" */
