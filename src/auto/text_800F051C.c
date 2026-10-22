/* Float wrappers and misc from 0x800F051C to 0x800F065C. */
#include "common.h"
double fn_800EFA20(double);
extern unsigned char lbl_802E06C8[];
double fn_800F04FC(double, double);
double fn_800F030C(double);
double fn_800EFDA4(double);
double fn_800EFA20(double);
double fn_800EFA20(double x);
double fn_800EFDA4(double x);
double fn_800F030C(double x);
double fn_800F03E4(double x);
double fn_800F04FC(double x, double y);
f32 fn_800F051C(f32 x, f32 y);
f32 fn_800F0540(f32 x);
f32 fn_800F0564(f32 x);
f32 fn_800F0588(f32 x);
f32 fn_800F05AC(f32 x);
int fn_800F05D0(const char* s1, const char* s2);

f32 fn_800F051C(f32 x, f32 y) {
    return fn_800F04FC(x, y);
}

f32 fn_800F0540(f32 x) {
    return fn_800F03E4(x);
}

double fn_800F030C(double);
f32 fn_800F0564(f32 x) {
    return fn_800F030C(x);
}

double fn_800EFDA4(double);
f32 fn_800F0588(f32 x) {
    return fn_800EFDA4(x);
}

double fn_800EFA20(double);
f32 fn_800F05AC(f32 x) {
    return fn_800EFA20(x);
}

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
