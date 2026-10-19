/* Functions from 0x8018B9C8 to 0x8018BB70, found by decomp-toolkit. */
#include "common.h"

extern "C" {

typedef struct Elem8018B9C8 {
    u32 flags;
    u8 pad4[0x20];
    f32 v24[3];
    f32 v30[3];
    f32 v3C[3];
    f32 v48[3];
    u8 pad54[0x44];
} Elem8018B9C8;

typedef struct Obj8018B9C8 {
    u8 pad0[0x14];
    s32 count;
    u8 pad18[0x1C];
    Elem8018B9C8* elems;
} Obj8018B9C8;

void fn_8018B9C8(Obj8018B9C8* obj, f32* scale) {
    Elem8018B9C8* e = obj->elems;
    Elem8018B9C8* end = e + obj->count;
    f32 z;
    f32 y;
    f32 x;
    x = scale[0];
    y = scale[1];
    z = scale[2];
    for (; e < end; e++) {
        e->v3C[0] *= x;
        e->v3C[1] *= y;
        e->v3C[2] *= z;
        e->v48[0] *= x;
        e->v48[1] *= y;
        e->v48[2] *= z;
        e->v24[0] *= x;
        e->v24[1] *= y;
        e->v24[2] *= z;
        e->v30[0] *= x;
        e->v30[1] *= y;
        e->v30[2] *= z;
        e->flags |= 9;
    }
}

void fn_8018BAA8(void *arg0) {
    extern s32 lbl_80364A6C;
    char *p = M2C_FIELD(arg0, char **, 0x34);
    char *end = p + M2C_FIELD(arg0, s32 *, 0x14) * 0x98;
    for (; p < end; p += 0x98) {
        if (M2C_FIELD(p, u32 *, 0) & 8) {
            float *v = M2C_FIELD(p, float **, 0x1c);
            M2C_FIELD(p, float *, 0x3c) = v[0];
            M2C_FIELD(p, float *, 0x40) = v[1];
            M2C_FIELD(p, float *, 0x44) = v[2];
            v = M2C_FIELD(p, float **, 0x20);
            M2C_FIELD(p, float *, 0x48) = v[0];
            M2C_FIELD(p, float *, 0x4c) = v[1];
            M2C_FIELD(p, float *, 0x50) = v[2];
            M2C_FIELD(p, float *, 36) = M2C_FIELD(p, float *, 4);
            M2C_FIELD(p, float *, 40) = M2C_FIELD(p, float *, 8);
            M2C_FIELD(p, float *, 44) = M2C_FIELD(p, float *, 12);
            M2C_FIELD(p, float *, 48) = M2C_FIELD(p, float *, 16);
            M2C_FIELD(p, float *, 52) = M2C_FIELD(p, float *, 20);
            M2C_FIELD(p, float *, 56) = M2C_FIELD(p, float *, 24);
            M2C_FIELD(p, u32 *, 0) &= ~8;
            M2C_FIELD(p, u32 *, 0) |= lbl_80364A6C;
        }
    }
}

} /* extern "C" */
