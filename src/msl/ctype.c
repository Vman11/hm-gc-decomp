/* MSL_C ctype.c */
#include "common.h"
extern unsigned char lbl_802E06C8[];
int tolower(int c);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int tolower(int c) {
    if (c == -1) {
        return -1;
    }
    return lbl_802E06C8[(u8)c];
}
#pragma pop
