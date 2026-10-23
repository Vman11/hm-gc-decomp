// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_8018EF7C(void *);
void fn_8018F3D4(void *);
void fn_800F9638(void *);
void __dla__FPv(void *);
} /* extern "C" */
struct V8017F818 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
};
#define F(o, T) (*(T *)(p + (o)))
#define VC(o) ((V8017F818 *)(p + (o)))->v1()
extern "C" {
void fn_8017F818(u8 *p) {
    if (F(596, u8 *)) __dla__FPv(F(596, u8 *));
    if (F(592, u8 *)) { if (F(592, u8 *)) __dla__FPv(F(592, u8 *) - 16); }
    fn_8018EF7C(p + 548);
    fn_8018EF7C(p + 540);
    fn_8018F3D4(p + 528);
    fn_800F9638(p + 504);
    VC(468);
    VC(408);
    VC(228);
    VC(348);
    VC(288);
    fn_800F9638(p + 204);
    VC(168);
    fn_800F9638(p + 144);
    VC(48);
    VC(108);
    fn_800F9638(p + 84);
    F(4, u32) = 0;
    F(8, u32) = 0;
    F(12, u32) = 0;
    F(16, u32) = 0;
    F(20, u32) = 0;
    F(556, u32) = 1;
    F(584, u32) = 0;
    F(588, u32) = 0;
    F(560, u32) = 0;
    F(576, u32) = 0;
    F(580, u32) = 0;
    F(592, u32) = 0;
    F(596, u32) = 0;
    F(600, u32) = 0;
    F(608, u32) = 0;
    F(604, u32) = 0;
    F(612, u32) = 0;
    F(616, u32) = 0;
}

} /* extern "C" */
