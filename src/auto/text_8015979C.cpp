// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800E1F04(void *, void *, u32, u32);
void __dl__FPv(void *);
void __dt__9C80170688Fv(void *);
void __dt__9C801768A4Fv(void *);
} /* extern "C" */
struct VA8015979C {
    u8 pad[8];
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct VB8015979C {
    u8 pad[68];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
struct VC8015979C {
    u8 pad[12];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};
#define F(o, T) (*(T *)(p + (o)))
extern "C" {
void fn_8015979C(u8 *p) {
    u8 *n;
    u8 *next;
    ((VA8015979C *)(p + 48))->v2();
    ((VA8015979C *)(p + 76))->v2();
    for (n = F(28, u8 *); n != 0; n = next) {
        next = *(u8 **)(n + 232);
        ((VB8015979C *)n)->v4();
        ((VB8015979C *)(n + 112))->v4();
        if (n != 0) {
            fn_800E1F04(n, (void *)__dt__9C80170688Fv, 112, 2);
            __dl__FPv(n);
        }
    }
    for (n = F(8, u8 *); n != 0; n = next) {
        next = *(u8 **)(n + 216);
        ((VC8015979C *)n)->v4();
        ((VC8015979C *)(n + 104))->v4();
        if (n != 0) {
            fn_800E1F04(n, (void *)__dt__9C801768A4Fv, 104, 2);
            __dl__FPv(n);
        }
    }
    F(4, u32) = 0;
    F(8, u32) = 0;
    F(12, u32) = 0;
    F(16, u32) = 0;
    F(20, u32) = 0;
    F(24, u32) = 0;
    F(28, u32) = 0;
    F(32, u32) = 0;
    F(16, u32) = 0;
    F(20, u32) = 0;
    F(44, u32) = 0;
    F(104, u32) = 0;
    F(108, u32) = 0;
    F(112, u32) = 0;
    F(116, u32) = 0;
    F(120, u32) = 0;
}

} /* extern "C" */
