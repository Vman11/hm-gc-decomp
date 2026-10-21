// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_8029B5A8[];
extern void *lbl_80359F2C;
extern void *lbl_8035B79C;
s32 fn_80248630(void *a, s32 b);
void *fn_80242144(void *p, s32 a);
void fn_80242BC0(void *a, char *b, s32 c, s32 d, s32 e, s32 f);
void fn_8002C4DC(void *a);
void fn_8024125C(void *p, s32 a);
void fn_80240C2C(void *p, s32 a);
void fn_8026820C(void *a, s32 b);
void fn_802494A4(void *p, s32 a);
void fn_8023FE08(void *p, f32 f);

void fn_800AE2B8(u8 *p, f32 f) {
    if (fn_80248630(M2C_FIELD(p, void **, 264), 0) == 0) M2C_FIELD(p, s32 *, 380) = 0;
    if (M2C_FIELD(p, s32 *, 388) != 0) {
        M2C_FIELD(p, s32 *, 388) = 0;
        M2C_FIELD(M2C_FIELD(p, u8 **, 224), u32 *, 180) &= ~4;
        fn_80242BC0(fn_80242144(p, 4), lbl_8029B5A8, 0, 0, 0, 0);
        *M2C_FIELD(p, f32 **, 372) = M2C_FIELD(M2C_FIELD(p, u8 **, 224), f32 *, 424);
        *M2C_FIELD(p, f32 **, 376) = M2C_FIELD(M2C_FIELD(p, u8 **, 224), f32 *, 428);
        fn_8002C4DC(lbl_80359F2C);
        if (M2C_FIELD(p, s32 *, 340) == 0) {
            M2C_FIELD(p, s32 *, 340) = 1;
            if (fn_80248630(M2C_FIELD(p, void **, 264), 0) == 0) {
                fn_8024125C(p, 9);
                M2C_FIELD(p, s32 *, 380) = 20;
            } else if (M2C_FIELD(p, s32 *, 380) < 20) {
                fn_80240C2C(p, 9);
                M2C_FIELD(p, s32 *, 380) = 20;
            }
        }
        fn_8026820C(lbl_8035B79C, 14);
        fn_802494A4(p, 3);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
