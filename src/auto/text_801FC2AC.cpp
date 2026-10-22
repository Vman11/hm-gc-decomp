// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B130;
extern char lbl_80365604[4];
extern char lbl_80365608[6];

struct C80215F50 {
    u8 pad[36];
    void *x24;
    u8 *x28;
    u32 x2c;
    u8 pad2[8];
    C80215F50();
    ~C80215F50();
};

void *fn_80215C84(C80215F50 *f, char *name, char *ext, s32 mode, s32 x);
void fn_800E8F6C(char *buf, char *fmt, ...);
void fn_80060E30(void *r, ...);
void fn_80207A54(void *a, void *b);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
u32 strlen(const char *);
void *__nwa__FUl(u32);
void fn_800EB764(char *dst, char *src);
void fn_801FC3F8(u8 *p, void *q, u32 x);
void fn_802079F0(void *a, s32 b);
void fn_80215BFC(C80215F50 *f);

void fn_801FC2AC(u8 *p, void *q, char *name)
{
    C80215F50 f;
    char buf[128];
    void *r;
    char *s;

    r = fn_80215C84(&f, name, lbl_80365604, 2, 0);
    if (r != 0) {
        fn_800E8F6C(buf, lbl_80365608, name, lbl_80365604);
        fn_80060E30(r, buf);
    }
    fn_80207A54(f.x24, *(void **)(f.x28 + 12));
    s = *(char **)(f.x28 + 12);
    if (lbl_8035B130 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B130);
    *(char **)(p + 28) = (char *)__nwa__FUl(strlen(s) + 1);
    fn_800F7E98();
    if (*(char **)(p + 28) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_800EB764(*(char **)(p + 28), s);
    fn_801FC3F8(p, q, f.x2c);
    fn_802079F0(f.x24, 0);
    fn_80215BFC(&f);
}

} /* extern "C" */
