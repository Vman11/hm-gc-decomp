/* Functions from 0x8010F1B0 to 0x8010F3DC, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u8 pad0[0x10];
    u32 count;
    union { s32 i; f32 f; } min;
    union { s32 i; f32 f; } max;
} UnkParamDesc;

typedef struct {
    UnkParamDesc *desc;
    u8 pad4[0x8];
    union { s32 i; f32 f; u8 *bytes; s32 *ints; f32 *floats; } val;
} UnkParam;

s32 fn_8010F1B0(void *arg0) { return *(s32 *)((u8 *)arg0 + 0xC); }

s32 fn_8010F1B8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x10);
}

u8 fn_8010F1C0(void* arg0) {
    return *(s32*)arg0 == 0;
}

s32 fn_8010F1D0(s32 *arg0) {
    return *arg0;
}

s32 fn_8010F1D8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}

void fn_8010F1E0(void *arg0, u32 type, UnkParam *p) {
    switch (type) {
    case 1:
        if (p->val.i > 1) p->val.i = 1;
        if (p->val.i < 0) p->val.i = 0;
        break;
    case 2:
        if (p->val.i > p->desc->max.i) p->val.i = p->desc->max.i;
        if (p->val.i < p->desc->min.i) p->val.i = p->desc->min.i;
        break;
    case 3:
        if (p->val.f > p->desc->max.f) p->val.f = p->desc->max.f;
        if (p->val.f < p->desc->min.f) p->val.f = p->desc->min.f;
        break;
    case 7: {
        u32 i;
        for (i = 0; i < p->desc->count; i++) {
            if (p->val.bytes[i] > 0xFF) p->val.bytes[i] = 0xFF;
        }
        break;
    }
    case 6: {
        u32 i;
        for (i = 0; i < p->desc->count; i++) {
            if (p->val.ints[i] > 1) p->val.ints[i] = 1;
            if (p->val.ints[i] < 0) p->val.ints[i] = 0;
        }
        break;
    }
    case 8: {
        u32 i;
        for (i = 0; i < p->desc->count; i++) {
            if (p->val.ints[i] > p->desc->max.i) p->val.ints[i] = p->desc->max.i;
            if (p->val.ints[i] < p->desc->min.i) p->val.ints[i] = p->desc->min.i;
        }
        break;
    }
    case 9: {
        u32 i;
        for (i = 0; i < p->desc->count; i++) {
            if (p->val.floats[i] > p->desc->max.f) p->val.floats[i] = p->desc->max.f;
            if (p->val.floats[i] < p->desc->min.f) p->val.floats[i] = p->desc->min.f;
        }
        break;
    }
    case 10:
    case 11:
        break;
    }
}

