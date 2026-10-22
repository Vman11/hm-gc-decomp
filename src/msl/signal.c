/* MSL_C signal.c */
#include "common.h"
int raise(int);
void __begin_critical_region(int region);
void __end_critical_region(int region);
void exit(int status);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int raise(int sig) {
    extern void (*lbl_803283E0[])(int);
    void exit(int);
    void (*handler)(int);
    if (sig < 1 || sig > 6) return -1;
    __begin_critical_region(4);
    handler = lbl_803283E0[sig - 1];
    if (handler != (void (*)(int))1) lbl_803283E0[sig - 1] = 0;
    __end_critical_region(4);
    if (handler == (void (*)(int))1 || (handler == 0 && sig == 1)) return 0;
    if (handler == 0) exit(0);
    handler(sig);
    return 0;
}
#pragma pop
