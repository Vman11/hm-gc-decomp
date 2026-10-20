// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __dt__9C80175748Fv[];
extern u8 fn_8014CA08[];
extern u8 __ct__9C80175748Fv[];

void fn_801586F0(void *);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C80158A08Fv(u8 *p) {
    __construct_array(p, (void *)fn_8014CA08, 0, 28, 2);
    __construct_array(p + 1240, (void *)__ct__9C80175748Fv, (void *)__dt__9C80175748Fv, 48, 16);
    fn_801586F0(p);
    return p;
}
