/* Functions from 0x8020EE2C to 0x8020EEEC, found by decomp-toolkit. */
#include "common.h"

typedef struct { s32 f0; s32 f4; s32 f8; s32 pad[4]; } Elem1C;
typedef struct { Elem1C* a; Elem1C* b; u32 n0; u32 n1; } Tbl;

s32 fn_8020EE2C(void* arg0, u32 arg1) {
    Tbl* t = arg0;
    if (arg1 >= t->n1) {
        return 0;
    }
    return t->b[arg1].f4;
}

s32 fn_8020EE54(void *arg0, u32 arg1) {
    if (arg1 >= M2C_FIELD(arg0, u32 *, 0xC)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, u8 **, 4) + (arg1 * 0x1C), s32 *, 0);
}

s32 fn_8020EE78(void* arg0, u32 arg1) {
    u8* p;
    if (arg1 >= *(u32*)((u8*)arg0 + 8)) {
        return 0;
    }
    p = *(u8**)arg0 + arg1 * 0x1C;
    return *(s32*)(p + 4);
}

s32 fn_8020EEA0(void* arg0, u32 arg1) {
    u8* p;
    if (arg1 >= *(u32*)((u8*)arg0 + 8)) {
        return 0;
    }
    p = *(u8**)arg0 + arg1 * 0x1C;
    return *(s32*)(p + 8);
}

s32 fn_8020EEC8(void* arg0, u32 arg1) {
    if (arg1 >= *(u32*)((u8*)arg0 + 8)) {
        return 0;
    }
    return *(s32*)(*(u8**)arg0 + arg1 * 0x1C);
}
