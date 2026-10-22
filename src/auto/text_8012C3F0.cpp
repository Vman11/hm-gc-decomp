// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E44C0[];
void __ct__9C800FB754Fv(u8 *p);
void fn_800FB6D8(u8 *p);

typedef struct C8012C3F0 {
    u32 f[15];
    u8 m60[20];
    u8 m80[20];
    u32 f100;
    u32 f104;
    u32 f108;
    u32 f112;
    u8 *vt;
} C8012C3F0;

C8012C3F0 *__ct__9C8012C3F0Fv(C8012C3F0 *p) {
    p->vt = lbl_802E44C0;
    __ct__9C800FB754Fv(p->m60);
    __ct__9C800FB754Fv(p->m80);
    p->f[0] = 0;
    p->f[1] = 0;
    p->f[2] = 0;
    p->f[3] = 0;
    p->f[4] = 0;
    p->f[5] = 0;
    p->f[6] = 0;
    p->f[7] = 0;
    p->f[8] = 0;
    p->f[9] = 0;
    p->f[10] = 0;
    p->f[11] = 0;
    p->f[12] = 0;
    p->f[13] = 0;
    p->f[14] = 0;
    fn_800FB6D8(p->m60);
    fn_800FB6D8(p->m80);
    p->f100 = 0;
    p->f104 = 0;
    p->f108 = 0;
    p->f112 = 0;
    return p;
}

} /* extern "C" */
