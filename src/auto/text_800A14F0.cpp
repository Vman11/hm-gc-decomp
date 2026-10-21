// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[2]; } T8;
void fn_800F6E88(void *, T8 *);
u32 fn_80242144(u8 *, u32);
void fn_80242BC0(u32, void *, u32, u32, void *, u32);
struct A4 { u8 pad[0xc]; s32 *data; };
struct A8 { u8 pad[0xc]; T8 *data; };

void fn_800A14F0(u8 *param_1) {
    u32 i;
    u8 auStack_28[8];
    u8 auStack_20[16];

    for (i = 0; i < *(u32 *)(param_1 + 0x1cc); i++) {
        if (*(s32 *)(param_1 + 0x1d4) == (*(A4 **)(param_1 + 0x194))->data[i]) {
            fn_800F6E88(auStack_20, &(*(A8 **)(param_1 + 0x198))->data[i]);
            fn_800F6E88(auStack_28, &(*(A8 **)(param_1 + 0x19c))->data[i]);
            fn_80242BC0(fn_80242144(param_1, i + 4), auStack_20, *(u32 *)(param_1 + 0xe0), 0, auStack_28, 0);
        }
    }
}

} /* extern "C" */
