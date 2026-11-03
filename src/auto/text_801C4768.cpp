// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800FB0F8(void *, void *);
f32 fn_800FB2E0(void *);
u32 fn_800FB33C(void *);
void fn_800FB064(void *, void *);
void fn_801DCA84(void *, s32, void *, void *);

void fn_801C4768(u8 *p, s32 a, void *b, void *c) {
    switch (a) {
    case 157:
        fn_800FB0F8(c, p + 356);
        break;
    case 158:
        *(f32 *)(p + 360) = fn_800FB2E0(c);
        break;
    case 159:
        *(u32 *)(p + 364) = fn_800FB33C(c);
        break;
    case 160:
        *(u32 *)(p + 368) = fn_800FB33C(c);
        break;
    case 161:
        *(u32 *)(p + 372) = 1;
        break;
    case 162:
        *(u32 *)(p + 376) = 1;
        break;
    case 163:
        *(u32 *)(p + 380) = 1;
        break;
    case 164:
        *(u32 *)(p + 384) = 1;
        break;
    case 165:
        *(u32 *)(p + 388) = 1;
        break;
    case 166:
        *(u32 *)(p + 392) = 1;
        break;
    case 167:
        *(u32 *)(p + 396) = 1;
        break;
    case 168:
        *(u32 *)(p + 400) = 1;
        break;
    case 169:
        fn_800FB064(c, p + 404);
        break;
    case 170:
        fn_800FB064(c, p + 412);
        break;
    case 171:
        fn_800FB064(c, p + 420);
        break;
    default:
        fn_801DCA84(p, a, b, c);
        break;
    }
}

} /* extern "C" */
