// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80108120[];
extern volatile f32 lbl_80363910;
void __ct__9C80105074Fv(void *);

void *__ct__9C80108120Fv(u8 *p) {
    __ct__9C80105074Fv(p);
    *(void **)(p + 36) = __vt__9C80108120;
    *(f32 *)(p + 40) = lbl_80363910;
    *(f32 *)(p + 44) = lbl_80363910;
    *(f32 *)(p + 48) = lbl_80363910;
    return p;
}

} /* extern "C" */
