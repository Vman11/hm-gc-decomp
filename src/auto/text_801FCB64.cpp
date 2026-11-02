// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S {
    u32 f0, f4, f8, f12;
    u8 pad[276];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void Error(int);
    virtual u32 Next();
};
struct R { u32 f0, f4, f8; };
struct P { char name[8]; u32 f8; u32 f12; R *f16; u32 f20; s32 f24; };
extern const u32 lbl_80365620, lbl_80365624, lbl_80365628, lbl_8036562C, lbl_80365630, lbl_80365634;
extern const u32 lbl_80365638, lbl_8036563C, lbl_80365640, lbl_80365644, lbl_80365648, lbl_8036564C, lbl_80365650;
extern u32 lbl_8035A9F4;
extern char lbl_802A65B0[];
void fn_800F6E88(P *, u32);
void fn_800FAEF8(S *);
void fn_800FB064(S *, char *);
u32 fn_800FB33C(S *);
R *fn_800F9398(u8 *, char *);
R *fn_800F9788(u8 *, char *, char *);
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
void fn_80060568(char *, int, int, int);
static inline R *Look(u8 *q, char *a, char *b) {
    if (b == 0 || *b == 0) return fn_800F9398(q + 12, a);
    return fn_800F9788(q + 36, b, a);
}
void fn_801FCB64(P *p, u8 *q, S *s, u32 x) {
    fn_800F6E88(p, x);
    fn_800FAEF8(s);
    u32 t;
    while ((t = s->Next()) != 6) {
        switch ((int)t) {
        case 59: p->f8 |= lbl_80365620; break;
        case 60: p->f8 |= lbl_80365624; break;
        case 61: p->f8 |= lbl_80365628; break;
        case 62: p->f8 |= lbl_8036562C; break;
        case 68: p->f8 |= lbl_80365630; break;
        case 69: p->f8 |= lbl_80365634; break;
        case 70: p->f8 |= lbl_80365648; break;
        case 65: p->f8 |= lbl_80365638; break;
        case 67: p->f8 |= lbl_8036564C; break;
        case 71: p->f8 |= lbl_80365650; break;
        case 63: {
            char a[8];
            char b[8];
            char *bp;
            p->f8 |= lbl_8036563C;
            fn_800FB064(s, a);
            fn_800FB064(s, b);
            {
                R *r;
                if (b == 0 || *b == 0) r = fn_800F9398(q + 12, a);
                else r = fn_800F9788(q + 36, b, a);
                p->f16 = r;
            }
            if (p->f16 == 0) {
                char *m;
                if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035A9F4);
                m = new char[72];
                fn_800F7E98();
                if (m == 0) fn_800604C4(-4, 0, 0, 0);
                strcpy(m, lbl_802A65B0);
                strcat(m, a);
                fn_80060568(m, 0, 0, 0);
                delete[] m;
            }
            if (p->f16->f8 & 2) p->f8 |= lbl_8036562C;
            if (p->f16->f8 & 4) p->f8 |= lbl_80365624;
            if (p->f16->f8 & 8) p->f8 |= lbl_80365638;
            if (p->f16->f8 & 0x80) p->f8 |= lbl_80365630;
            if (p->f16->f8 & 0x100) p->f8 |= lbl_80365640;
            if (p->f16->f8 & 0x200) p->f8 |= lbl_80365650;
            p->f20 = fn_800FB33C(s);
            switch ((int)s->Next()) {
            case 4: p->f24 = s->f12; break;
            case 64: p->f24 = -1; break;
            default: s->Error(5); break;
            }
            break;
        }
        case 66: p->f12 = fn_800FB33C(s); break;
        default: s->Error(30); break;
        }
    }
    p->f8 |= lbl_80365644;
}

} /* extern "C" */
