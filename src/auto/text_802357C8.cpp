// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B388;
void fn_8024B670(void);
void fn_8024B580(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C802357C8Fv(u8 *p) {
    __construct_array(p + 4, (void *)fn_8024B670, (void *)fn_8024B580, 196, 4);
    lbl_8035B388 = p;
    *(s32 *)p = 0;
    return p;
}

} /* extern "C" */
