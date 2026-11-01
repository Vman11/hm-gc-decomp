// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern s32 lbl_8035ACE8;
void fn_800D7480(void *a, s32 b);
void fn_800D6270(void);
typedef struct { u8 pad[0x50]; void *arr[5]; s32 idx; } S8015B020;
void fn_8015B020(S8015B020 *p) {
    if (lbl_8035ACE8 == 2) {
        fn_800D7480(p->arr[p->idx], 0);
        fn_800D6270();
        lbl_8035ACE8 = 0;
    }
}
