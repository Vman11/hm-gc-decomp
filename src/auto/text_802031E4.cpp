// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct C80210CEC {
    u8 b[0xc];
    C80210CEC();
    ~C80210CEC();
};
struct FileInfo { u8 pad[4]; u32 size; };
struct Rd { u8 pad[4]; FileInfo *fi; };
struct Heap { u8 pad[24]; u32 a; u32 b; };
struct Snd0 { u8 pad[12]; u32 f12; };
struct Snd { Snd0 *p0; u8 *p4; u8 *p8; void *p12; u32 f16; u8 pad[6]; u8 flags; };
extern char lbl_80365740[4];
extern char lbl_80365744[4];
extern char lbl_802A67D8[];
extern Heap *lbl_8035A9F4;
extern Heap *lbl_8035B178;
s32 fn_80210ABC(C80210CEC *, char *, char *, s32);
void fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);
u8 *fn_802077F8(u32);
void fn_80207510(u8 *, u8 *, u32);
void fn_800BAA78(u8 *, u8 *, u32);
void *fn_800BAC18(u8 *, s32);
void fn_800E91D0(const char *, ...);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(Heap *);
void fn_800F7E98(void);

static inline u32 rup(u32 x) { return (x + 31) & ~31; }
static inline void hmode(Heap *h) {
    if (h->a >= 5) h->b = h->a;
    else h->b = 5;
}

s32 fn_802031E4(Snd *s, char *path) {
    u32 n;
    C80210CEC rd;
    u32 asz;
    s32 size;
    if ((s->flags & 1) && (s->flags & 2)) return 0;
    size = fn_80210ABC(&rd, path, lbl_80365740, 2);
    if (size) return size;
    {
        u32 len = ((Rd *)&rd)->fi->size;
        asz = rup(len);
        size = len;
        s->p8 = fn_802077F8(asz);
        if (size <= 0x40000) {
            u8 *buf;
            hmode(lbl_8035A9F4);
            if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035A9F4);
            buf = new u8[asz];
            fn_800F7E98();
            if (buf == 0) fn_800604C4(-4, 0, 0, 0);
            lbl_8035A9F4->b = lbl_8035A9F4->a;
            fn_802108B4(&rd, buf, size, &n);
            fn_80210938(&rd);
            if (s->p8) {
                fn_80207510(s->p8, buf, asz);
                s->flags |= 2;
                s->f16 = size;
                delete[] buf;
            } else {
                delete[] buf;
                return 6;
            }
        } else {
            u8 *t = s->p8;
            s32 rem = size;
            u8 *dst = t;
            if (t) {
                u8 *buf;
                hmode(lbl_8035A9F4);
                if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035A9F4);
                buf = new u8[0x40000];
                fn_800F7E98();
                if (buf == 0) fn_800604C4(-4, 0, 0, 0);
                lbl_8035A9F4->b = lbl_8035A9F4->a;
                while (rem > 0) {
                    fn_802108B4(&rd, buf, 0x40000, &n);
                    fn_80207510(dst, buf, (n & 31) ? rup(n) : n);
                    rem -= n;
                    dst += n;
                }
                delete[] buf;
            } else {
                return 6;
            }
            fn_80210938(&rd);
        }
    }
    size = fn_80210ABC(&rd, path, lbl_80365744, 2);
    if (size) return size;
    {
        size = ((Rd *)&rd)->fi->size;
        hmode(lbl_8035B178);
        if (lbl_8035B178 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B178);
        s->p4 = new u8[size];
        fn_800F7E98();
        if (s->p4 == 0) fn_800604C4(-4, 0, 0, 0);
        lbl_8035B178->b = lbl_8035B178->a;
        fn_802108B4(&rd, s->p4, size, &n);
        fn_80210938(&rd);
    }
    fn_800BAA78(s->p4, s->p8, s->p0->f12);
    s->p12 = fn_800BAC18(s->p4, 0);
    if (s->p12 == 0) fn_800E91D0(lbl_802A67D8);
    s->flags |= 1;
    return 0;
}
}

} /* extern "C" */
