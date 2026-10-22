/* MSL_C ansi_fp.c */
#include "common.h"
extern u8 lbl_802E05C8[];
extern unsigned char lbl_802E06C8[];
typedef struct decimal {
    char sign;
    char unk1;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[36];
        unsigned char unused;
    } sig;
} decimal;
typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;
void fn_800E5B48(decimal *d, double x);
static int __must_round(const decimal *d, int digits) {
    const unsigned char *i = d->sig.text + digits;

    if (*i > 5) {
        return 1;
    }
    if (*i < 5) {
        return -1;
    }
    {
        const unsigned char *e = d->sig.text + d->sig.length;
        for (i++; i < e; i++) {
            if (*i != 0) {
                return 1;
            }
        }
    }
    if (d->sig.text[digits - 1] & 1) {
        return 1;
    }
    return -1;
}
static void __dorounddecup(decimal *d, int digits) {
    unsigned char *b = d->sig.text;
    unsigned char *i = b + digits - 1;

    while (1) {
        if (*i < 9) {
            (*i)++;
            break;
        }
        if (i == b) {
            *i = 1;
            d->exp++;
            break;
        }
        *i-- = 0;
    }
}
static inline int __less_dec(const decimal *x, const decimal *y) {
    if (x->sig.text[0] == 0) {
        if (y->sig.text[0] != 0) {
            return 1;
        }
        return 0;
    }
    if (y->sig.text[0] == 0) {
        return 0;
    }
    if (x->exp == y->exp) {
        int i;
        int l = x->sig.length;
        if (l > y->sig.length) {
            l = y->sig.length;
        }
        for (i = 0; i < l; ++i) {
            if (x->sig.text[i] < y->sig.text[i]) {
                return 1;
            }
            if (y->sig.text[i] < x->sig.text[i]) {
                return 0;
            }
        }
        if (l == x->sig.length) {
            for (; i < y->sig.length; ++i) {
                if (y->sig.text[i] != 0) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return x->exp < y->exp;
}
static inline void __str2dec(decimal *d, const char *s, short exp) {
    int i;
    d->exp = exp;
    d->sign = 0;
    for (i = 0; i < 36 && *s;) {
        d->sig.text[i++] = *s++ - '0';
    }
    d->sig.length = i;
    if (*s != 0) {
        if (*s < 5) {
            return;
        }
        if (*s > 5) {
            goto round;
        }
        {
            const char *p = s + 1;
            for (; *p != 0; ++p) {
                if (*p != '0') {
                    goto round;
                }
            }
            if ((d->sig.text[i - 1] & 1) == 0) {
                return;
            }
        }
    round:
        __dorounddecup(d, d->sig.length);
    }
}
static inline int __fpclassifyd_dec(double x) {
    switch (*(int *)&x & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 1;
        return 2;
    case 0:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 5;
        return 3;
    }
    return 4;
}
static void __rounddec(decimal *d, int digits) {
    if (digits > 0 && digits < d->sig.length) {
        int unkBool = __must_round(d, digits);
        d->sig.length = digits;
        if (unkBool >= 0) {
            __dorounddecup(d, digits);
        }
    }
}
double fn_800EFD7C(double, double);
double fn_800F04FC(double, double);
double fn_800F004C(double, int);
void fn_800E5EFC(decimal *result, const decimal *x, const decimal *y);
int fn_800E63F8(const decimal *x, const decimal *y);
extern float lbl_803596B4[];
extern double lbl_803596C0[];
extern double lbl_802E0460[];
extern char lbl_8029C060[];
void fn_800E7C88(decimal *result, const decimal *x, const decimal *y);
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern unsigned char lbl_802E05C8[];
unsigned long long fn_800E2B94(double);
static inline int __count_trailing_zerol(unsigned long x) {
    int result = 0;
    int bits_not_checked = sizeof(unsigned long) * 8;
    int n = sizeof(unsigned long) * 8 / 2;
    unsigned long mask = 0xFFFF;
    int sh = n;
    while (bits_not_checked) {
        if ((x & mask) == 0) {
            result += sh;
            x >>= sh;
            bits_not_checked -= sh;
        } else if (mask == 1) {
            break;
        }
        if (n > 1) n /= 2;
        if (mask > 1) {
            mask >>= n;
            sh -= n;
        }
    }
    return result;
}
static inline int __count_trailing_zero(double x) {
    unsigned long *l = (unsigned long *)&x;
    if (l[1] != 0) return __count_trailing_zerol(l[1]);
    return (int)(32 + __count_trailing_zerol(l[0] | 0x00100000));
}
static inline void __ull2dec(decimal *result, unsigned long long val) {
    result->sign = 0;
    if (val == 0) {
        result->exp = 0;
        result->sig.length = 1;
        result->sig.text[0] = 0;
        return;
    }
    result->sig.length = 0;
    for (; val != 0; val /= 10) {
        result->sig.text[result->sig.length++] = (unsigned char)(val % 10);
    }
    {
        unsigned char *i = result->sig.text;
        unsigned char *j = result->sig.text + result->sig.length;
        for (; i < --j; ++i) {
            unsigned char t = *i;
            *i = *j;
            *j = t;
        }
    }
    result->exp = result->sig.length - 1;
}
extern const double lbl_803631A0;
static inline int __fpclassifyd_n2d(double x) {
    switch (*(int *)&x & 0x7ff00000) {
    case 0x7ff00000:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 1;
        return 2;
    case 0:
        if ((*(int *)&x & 0x000fffff) || *(1 + (int *)&x)) return 5;
        return 3;
    }
    return 4;
}
double fn_800E4924(const decimal *d);
void fn_800E59A4(const decform *f, double x, decimal *d);
void fn_800E6504(decimal *result, long exp);

#pragma push
#pragma dont_inline off
double fn_800E4924(const decimal *d) {
    if (d->sig.length <= 0) {
        return fn_800EFD7C(0.0, d->sign == 0 ? 1.0 : -1.0);
    }

    switch (d->sig.text[0]) {
    case '0':
        return fn_800EFD7C(0.0, d->sign == 0 ? 1.0 : -1.0);
    case 'I':
        return fn_800EFD7C(lbl_803596B4[0], d->sign == 0 ? 1.0 : -1.0);
    case 'N': {
        double result;
        unsigned long long *ll = (unsigned long long *)&result;

        *ll = 0x7FF0000000000000ULL;
        if (d->sign) {
            *ll |= 0x8000000000000000ULL;
        }
        if (d->sig.length == 1) {
            *ll |= 0x0008000000000000ULL;
        } else {
            unsigned char *p = (unsigned char *)&result + 1;
            int placed_non_zero = 0;
            int low = 1;
            int i;
            int e = d->sig.length;
            if (e > 14) {
                e = 14;
            }
            for (i = 1; i < e; ++i) {
                unsigned char c = d->sig.text[i];
                if (lbl_802E05C8[c] & 0x10) {
                    c -= '0';
                } else {
                    c = (unsigned char)((d->sig.text[i] == -1 ? -1 : lbl_802E06C8[d->sig.text[i]]) - 'a' + 10);
                }
                if (c != 0) {
                    placed_non_zero = 1;
                }
                if (low) {
                    *p++ |= c;
                } else {
                    *p = (unsigned char)(c << 4);
                }
                low = !low;
            }
            if (!placed_non_zero) {
                *ll |= 0x0008000000000000ULL;
            }
        }
        return result;
    }
    }

    {
        decimal dec = *d;
        unsigned char *i = dec.sig.text;
        unsigned char *e = i + dec.sig.length;
        double first_guess;
        int exponent;

        for (; i < e; ++i) {
            *i -= '0';
        }
        exponent = dec.exp += dec.sig.length - 1;

        i = dec.sig.text;
        first_guess = *i++;

        while (i < e) {
            unsigned long ival = 0;
            int n = (e - i) % 8;
            int j;
            double scaled;
            double next_guess;
            if (n == 0) {
                n = 8;
            }
            for (j = 0; j < n; ++j, ++i) {
                ival = 10 * ival + *i;
            }
            scaled = first_guess * lbl_802E0460[n - 1];
            next_guess = scaled + ival;
            if (ival != 0 && scaled == next_guess) {
                break;
            }
            first_guess = next_guess;
            exponent -= n;
        }

        if (exponent < 0) {
            first_guess /= fn_800F04FC(5.0, -exponent);
        } else {
            first_guess *= fn_800F04FC(5.0, exponent);
        }
        first_guess = fn_800F004C(first_guess, exponent);

        if (__fpclassifyd_dec(first_guess) == 2) {
            decimal max;
            __str2dec(&max, lbl_8029C060, 308);
            if (__less_dec(&max, &dec)) {
                goto done;
            }
            first_guess = lbl_803596C0[0];
        }
        {
            decimal feedback1;
            fn_800E5B48(&feedback1, first_guess);
            if (fn_800E63F8(&feedback1, &dec)) {
                goto done;
            }
            if (__less_dec(&feedback1, &dec)) {
                decimal feedback2, difflow, diffhigh;
                double next_guess = first_guess;
                unsigned long long *ull = (unsigned long long *)&next_guess;
                ++*ull;
                if (__fpclassifyd_dec(next_guess) == 2) {
                    first_guess = next_guess;
                    goto done;
                }
                fn_800E5B48(&feedback2, next_guess);
                while (__less_dec(&feedback2, &dec)) {
                    feedback1 = feedback2;
                    first_guess = next_guess;
                    ++*ull;
                    if (__fpclassifyd_dec(next_guess) == 2) {
                        first_guess = next_guess;
                        goto done;
                    }
                    fn_800E5B48(&feedback2, next_guess);
                }
                fn_800E5EFC(&difflow, &dec, &feedback1);
                fn_800E5EFC(&diffhigh, &feedback2, &dec);
                if (fn_800E63F8(&difflow, &diffhigh)) {
                    if (*(unsigned long long *)&first_guess & 1) {
                        first_guess = next_guess;
                    }
                } else if (!__less_dec(&difflow, &diffhigh)) {
                    first_guess = next_guess;
                }
            } else {
                decimal feedback2, difflow, diffhigh;
                double next_guess = first_guess;
                unsigned long long *ull = (unsigned long long *)&next_guess;
                --*ull;
                fn_800E5B48(&feedback2, next_guess);
                while (__less_dec(&dec, &feedback2)) {
                    feedback1 = feedback2;
                    first_guess = next_guess;
                    --*ull;
                    fn_800E5B48(&feedback2, next_guess);
                }
                fn_800E5EFC(&difflow, &dec, &feedback2);
                fn_800E5EFC(&diffhigh, &feedback1, &dec);
                if (fn_800E63F8(&difflow, &diffhigh)) {
                    if (*(unsigned long long *)&first_guess & 1) {
                        first_guess = next_guess;
                    }
                } else if (__less_dec(&difflow, &diffhigh)) {
                    first_guess = next_guess;
                }
            }
        }
    done:
        if (dec.sign) {
            first_guess = -first_guess;
        }
        return first_guess;
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
void fn_800E59A4(const decform *f, double x, decimal *d) {
    short digits = f->digits;
    int i;

    fn_800E5B48(d, x);
    if (d->sig.text[0] > 9) {
        return;
    }
    if (digits > 36) {
        digits = 36;
    }
    __rounddec(d, digits);
    while (d->sig.length < digits) {
        d->sig.text[d->sig.length++] = 0;
    }
    d->exp -= d->sig.length - 1;
    for (i = 0; i < d->sig.length; i++) {
        d->sig.text[i] += '0';
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
#pragma use_lmw_stmw on
#pragma scheduling reset
void fn_800E5B48(decimal *d, double x) {
    char sign = (char)(*(unsigned long *)&x >> 31);

    if (lbl_803631A0 == x) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (__fpclassifyd_n2d(x) <= 2) {
        d->sign = sign;
        d->exp = 0;
        d->sig.length = 1;
        d->sig.text[0] = (__fpclassifyd_n2d(x) == 1) ? 'N' : 'I';
        return;
    }

    if (sign) {
        x = -x;
    }

    {
        int exp;
        double frac = fn_800EFFC0(x, &exp);
        long num_bits_extract = 53 - __count_trailing_zero(frac);
        decimal int_d, pow2_d;
        double int_x;

        fn_800E6504(&pow2_d, exp - num_bits_extract);
        fn_800F0210(fn_800F004C(frac, num_bits_extract), &int_x);
        __ull2dec(&int_d, fn_800E2B94(int_x));
        fn_800E7C88(d, &int_d, &pow2_d);
        d->sign = sign;
    }
}
#pragma pop

#pragma push
#pragma dont_inline off
void fn_800E5EFC(decimal *result, const decimal *x, const decimal *y) {
    unsigned char *b, *i;
    const unsigned char *yb, *j, *end;
    int offset, length, n;
    *result = *x;
    if (y->sig.text[0] == 0) return;
    length = result->sig.length;
    if (length < y->sig.length) length = y->sig.length;
    offset = result->exp - y->exp;
    length += offset;
    if (length > 36) length = 36;
    while (result->sig.length < length)
        result->sig.text[result->sig.length++] = 0;
    b = result->sig.text;
    i = b + length;
    n = y->sig.length + offset;
    if (n < length) i = b + n;
    yb = y->sig.text;
    j = yb + (i - b - offset);
    end = j;
    while (i > b && j > yb) {
        if (*--i < *--j) {
            unsigned char *k = i - 1;
            while (*k == 0) --k;
            while (k != i) {
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }
    n = end - yb;
    if (n < y->sig.length) {
        int round = 0;
        if (*end < 5) round = 1;
        else if (*end == 5) {
            const unsigned char *e = y->sig.text + y->sig.length;
            i = (unsigned char *)end + 1;
            while (i < e) {
                if (*i != 0) goto normalize;
                ++i;
            }
            i = b + (n + offset - 1);
            if (*i & 1) round = 1;
        }
        if (round) {
            if (*i < 1) {
                unsigned char *k = i - 1;
                while (*k == 0) --k;
                while (k != i) {
                    --*k;
                    *++k += 10;
                }
            }
            --*i;
        }
    }
normalize:
    i = b;
    while (*i == 0) ++i;
    if (i > b) {
        unsigned char count = i - b;
        unsigned char *e;
        result->exp -= count;
        e = b + result->sig.length;
        while (i < e) *b++ = *i++;
        result->sig.length -= count;
    }
    b = result->sig.text;
    i = b + result->sig.length;
    while (i > b) {
        if (*--i != 0) break;
    }
    result->sig.length = i - b + 1;
}
#pragma pop

#pragma push
#pragma dont_inline on
int fn_800E63F8(const decimal *x, const decimal *y) {
    int i;
    int l;

    if (x->sig.text[0] == 0) {
        return y->sig.text[0] == 0;
    }
    if (y->sig.text[0] == 0) {
        return x->sig.text[0] == 0;
    }
    if (x->exp == y->exp) {
        l = x->sig.length;
        if (l > y->sig.length) {
            l = y->sig.length;
        }
        for (i = 0; i < l; i++) {
            if (x->sig.text[i] != y->sig.text[i]) {
                return 0;
            }
        }
        if (l == x->sig.length) {
            for (; i < y->sig.length; i++) {
                if (y->sig.text[i] != 0) {
                    return 0;
                }
            }
        } else {
            for (; i < x->sig.length; i++) {
                if (x->sig.text[i] != 0) {
                    return 0;
                }
            }
        }
        return 1;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline off
void fn_800E6504(decimal *result, long exp) {
    decimal x2, temp;

    switch (exp) {
    case -64:
        __str2dec(result, lbl_8029C060 + 0x25, -20);
        return;
    case -53:
        __str2dec(result, lbl_8029C060 + 0x53, -16);
        return;
    case -32:
        __str2dec(result, lbl_8029C060 + 0x7A, -10);
        return;
    case -16:
        __str2dec(result, lbl_8029C060 + 0x92, -5);
        return;
    case -8:
        __str2dec(result, lbl_8029C060 + 0x9F, -3);
        return;
    case -7:
        __str2dec(result, lbl_8029C060 + 0xA6, -3);
        return;
    case -6:
        __str2dec(result, lbl_8029C060 + 0xAC, -2);
        return;
    case -5:
        __str2dec(result, lbl_8029C060 + 0xB2, -2);
        return;
    case -4:
        __str2dec(result, lbl_8029C060 + 0xB7, -2);
        return;
    case -3:
        __str2dec(result, lbl_8029C060 + 0xBB, -1);
        return;
    case -2:
        __str2dec(result, lbl_8029C060 + 0xBF, -1);
        return;
    case -1:
        __str2dec(result, lbl_8029C060 + 0xC2, -1);
        return;
    case 0:
        __str2dec(result, lbl_8029C060 + 0xC4, 0);
        return;
    case 1:
        __str2dec(result, lbl_8029C060 + 0xC6, 0);
        return;
    case 2:
        __str2dec(result, lbl_8029C060 + 0xC8, 0);
        return;
    case 3:
        __str2dec(result, lbl_8029C060 + 0xCA, 0);
        return;
    case 4:
        __str2dec(result, lbl_8029C060 + 0xCC, 1);
        return;
    case 5:
        __str2dec(result, lbl_8029C060 + 0xCF, 1);
        return;
    case 6:
        __str2dec(result, lbl_8029C060 + 0xD2, 1);
        return;
    case 7:
        __str2dec(result, lbl_8029C060 + 0xD5, 2);
        return;
    case 8:
        __str2dec(result, lbl_8029C060 + 0xD9, 2);
        return;
    }
    fn_800E6504(&x2, ((long)((0x80000000UL & exp) >> 31) + exp) >> 1);
    fn_800E7C88(result, &x2, &x2);
    if (exp & 1) {
        temp = *result;
        if (exp > 0) {
            __str2dec(&x2, lbl_8029C060 + 0xC6, 0);
        } else {
            __str2dec(&x2, lbl_8029C060 + 0xC2, -1);
        }
        fn_800E7C88(result, &temp, &x2);
    }
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void fn_800E7C88(decimal *result, const decimal *x, const decimal *y) {
    unsigned char mantissa[80];
    int ny = y->sig.length;
    int nx = x->sig.length;
    unsigned long accumulator = 0;
    int i = nx + ny - 1;
    unsigned char *ip = mantissa + i + 1;
    unsigned char *ep = ip;
    result->sign = 0;
    for (; i > 0; --i) {
        int k = ny - 1;
        int j = i - k - 1;
        int l;
        int t;
        const unsigned char *jp;
        const unsigned char *kp;
        if (j < 0) { j = 0; k = i - 1; }
        jp = x->sig.text + j;
        kp = y->sig.text + k;
        l = k + 1;
        t = nx - j;
        if (l > t) l = t;
        for (; l > 0; --l, ++jp, --kp) accumulator += *jp * *kp;
        *--ip = (unsigned char)(accumulator % 10);
        accumulator /= 10;
    }
    result->exp = (short)(x->exp + y->exp);
    if (accumulator > 0) { *--ip = (unsigned char)accumulator; result->exp++; }
    for (i = 0; i < 36 && ip < ep; ++i, ++ip) result->sig.text[i] = *ip;
    result->sig.length = (unsigned char)i;
    if (ip < ep && *ip >= 5) {
        if (*ip == 5) {
            unsigned char *jp = ip + 1;
            for (; jp < ep; ++jp) if (*jp != 0) goto round;
            if ((*(ip - 1) & 1) == 0) return;
        }
    round:
        {
            unsigned char *i;
            unsigned char *b = result->sig.text;
            i = b + result->sig.length - 1;
            while (1) {
                if (*i < 9) { (*i)++; break; }
                if (i == b) { *i = 1; result->exp++; break; }
                *i-- = 0;
            }
        }
    }
}
#pragma pop
