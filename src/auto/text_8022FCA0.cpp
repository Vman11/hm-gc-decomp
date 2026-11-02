// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u8 p[140]; char a[596 - 140]; char b[16]; } O;
void fn_80239658(O *);
void fn_800F6E88(char *, char *);
s32 fn_800F6C28(char *);
static inline int isd(int c) { return c >= 0x30 && c <= 0x39; }
static inline void trim(O *o, s32 i) { for (; i >= 0; i--) { if (o->a[i] < 0x30 || o->a[i] > 0x39) break; o->b[i] = 0; } }
void fn_8022FCA0(O *o) { fn_80239658(o); fn_800F6E88(o->b, o->a); trim(o, fn_800F6C28(o->b) - 1); }

} /* extern "C" */
