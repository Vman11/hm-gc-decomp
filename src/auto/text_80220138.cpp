// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct wA_T { virtual void v0(); virtual void v1(); virtual s32 get(); };
struct wA_F { u32 size; u8 pad4[0xc]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void seek(u32 pos); };
struct C80215414 { u32 a; wA_F *file; C80215414(); ~C80215414(); };
struct C80102660 { u8 b[0x4c]; C80102660(); ~C80102660(); };
struct wA_Src { virtual void *get(); };
struct wA_Info { u32 v[30]; };
extern const char lbl_803659E8[4];
extern const char lbl_803659EC[6];
extern void *lbl_8035A9F4;
extern void *lbl_8035B260;
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
s32 fn_80215284(C80215414 *f, const char *name, const char *ext, s32 m);
void fn_80060E30(s32 r, const char *fmt, ...);
s32 fn_80215154(C80215414 *f, void *buf, s32 n, s32 z);
s32 fn_802151F4(C80215414 *f, void *buf, u32 n, s32 z, wA_T **t);
void fn_80215110(C80215414 *f, wA_T *t);
void fn_8021E18C(void *a, wA_Info *info, void *b);
void fn_800F8E38(u8 *p, u32 n);
void fn_800F87F0(u8 *p, u8 *a, C80102660 *e);
void fn_80102234(C80102660 *e, u8 *p, u8 *b);
void fn_80215230(C80215414 *f);

inline s32 wA_rd(C80215414 *f, void *buf, u32 n, wA_T *&t) {
    s32 r = fn_802151F4(f, buf, n, 0, &t);
    if (r == 7) {
        r = t->get();
        fn_80215110(f, t);
    }
    return r;
}

void fn_80220138(u8 *p, wA_Src *src, const char *name) {
    wA_T *t;
    C80215414 f;
    u8 hdr[0x10];
    wA_Info info;
    s32 r;
    u8 *buf;

    if ((r = fn_80215284(&f, name, lbl_803659E8, 2)) != 0) {
        fn_80060E30(r, lbl_803659EC, name, lbl_803659E8);
    }
    if ((r = fn_80215154(&f, hdr, 0x10, 0)) != 0) {
        fn_80060E30(r, lbl_803659EC, name, lbl_803659E8);
    }
    if ((r = fn_80215154(&f, &info, 0x78, 0)) != 0) {
        fn_80060E30(r, lbl_803659EC, name, lbl_803659E8);
    }
    f.file->seek((f.file->size + 3) & ~3);
    if (lbl_8035A9F4 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035A9F4);
    buf = new u8[info.v[0]];
    fn_800F7E98();
    if (buf == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if ((r = wA_rd(&f, buf, info.v[0], t)) != 0) {
        fn_80060E30(r, lbl_803659EC, name, lbl_803659E8);
    }
    if (lbl_8035B260 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B260);
    *(u8 **)(p + 0x4c) = new u8[info.v[7]];
    fn_800F7E98();
    if (*(u8 **)(p + 0x4c) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if ((r = wA_rd(&f, *(u8 **)(p + 0x4c), info.v[7], t)) != 0) {
        fn_80060E30(r, lbl_803659EC, name, lbl_803659E8);
    }
    *(wA_Src **)(p + 0x14) = src;
    *(void **)(p + 0x18) = src->get();
    fn_8021E18C(*(void **)(p + 0x18), &info, *(u8 **)(p + 0x4c));
    *(u32 *)(p + 0x30) = info.v[8];
    *(u32 *)(p + 0x34) = info.v[10];
    *(u32 *)(p + 0x38) = info.v[12];
    *(u32 *)(p + 0x3c) = info.v[14];
    *(u32 *)(p + 0x40) = info.v[16];
    *(u32 *)(p + 0x48) = info.v[1];
    *(u8 **)(p + 0x1c) = *(u8 **)(p + 0x4c) + info.v[9];
    *(u8 **)(p + 0x20) = *(u8 **)(p + 0x4c) + info.v[11];
    *(u8 **)(p + 0x24) = *(u8 **)(p + 0x4c) + info.v[13];
    *(u8 **)(p + 0x28) = *(u8 **)(p + 0x4c) + info.v[15];
    *(u8 **)(p + 0x2c) = *(u8 **)(p + 0x4c) + info.v[17];
    if (lbl_8035B260 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B260);
    *(C80102660 **)(p + 0x44) = new C80102660[*(u32 *)(p + 0x48)];
    fn_800F7E98();
    if (*(void **)(p + 0x44) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_800F8E38(p, *(u32 *)(p + 0x48));
    {
        u32 i;
        u32 off;
        u8 *a = buf + info.v[2];
        u8 *b = buf + info.v[3];
        for (i = 0, off = 0; i < *(u32 *)(p + 0x48); i++) {
            fn_800F87F0(p, a, (C80102660 *)(*(u8 **)(p + 0x44) + off));
            fn_80102234((C80102660 *)(*(u8 **)(p + 0x44) + off), p, b);
            off += 0x4c;
            a += 8;
            b += 0x60;
        }
    }
    delete[] buf;
    fn_80215230(&f);
}

} /* extern "C" */
