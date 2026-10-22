/* MSL_C strtold.c */
#include "common.h"
extern u8 lbl_802E05C8[];
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
extern float lbl_803596B4[];
extern double lbl_803596C0[];
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern s32 lbl_8035A978;
extern unsigned char lbl_802E05C8[];
extern unsigned char lbl_802E07C8[];
double fn_800E4924(const decimal *d);
int __StringRead(void *arg0, int arg1, int arg2);
double fn_800EB838(char *str);
double __strtold(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
double __strtold(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *overflow) {
    extern u8 lbl_802E07C8[];
    extern struct { char *decimal_point; char *thousands_sep; char *grouping; char *int_curr_symbol; } lbl_802E08C8;
    extern float lbl_803596B0[], lbl_803596B4[];
    extern double lbl_803596C8[], lbl_803596D0[], lbl_803596D8[];
    extern double lbl_803631F0;
    double fn_800E4924(decimal *);
    int scan_state = 1;
    int hex_scan_state = 0;
    int count = 0;
    int spaces = 0;
    int c;
    decimal d = { 0, 0, 0, { 0, "" } };
    int sig_negative = 0;
    int exp_negative = 0;
    long exp_value = 0;
    int exp_adjust = 0;
    double result;
    int sign_detected = 0;
    unsigned char *chptr = (unsigned char *)&result;
    unsigned char uch, uch1;
    int ui;
    int NibbleIndex;
    int expsign = 0;
    int exp_digits = 0;
    unsigned intdigits = 0;
    short expvalue = 0;
    int radix_marker = *(unsigned char *)lbl_802E08C8.decimal_point;

    *overflow = 0;
    c = (count++, ReadProc(ReadProcArg, 0, 0));

    while (count <= max_width && c != -1 && !(scan_state & 0x1800)) {
        switch (scan_state) {
        case 1:
            if (lbl_802E05C8[(u8)c] & 6) {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                count--;
                spaces++;
                break;
            }
            switch (c == -1 ? -1 : lbl_802E07C8[(u8)c]) {
            case '-':
                sig_negative = 1;
            case '+':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                sign_detected = 1;
                break;
            case 'I':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                scan_state = 0x4000;
                break;
            case 'N':
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                scan_state = 0x2000;
                break;
            default:
                scan_state = 2;
                break;
            }
            break;
        case 0x4000: {
            int i = 1;
            char model[] = "INFINITY";

            while (i < 8 && (c == -1 ? -1 : lbl_802E07C8[(u8)c]) == model[i]) {
                i++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            }
            if (i == 3 || i == 8) {
                if (sig_negative) {
                    result = -lbl_803596B4[0];
                } else {
                    result = lbl_803596B4[0];
                }
                *chars_scanned = spaces + i + sign_detected;
                return result;
            } else {
                scan_state = 0x1000;
            }
            break;
        }
        case 0x2000: {
            int i = 1, j = 0;
            char model[] = "NAN(";

            while (i < 4 && (c == -1 ? -1 : lbl_802E07C8[(u8)c]) == model[i]) {
                i++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            }
            if (i == 3 || i == 4) {
                if (i == 4) {
                    while (j < 32 && ((lbl_802E05C8[(u8)c] & 0x10) || (lbl_802E05C8[(u8)c] & 0xC0))) {
                        j++;
                        c = (count++, ReadProc(ReadProcArg, 0, 0));
                    }
                    if (c != ')') {
                        scan_state = 0x1000;
                        break;
                    } else {
                        j++;
                    }
                }
                if (sig_negative) {
                    result = -lbl_803596B0[0];
                } else {
                    result = lbl_803596B0[0];
                }
                *chars_scanned = spaces + i + j + sign_detected;
                return result;
            } else {
                scan_state = 0x1000;
            }
            break;
        }
        case 2:
            if (c == radix_marker) {
                scan_state = 0x10;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'X') {
                    scan_state = 0x8000;
                    hex_scan_state = 1;
                } else {
                    scan_state = 4;
                }
                break;
            }
            scan_state = 8;
            break;
        case 4:
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 8;
            break;
        case 8:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                if (c == radix_marker) {
                    scan_state = 0x20;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    scan_state = 0x40;
                }
                break;
            }
            if (d.sig.length < 20) {
                d.sig.text[d.sig.length++] = c;
            } else {
                exp_adjust++;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x10:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            scan_state = 0x20;
            break;
        case 0x20:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x40;
                break;
            }
            if (d.sig.length < 20) {
                if (c != '0' || d.sig.length) {
                    d.sig.text[d.sig.length++] = c;
                }
                exp_adjust--;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x40:
            if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'E') {
                scan_state = 0x80;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x800;
            break;
        case 0x80:
            if (c == '+') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
            } else if (c == '-') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                exp_negative = 1;
            }
            scan_state = 0x100;
            break;
        case 0x100:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x1000;
                break;
            }
            if (c == '0') {
                scan_state = 0x200;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x400;
            break;
        case 0x200:
            if (c == '0') {
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            scan_state = 0x400;
            break;
        case 0x400:
            if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                scan_state = 0x800;
                break;
            }
            exp_value = exp_value * 10 + (c - '0');
            if (exp_value > 0x7FFF) {
                *overflow = 1;
            }
            c = (count++, ReadProc(ReadProcArg, 0, 0));
            break;
        case 0x8000:
            switch (hex_scan_state) {
            case 1:
                chptr[0] = 0;
                chptr[1] = 0;
                chptr[2] = 0;
                chptr[3] = 0;
                chptr[4] = 0;
                chptr[5] = 0;
                chptr[6] = 0;
                chptr[7] = 0;
                NibbleIndex = 2;
                hex_scan_state = 2;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            case 2:
                if (c == '0') {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                    break;
                }
                hex_scan_state = 4;
                break;
            case 4:
                if (!(lbl_802E05C8[(u8)c] & 0x20)) {
                    if (c == radix_marker) {
                        hex_scan_state = 8;
                        c = (count++, ReadProc(ReadProcArg, 0, 0));
                    } else {
                        hex_scan_state = 0x10;
                    }
                    break;
                }
                if (NibbleIndex < 17) {
                    intdigits++;
                    uch = chptr[NibbleIndex / 2];
                    ui = (c == -1 ? -1 : lbl_802E07C8[(u8)c]);
                    if (ui >= 'A') {
                        ui = ui - 'A' + 10;
                    } else {
                        ui -= '0';
                    }
                    uch1 = ui;
                    if ((NibbleIndex % 2) != 0) {
                        uch |= uch1;
                    } else {
                        uch |= (uch1 << 4);
                    }
                    chptr[NibbleIndex++ / 2] = uch;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                }
                break;
            case 8:
                if (!(lbl_802E05C8[(u8)c] & 0x20)) {
                    hex_scan_state = 0x10;
                    break;
                }
                if (NibbleIndex < 17) {
                    uch = chptr[NibbleIndex / 2];
                    ui = (c == -1 ? -1 : lbl_802E07C8[(u8)c]);
                    if (ui >= 'A') {
                        ui = ui - 'A' + 10;
                    } else {
                        ui -= '0';
                    }
                    uch1 = ui;
                    if ((NibbleIndex % 2) != 0) {
                        uch |= uch1;
                    } else {
                        uch |= (uch1 << 4);
                    }
                    chptr[NibbleIndex++ / 2] = uch;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                }
                break;
            case 0x10:
                if ((c == -1 ? -1 : lbl_802E07C8[(u8)c]) == 'P') {
                    hex_scan_state = 0x20;
                    exp_digits++;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                } else {
                    scan_state = 0x800;
                }
                break;
            case 0x20:
                exp_digits++;
                if (c == '-') {
                    expsign = 1;
                } else if (c != '+') {
                    ReadProc(ReadProcArg, c, 1);
                    exp_digits--;
                }
                hex_scan_state = 0x40;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            case 0x40:
                if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                    scan_state = 0x1000;
                    break;
                }
                if (c == '0') {
                    hex_scan_state = 0x80;
                    exp_digits++;
                    c = (count++, ReadProc(ReadProcArg, 0, 0));
                    break;
                }
                hex_scan_state = 0x100;
                break;
            case 0x100:
                if (!(lbl_802E05C8[(u8)c] & 0x10)) {
                    scan_state = 0x800;
                    break;
                }
                expvalue = expvalue * 10 + (c - '0');
                if (exp_value > 0x7FFF) {
                    *overflow = 1;
                }
                exp_digits++;
                c = (count++, ReadProc(ReadProcArg, 0, 0));
                break;
            }
            break;
        }
    }

    if (!(scan_state & 0xE2C)) {
        count = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    ReadProc(ReadProcArg, c, 1);

    if (hex_scan_state == 0) {
        if (exp_negative) {
            exp_value = -exp_value;
        }
        {
            int n = d.sig.length;
            unsigned char *p = &d.sig.text[n];

            while (n-- && *--p == '0') {
                exp_adjust++;
            }
            d.sig.length = n + 1;
            if (d.sig.length == 0) {
                d.sig.text[d.sig.length++] = '0';
            }
        }
        exp_value += exp_adjust;
        if (exp_value < -0x8000 || exp_value > 0x7FFF) {
            *overflow = 1;
        }
        if (*overflow) {
            if (exp_negative) {
                return 0.0;
            } else {
                return sig_negative ? -lbl_803596C8[0] : lbl_803596C8[0];
            }
        }
        d.exp = exp_value;
        result = fn_800E4924(&d);
        if (0.0 != result && result < lbl_803596D0[0]) {
            *overflow = 1;
        } else if (result > lbl_803596D8[0]) {
            *overflow = 1;
            result = lbl_803596C8[0];
        }
        if (sig_negative && (scan_state & 0xE2C)) {
            result = -result;
        }
        return result;
    } else {
        unsigned long long *uptr = (unsigned long long *)&result;

        if (result != lbl_803631F0) {
            if (expsign) {
                expvalue = -expvalue;
            }
            while ((*(short *)&result & 0x00F0) != 0x0010) {
                *uptr >>= 1;
                expvalue++;
            }
            expvalue += (intdigits - 1) * 4;
            *(short *)&result &= 0x000F;
            *(short *)&result |= ((expvalue + 1023) << 4);
            *chars_scanned = spaces + sign_detected + NibbleIndex + 1 + exp_digits;
            if (0.0 != result && result < lbl_803596D0[0]) {
                *overflow = 1;
                result = 0.0;
            } else if (result > lbl_803596D8[0]) {
                *overflow = 1;
                result = lbl_803596C8[0];
            }
            if (sig_negative) {
                *(short *)&result |= 0x8000;
            }
        } else {
            result = 0.0;
        }
        return result;
    }
}
#pragma pop

double fn_800EB838(char *str) {
    double __strtold(int, int (*)(void *, int, int), void *, int *, int *);
    
    extern double lbl_803596B8[], lbl_803596C0[];
    extern s32 lbl_8035A978;
    struct { char *str; int end; } state;
    int error;
    int count;
    double value, magnitude;
    state.str = str;
    state.end = 0;
    value = __strtold(0x7FFFFFFF, __StringRead, &state, &count, &error);
    magnitude = __fabs(value);
    if (error != 0 || (0.0 != value && (magnitude < lbl_803596B8[0] || magnitude > lbl_803596C0[0])))
        lbl_8035A978 = 0x22;
    return value;
}
