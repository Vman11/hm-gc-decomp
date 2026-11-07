#include "common.h"

struct C80210CEC { C80210CEC(); ~C80210CEC(); u8 b[8]; };
struct C80201630 {
    u8 pad[0x60];
    s32 n;
    u32 off[4];
    u32 idx[4];
    u8 pad84[0xe0 - 0x84];
    C80201630();
    ~C80201630();
};

extern "C" {

struct Hdr { u32 a, b, n1c, n20, c, d, size; };
struct Heap { u8 pad[24]; u32 a; u32 b; };
struct X { u8 pad[0xc]; u32 fc; };
struct T {
    u8 pad0[8];
    u32 f8;
    u8 padc[4];
    u32 f10;
    u32 f14;
    u32 f18;
    u8 pad1c[4];
    u8 *f20;
    C80201630 *f24;
    u8 *f28;
};
extern char lbl_80365748[4];
extern Heap *lbl_8035A9F4;
extern Heap *lbl_8035B180;
void OSEnableInterrupts(void);
X *fn_80203EE0(u32);
s32 fn_80210ABC(C80210CEC *, T *, char *, s32);
void fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);
u8 *fn_802077F8(u32);
void fn_80207510(u8 *, u8 *, u32);
void fn_800BAA78(u8 *, u8 *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);

static inline u32 rup(u32 x) { return (x + 31) & ~31; }
static inline void hmode(Heap *h) {
    if (h->a >= 5) h->b = h->a;
    else h->b = 5;
}

static inline u8 *nb8() { return new u8[0x8000]; }

void fn_80203860(T *t, u32 id) {
    Hdr hdr;
    u32 n;
    OSEnableInterrupts();
    C80210CEC rd;
    X *x;
    t->f18 = id;
    x = fn_80203EE0(t->f18);
    if (t->f8 & 0x80) {
        u32 i;
        u32 o;
        s32 j;
        s32 *done;
        if (fn_80210ABC(&rd, t, lbl_80365748, 2)) return;
        fn_802108B4(&rd, &hdr, 0x1c, &n);
        hmode(lbl_8035B180);
        if (lbl_8035B180 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B180);
        t->f24 = new C80201630[hdr.n1c];
        fn_800F7E98();
        if (t->f24 == 0) fn_800604C4(-4, 0, 0, 0);
        t->f14 = hdr.n1c;
        for (i = 0; i < hdr.n1c; i++)
            fn_802108B4(&rd, &t->f24[i], 0xe0, &n);
        if (lbl_8035B180 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B180);
        t->f28 = new u8[hdr.n20 * 0x60];
        fn_800F7E98();
        if (t->f28 == 0) fn_800604C4(-4, 0, 0, 0);
        fn_802108B4(&rd, t->f28, hdr.n20 * 0x60, &n);
        t->f10 = rup(hdr.size);
        t->f20 = fn_802077F8(t->f10);
        if (hdr.size > 0x8000) {
            s32 rem = t->f10;
            u8 *dst = t->f20;
            u8 *buf;
            lbl_8035B180->b = lbl_8035B180->a;
            hmode(lbl_8035A9F4);
            if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            buf = nb8();
            fn_800F7E98();
            if (buf == 0) fn_800604C4(-4, 0, 0, 0);
            lbl_8035A9F4->b = lbl_8035A9F4->a;
            while (rem > 0) {
                fn_802108B4(&rd, buf, 0x8000, &n);
                rem -= n;
                if (!n % 32) n = rup(n);
                fn_80207510(dst, buf, n);
                dst += n;
            }
            delete[] buf;
        } else {
            u8 *buf;
            lbl_8035B180->b = lbl_8035B180->a;
            hmode(lbl_8035A9F4);
            if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            buf = new u8[t->f10];
            fn_800F7E98();
            if (buf == 0) fn_800604C4(-4, 0, 0, 0);
            lbl_8035A9F4->b = lbl_8035A9F4->a;
            fn_802108B4(&rd, buf, hdr.size, &n);
            fn_80207510(t->f20, buf, t->f10);
            delete[] buf;
        }
        if (lbl_8035B180 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B180);
        done = new s32[hdr.n20];
        fn_800F7E98();
        if (done == 0) fn_800604C4(-4, 0, 0, 0);
        {
        u32 z;
        for (z = 0; z < hdr.n20; z++) done[z] = 0;
        }
        {
        for (o = 0; o < hdr.n1c; o++) {
            for (j = 0; j < t->f24[o].n; j++) {
                u32 k = t->f24[o].idx[j];
                if (!done[k]) {
                    fn_800BAA78(t->f28 + k * 0x60, t->f20 + t->f24[o].off[j], x->fc);
                    done[t->f24[o].idx[j]] = 1;
                }
            }
        }
        }
        delete[] done;
        fn_80210938(&rd);
    }
}

}
