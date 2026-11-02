// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct V4 { f32 x, y, z, w; void set(f32 a, f32 b, f32 c, f32 d) { x = a; y = b; z = c; w = d; } };
struct Col { u8 r, g, b, a; };
struct Prog;
extern "C" {
extern V4 lbl_8032F718[];
void fn_80177D88(Prog *p, u32 reg, const Col &c) {
    lbl_8032F718[reg].set(c.r / 255.0f, c.g / 255.0f, c.b / 255.0f, c.a / 255.0f);
}

} /* extern "C" */
