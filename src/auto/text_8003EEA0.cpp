// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A0B0;
void __dl__FPv(void *);

typedef struct C8003EFF4 {
    u32 arr[60];
} C8003EFF4;

C8003EFF4 *__dt__9C8003EFF4Fv(C8003EFF4 *p, s16 f) {
    s32 i;
    if (p != 0) {
        for (i = 0; i < (s32)(sizeof(p->arr) / sizeof(p->arr[0])); i++) {
            p->arr[i] = 0;
        }
        lbl_8035A0B0 = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
