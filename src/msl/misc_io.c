/* MSL_C misc_io.c */
#include "common.h"
extern void (*__stdio_exit)(void);
extern void __close_all(void);
void __stdio_atexit(void);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __stdio_atexit(void) { __stdio_exit = __close_all; }
#pragma pop
