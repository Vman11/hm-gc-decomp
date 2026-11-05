#include "common.h"

extern "C" {

}
extern "C" unsigned long strlen(const char *);
extern "C" u16 lbl_8032E4B8[];
extern "C" u16 lbl_8032E4CC[];
extern "C" char *lbl_80359720;
extern "C" char *lbl_80359724;
static inline void a2w(const char *s, u16 *d) {
    while (*s) { *d = *s; s++; d++; } *d = 0;
}
struct S {
    u8 s0[0x14];
    u8 s14[0x14];
    virtual void v0();
    u32 f2c;
};
extern "C" void fn_800FB700(void *, u16 *, u32);
extern "C" void fn_80153FC0(void *, S *);
extern "C" void fn_80154354(S *p) {
    if (p->f2c != 0) {
        p->v0();
    }
    a2w(lbl_80359720, lbl_8032E4B8);
    fn_800FB700(p, lbl_8032E4B8, strlen(lbl_80359720) + 1);
    a2w(lbl_80359724, lbl_8032E4CC);
    fn_800FB700(p->s14, lbl_8032E4CC, strlen(lbl_80359720) + 1);
    fn_80153FC0(&p->f2c, p);
}
extern "C" {

} /* extern "C" */
