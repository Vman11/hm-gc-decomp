/* MSL_C strtoul.c */
#include "common.h"
extern u8 lbl_802E05C8[];
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern s32 lbl_8035A978;
extern unsigned char lbl_802E05C8[];
extern unsigned char lbl_802E07C8[];
#define su_isspace(c) (lbl_802E05C8[(unsigned char)(c)] & 0x06)
#define su_isdigit(c) (lbl_802E05C8[(unsigned char)(c)] & 0x10)
#define su_isalpha(c) (lbl_802E05C8[(unsigned char)(c)] & 0xC0)
#define su_toupper(c) ((c) == -1 ? -1 : (int)lbl_802E07C8[(unsigned char)(c)])
#define fetch() (count++, (*ReadProc)(ReadProcArg, 0, 0))
#define unfetch(c) (*ReadProc)(ReadProcArg, c, 1)
int __StringRead(void *arg0, int arg1, int arg2);
int atoi(char *str);
u32 __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *negative, int *overflow);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma scheduling reset
int atoi(char *str) {
    u32 __strtoul(int, int, int (*)(void *, int, int), void *, int *, int *, int *);
    unsigned long value;
    int overflow, negative, count;
    struct {
        char *NextChar;
        int NullCharDetected;
    } isc;

    isc.NextChar = str;
    isc.NullCharDetected = 0;
    value = __strtoul(10, 0x7FFFFFFF, __StringRead, &isc, &count, &negative, &overflow);
    if (overflow || (!negative && value > 0x7FFFFFFF) || (negative && value > 0x80000000)) {
        value = (negative ? 0x80000000 : 0x7FFFFFFF);
        lbl_8035A978 = 34;
    } else if (negative) {
        value = -value;
    }
    return (long)value;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
#pragma scheduling reset
u32 __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned, int *negative, int *overflow) {
    int scan_state = 1;
    int count = 0;
    int spaces = 0;
    unsigned long value = 0;
    unsigned long value_max = 0;
    int c;

    *negative = *overflow = 0;
    if (base < 0 || base == 1 || base > 36 || max_width < 1)
        scan_state = 64;
    else
        c = fetch();
    if (base != 0)
        value_max = 0xFFFFFFFF / base;
    while (count <= max_width && c != -1 && !(scan_state & 0x60)) {
        switch (scan_state) {
        case 1:
            if (su_isspace(c)) {
                c = fetch();
                count--;
                spaces++;
                break;
            }
            if (c == '+') {
                c = fetch();
            } else if (c == '-') {
                c = fetch();
                *negative = 1;
            }
            scan_state = 2;
            break;
        case 2:
            if (base == 0 || base == 16) {
                if (c == '0') {
                    scan_state = 4;
                    c = fetch();
                    break;
                }
            }
            scan_state = 8;
            break;
        case 4:
            if (c == 'X' || c == 'x') {
                base = 16;
                scan_state = 8;
                c = fetch();
                break;
            }
            if (base == 0)
                base = 8;
            scan_state = 16;
            break;
        case 8:
        case 16:
            if (base == 0)
                base = 10;
            if (!value_max)
                value_max = 0xFFFFFFFF / base;
            if (su_isdigit(c)) {
                if ((c -= '0') >= base) {
                    if (scan_state == 16)
                        scan_state = 32;
                    else
                        scan_state = 64;
                    c += '0';
                    break;
                }
            } else if (!su_isalpha(c) || (su_toupper(c) - 'A' + 10) >= base) {
                if (scan_state == 16)
                    scan_state = 32;
                else
                    scan_state = 64;
                break;
            } else
                c = su_toupper(c) - 'A' + 10;
            if (value > value_max)
                *overflow = 1;
            value *= base;
            if (c > (0xFFFFFFFF - value))
                *overflow = 1;
            value += c;
            scan_state = 16;
            c = fetch();
            break;
        }
    }
    if (!(scan_state & 0x34)) {
        count = 0;
        value = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    unfetch(c);
    return value;
}
#pragma pop
