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

s32 fn_8010F1D0(s32 *arg0) {
    return *arg0;
}

s32 fn_8010F1D8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
