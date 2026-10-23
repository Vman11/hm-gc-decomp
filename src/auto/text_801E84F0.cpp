// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800FB064(void *msg, char *buf);
s32 fn_800F9398(void *a, char *b);
s32 fn_800F9788(void *a, char *b, char *c);
void fn_8014AC00(void *p);
f32 fn_800FB2E0(void *msg);
void fn_801EF720(void *self, void *msg, s32 id);

void fn_801E84F0(u8 *self, void *msg, s32 id) {
    switch (id) {
    case 119: {
        char a[8];
        char b[8];
        u8 *o;
        fn_800FB064(msg, a);
        fn_800FB064(msg, b);
        o = *(u8 **)(*(u8 **)(*(u8 **)(self + 8) + 208));
        {
            s32 r;
            if (b == 0 || b[0] == 0)
                r = fn_800F9398(o + 120, a);
            else
                r = fn_800F9788(o + 144, b, a);
            M2C_FIELD(self, s32 *, 88) = r;
        }
        break;
    }
    case 144:
        fn_8014AC00(self + 56);
        M2C_FIELD(self, s32 *, 92) = 0;
        break;
    case 145:
        fn_8014AC00(self + 56);
        M2C_FIELD(self, s32 *, 92) = 1;
        break;
    case 147:
        M2C_FIELD(self, f32 *, 96) = fn_800FB2E0(msg);
        break;
    default:
        fn_801EF720(self, msg, id);
        break;
    }
}

} /* extern "C" */
