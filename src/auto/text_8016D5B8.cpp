// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S20_16D {
    u8 pad[0x20];
    virtual void w0();
    virtual void f();
};
struct S10_16D {
    u8 pad[0x10];
    virtual void w0();
    virtual void f();
};
struct S0_16D {
    virtual void w0();
    virtual void w1();
    virtual void f();
};
struct S1930_16D {
    u8 pad[0x1930];
    virtual void w0();
    virtual void w1();
    virtual void f();
};
struct D0_16D {
    virtual void f();
};
void fn_80218560(void *);
void fn_8017990C(void *);
void fn_80136040(void *);
void fn_80131C20(void *);
void fn_8016CC50(void *);
#define AT(t, o) ((t *)((u8 *)p + (o)))
#define PTR(o) (*(u8 **)((u8 *)p + (o)))

struct A16D { u8 pad[0x1f18]; u8 *arr[1]; };

static inline void Free16D(u8 *p) {
    u32 i;
    for (i = 0; i < *(u32 *)(p + 0x344); i++) {
        if (((A16D *)p)->arr[i]) {
            delete[] ((A16D *)p)->arr[i];
            ((A16D *)p)->arr[i] = 0;
        }
    }
}

void fn_8016D5B8(u8 *p) {
    AT(S20_16D, 0x3b8)->f();
    AT(S20_16D, 0x348)->f();
    Free16D(p);
    AT(S10_16D, 0x2a64)->f();
    fn_80218560(p + 0x27a0c);
    AT(S10_16D, 0x2a1c)->f();
    AT(S0_16D, 0x27b8)->f();
    AT(S1930_16D, 0x410)->f();
    fn_8017990C(p + 0xbf20);
    fn_8017990C(p + 0xbf10);
    fn_80136040(p);
    AT(S0_16D, 0x1f7b0)->f();
    AT(S0_16D, 0x36b0)->f();
    AT(S0_16D, 0x32a4)->f();
    if (PTR(0x2a7c)) delete PTR(0x2a7c);
    if (PTR(0x2a80)) delete PTR(0x2a80);
    if (PTR(0x2a84)) delete PTR(0x2a84);
    if (PTR(0x2a88)) delete PTR(0x2a88);
    if (PTR(0x2a90)) delete PTR(0x2a90);
    if (PTR(0x2a98)) delete PTR(0x2a98);
    if (PTR(0x2a78)) delete PTR(0x2a78);
    if (PTR(0x2a8c)) delete PTR(0x2a8c);
    fn_80131C20(p + 0x2998);
    AT(D0_16D, 0x29a0)->f();
    if (PTR(0x1f10)) delete[] PTR(0x1f10);
    fn_8016CC50(p);
}

} /* extern "C" */
