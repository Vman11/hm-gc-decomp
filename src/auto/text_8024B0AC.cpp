// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern f32 lbl_8036637C;
typedef struct { u8 b[108]; } E108_8024B0AC;
typedef struct { f32 v[6]; } E24_8024B0AC;
typedef struct { u32 count; E108_8024B0AC *f4; u8 pad[8]; E24_8024B0AC *f10; u8 pad2[4]; s32 f18; } P8024B0AC;
int rand(void);
void fn_8024A610(E108_8024B0AC *e, s32 x, s32 y, f32 a, f32 b);
void fn_8024B0AC(P8024B0AC *p, s32 x, s32 y, f32 a, f32 b) {
    u32 i;
    for (i = 0; i < p->count; i++) {
        fn_8024A610(&p->f4[i], x, y, a, b);
        p->f10[i].v[0] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
        p->f10[i].v[1] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
        p->f10[i].v[2] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
        p->f10[i].v[3] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
        p->f10[i].v[4] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
        p->f10[i].v[5] = (f32)(s32)((u32)rand() % 20) / lbl_8036637C;
    }
    p->f18 = 1;
}

} /* extern "C" */
