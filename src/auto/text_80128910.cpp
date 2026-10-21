// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0xC]; s32 ival; u8 pad10[4]; char str[0x110]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct G { u32 x0; u16 ch; u8 pad6[8]; u8 sp; u8 nl; };
struct P { u8 pad[8]; u32 flags; u32 n; u8 pad10[8]; u32 *max; u8 pad1C[0x1C]; u32 idx; u8 pad3C[0x14]; u32 mode; G *g; u8 r, gg, b; };
extern "C" { u32 fn_800FB33C(R *); u32 fn_800FADA8(R *); void fn_800FAEA0(R *); u32 strlen(const char *); void *memset(void *, int, u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_8012D280(P *, void *, R *); extern void *lbl_8035AB78; extern u32 lbl_80363E20; }
void *__nwa__FUl(u32);

extern "C" void fn_80128910(P *p, void *x, R *r, u32 k) {
    char *s;
    u32 i;
    u32 j;
    u32 len;
    switch (k) {
    case 59:
        p->idx = fn_800FB33C(r);
        if (p->idx >= *p->max) {
            r->err(35);
        }
        break;
    case 63:
        p->r = fn_800FB33C(r);
        p->gg = fn_800FB33C(r);
        p->b = fn_800FB33C(r);
        p->flags |= lbl_80363E20;
        break;
    case 64:
        if (p->g != 0) {
            r->err(39);
        }
        p->n = fn_800FADA8(r);
        if (!lbl_8035AB78) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AB78);
        p->g = (G *)__nwa__FUl(p->n * sizeof(G));
        fn_800F7E98();
        if (!p->g) fn_800604C4(-4, 0, 0, 0);
        memset(p->g, 0, p->n * sizeof(G));
        for (i = 0; i < p->n;) {
            switch (r->next()) {
            case 2:
                s = r->str;
                len = strlen(s);
                for (j = 0; j < len; j++) {
                    p->g[i].ch = s[j];
                    i++;
                }
                break;
            case 4:
                p->g[i].ch = r->ival;
                i++;
                break;
            default:
                r->err(3);
                break;
            }
        }
        fn_800FAEA0(r);
        for (i = 0; i < p->n; i++) {
            if ((s32)p->g[i].ch == ' ') {
                p->g[i].sp = 1;
            } else if ((s32)p->g[i].ch == '\n') {
                p->g[i].nl = 1;
            }
        }
        break;
    case 66: p->mode = 0x800; break;
    case 67: p->mode = 0; break;
    case 68: p->mode = 0x400; break;
    case 69: p->mode = 0xC00; break;
    case 72: p->mode = 0x1000; break;
    case 73: p->mode = 0x1800; break;
    case 74: p->mode = 0x1C00; break;
    default:
        fn_8012D280(p, x, r);
        break;
    }
}

} /* extern "C" */
