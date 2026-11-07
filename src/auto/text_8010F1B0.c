/* Functions from 0x8010F1B0 to 0x8010F3DC, found by decomp-toolkit. */
#include "common.h"
void __dt__9C80111028Fv();
void *__vt__9C80111028[3] = { 0, 0, (void *)__dt__9C80111028Fv };

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


static inline UnkParamDesc *Desc(UnkParam *p) { return p->desc; }
static inline u32 Count(UnkParamDesc *d) { return d->count; }
static inline s32 MaxI(UnkParamDesc *d) { return d->max.i; }
static inline s32 MinI(UnkParamDesc *d) { return d->min.i; }
static inline f32 MaxF(UnkParamDesc *d) { return d->max.f; }
static inline f32 MinF(UnkParamDesc *d) { return d->min.f; }
static inline s32 ValI(UnkParam *p) { return p->val.i; }
static inline f32 ValF(UnkParam *p) { return p->val.f; }
static inline void SetI(UnkParam *p, s32 v) { p->val.i = v; }
static inline void SetF(UnkParam *p, f32 v) { p->val.f = v; }
static inline s32 *IntsP(UnkParam *p) { return p->val.ints; }
static inline f32 *FltsP(UnkParam *p) { return p->val.floats; }
void fn_8010F1E0(void *arg0, u32 type, UnkParam *p) {
    switch (type) {
    case 1:
        if (p->val.i > 1) p->val.i = 1;
        if (p->val.i < 0) p->val.i = 0;
        break;
    case 2:
        if (ValI(p) > MaxI(Desc(p))) SetI(p, MaxI(Desc(p)));
        if (ValI(p) < MinI(Desc(p))) SetI(p, MinI(Desc(p)));
        break;
    case 3:
        if (ValF(p) > MaxF(Desc(p))) SetF(p, MaxF(Desc(p)));
        if (ValF(p) < MinF(Desc(p))) SetF(p, MinF(Desc(p)));
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
        for (i = 0; i < Count(Desc(p)); i++) {
            if (p->val.ints[i] > MaxI(Desc(p))) p->val.ints[i] = MaxI(Desc(p));
            if (p->val.ints[i] < MinI(Desc(p))) p->val.ints[i] = MinI(Desc(p));
        }
        break;
    }
    case 9: {
        u32 i;
        for (i = 0; i < Count(Desc(p)); i++) {
            if (p->val.floats[i] > MaxF(Desc(p))) p->val.floats[i] = MaxF(Desc(p));
            if (p->val.floats[i] < MinF(Desc(p))) p->val.floats[i] = MinF(Desc(p));
        }
        break;
    }
    case 10:
    case 11:
        break;
    }
}

