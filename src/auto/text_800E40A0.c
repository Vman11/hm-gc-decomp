/* Functions from 0x800E40A0 to 0x800F5578, found by decomp-toolkit. */
#include "common.h"

extern unsigned char lbl_802E06C8[];
extern double lbl_803636C0;
extern s32 lbl_8035A998;
extern s32 lbl_8035A99C;
extern u8 lbl_8035A9A4;
double fn_800F04FC(double);
double fn_800EF80C(double, double, int);
int fn_800EE484(double, double*);
int OSDisableInterrupts(void);
int OSRestoreInterrupts(int);
void fn_800F0CC4(u32, void*, u32);

extern u8 lbl_8029BFB0[];
u8 *fn_800E4108(void) {
    return lbl_8029BFB0;
}

void __end_critical_region(void) {

}

void __begin_critical_region(void) {

}

void __kill_critical_regions(void) {

}

extern s32 lbl_803596A0;
void fn_800EB1AC(s32 arg0) {
    lbl_803596A0 = arg0;
}

double fn_800F03E4(double x) {
    double y[2];
    int n, ix;

    ix = *(int*)&x;
    ix &= 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return fn_800EF80C(x, lbl_803636C0, 1);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = fn_800EE484(x, y);
        return fn_800EF80C(y[0], y[1], 1 - ((n & 1) << 1));
    }
}

void fn_800ECE54(void);
void fn_800F045C(void) {
    fn_800ECE54();
}

f32 fn_800F051C(f32 x) {
    return fn_800F04FC(x);
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

void DBClose(void) {

}

void DBOpen(void) {

}

int DBRead(void* buf, u32 size) {
    int enabled = OSDisableInterrupts();
    fn_800F0CC4(((lbl_8035A998 & 0x10000) ? 0x1000 : 0) + 0x1E000, buf, (size + 3) & ~3);
    lbl_8035A99C = 0;
    lbl_8035A9A4 = 0;
    OSRestoreInterrupts(enabled);
    return 0;
}

void EXI2_Reserve(void) {

}

void EXI2_Unreserve(void) {

}

