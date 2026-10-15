/* Functions from 0x8020EE2C to 0x8020EEEC, found by decomp-toolkit. */
#include "common.h"

s32 fn_8020EE2C(void *arg0, u32 arg1) {
    if (arg1 >= M2C_FIELD(arg0, u32 *, 0xC)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, u8 **, 4) + (arg1 * 0x1C), s32 *, 4);
}

s32 fn_8020EE54(void *arg0, u32 arg1) {
    if (arg1 >= M2C_FIELD(arg0, u32 *, 0xC)) {
        return 0;
    }
    return M2C_FIELD(M2C_FIELD(arg0, u8 **, 4) + (arg1 * 0x1C), s32 *, 0);
}

s32 fn_8020EEC8(void* arg0, u32 arg1) {
    if (arg1 >= *(u32*)((u8*)arg0 + 8)) {
        return 0;
    }
    return *(s32*)(*(u8**)arg0 + arg1 * 0x1C);
}
