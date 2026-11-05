#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual u32 v5(); };
struct V7 { u8 pad[28]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void f(int); };
extern char lbl_80366D98[2];
extern char lbl_80366D9C[2];
extern void *lbl_8035B7BC;
void fn_800FB000(R *, int);
u32 fn_800FADA8(R *);
void fn_800FAEF8(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, char *);
void fn_800F6E40(char *, char *);
char *strcat(char *, const char *);
void fn_800F6FBC(char *, char *);
V7 *fn_8026D254(void *, char *);
#define V5(r) ((r)->v5())
void fn_802692F4(u8 *p, R *r) {
    char b24[24];
    char b16[8];
    char b8[8];
    u32 k; u32 n; u8 *e; u8 *q; u32 i;


    if (V5(r) != 0) {
        F(r,4,int) = 1;
        fn_800FB000(r, 58);
        n = fn_800FADA8(r);
        for (k = 0; k < n; k++) {
    fn_800FB000(r, 59);
    i = 0;
    switch (V5(r)) {
    case 60: i = 0; break;
    case 61: i = 1; break;
    case 62: i = 2; break;
    case 63: i = 3; break;
    case 64: i = 4; break;
    case 65: i = 5; break;
    case 66: i = 6; break;
    case 67: i = 7; break;
    case 68: i = 8; break;
    case 69: i = 9; break;
    case 70: i = 10; break;
    case 71: i = 11; break;
    case 73: i = 12; break;
    case 74: i = 13; break;
    case 75: i = 14; break;
    }
    fn_800FAEF8(r);
    u32 t = V5(r);
    e = p + i * 88;
    while (t != 6) {
        switch (t) {
        case 72:
            F(e,24,u32) = fn_800FADA8(r);
            for (i = 0, q = e; i < F(e,24,u32); q += 4, i++) {
                fn_800FB064(r, b16);
                fn_800F6E40(b24, b16);
                strcat(b24, lbl_80366D98);
                fn_800F6FBC(b24, b8);
                F(q,28,V7*) = fn_8026D254(lbl_8035B7BC, b8);
                fn_800F6E40(b24, b16);
                strcat(b24, lbl_80366D9C);
                fn_800F6FBC(b24, b8);
                F(q,68,V7*) = fn_8026D254(lbl_8035B7BC, b8);
                if (F(q,28,V7*)) {
                    if (F(e,20,int) == 1) F(q,28,V7*)->f(-1);
                    else F(q,28,V7*)->f(0);
                }
                if (F(q,68,V7*)) {
                    if (F(e,20,int) == 1) F(q,68,V7*)->f(-1);
                    else F(q,68,V7*)->f(0);
                }
            }
            fn_800FAEA0(r);
            break;
        }
        t = V5(r);
    }
        }
        fn_800FAEA0(r);
    }
}

} /* extern "C" */
