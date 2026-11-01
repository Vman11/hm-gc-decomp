// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct S { char pad[328]; int f148; } S;
extern f32 lbl_803608FC;
void fn_800904CC(S *s, f32 a, f32 b);
void fn_8023FE08(S *s, f32 a);
void fn_80090470(S *s, f32 a) {
    if (s->f148 != 0) fn_800904CC(s, a, lbl_803608FC);
    fn_8023FE08(s, a);
}
