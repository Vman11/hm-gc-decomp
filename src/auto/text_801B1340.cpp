#include "common.h"
extern "C" void fn_801D99B4(void *, int, int);
struct O { u8 pad[0x144]; s32 st; };
extern "C" int fn_801B1340(O *o, int a, int b) { fn_801D99B4(o, a, b); switch (o->st) { default: return -6; case 16: return 1; } }
