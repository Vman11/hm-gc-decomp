/* MSL_C mem_funcs.c */
#include "common.h"
void __copy_longs_rev_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_unaligned(void *dst, const void *src, unsigned long n);
void __copy_longs_rev_aligned(void *d, const void *s, unsigned long n);
void __copy_longs_aligned(void *d, const void *s, unsigned long n);
#define cps ((unsigned char*)src)
#define cpd ((unsigned char*)dst)
#define lps ((unsigned long*)src)
#define lpd ((unsigned long*)dst)
#define deref_auto_inc(p) *++(p)


#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __copy_longs_rev_unaligned(void* dst, const void* src, unsigned long n) {
    u32 i, v1, v2;
    u32 src_offset, left_shift, right_shift;

    cps = ((u8*)src) + n;
    cpd = ((u8*)dst) + n;

    i = ((u32)cpd) & 3;

    if (i) {
        n -= i;

        do
            *--cpd = *--cps;
        while (--i);
    }

    src_offset = ((u32)cps) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    cps += 4 - src_offset;

    i = n >> 3;

    v1 = *--lps;

    do {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
        v1 = *--lps;
        *--lpd = (v1 << left_shift) | (v2 >> right_shift);
    } while (--i);

    if (n & 4) {
        v2 = *--lps;
        *--lpd = (v2 << left_shift) | (v1 >> right_shift);
    }

    n &= 3;

    if (n) {
        cps += src_offset;
        do
            *--cpd = *--cps;
        while (--n);
    }

    return;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __copy_longs_unaligned(void *dst, const void *src, unsigned long n) {
    unsigned long i, v1, v2;
    unsigned int src_offset, left_shift, right_shift;

    i = (-(unsigned long)dst) & 3;

    ((unsigned char *)src) = ((unsigned char *)src) - 1;
    ((unsigned char *)dst) = ((unsigned char *)dst) - 1;

    if (i) {
        n -= i;
        do
            *++((unsigned char *)dst) = *++((unsigned char *)src);
        while (--i);
    }

    src_offset = ((unsigned int)(((unsigned char *)src) + 1)) & 3;

    left_shift = src_offset << 3;
    right_shift = 32 - left_shift;

    ((unsigned char *)src) -= src_offset;

    ((unsigned long *)src) = ((unsigned long *)(((unsigned char *)src) + 1)) - 1;
    ((unsigned long *)dst) = ((unsigned long *)(((unsigned char *)dst) + 1)) - 1;

    i = n >> 3;

    v1 = *++((unsigned long *)src);

    do {
        v2 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v1 << left_shift) | (v2 >> right_shift);
        v1 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v2 << left_shift) | (v1 >> right_shift);
    } while (--i);

    if (n & 4) {
        v2 = *++((unsigned long *)src);
        *++((unsigned long *)dst) = (v1 << left_shift) | (v2 >> right_shift);
    }

    ((unsigned char *)src) = ((unsigned char *)(((unsigned long *)src) + 1)) - 1;
    ((unsigned char *)dst) = ((unsigned char *)(((unsigned long *)dst) + 1)) - 1;

    n &= 3;

    if (n) {
        ((unsigned char *)src) -= 4 - src_offset;
        do
            *++((unsigned char *)dst) = *++((unsigned char *)src);
        while (--n);
    }
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __copy_longs_rev_aligned(void* dst, const void* src, unsigned long n) {
    u32 i;

    cpd = ((u8*)dst) + n;
    cps = ((u8*)src) + n;

    i = ((u32)cpd) & 3;

    if (i) {
        n -= i;

        do
            *--cpd = *--cps;
        while (--i);
    }

    i = n >> 5;

    if (i)
        do {
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
            *--lpd = *--lps;
        } while (--i);

    i = (n & 31) >> 2;

    if (i)
        do
            *--lpd = *--lps;
        while (--i);

    n &= 3;

    if (n)
        do
            *--cpd = *--cps;
        while (--n);

    return;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __copy_longs_aligned(void* dst, const void* src, unsigned long n) {
    u32 i;

    i = (-(u32)dst) & 3;

    cps = ((u8*)src) - 1;
    cpd = ((u8*)dst) - 1;

    if (i) {
        n -= i;

        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--i);
    }

    lps = ((u32*)(cps + 1)) - 1;
    lpd = ((u32*)(cpd + 1)) - 1;

    i = n >> 5;

    if (i)
        do {
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        } while (--i);

    i = (n & 31) >> 2;

    if (i)
        do
            deref_auto_inc(lpd) = deref_auto_inc(lps);
        while (--i);

    cps = ((u8*)(lps + 1)) - 1;
    cpd = ((u8*)(lpd + 1)) - 1;

    n &= 3;

    if (n)
        do
            deref_auto_inc(cpd) = deref_auto_inc(cps);
        while (--n);

    return;
}
#pragma pop
