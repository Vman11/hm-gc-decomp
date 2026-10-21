// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8024A3D0(void *, f32);
typedef struct { u8 pad[100]; s32 f100; u8 pad2[4]; } E108;

void fn_8024AF54(u8 *p, f32 t) {
    s32 found;
    u32 i;
    found = 0;
    if (*(s32 *)(p + 24) != 0) {
        for (i = 0; i < *(u32 *)p; i++) {
            if ((*(E108 **)(p + 4))[i].f100 != 0) {
                fn_8024A3D0(&(*(E108 **)(p + 4))[i], t);
                found = 1;
            }
        }
        if (!found) {
            *(s32 *)(p + 24) = 0;
        }
    }
}

} /* extern "C" */
