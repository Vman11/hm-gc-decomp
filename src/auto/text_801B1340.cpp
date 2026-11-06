// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"
extern "C" void fn_801D99B4(void *, int, int);
struct O { u8 pad[0x144]; s32 st; };
extern "C" int fn_801B1340(O *o, int a, int b) { fn_801D99B4(o, a, b); if (o->st != 16) return -6; return 1; }
