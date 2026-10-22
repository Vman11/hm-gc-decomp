/* MSL_C qsort.c */
#include "common.h"

void qsort(void* table_base, u32 num_members, u32 member_size, int (*compare_members)(const void*, const void*));

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void qsort(void* table_base, u32 num_members, u32 member_size, int (*compare_members)(const void*, const void*)) {
    u32 l, r, j;
    char* lp;
    char* rp;
    char* ip;
    char* jp;
    char* kp;

    if (num_members < 2)
        return;

    r = num_members;
    l = (r / 2) + 1;

    lp = (char*)table_base + member_size * (l - 1);
    rp = (char*)table_base + member_size * (r - 1);

    for (;;) {
        if (l > 1) {
            l--;
            lp -= member_size;
        } else {
            {
                s8* p;
                s8* q;
                u32 n;
                s32 tmp;
                for (p = (s8*)rp - 1, q = (s8*)lp - 1, n = member_size + 1; --n;) {
                    tmp = *++q;
                    *q = *++p;
                    *p = tmp;
                }
            }
            if (--r == 1)
                return;
            rp -= member_size;
        }

        j = l;
        jp = (char*)table_base + member_size * (j - 1);

        while (j * 2 <= r) {
            ip = jp;
            j *= 2;
            jp = (char*)table_base + member_size * (j - 1);
            if (j < r) {
                kp = jp + member_size;
                if (compare_members(jp, kp) < 0) {
                    j++;
                    jp = kp;
                }
            }
            if (compare_members(ip, jp) < 0) {
                s8* p;
                s8* q;
                u32 n;
                s32 tmp;
                for (p = (s8*)jp - 1, q = (s8*)ip - 1, n = member_size + 1; --n;) {
                    tmp = *++q;
                    *q = *++p;
                    *p = tmp;
                }
            } else
                break;
        }
    }
}
#pragma pop
