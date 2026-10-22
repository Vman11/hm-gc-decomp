// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Mgr {
    u8 pad[172];
    s32 f172;
    u8 pad2[192 - 176];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void *get(void *);
};
struct Y { u8 pad[12]; void *f12; };
struct Obj { u8 pad[2944]; s32 f2944; };
extern "C" {
extern Mgr *lbl_8035B684;
extern void * volatile lbl_8035A0A4;
extern void *lbl_8035B478[2];
extern const char lbl_8035BDC0[8];
extern const char lbl_8035BDC8[6];
extern u8 lbl_80357740[0x10C];
void fn_8003D518(void *, void **, volatile s32 *);
void fn_8002FD3C(Mgr *);
void *fn_800F8274(void *, const char *);
Y *fn_80110AA4(void *, const char *);
void __dla__FPv(void *);

void fn_800323C4(Obj *a, void *b) {
    void *r;
    if (lbl_8035B684->f172 != 0) {
        void *p;
        volatile s32 n = 0;
        fn_8003D518(lbl_8035A0A4, &p, &n);
        __dla__FPv(p);
    }
    a->f2944 = 1;
    fn_8002FD3C(lbl_8035B684);
    r = lbl_8035B684->get(b);
    fn_80110AA4(fn_800F8274(lbl_8035B478[0], lbl_8035BDC0), lbl_8035BDC8)->f12 = r;
    lbl_80357740[0] = 0;
}

} /* extern "C" */
