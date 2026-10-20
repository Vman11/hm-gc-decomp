// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C80086AF8[];
extern volatile f32 lbl_8035FDF8;
void fn_8005F59C(void *);
void __ct__9C8005F938Fv(void *);

void *__ct__9C80086AF8Fv(u8 *p) {
    __ct__9C8005F938Fv(p);
    *(void * *)(p + 0) = __vt__9C80086AF8;
    *(s32 *)(p + 892) = 0;
    *(f32 *)(p + 896) = lbl_8035FDF8;
    *(f32 *)(p + 900) = lbl_8035FDF8;
    *(f32 *)(p + 904) = lbl_8035FDF8;
    *(f32 *)(p + 908) = lbl_8035FDF8;
    *(s32 *)(p + 888) = 0;
    *(f32 *)(p + 912) = lbl_8035FDF8;
    *(s32 *)(p + 920) = 0;
    *(s32 *)(p + 608) = 4;
    fn_8005F59C(p);
    return p;
}
