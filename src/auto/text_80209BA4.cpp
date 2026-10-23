// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u32 lbl_803657D0;
s32 fn_80208964(void *, u32, s32);
} /* extern "C" */
struct H80209BA4 {
    u8 pad[16];
    u32 f16;
};
struct C80209BA4 {
    H80209BA4 *f0;
    virtual void v0();
    virtual void v1();
    virtual void v2(u32);
};
#define F(o, T) (*(T *)(p + (o)))
static inline C80209BA4 *Find(u8 *p, u32 addr) {
    if (fn_80208964(p + 28, addr, 0)) return (C80209BA4 *)(p + 28);
    if (fn_80208964(p + 104, addr, 0)) return (C80209BA4 *)(p + 104);
    if (fn_80208964(p + 28, addr, 0)) return (C80209BA4 *)(p + 28);
    if (fn_80208964(p + 104, addr, 0)) return (C80209BA4 *)(p + 104);
    return 0;
}
extern "C" {
s32 fn_80209BA4(u8 *p, u32 addr) {
    u32 base;
    if (F(180, s32) != 0 && (F(8, volatile u32) & 0x10000)) {
        if (addr >= F(4, u32)) {
            F(8, volatile u32) |= lbl_803657D0;
            return 8;
        }
        F(8, volatile u32) &= ~0x20000;
        if (Find(p, addr) != 0) {
            F(0, u32) = addr;
            return 0;
        }
        base = addr & ~31;
        ((C80209BA4 *)(p + 28))->v2(base);
        if (((C80209BA4 *)(p + 104))->f0 != 0) {
            ((C80209BA4 *)(p + 104))->v2(base + ((C80209BA4 *)(p + 28))->f0->f16);
        }
        F(0, u32) = addr;
        return 0;
    }
    return 2;
}

} /* extern "C" */
