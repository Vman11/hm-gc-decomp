/* Functions from 0x801A717C to 0x801A73D8, found by decomp-toolkit. */
#include "common.h"
void fn_801A6EC8();
void fn_801A7610();
void fn_801C0A10();
void fn_801BDD3C();
void fn_801A75B8();
void fn_801DB744();
void fn_801C0834();
void fn_801DC730();
void fn_8009F150();
void fn_801DBE0C();
void fn_801DBACC();
void fn_801BDA5C();
void fn_801BDA0C();
void fn_801BDB4C();
void fn_801BDB18();
void fn_801C079C();
void fn_801C07E8();
void fn_801C0750();
void fn_801C0704();
void fn_801DB218();
void fn_8002A984();
void fn_801DDD8C();
void fn_801DB740();
void fn_801DB01C();
void fn_801DB00C();
void fn_801DBF24();
void fn_801DAEE4();
void fn_801DAD34();
void fn_801DAC0C();
s32 fn_801A717C(void* arg0, f32 farg0, f32 farg1);
void fn_801DA82C();
void fn_801DAAE4();
void fn_801DA5E8();
void fn_801DA4C0();
void fn_801DA398();
void fn_801DA1E4();
void fn_801D9F80();
void fn_801D9E80();
void fn_801D9D80();
void fn_801D99B4();
void fn_801D95E8();
void fn_801D921C();
void fn_801D8E50();
void fn_801D8CBC();
void fn_801D8B9C();
void fn_801D8A7C();
void fn_801D895C();
void fn_801D883C();
void fn_801D871C();
void fn_801D85FC();
void fn_801D84DC();
void fn_801D83BC();
void fn_801D829C();
void fn_801D817C();
void fn_801D805C();
void fn_801D7F3C();
void fn_801D7E1C();
void fn_801D7CE0();
void fn_801D7BC8();
void fn_801D791C();
void fn_801D7680();
void fn_801D7548();
void fn_801D6D7C();
void fn_801D6C10();
void fn_801DAE5C();
void fn_801D7448();
void fn_801D7348();
void fn_801D7248();
void fn_801D7148();
void fn_801D7048();
void fn_801D6F48();
void fn_801DDCD0();
void fn_801DB220();
void fn_801DB4B0();
void fn_8009F130();
void fn_801DD9D4();
void fn_8009F134();
void fn_801A73D8();
void fn_801A7598();
void *lbl_802EA6B0[81] = { 0, 0, (void *)fn_801A6EC8, (void *)fn_801A7610, (void *)fn_801C0A10, (void *)fn_801BDD3C, (void *)fn_801A75B8, (void *)fn_801DB744, (void *)fn_801C0834, (void *)fn_801DC730, (void *)fn_8009F150, (void *)fn_801DBE0C, (void *)fn_801DBACC, (void *)fn_801BDA5C, (void *)fn_801BDA0C, (void *)fn_801BDB4C, (void *)fn_801BDB18, (void *)fn_801C079C, (void *)fn_801C07E8, (void *)fn_801C0750, (void *)fn_801C0704, (void *)fn_801DB218, (void *)fn_8002A984, (void *)fn_801DDD8C, (void *)fn_801DB740, (void *)fn_801DB01C, (void *)fn_801DB00C, (void *)fn_801DBF24, (void *)fn_801DAEE4, (void *)fn_801DAD34, (void *)fn_801DAC0C, (void *)fn_801A717C, (void *)fn_801DA82C, (void *)fn_801DAAE4, (void *)fn_801DA5E8, (void *)fn_801DA4C0, (void *)fn_801DA398, (void *)fn_801DA1E4, (void *)fn_801D9F80, (void *)fn_801D9E80, (void *)fn_801D9D80, (void *)fn_801D99B4, (void *)fn_801D95E8, (void *)fn_801D921C, (void *)fn_801D8E50, (void *)fn_801D8CBC, (void *)fn_801D8B9C, (void *)fn_801D8A7C, (void *)fn_801D895C, (void *)fn_801D883C, (void *)fn_801D871C, (void *)fn_801D85FC, (void *)fn_801D84DC, (void *)fn_801D83BC, (void *)fn_801D829C, (void *)fn_801D817C, (void *)fn_801D805C, (void *)fn_801D7F3C, (void *)fn_801D7E1C, (void *)fn_801D7CE0, (void *)fn_801D7BC8, (void *)fn_801D791C, (void *)fn_801D7680, (void *)fn_801D7548, (void *)fn_801D6D7C, (void *)fn_801D6C10, (void *)fn_801DAE5C, (void *)fn_801D7448, (void *)fn_801D7348, (void *)fn_801D7248, (void *)fn_801D7148, (void *)fn_801D7048, (void *)fn_801D6F48, (void *)fn_801DDCD0, (void *)fn_801DB220, (void *)fn_801DB4B0, (void *)fn_8009F130, (void *)fn_801DD9D4, (void *)fn_8009F134, (void *)fn_801A73D8, (void *)fn_801A7598 };

extern f32 lbl_80364E80;
s32 fn_801A717C(void* arg0, f32 farg0, f32 farg1) {
    void* temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg1 > *(f32*)((char*)temp_r4 + 0x11C) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x1C) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x1C) = 2;
    }
    temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg0 > *(f32*)((char*)temp_r4 + 0x118) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x20) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x20) = 2;
    }
    return 1;
}
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
void fn_801A71DC(void *arg0, u32 type, UnkParam *p) {
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

