/* MSL_C mem.c */
#include "common.h"
void __copy_longs_rev_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_rev_aligned(void *d, const void *s, unsigned long n);
void __copy_longs_aligned(void *d, const void *s, unsigned long n);
extern void *memmove(void *, const void *, unsigned long);
int fn_800E8B1C(const void* src1, const void* src2, unsigned long n);
void* __memrchr(const void* src, int val, unsigned long n);
void* memchr(const void* src, int val, unsigned long n);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fn_800E8B1C(const void* src1, const void* src2, unsigned long n) {
    const unsigned char* p1;
    const unsigned char* p2;

    for (p1 = (const unsigned char*)src1 - 1, p2 = (const unsigned char*)src2 - 1, n++; --n;) {
        if (*++p1 != *++p2) {
            return (*p1 < *p2) ? -1 : +1;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void* __memrchr(const void* src, int val, unsigned long n) {
    const unsigned char* p;
    unsigned long v = (val & 0xff);

    for (p = (unsigned char*)src + n, n++; --n;) {
        if (*--p == v) {
            return (void*)p;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void* memchr(const void* src, int val, unsigned long n) {
    const unsigned char* p;
    unsigned long v = (val & 0xff);

    for (p = (unsigned char*)src - 1, n++; --n;) {
        if ((*++p & 0xff) == v) {
            return (void*)p;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void *memmove(void *dst, const void *src, unsigned long n) {
    const unsigned char *p;
    unsigned char *q;
    int rev = ((unsigned long)src < (unsigned long)dst);

    if (n >= 32) {
        if (((unsigned long)dst ^ (unsigned long)src) & 3) {
            if (!rev) {
                __copy_longs_unaligned(dst, src, n);
            } else {
                __copy_longs_rev_unaligned(dst, src, n);
            }
        } else {
            if (!rev) {
                __copy_longs_aligned(dst, src, n);
            } else {
                __copy_longs_rev_aligned(dst, src, n);
            }
        }
        return dst;
    }

    if (!rev) {
        for (p = (const unsigned char *)src - 1, q = (unsigned char *)dst - 1, n++; --n;) {
            *++q = *++p;
        }
    } else {
        for (p = (const unsigned char *)src + n, q = (unsigned char *)dst + n, n++; --n;) {
            *--q = *--p;
        }
    }
    return dst;
}
#pragma pop
