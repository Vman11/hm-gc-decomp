/* MSL_C scanf.c */
#include "common.h"

int __StringRead(void *arg0, int arg1, int arg2);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int __StringRead(void *arg0, int arg1, int arg2) {
    u8 *s;
    u8 c;
    switch (arg2) {
    case 0:
        s = M2C_FIELD(arg0, u8 **, 0);
        c = *s;
        if ((s8)c == 0) {
            M2C_FIELD(arg0, int *, 4) = 1;
            return -1;
        }
        M2C_FIELD(arg0, u8 **, 0) = s + 1;
        return c;
    case 1:
        if (M2C_FIELD(arg0, int *, 4) == 0)
            M2C_FIELD(arg0, u8 **, 0)--;
        else
            M2C_FIELD(arg0, int *, 4) = 0;
        return arg1;
    case 2:
        return M2C_FIELD(arg0, int *, 4);
    default:
        return 0;
    }
}
#pragma pop
