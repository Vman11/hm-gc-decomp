/* MSL_C extras.c */
#include "common.h"
extern unsigned char lbl_802E06C8[];

int fn_800F05D0(const char* s1, const char* s2) {
    char c1, c2;
    int c;
    while (1) {
        c = *s1++;
        c1 = (c == -1) ? -1 : lbl_802E06C8[(unsigned char)c];
        c = *s2++;
        c2 = (c == -1) ? -1 : lbl_802E06C8[(unsigned char)c];
        if (c1 < c2) {
            return -1;
        }
        if (c1 > c2) {
            return 1;
        }
        if (c1 == 0) {
            return 0;
        }
    }
}
