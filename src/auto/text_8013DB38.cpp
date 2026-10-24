// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct F {
    u32 pad0;
    u32 size;
    u8 pad8[8];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 seek(u32);
};
struct ST { u32 pad; F *f; };
struct P {
    u8 pad0[16];
    u32 h16;
    u32 w20;
    u32 pitch;
    u8 fmt[20];
    ST st;
    u8 pad56[1288];
    u32 rem;
    u8 pad1348[4];
    u32 off;
    u32 ncomp;
};
extern char lbl_8029FAB0[];
extern char lbl_8029FAC4[];
extern char lbl_8036430C[5];
s32 fn_802108B4(ST *, u8 *, u32, u32 *);
void fn_801485B4(P *, s32);
void fn_801486B4(P *, char *);
int strcmp(const char *, const char *);
void fn_80148288(u8 *, int, int, u32, u32, int, int);
void fn_80148210(u8 *, int, int, int, int);
void fn_80060568(char *, int, int, int);

void fn_8013DB38(P *p) {
    u32 got;
    u8 buf[20];
    s32 e;
    u16 len;
    u32 size, pos;
    if ((e = fn_802108B4(&p->st, buf, 20, &got)) != 0) fn_801485B4(p, e);
    if ((int)buf[0] != 0xFF) fn_801486B4(p, lbl_8029FAB0);
    if ((int)buf[1] != 0xD8) fn_801486B4(p, lbl_8029FAB0);
    if ((int)buf[2] != 0xFF) fn_801486B4(p, lbl_8029FAB0);
    if ((int)buf[3] != 0xE0) fn_801486B4(p, lbl_8029FAB0);
    len = buf[5] + (buf[4] << 8);
    if (strcmp(lbl_8036430C, (char *)&buf[6])) fn_801486B4(p, lbl_8029FAB0);
    size = p->st.f->size;
    p->off = len + 4;
    p->rem = size - p->off;
    for (pos = p->off; pos < size;) {
        u32 seg;
        if ((e = p->st.f->seek(pos)) != 0) fn_801485B4(p, e);
        if ((e = fn_802108B4(&p->st, buf, 10, &got)) != 0) fn_801485B4(p, e);
        seg = buf[3] + (buf[2] << 8);
        if ((int)buf[1] == 0xC0) {
            p->w20 = buf[6] + (buf[5] << 8);
            p->h16 = buf[8] + (buf[7] << 8);
            p->ncomp = buf[9];
            if (p->ncomp == 3) fn_80148288(p->fmt, 24, 255, 0xFF00, 0xFF0000, 0, 0);
            else fn_80148210(p->fmt, 8, 255, 0, 0);
            p->pitch = p->h16 * p->ncomp;
            return;
        }
        pos = seg + pos;
        pos += 2;
    }
    fn_80060568(lbl_8029FAC4, 0, 0, 0);
}

} /* extern "C" */
