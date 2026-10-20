// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 a[48]; u8 c[32]; } T80;
void fn_80102D70(void *, u32, void *, void *, f32);
void fn_80102CD0(void *, u32, void *, void *, f32);

void fn_801064C4(u8 *p, void *a, void *b, f32 f) {
    u32 i;
    for (i = 0; i < *(u32 *)(p + 36); i++) {
        fn_80102D70(a, i, &(*(T80 **)(p + 40))[i].c, b, f);
    }
    fn_80102CD0(a, *(u32 *)(*(u8 **)(*(u8 **)(p + 40) + 20) + 4), p + 44, b, f);
}
