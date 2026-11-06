#include "common.h"
extern "C" {
void fn_80221E8C(void);
void fn_80221E6C(void);
void fn_80276930(void);
void fn_80221B7C(void *a, void *b);
typedef struct { void (*a)(void); void (*b)(void); } CB;
s32 fn_802769F0(void *fn, CB arg);
void fn_80222160(void *a, void *b) {
    CB cb = { fn_80221E8C, fn_80221E6C };
    fn_802769F0((void *)fn_80276930, cb);
    fn_80221B7C(a, b);
}
}
