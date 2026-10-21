// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef void (*FP8016C684)(void *, void *);
extern FP8016C684 lbl_803286D0[];
void fn_8012951C(void *p);
void fn_800BC02C(void *p, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
void fn_800BBF5C(void *p, f32 a, f32 b, f32 c, f32 d);
void fn_800D9CC8(void *p, s32 v);
extern u32 lbl_803646FC;
extern f32 lbl_80364700;

void fn_8016C684(u8 *p, u8 *q) {
    fn_8012951C(q);
    lbl_803286D0[0](M2C_FIELD(p, void **, 10884), M2C_FIELD(q, void **, 44));
    fn_8012951C(q);
    lbl_803286D0[93](M2C_FIELD(p, void **, 10888), M2C_FIELD(q, void **, 44));
    M2C_FIELD(p, s32 *, 10900) = 0;
    M2C_FIELD(p, s32 *, 10908) = 0;
    M2C_FIELD(p, s32 *, 0x279D8) += 1;
    if (M2C_FIELD(q, s32 *, 100) != 0) {
        fn_800BC02C(M2C_FIELD(p, void **, 10880), M2C_FIELD(q, f32 *, 72), M2C_FIELD(q, f32 *, 64), M2C_FIELD(q, f32 *, 60),
                    M2C_FIELD(q, f32 *, 68), M2C_FIELD(q, f32 *, 76), M2C_FIELD(q, f32 *, 80));
        M2C_FIELD(p, u32 *, 44) |= lbl_803646FC;
        fn_800D9CC8(M2C_FIELD(p, void **, 10880), 1);
    } else {
        fn_800BBF5C(M2C_FIELD(p, void **, 10880), lbl_80364700 * M2C_FIELD(q, f32 *, 52), M2C_FIELD(q, f32 *, 56),
                    M2C_FIELD(q, f32 *, 76), M2C_FIELD(q, f32 *, 80));
        M2C_FIELD(p, u32 *, 44) &= ~0x1000;
        fn_800D9CC8(M2C_FIELD(p, void **, 10880), 0);
    }
    lbl_803286D0[92](M2C_FIELD(p, void **, 10876), M2C_FIELD(p, void **, 10880));
}

} /* extern "C" */
