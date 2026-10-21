// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual s32 next(); };
class T12 { public: s32 b; s32 a; s32 c; private: u32 dummy[0]; };
struct P { s32 h; u8 sub[0x50]; T12 *arr; void *e; u32 na; u32 n; u32 cntA; };
extern "C" { void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AB48; }

void __dt__9C8011C224Fv(void);

/* vtable */
void *lbl_802E3E18[3] = {
    0, 0, (void *)__dt__9C8011C224Fv
};

extern "C" void fn_8011BA1C(P *p, R *r) {
    BOOL f;
    s32 c;
    s32 b;
    s32 a;
    u32 m;
    u32 i;
    s32 k;
    if (p->na != 0) {
        if (!lbl_8035AB48) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB48);
        p->arr = new T12[p->na];
        fn_800F7E98();
        if (!p->arr) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->na >> 1; i++) {
            fn_800FB000(r, 59);
            fn_800FAEF8(r);
            a = 0;
            b = 0;
            c = 1;
            f = FALSE;
            m = 8;
            while ((u32)(k = r->next()) != 6) {
                switch (k) {
                case 61:
                    b = r->next();
                    if (b < 0x10000000) {
                        r->err(30);
                    }
                    break;
                case 63:
                    a = r->next();
                    if (a < 0x10000000) {
                        r->err(30);
                    }
                    break;
                case 65:
                    switch (k = r->next()) {
                    case 70: c = 2; break;
                    case 71: c = 3; break;
                    case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
                        c = k + 4024;
                        break;
                    default: r->err(30); break;
                    }
                    break;
                case 66:
                    switch (r->next()) {
                    case 71: f = TRUE; break;
                    case 70: break;
                    default: r->err(30); break;
                    }
                    break;
                case 67:
                    m = r->next() - 72;
                    break;
                default:
                    r->err(30);
                    break;
                }
            }
            if (b == 0 || a == 0) {
                r->err(30);
            }
            if (f) {
                a |= 0x10000;
            }
            if (m != 8) {
                a |= k << 16;
            }
            p->arr[p->cntA].b = b;
            p->arr[p->cntA].a = a;
            p->arr[p->cntA].c = c;
            p->cntA++;
            p->arr[p->cntA].b = b;
            p->arr[p->cntA].a = a;
            p->arr[p->cntA].c = 0;
            p->cntA++;
        }
        fn_800FAEA0(r);
    }
}

} /* extern "C" */
