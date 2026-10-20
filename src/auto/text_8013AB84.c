// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C8013AB84[];
extern volatile f32 lbl_803641D0;
void __ct__9C800FC3E8Fv(void *);
void fn_8014CA08(void *);

void *__ct__9C8013AB84Fv(u8 *p) {
    __ct__9C800FC3E8Fv(p);
    *(void * *)(p + 12) = __vt__9C8013AB84;
    fn_8014CA08(p + 16);
    *(u16 *)(p + 64) = 0;
    *(f32 *)(p + 44) = lbl_803641D0;
    *(f32 *)(p + 48) = lbl_803641D0;
    *(f32 *)(p + 52) = lbl_803641D0;
    *(u8 *)(p + 56) = 0;
    return p;
}
