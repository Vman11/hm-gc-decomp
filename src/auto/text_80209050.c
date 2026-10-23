// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

/* The three literals are the pooled .rodata block lbl_802A68C0 (0x802A68C0..0x802A6938, 0x78 bytes, not in any split):
   the original addresses it as base + 0/40/84 (addi r3,r5,0), which only a compiler-pooled literal reproduces. */
void fn_800BD474(u8 *p);
void fn_80060568(char *s, s32 a, s32 b, s32 c);

void fn_80209050(s32 result, u8 *info) {
    s32 *q;
    if (result >= 0) {
        q = *(s32 **)(info + 44);
        *(s32 *)(*(u8 **)q + 20) = result;
        q[18] = 0;
        fn_800BD474(info);
    } else if (result == -1) {
        fn_80060568("vIoGCNCallback - DVD operation failed.\n", 0, 0, 0);
    } else if (result == -3) {
        fn_80060568("vIoGCNCallback - DVD operation cancelled.\n", 0, 0, 0);
    } else {
        fn_80060568("vIoGCNCallback - unknown error.\n", 0, 0, 0);
    }
}
