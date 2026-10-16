/* Functions from 0x8017EE1C to 0x8017EEFC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 a;
    u32 b;
} EdgePair;

typedef struct {
    EdgePair *pair;
    u32 stamp;
} EdgeSlot;

typedef struct {
    u32 max;
    u32 count;
    EdgePair *pairs;
    EdgeSlot *slots;
    u32 stamp;
} EdgeSet;

void fn_8017EEE4(s32 *arg0) {
    arg0[4]++;
    arg0[1] = 0;
}
