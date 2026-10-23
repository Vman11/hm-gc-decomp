// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void v4(int); virtual u32 v5(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern void *lbl_8035ACB0;
extern char lbl_802A0100[];
extern char lbl_802A0144[];
void fn_800FB000(R *, int);
u32 fn_800FADA8(R *);
void fn_800FAEF8(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void fn_8014B14C(void *, void *, R *, void *);
void fn_8014AC64(void *, R *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80060568(char *, int, int, int);
void *memcpy(void *, const void *, unsigned long);
char *strcat(char *, const char *);
#pragma opt_loop_invariants off
void fn_8014A6C8(u8 *p, u8 *lib, R *r, void *d) {
    char m80[64];
    char m16[64];
    char b8[8];
    u32 t;
    u32 i;
    fn_800FB000(r, 59);
    fn_800FAEF8(r);
    while ((t = r->v5()) != 6) {
        switch (t) {
        case 63:
            F(p,4,u32) = fn_800FADA8(r);
            if (F(p,4,u32) > 8) r->v4(35);
            for (i = 0; i < F(p,4,u32); i++) {
                fn_800FB000(r, 63);
                fn_8014B14C(p + 8 + i * 16, lib, r, d);
            }
            fn_800FAEA0(r);
            break;
        case 60:
            fn_8014AC64(p, r);
            break;
        case 61:
            if (F(p,136,u32)) r->v4(39);
            F(p,136,u32) = fn_800FADA8(r);
            if (F(p,136,u32) < 1) r->v4(35);
            if (!lbl_8035ACB0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035ACB0);
            F(p,140,void**) = new void*[F(p,136,u32)];
            fn_800F7E98();
            if (!F(p,140,void**)) fn_800604C4(-4, 0, 0, 0);
            for (u32 j = 0; j < F(p,136,u32); j++) {
                fn_800FB064(r, b8);
                F(p,140,void**)[j] = fn_800F9398(lib + 756, b8);
                if (!F(p,140,void**)[j]) {
                    memcpy(m80, b8, 8);
                    m80[8] = 0;
                    strcat(m80, lbl_802A0100);
                    fn_80060568(m80, 0, 0, 0);
                }
            }
            fn_800FAEA0(r);
            break;
        case 62:
            fn_800FB064(r, b8);
            F(p,144,void*) = fn_800F9398(lib + 780, b8);
            if (!F(p,144,void*)) {
                memcpy(m16, b8, 8);
                m16[8] = 0;
                strcat(m16, lbl_802A0144);
                fn_80060568(m16, 0, 0, 0);
            }
            break;
        default:
            r->v4(1);
            break;
        }
    }
}
#pragma opt_loop_invariants reset

} /* extern "C" */
