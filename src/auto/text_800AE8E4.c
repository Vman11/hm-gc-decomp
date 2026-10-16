/* Functions from 0x800AE8E4 to 0x800AE9F0, found by decomp-toolkit. */
#include "common.h"

int fn_800AE8E4(void *arg0, unsigned int arg1) {
    int *p = *(int **)((char *)arg0 + 0x98);
    if (p != 0) {
        return ((int *)p[3])[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 0;
    case 2: return 0;
    case 3: return 1;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 1;
    case 8: return 1;
    case 9: return 0;
    case 10: return 0;
    case 11: return 0;
    case 12: return 0;
    case 13: return 0;
    case 14: return 0;
    case 15: return 0;
    case 16: return 0;
    case 17: return 0;
    case 18: return 0;
    case 19: return 0;
    case 20: return 0;
    case 21: return 0;
    case 22: return 0;
    case 23: return 0;
    case 24: return 0;
    default: return 1;
    }
}
