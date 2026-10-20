// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_8015FE00;
extern T12_8015FE00 lbl_8029BF10;
extern u8 lbl_802E7028[];
void __ct__9C8013352CFv(void *);
void fn_802181D0(void *);

void *__ct__9C8015FE00Fv(u8 *p) {
    __ct__9C8013352CFv(p);
    *(void * *)(p + 48) = lbl_802E7028;
    fn_802181D0(p + 60);
    *(T12_8015FE00 *)(p + 88) = lbl_8029BF10;
    *(u16 *)(p + 76) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    return p;
}
