/* MSL_C printf.c */
#include "common.h"
extern u8 lbl_802E05C8[];
typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    int precision;
} print_format;
typedef void (*EXICallback)(s32 chan, void *context);
typedef struct EXIControl {
    EXICallback exiCallback;
    EXICallback tcCallback;
    EXICallback extCallback;
    volatile s32 state;
    int immLen;
    u8 *immBuf;
    u32 dev;
    u32 id;
    s32 idTime;
    int items;
    struct {
        u32 dev;
        EXICallback callback;
    } queue[3];
} EXIControl;
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
void fn_800EA1DC(decimal *dec, int new_length);
char *fn_800EB764(char *, const char *);
extern const char lbl_8029C148[];
void __begin_critical_region(int region);
void __end_critical_region(int region);
extern u8 __files[];
typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char reserved[2];
    char *input_arg_area;
    char *reg_save_area;
} va_list[1];
#define va_start(ap, fmt) ((void)fmt, __builtin_va_info(&ap))
int fwide(void *, int);
void *__FileWrite(void *file, const void *buf, u32 len);
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern int __pformatter();
void *__va_arg(va_list, int);
unsigned int strlen(const char *s);
char *strchr(const char *str, int chr);
void *__StringWrite(void *ctx, const void *buf, u32 len);
char *longlong2str(long long num, char *buff, print_format format);
char *long2str(long num, char *buff, print_format format);
char *float2str(double num, char *buff, print_format format);
char *double2hex(char *buff, print_format format, double x);
char *parse_format(char *format, va_list args, print_format *out);
static char *long2str(long, char *, print_format);
typedef unsigned int size_t;
extern void SetExiInterruptMask(s32 chan, EXIControl *exi);
extern BOOL EXILock(s32 chan, u32 dev, EXICallback unlockedCallback);
extern BOOL EXISelect(s32 chan, u32 dev, u32 freq);
extern BOOL EXIImm(s32 chan, void *buf, s32 len, u32 type, EXICallback callback);
extern BOOL EXISync(s32 chan);
extern unsigned char lbl_802E05C8[];
void fn_800E59A4(const decform *f, double x, decimal *d);
u32 fwrite(const void *ptr, u32 size, u32 count, void *file);
u32 wcstombs(char *s, const u16 *pwcs, u32 n);
void* memchr(const void* src, int val, unsigned long n);
int fn_800E8F6C(char *s, const char *fmt, ...);
void fn_800E904C(char *s, const char *fmt, void *args);
u32 fn_800E90C4(char *s, u32 n, const char *fmt, void *args);
int vprintf(const char *format, void *args);
int fn_800E91D0(const char *format, ...);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fn_800E8F6C(char *s, const char *fmt, ...) {
    va_list args;
    struct {
        char *s;
        s32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    va_start(args, fmt);
    ctx.s = s;
    ctx.n = -1;
    ctx.c = 0;
    r = __pformatter(__StringWrite, &ctx, fmt, args);
    if (s != 0) {
        idx = -2;
        if (r < 0xFFFFFFFF) idx = r;
        s[idx] = 0;
    }
    return r;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void fn_800E904C(char *s, const char *fmt, void *args) {
    struct {
        char *s;
        s32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    ctx.s = s;
    ctx.n = -1;
    ctx.c = 0;
    r = __pformatter(__StringWrite, &ctx, fmt, args);
    if (s != 0) {
        idx = -2;
        if (r < 0xFFFFFFFF) idx = r;
        s[idx] = 0;
    }
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
u32 fn_800E90C4(char *s, u32 n, const char *fmt, void *args) {
    struct {
        char *s;
        u32 n;
        u32 c;
    } ctx;
    u32 r;
    u32 idx;
    ctx.s = s;
    ctx.n = n;
    ctx.c = 0;
    r = __pformatter(__StringWrite, &ctx, fmt, args);
    if (s != 0) {
        idx = n - 1;
        if (r < n) idx = r;
        s[idx] = 0;
    }
    return r;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int vprintf(const char *format, void *args) {
    int result;

    if (fwide(__files + 0x50, -1) >= 0) {
        return -1;
    }
    __begin_critical_region(2);
    result = __pformatter(__FileWrite, __files + 0x50, format, args);
    __end_critical_region(2);
    return result;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fn_800E91D0(const char *format, ...) {
    int result;
    va_list args;

    if (fwide(__files + 0x50, -1) >= 0) {
        return -1;
    }
    __begin_critical_region(2);
    va_start(args, format);
    result = __pformatter(__FileWrite, __files + 0x50, format, args);
    __end_critical_region(2);
    return result;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void *__StringWrite(void *ctx, const void *buf, u32 len) {
    u32 count;
    u32 c = M2C_FIELD(ctx, u32 *, 8);
    u32 n = M2C_FIELD(ctx, u32 *, 4);

    count = n - c;
    if (c + len <= n) {
        count = len;
    }
    memcpy(M2C_FIELD(ctx, char **, 0) + c, buf, count);
    M2C_FIELD(ctx, u32 *, 8) += count;
    return (void *)1;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void *__FileWrite(void *file, const void *buf, u32 len) {
    return (fwrite(buf, 1, len, file) == len) ? file : 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int __pformatter(void *(*WriteProc)(void *, const char *, u32), void *WriteProcArg, const char *format_str, va_list arg) {
    int num_chars, chars_written, field_width;
    const char *format_ptr;
    const char *curr_format;
    print_format format;
    long long long_long_num;
    double long_double_num;
    char buff[512];
    char *buff_ptr;
    char *string_end;
    char fill_char = ' ';
    long long_num;

    format_ptr = format_str;
    chars_written = 0;

    while (*format_ptr) {
        if (!(curr_format = strchr(format_ptr, '%'))) {
            num_chars = strlen(format_ptr);
            chars_written += num_chars;
            if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
                return -1;
            }
            break;
        }

        num_chars = curr_format - format_ptr;
        chars_written += num_chars;

        if (num_chars && !(*WriteProc)(WriteProcArg, format_ptr, num_chars)) {
            return -1;
        }

        format_ptr = curr_format;
        format_ptr = parse_format((char *)format_ptr, arg, &format);

        switch (format.conversion_char) {
        case 'd':
        case 'i':
            if (format.argument_options == 3) {
                long_num = *(long *)__va_arg(arg, 1);
            } else if (format.argument_options == 4) {
                long_long_num = *(long long *)__va_arg(arg, 2);
            } else {
                long_num = *(int *)__va_arg(arg, 1);
            }

            if (format.argument_options == 2) {
                long_num = (short)long_num;
            }

            if (format.argument_options == 1) {
                long_num = (signed char)long_num;
            }

            if (format.argument_options == 4) {
                if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            } else {
                if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'o':
        case 'u':
        case 'x':
        case 'X':
            if (format.argument_options == 3) {
                long_num = *(unsigned long *)__va_arg(arg, 1);
            } else if (format.argument_options == 4) {
                long_long_num = *(long long *)__va_arg(arg, 2);
            } else {
                long_num = *(unsigned int *)__va_arg(arg, 1);
            }

            if (format.argument_options == 2) {
                long_num = (unsigned short)long_num;
            }

            if (format.argument_options == 1) {
                long_num = (unsigned char)long_num;
            }

            if (format.argument_options == 4) {
                if (!(buff_ptr = longlong2str(long_long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            } else {
                if (!(buff_ptr = long2str(long_num, buff + 512, format))) {
                    goto conversion_error;
                }
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'f':
        case 'F':
        case 'e':
        case 'E':
        case 'g':
        case 'G':
            if (format.argument_options == 5) {
                long_double_num = *(double *)__va_arg(arg, 3);
            } else {
                long_double_num = *(double *)__va_arg(arg, 3);
            }

            if (!(buff_ptr = float2str(long_double_num, buff + 512, format))) {
                goto conversion_error;
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 'a':
        case 'A':
            if (format.argument_options == 5) {
                long_double_num = *(double *)__va_arg(arg, 3);
            } else {
                long_double_num = *(double *)__va_arg(arg, 3);
            }

            if (!(buff_ptr = double2hex(buff + 512, format, long_double_num))) {
                goto conversion_error;
            }

            num_chars = buff + 512 - 1 - buff_ptr;
            break;

        case 's':
            if (format.argument_options == 6) {
                u16 *wcs_ptr = *(u16 **)__va_arg(arg, 1);

                if (wcs_ptr == NULL) {
                    wcs_ptr = L"";
                }

                if ((num_chars = wcstombs(buff, wcs_ptr, sizeof(buff))) < 0) {
                    goto conversion_error;
                }

                buff_ptr = &buff[0];
            } else {
                buff_ptr = *(char **)__va_arg(arg, 1);
            }

            if (buff_ptr == NULL) {
                buff_ptr = "";
            }

            if (format.alternate_form) {
                num_chars = (unsigned char)*buff_ptr++;

                if (format.precision_specified && num_chars > format.precision) {
                    num_chars = format.precision;
                }
            } else if (format.precision_specified) {
                num_chars = format.precision;

                if ((string_end = (char *)memchr(buff_ptr, 0, num_chars)) != 0) {
                    num_chars = string_end - buff_ptr;
                }
            } else {
                num_chars = strlen(buff_ptr);
            }

            break;

        case 'n':
            buff_ptr = *(char **)__va_arg(arg, 1);

            switch (format.argument_options) {
            case 0:
                *(int *)buff_ptr = chars_written;
                break;
            case 2:
                *(short *)buff_ptr = chars_written;
                break;
            case 3:
                *(long *)buff_ptr = chars_written;
                break;
            case 4:
                *(long long *)buff_ptr = chars_written;
                break;
            }

            continue;

        case 'c':
            buff_ptr = buff;
            *buff_ptr = *(int *)__va_arg(arg, 1);
            num_chars = 1;
            break;

        case '%':
            buff_ptr = buff;
            *buff_ptr = '%';
            num_chars = 1;
            break;

        case 0xFF:
        default:
        conversion_error:
            num_chars = strlen(curr_format);
            chars_written += num_chars;

            if (num_chars && !(*WriteProc)(WriteProcArg, curr_format, num_chars)) {
                return -1;
            }

            return chars_written;
        }

        field_width = num_chars;

        if (format.justification_options != 0) {
            fill_char = (format.justification_options == 2) ? '0' : ' ';

            if (((*buff_ptr == '+') || (*buff_ptr == '-') || (*buff_ptr == ' ')) && (fill_char == '0')) {
                if ((*WriteProc)(WriteProcArg, buff_ptr, 1) == 0) {
                    return -1;
                }

                ++buff_ptr;
                num_chars--;
            }

            while (field_width < format.field_width) {
                if ((*WriteProc)(WriteProcArg, &fill_char, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        if (num_chars && !(*WriteProc)(WriteProcArg, buff_ptr, num_chars)) {
            return -1;
        }

        if (format.justification_options == 0) {
            while (field_width < format.field_width) {
                char blank = ' ';

                if ((*WriteProc)(WriteProcArg, &blank, 1) == 0) {
                    return -1;
                }

                ++field_width;
            }
        }

        chars_written += field_width;
    }

    return chars_written;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
char *float2str(double num, char *buff, print_format format) {
    decimal dec;
    decform form;
    char *p;
    char *q;
    int n, digits, sign;
    int int_digits, frac_digits;

    if (format.precision > 509) {
        return 0;
    }

    form.style = 0;
    form.digits = 32;

    fn_800E59A4(&form, num, &dec);

    p = (char *)dec.sig.text + dec.sig.length;

    while (dec.sig.length > 1 && *--p == '0') {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text) {
    case '0':
        dec.exp = 0;
        break;
    case 'I':
        if (num < 0) {
            buff -= 5;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 1);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 6);
            }
        } else {
            buff -= 4;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 11);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 15);
            }
        }
        return buff;
    case 'N':
        if (dec.sign) {
            buff -= 5;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 19);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 24);
            }
        } else {
            buff -= 4;
            if (lbl_802E05C8[format.conversion_char] & 0x80) {
                fn_800EB764(buff, lbl_8029C148 + 29);
            } else {
                fn_800EB764(buff, lbl_8029C148 + 33);
            }
        }
        return buff;
    }

    dec.exp += dec.sig.length - 1;
    p = buff;
    *--p = 0;

    switch (format.conversion_char) {
    case 'g':
    case 'G':
        if (dec.sig.length > format.precision) {
            fn_800EA1DC(&dec, format.precision);
        }
        if (dec.exp < -4 || dec.exp >= format.precision) {
            if (format.alternate_form) {
                --format.precision;
            } else {
                format.precision = dec.sig.length - 1;
            }
            if (format.conversion_char == 'g') {
                format.conversion_char = 'e';
            } else {
                format.conversion_char = 'E';
            }
            goto e_format;
        }
        if (format.alternate_form) {
            format.precision -= dec.exp + 1;
        } else {
            if ((format.precision = dec.sig.length - (dec.exp + 1)) < 0) {
                format.precision = 0;
            }
        }
        goto f_format;

    case 'e':
    case 'E':
    e_format:
        if (dec.sig.length > format.precision + 1) {
            fn_800EA1DC(&dec, format.precision + 1);
        }
        n = dec.exp;
        sign = '+';
        if (n < 0) {
            n = -n;
            sign = '-';
        }
        for (digits = 0; n || digits < 2; ++digits) {
            *--p = n % 10 + '0';
            n /= 10;
        }
        *--p = sign;
        *--p = format.conversion_char;
        if (buff - p + format.precision > 509) {
            return 0;
        }
        if (dec.sig.length < format.precision + 1) {
            for (n = format.precision + 1 - dec.sig.length + 1; --n;) {
                *--p = '0';
            }
        }
        for (n = dec.sig.length, q = (char *)dec.sig.text + dec.sig.length; --n;) {
            *--p = *--q;
        }
        if (format.precision || format.alternate_form) {
            *--p = '.';
        }
        *--p = *dec.sig.text;
        if (dec.sign) {
            *--p = '-';
        } else if (format.sign_options == 1) {
            *--p = '+';
        } else if (format.sign_options == 2) {
            *--p = ' ';
        }
        break;

    case 'f':
    case 'F':
    f_format:
        if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
            frac_digits = 0;
        }
        if (frac_digits > format.precision) {
            fn_800EA1DC(&dec, dec.sig.length - (frac_digits - format.precision));
            if ((frac_digits = -dec.exp + dec.sig.length - 1) < 0) {
                frac_digits = 0;
            }
        }
        if ((int_digits = dec.exp + 1) < 0) {
            int_digits = 0;
        }
        if (int_digits + frac_digits > 509) {
            return 0;
        }
        q = (char *)dec.sig.text + dec.sig.length;
        for (digits = 0; digits < (format.precision - frac_digits); ++digits) {
            *--p = '0';
        }
        for (digits = 0; digits < frac_digits && digits < dec.sig.length; ++digits) {
            *--p = *--q;
        }
        for (; digits < frac_digits; ++digits) {
            *--p = '0';
        }
        if (format.precision || format.alternate_form) {
            *--p = '.';
        }
        if (int_digits) {
            for (digits = 0; digits < int_digits - dec.sig.length; ++digits) {
                *--p = '0';
            }
            for (; digits < int_digits; ++digits) {
                *--p = *--q;
            }
        } else {
            *--p = '0';
        }
        if (dec.sign) {
            *--p = '-';
        } else if (format.sign_options == 1) {
            *--p = '+';
        } else if (format.sign_options == 2) {
            *--p = ' ';
        }
        break;
    }
    return p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void fn_800EA1DC(decimal *dec, int new_length) {
    char c;
    char *p;
    int carry;

    if (new_length < 0) {
    return_zero:
        dec->exp = 0;
        dec->sig.length = 1;
        *dec->sig.text = '0';
        return;
    }

    if (new_length >= dec->sig.length)
        return;

    p = (char *)dec->sig.text + new_length + 1;
    c = *--p - '0';

    if (c == 5) {
        char *q = &((char *)dec->sig.text)[dec->sig.length];

        while (--q > p && *q == '0')
            ;

        carry = (q == p) ? p[-1] & 1 : 1;
    } else
        carry = (c > 5);

    while (new_length) {
        c = (*--p - '0') + carry;

        if ((carry = (c > 9)) != 0 || c == 0)
            --new_length;
        else {
            *p = c + '0';
            break;
        }
    }

    if (carry) {
        dec->exp += 1;
        dec->sig.length = 1;
        *dec->sig.text = '1';
        return;
    } else if (new_length == 0)
        goto return_zero;

    dec->sig.length = new_length;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma pool_strings on
char *double2hex(char *buff, print_format format, double x) {
    decimal d;
    print_format exp_format;
    double bits;
    decform df;
    char *p;
    int i;
    char digit;
    bits = x;
    if (format.precision > 509) return 0;
    df.style = 0;
    df.digits = 32;
    fn_800E59A4(&df, x, &d);
    if (d.sig.text[0] == 'I') {
        if ((*(short *)&bits) & 0x8000) {
            buff -= 5;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 1);
            else fn_800EB764(buff, lbl_8029C148 + 6);
        } else {
            buff -= 4;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 11);
            else fn_800EB764(buff, lbl_8029C148 + 15);
        }
        return buff;
    }
    if (d.sig.text[0] == 'N') {
        if (((unsigned char *)&x)[0] & 0x80) {
            buff -= 5;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 19);
            else fn_800EB764(buff, lbl_8029C148 + 24);
        } else {
            buff -= 4;
            if (format.conversion_char == 'A') fn_800EB764(buff, lbl_8029C148 + 29);
            else fn_800EB764(buff, lbl_8029C148 + 33);
        }
        return buff;
    }
    exp_format.justification_options = 1;
    exp_format.sign_options = 1;
    exp_format.precision_specified = 0;
    exp_format.alternate_form = 0;
    exp_format.argument_options = 0;
    exp_format.conversion_char = 'd';
    exp_format.field_width = 0;
    exp_format.precision = 1;
    p = long2str((short)(((*(short *)&bits) >> 4) & 0x7ff) - 1023, buff, exp_format);
    if (format.conversion_char == 'a') *--p = 'p';
    else *--p = 'P';
    for (i = format.precision; i >= 1; --i) {
        unsigned char c = ((unsigned char *)&x)[i / 2 + 1];
        digit = (c >> 4) & 15;
        if (i % 2) digit = c & 15;
        if (digit < 10) digit += '0';
        else if (format.conversion_char == 'a') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
    }
    if (format.precision != 0 || format.alternate_form) *--p = '.';
    *--p = '1';
    if (format.conversion_char == 'a') *--p = 'x';
    else *--p = 'X';
    *--p = '0';
    if ((*(short *)&bits) & 0x8000) *--p = '-';
    else if (format.sign_options == 1) *--p = '+';
    else if (format.sign_options == 2) *--p = ' ';
    return p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
static char *longlong2str(long long num, char *buff, print_format format) {
    unsigned long long unsigned_num, base;
    char *p;
    int n, digit;
    int minus = 0;
    unsigned_num = num;
    minus = 0;
    p = buff;
    *--p = 0;
    n = 0;
    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o')) return p;
    switch (format.conversion_char) {
    case 'd': case 'i':
        base = 10;
        if (num < 0) { unsigned_num = -unsigned_num; minus = 1; }
        break;
    case 'o': base = 8; format.sign_options = 0; break;
    case 'u': base = 10; format.sign_options = 0; break;
    case 'x': case 'X': base = 16; format.sign_options = 0; break;
    }
    do {
        digit = unsigned_num % base;
        unsigned_num /= base;
        if (digit < 10) digit += '0';
        else if (format.conversion_char == 'x') digit += 'a' - 10;
        else digit += 'A' - 10;
        *--p = digit;
        ++n;
    } while (unsigned_num != 0);
    if (base == 8 && format.alternate_form && *p != '0') { *--p = '0'; ++n; }
    if (format.justification_options == 2) {
        format.precision = format.field_width;
        if (minus || format.sign_options != 0) --format.precision;
        if (base == 16 && format.alternate_form) format.precision -= 2;
    }
    if (buff - p + format.precision > 509) return 0;
    while (n < format.precision) { *--p = '0'; ++n; }
    if (base == 16 && format.alternate_form) { *--p = format.conversion_char; *--p = '0'; }
    if (minus) *--p = '-';
    else if (format.sign_options == 1) *--p = '+';
    else if (format.sign_options == 2) *--p = ' ';
    return p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
static char *long2str(long num, char *buff, print_format format) {
    unsigned long unsigned_num, base;
    char *p;
    int n, digit;
    int minus = 0;

    unsigned_num = num;
    minus = 0;

    p = buff;

    *--p = 0;

    n = 0;

    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == 'o')) {
        return p;
    }

    switch (format.conversion_char) {
    case 'd':
    case 'i':
        base = 10;
        if (num < 0) {
            unsigned_num = -unsigned_num;
            minus = 1;
        }
        break;
    case 'o':
        base = 8;
        format.sign_options = 0;
        break;
    case 'u':
        base = 10;
        format.sign_options = 0;
        break;
    case 'x':
    case 'X':
        base = 16;
        format.sign_options = 0;
        break;
    }

    do {
        digit = unsigned_num % base;
        unsigned_num /= base;
        if (digit < 10) {
            digit += '0';
        } else if (format.conversion_char == 'x') {
            digit += 'a' - 10;
        } else {
            digit += 'A' - 10;
        }
        *--p = digit;
        ++n;
    } while (unsigned_num != 0);

    if (base == 8 && format.alternate_form && *p != '0') {
        *--p = '0';
        ++n;
    }

    if (format.justification_options == 2) {
        format.precision = format.field_width;
        if (minus || format.sign_options != 0) {
            --format.precision;
        }
        if (base == 16 && format.alternate_form) {
            format.precision -= 2;
        }
    }

    if (buff - p + format.precision > 509) {
        return 0;
    }

    while (n < format.precision) {
        *--p = '0';
        ++n;
    }

    if (base == 16 && format.alternate_form) {
        *--p = format.conversion_char;
        *--p = '0';
    }

    if (minus) {
        *--p = '-';
    } else if (format.sign_options == 1) {
        *--p = '+';
    } else if (format.sign_options == 2) {
        *--p = ' ';
    }

    return p;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw off
char *parse_format(char *format, va_list args, print_format *out) {
print_format f;
int c = *(format + 1);
int flag;
char *p = format + 1;
f.sign_options = 0;
f.justification_options = 1;
f.precision_specified = 0;
f.alternate_form = 0;
f.argument_options = 0;
f.field_width = 0;
f.precision = 0;
if (c == '%') { f.conversion_char = c; *out = f; return p + 1; }
for (;;) {
flag = 1;
switch (c) {
case '-': f.justification_options = 0; break;
case '+': f.sign_options = 1; break;
case ' ': if (f.sign_options != 1) f.sign_options = 2; break;
case '#': f.alternate_form = 1; break;
case '0': if (f.justification_options != 0) f.justification_options = 2; break;
default: flag = 0; break;
}
if (flag) c = *++p;
else break;
}
if (c == '*') {
f.field_width = *(int *)__va_arg(args, 1);
if (f.field_width < 0) { f.justification_options = 0; f.field_width = -f.field_width; }
c = *++p;
} else {
while (lbl_802E05C8[(u8)c] & 16) {
f.field_width = f.field_width * 10 + (c - '0');
c = *++p;
}
}
if (f.field_width > 509) { f.conversion_char = 0xFF; *out = f; return p + 1; }
if (c == '.') {
c = *++p;
f.precision_specified = 1;
if (c == '*') {
f.precision = *(int *)__va_arg(args, 1);
if (f.precision < 0) f.precision_specified = 0;
c = *++p;
} else {
while (lbl_802E05C8[(u8)c] & 16) {
f.precision = f.precision * 10 + (c - '0');
c = *++p;
}
}
}
flag = 1;
switch (c) {
case 'h': f.argument_options = 2; if (p[1] == 'h') { f.argument_options = 1; c = *++p; } break;
case 'l': f.argument_options = 3; if (p[1] == 'l') { f.argument_options = 4; c = *++p; } break;
case 'L': f.argument_options = 5; break;
default: flag = 0; break;
}
if (flag) c = *++p;
f.conversion_char = c;
switch (c) {
case 'd': case 'i': case 'o': case 'u': case 'x': case 'X':
if (f.argument_options == 5) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 1;
else if (f.justification_options == 2) f.justification_options = 1;
break;
case 'f': case 'F':
if (f.argument_options == 2 || f.argument_options == 4) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 6;
break;
case 'a': case 'A':
if (!f.precision_specified) f.precision = 13;
if (f.argument_options == 2 || f.argument_options == 4 || f.argument_options == 1) f.conversion_char = 0xFF;
break;
case 'g': case 'G':
if (f.precision == 0) f.precision = 1;
case 'e': case 'E':
if (f.argument_options == 2 || f.argument_options == 4 || f.argument_options == 1) f.conversion_char = 0xFF;
else if (!f.precision_specified) f.precision = 6;
break;
case 'p':
f.conversion_char = 'x'; f.alternate_form = 1; f.argument_options = 3; f.precision = 8;
break;
case 'c':
if (f.argument_options == 3) f.argument_options = 6;
else if (f.precision_specified || f.argument_options != 0) f.conversion_char = 0xFF;
break;
case 's':
if (f.argument_options == 3) f.argument_options = 6;
else if (f.argument_options != 0) f.conversion_char = 0xFF;
break;
case 'n':
if (f.argument_options == 5) f.conversion_char = 0xFF;
break;
default: f.conversion_char = 0xFF; break;
}
*out = f;
return p + 1;
}
#pragma pop
