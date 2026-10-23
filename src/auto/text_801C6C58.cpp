// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365010;
void fn_801B3110(u8 *);
void __dla__FPv(void *);
void fn_800E1E88(void *, void *);
void __dt__9C80112AACFv(void);
void fn_8010ED84(void *);

void fn_801C6C58(u8 *p) {
    fn_801B3110(p);
    if (M2C_FIELD(p, void **, 456) != 0) {
        __dla__FPv(M2C_FIELD(p, void **, 456));
    }
    if (M2C_FIELD(p, void **, 420) != 0) {
        __dla__FPv(M2C_FIELD(p, void **, 420));
    }
    if (M2C_FIELD(p, void **, 424) != 0) {
        fn_800E1E88(M2C_FIELD(p, void **, 424), (void *)__dt__9C80112AACFv);
    }
    if (M2C_FIELD(p, void **, 380) != 0) {
        __dla__FPv(M2C_FIELD(p, void **, 380));
    }
    fn_8010ED84(p + 408);
    M2C_FIELD(p, s32 *, 356) = 0;
    M2C_FIELD(p, s32 *, 364) = 0;
    M2C_FIELD(p, s32 *, 368) = 0;
    M2C_FIELD(p, s32 *, 372) = 0;
    M2C_FIELD(p, s32 *, 380) = 0;
    M2C_FIELD(p, s32 *, 420) = 0;
    M2C_FIELD(p, s32 *, 424) = 0;
    M2C_FIELD(p, s32 *, 428) = 0;
    M2C_FIELD(p, s32 *, 432) = 0;
    M2C_FIELD(p, s32 *, 436) = 0;
    M2C_FIELD(p, s32 *, 440) = 0;
    M2C_FIELD(p, s32 *, 444) = 0;
    M2C_FIELD(p, s32 *, 448) = 0;
    M2C_FIELD(p, s32 *, 452) = -1;
    M2C_FIELD(p, s32 *, 456) = 0;
    M2C_FIELD(p, f32 *, 460) = lbl_80365010;
    M2C_FIELD(p, f32 *, 464) = lbl_80365010;
    M2C_FIELD(p, f32 *, 468) = lbl_80365010;
    M2C_FIELD(p, f32 *, 472) = lbl_80365010;
    M2C_FIELD(p, f32 *, 476) = lbl_80365010;
    M2C_FIELD(p, f32 *, 480) = lbl_80365010;
    M2C_FIELD(p, f32 *, 484) = lbl_80365010;
    M2C_FIELD(p, s32 *, 488) = 0;
    M2C_FIELD(p, f32 *, 492) = lbl_80365010;
    M2C_FIELD(p, s32 *, 496) = 0;
    M2C_FIELD(p, u8 *, 564) = 0;
    M2C_FIELD(p, s32 *, 568) = 0;
    M2C_FIELD(p, s32 *, 360) = 0;
    M2C_FIELD(p, s32 *, 376) = 0;
}

} /* extern "C" */
