// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E6758[];
void fn_8011FBC8(void *);
void __ct__9C8014E1E0Fs(void);
void dtor_8014E124(void);
void __construct_array(void *, void *, void *, u32, u32);
void *memset(void *, s32, u32);

void *__ct__9C8014E960Fv(u8 *p) {
    fn_8011FBC8(p);
    *(void * *)(p + 0) = lbl_802E6758;
    __construct_array(p + 96, (void *)__ct__9C8014E1E0Fs, (void *)dtor_8014E124, 764, 4);
    memset(p + 48, 0, 48);
    *(s32 *)(p + 3152) = 0;
    return p;
}
