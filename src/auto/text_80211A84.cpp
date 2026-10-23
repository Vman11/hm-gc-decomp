// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VF_80211A84 { u8 pad[16]; virtual void v0(); virtual void v1(); virtual s32 open(u8 *, char *, s32); };
struct VA_80211A84 { virtual void v0(); virtual void v1(); virtual VF_80211A84 *alloc(); virtual void release(VF_80211A84 *); };
void fn_80207E5C(u8 *);
s32 fn_80207CDC(u8 *, char *, s32, char *);
void fn_80060568(const char *, s32, s32, s32);

s32 fn_80211A84(u8 *p, char *path, s32 mode, VF_80211A84 **out) {
    char buf[268];
    s32 r;
    VF_80211A84 *f;
    if (*(void **)(p + 1724) == 0) {
        return 3;
    }
    fn_80207E5C(p);
    if (fn_80207CDC(p, buf, 268, path) == 0) {
        fn_80060568("AtIoWinFileSystem::eOpen:  relative path name too long!\n", 0, 0, 0);
    }
    f = (*(VA_80211A84 **)(p + 1760))->alloc();
    if (f == 0) {
        return 3;
    }
    r = f->open(p + 128, buf, mode);
    if (r != 0) {
        (*(VA_80211A84 **)(p + 1760))->release(f);
        *out = 0;
        return r;
    }
    (*(u32 *)(p + 1700))++;
    if (*(u32 *)(p + 1700) > *(u32 *)(p + 1708)) {
        *(u32 *)(p + 1708) = *(u32 *)(p + 1700);
    }
    *out = f;
    return 0;
}

struct C8021452C { u8 b[0x3c]; C8021452C(); };
struct C80210418 { u8 b[0x34]; C80210418(); };
struct C8021AE88 { u8 b[0x38]; C8021AE88(); ~C8021AE88(); };
extern void *lbl_802EFF28[];
struct wA_SV {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void init();
};
struct wA_D : C8021AE88 {
    wA_D() {
        *(void **)this = lbl_802EFF28;
        ((wA_SV *)this)->init();
    }
};
struct wA_H { virtual ~wA_H(); virtual void attach(void *o); };
struct wA_T { virtual void v0(); virtual void v1(); virtual s32 get(); };
struct wA_F {
    u8 pad[0x10];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual s32 read(u8 *buf, s32 n, s32 z, wA_T **t);
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void drop(wA_T *t);
};
struct wA_S {
    u8 pad[0x6b4];
    u32 f6b4;
    virtual void v0(); virtual s32 open(void *b, s32 m, wA_F **f); virtual void v2(); virtual void close(wA_F *f);
};
extern void *lbl_8035B1D8;
extern void *lbl_8035B1E0;
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_802122C4(void *p);
void fn_802114B4(u8 *p);
void fn_802114FC(u8 *p);
s32 fn_802160B8(void *a, void *b, wA_S **out);
void fn_80212304(void *p, u8 *buf);

inline s32 wA_rd(u8 *p, u8 *buf, s32 n) {
    wA_T *t;
    s32 r = (*(wA_F **)(p + 0x6e4))->read(buf, n, 0, &t);
    if (r == 7) {
        r = t->get();
        (*(wA_F **)(p + 0x6e4))->drop(t);
    }
    return r;
}

void fn_80211BB4(u8 *p, void *a, void *b) {
    u8 buf[0x20];
    s32 r;

    if (*(u32 *)(p + 0x6bc) != 0) {
        if (*(wA_H **)(p + 0x6e0) != 0) {
            delete *(wA_H **)(p + 0x6e0);
        }
        if (*(wA_F **)(p + 0x6e4) != 0) {
            (*(wA_S **)(p + 0x6e8))->close(*(wA_F **)(p + 0x6e4));
        }
        fn_802122C4(p + 0x6bc);
        *(u32 *)(p + 0x6e0) = 0;
        *(u32 *)(p + 0x6e4) = 0;
        *(u32 *)(p + 0x6e8) = 0;
        fn_802114B4(p);
    }
    if (a == 0) {
        fn_80060568("AtIoJamFileSystem::vInit:  nMaxOpen has to be greater than zero!\n", 0, 0, 0);
    }
    fn_802114FC(p);
    *(void **)(p + 0x6a8) = a;
    *(u32 *)(p + 0x6a0) = 5;
    if (fn_802160B8(lbl_8035B1D8, b, (wA_S **)(p + 0x6e8)) != 0) {
        fn_80060568("AtIoJamFileSystem::vInit:  unable to find the Jam File!\n", 0, 0, 0);
    }
    if ((*(wA_S **)(p + 0x6e8))->open(b, 2, (wA_F **)(p + 0x6e4)) != 0) {
        fn_80060568("AtIoJamFileSystem::vInit:  unable to open the Jam File!\n", 0, 0, 0);
    }
    r = wA_rd(p, buf, 0x20);
    if (r != 0) {
        fn_80060568("AtIoJamFileSytem::vInit:  unable to read the info header!\n", 0, 0, 0);
    }
    fn_80212304(p + 0x6bc, buf);
    switch (*(s32 *)(p + 0x6bc)) {
    case 1:
        if (lbl_8035B1E0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B1E0);
        *(C8021452C **)(p + 0x6e0) = new C8021452C;
        fn_800F7E98();
        if (*(void **)(p + 0x6e0) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        break;
    case 2:
        if (lbl_8035B1E0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B1E0);
        *(C80210418 **)(p + 0x6e0) = new C80210418;
        fn_800F7E98();
        if (*(void **)(p + 0x6e0) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        break;
    case 3:
        if (lbl_8035B1E0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B1E0);
        *(C8021AE88 **)(p + 0x6e0) = new C8021AE88;
        fn_800F7E98();
        if (*(void **)(p + 0x6e0) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        break;
    case 4:
        if (lbl_8035B1E0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B1E0);
        *(wA_D **)(p + 0x6e0) = new wA_D;
        fn_800F7E98();
        if (*(void **)(p + 0x6e0) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        break;
    default:
        fn_80060568("AtIoJamFileSystem::vInit:  invalid Jam token, is the specified file really a Jam File?\n", 0, 0, 0);
        break;
    }
    (*(wA_H **)(p + 0x6e0))->attach(p);
    *(u32 *)(p + 0x6b4) = (*(wA_S **)(p + 0x6e8))->f6b4;
}

} /* extern "C" */
