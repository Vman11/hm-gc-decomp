/* Functions from 0x80199910 to 0x80199A98, found by decomp-toolkit. */
#include "common.h"


typedef struct {
    f32 x, y, z, w;
} Plane;

s32 fn_80199910(void *arg0, f32 *arg1) {
    f32 *p = *(f32 **)((u8 *)arg0 + 0);
    f32 *end = p + *(s32 *)((u8 *)arg0 + 4) * 4;
    f32 x = arg1[0];
    f32 y = arg1[1];
    f32 z = arg1[2];
    f32 r = -arg1[3];
    for (; p < end; p += 4) {
        f32 d = x * p[0] + y * p[1] + z * p[2] + p[3];
        if (d < r) {
            return 0;
        }
    }
    return 1;
}

void fn_8019998C(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = arg2;
}

void fn_80199998(void *arg0, void *arg1, void *arg2) {
    extern f32 lbl_80330648[];
    extern f32 lbl_80330654[];
    {
        f32 v2 = M2C_FIELD(arg1, f32 *, 104);
        f32 v1 = M2C_FIELD(arg1, f32 *, 100);
        f32 v0 = M2C_FIELD(arg1, f32 *, 96);
        lbl_80330648[0] = v0;
        lbl_80330648[1] = v1;
        lbl_80330648[2] = v2;
    }
    M2C_FIELD(arg0, void **, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = 4;
    {
        f32 v3 = M2C_FIELD(arg1, f32 *, 28);
        f32 v2 = M2C_FIELD(arg1, f32 *, 24);
        f32 v1 = M2C_FIELD(arg1, f32 *, 20);
        f32 v0 = M2C_FIELD(arg1, f32 *, 16);
        lbl_80330654[0] = v0;
        lbl_80330654[1] = v1;
        lbl_80330654[2] = v2;
        lbl_80330654[3] = v3;
    }
    {
        f32 v3 = M2C_FIELD(arg1, f32 *, 44);
        f32 v2 = M2C_FIELD(arg1, f32 *, 40);
        f32 v1 = M2C_FIELD(arg1, f32 *, 36);
        f32 v0 = M2C_FIELD(arg1, f32 *, 32);
        f32 *p = M2C_FIELD(arg0, f32 **, 0);
        p[0] = v0;
        p[1] = v1;
        p[2] = v2;
        p[3] = v3;
    }
    {
        f32 v3 = M2C_FIELD(arg1, f32 *, 76);
        f32 v2 = M2C_FIELD(arg1, f32 *, 72);
        f32 v1 = M2C_FIELD(arg1, f32 *, 68);
        f32 v0 = M2C_FIELD(arg1, f32 *, 64);
        f32 *p = M2C_FIELD(arg0, f32 **, 0);
        p[4] = v0;
        p[5] = v1;
        p[6] = v2;
        p[7] = v3;
    }
    {
        f32 v3 = M2C_FIELD(arg1, f32 *, 60);
        f32 v2 = M2C_FIELD(arg1, f32 *, 56);
        f32 v1 = M2C_FIELD(arg1, f32 *, 52);
        f32 v0 = M2C_FIELD(arg1, f32 *, 48);
        f32 *p = M2C_FIELD(arg0, f32 **, 0);
        p[8] = v0;
        p[9] = v1;
        p[10] = v2;
        p[11] = v3;
    }
    {
        f32 v3 = M2C_FIELD(arg1, f32 *, 92);
        f32 v2 = M2C_FIELD(arg1, f32 *, 88);
        f32 v1 = M2C_FIELD(arg1, f32 *, 84);
        f32 v0 = M2C_FIELD(arg1, f32 *, 80);
        f32 *p = M2C_FIELD(arg0, f32 **, 0);
        p[12] = v0;
        p[13] = v1;
        p[14] = v2;
        p[15] = v3;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

void fn_80199A84(void *arg0) {
    *(u32 *)((u8 *)arg0 + 0) = 0;
    *(u32 *)((u8 *)arg0 + 4) = 0;
    *(u32 *)((u8 *)arg0 + 8) = 0;
}

