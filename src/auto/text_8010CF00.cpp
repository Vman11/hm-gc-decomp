// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_80112B18(void *);

void __dt__9C8010D328Fv(void);

/* vtable */
void *lbl_802E28E8[3] = {
    0, 0, (void *)__dt__9C8010D328Fv
};

u32 fn_8010CF00(u32 *p, s32 a) {
    u32 r = 0;
    switch (*(u32 *)(fn_80112B18((void *)p[1]) + 8)) {
    case 1:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 2:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 3:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 4:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 20);
        break;
    case 5:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 60);
        break;
    case 6:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 7:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 8:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 9:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 10:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 16);
        break;
    case 11:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 20);
        break;
    case 12:
        r = *(u32 *)(((u8 **)p[2])[a] + p[0] * 36);
        break;
    }
    return r;
}

} /* extern "C" */
