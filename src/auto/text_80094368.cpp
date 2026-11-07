// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *volatile lbl_8035A0A4;
extern char lbl_80299B08[];
int fn_8003C674(void *, char *, u32 **);
void fn_80072438(void *, u32);
void fn_80242210(void *);
typedef struct O { u8 p[284]; u32 *a; u32 *b; u8 q[308 - 292]; void *c; u8 r[364 - 312]; s32 f16C; s32 f170; } O;
void fn_80094368(O *o) {
    if (o->f16C) {
        u32 *p; *(u32 *volatile *)&p = 0;
        if (fn_8003C674(lbl_8035A0A4, lbl_80299B08, &p) == 0) *p = 0;
        *p += *o->b;
        o->f16C = 0;
    }
    if (o->f170) {
        fn_80072438(o->c, *o->a);
        o->f170 = 0;
    }
    fn_80242210(o);
}

}
