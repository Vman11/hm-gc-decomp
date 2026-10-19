// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8018EFC8(int, int);
void fn_80199FB8(int, int);
void fn_80199FE8(void);

void fn_80189064(s32 param_1, s32 param_2) {
    fn_80199FE8();
    fn_8018EFC8((int)(param_1 + 0x24), (int)(*(s32 *)(param_2 + 0x218) + *(s32 *)(param_2 + 0x214) * 8));
    fn_80199FB8((int)(param_1), (int)(param_2));
}

} /* extern "C" */
