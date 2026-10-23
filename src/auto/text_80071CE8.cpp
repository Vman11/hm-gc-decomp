// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
/* the four literals below are the TU string pool lbl_80298020 (.rodata 0x80298020-0x80298060) */
extern char lbl_8035F3A8[5];
extern char lbl_8035F3B0[5];
extern char lbl_8035F3B8[5];
extern char lbl_8035F3C0[5];
extern char lbl_8035F3C8[7];
typedef struct G80071CE8 { u8 pad[12]; u8 *f12; } G80071CE8;
extern G80071CE8 *lbl_8035B460;
void *fn_800F9398(void *tbl, char *name);
void *fn_8019565C(void *o);
void *fn_80248EAC(char *a, const char *b, const char *c);
void fn_8023F214(void *p);

static inline void *conv(void *t) {
    if (t) return fn_8019565C(t);
    return t;
}
typedef struct S80071CE8 {
    u8 pad[224];
    u32 f224;
    u8 pad2[52];
    u32 f280;
    void *f284;
    void *f288;
    void *f292;
    void *f296;
    u32 f300;
    void *f304;
    void *f308;
    void *f312;
} S80071CE8;

void fn_80071CE8(S80071CE8 *p) {
    void *t;
    t = fn_800F9398(lbl_8035B460->f12 + 12496, lbl_8035F3A8);
    p->f284 = conv(t);
    t = fn_800F9398(lbl_8035B460->f12 + 12496, lbl_8035F3B0);
    p->f288 = conv(t);
    t = fn_800F9398(lbl_8035B460->f12 + 12496, lbl_8035F3B8);
    p->f292 = conv(t);
    t = fn_800F9398(lbl_8035B460->f12 + 12496, lbl_8035F3C0);
    p->f296 = conv(t);
    p->f304 = fn_80248EAC(lbl_8035F3C8, "MContact", "WalkThreshold");
    p->f308 = fn_80248EAC(lbl_8035F3C8, "MContact", "JogThreshold");
    p->f312 = fn_80248EAC(lbl_8035F3C8, "MContact", "RunThreshold");
    p->f280 = p->f224;
    fn_8023F214(p);
}

} /* extern "C" */
