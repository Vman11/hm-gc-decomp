/* Functions from 0x80202B48 to 0x80203040, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80365730;
extern f32 lbl_80365734;
void fn_80202B48(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) | 4);
}

void fn_80202B58(u8* arg0) {
    arg0[0x1C] |= 1;
}

s32 fn_80202B68(u8* arg0) {
    u8 flags = arg0[0x1C];
    if ((flags & 2) || flags != 0) {
        return 1;
    }
    return 0;
}

s32 fn_80202B8C(u8* arg0) {
    u8* p = *(u8**)(arg0 + 0x10);
    u32 flags;
    u8* q;

    if (p != NULL) {
        flags = *(u32*)(p + 0x8);
        if (flags & 0x400) {
            if (flags & 0x80) {
                q = *(u8**)(arg0 + 0xAC);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            } else {
                q = *(u8**)(arg0 + 0xA0);
                if (q != NULL && *(u16*)(q + 0x146) != 0) {
                    return 1;
                }
            }
        } else if (flags & 0x800) {
            return arg0[0x1C] & 1;
        }
    }
    return 0;
}

void fn_80202C08(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

void fn_80202C50(u8* arg0) {
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x18) = 0;
    *(s32*)(arg0 + 0x14) = 0;
    *(s32*)(arg0 + 0x30) = 0;
    arg0[0x1C] = 0;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(s32*)(arg0 + 0x28) = 0;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
}

void fn_80202C98(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0x1D0);
    if (temp_r4 != NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x1CC);
        M2C_FIELD(temp_r4, void **, 0x1CC) = temp_r0;
        if (temp_r0 != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1CC), void **, 0x1D0) = (void *) M2C_FIELD(arg0, void **, 0x1D0);
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x30) = (void *) M2C_FIELD(arg0, void **, 0x1D0);
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, void **, 0x1CC);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x2C) = temp_r0_2;
        if (temp_r0_2 != NULL) {
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x2C), s32 *, 0x1D0) = 0;
        } else {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x30) = NULL;
        }
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x1D8);
    if (temp_r4_2 != NULL) {
        temp_r0_3 = M2C_FIELD(arg0, void **, 0x1D4);
        M2C_FIELD(temp_r4_2, void **, 0x1D4) = temp_r0_3;
        if (temp_r0_3 != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x1D4), void **, 0x1D8) = (void *) M2C_FIELD(arg0, void **, 0x1D8);
            return;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB4) = (void *) M2C_FIELD(arg0, void **, 0x1D8);
        return;
    }
    temp_r0_4 = M2C_FIELD(arg0, void **, 0x1D4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB0) = temp_r0_4;
    if (temp_r0_4 != NULL) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB0), s32 *, 0x1D8) = 0;
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), void **, 0xB4) = NULL;
}

s32 fn_80202D7C(u8* arg0, u8* arg1, u8* arg2) {
    s32 found = 0;
    u8* p;
    u8* owner;

    *(s32*)(arg0 + 0x18) = 0;
    arg0[0x1C] = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
    *(u8**)(arg0 + 0x10) = arg1;
    *(u8**)(arg0 + 0x14) = arg2;
    *(s32*)(arg0 + 0x20) = 1;
    *(s32*)(arg0 + 0x24) = *(s32*)(*(u8**)(arg0 + 0x10) + 0xC);

    for (p = *(u8**)(arg1 + 0x2C); p != NULL; p = *(u8**)(p + 0x1CC)) {
        if (p == arg0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D0) = *(u8**)(*(u8**)(arg0 + 0x10) + 0x30)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x10) + 0x30) = arg0;
        *(u8**)(arg0 + 0x1CC) = NULL;
    }

    for (p = *(u8**)(arg2 + 0xB0); p != NULL; p = *(u8**)(p + 0x1D4)) {
        if (p == arg0) {
            if (!found) {
                owner = *(u8**)(arg0 + 0x10);
                if ((*(u8**)(owner + 0x30) = *(u8**)(*(u8**)(owner + 0x30) + 0x1D0)) != NULL) {
                    *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = NULL;
                } else {
                    *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = NULL;
                }
                found = 1;
            }
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D8) = *(u8**)(*(u8**)(arg0 + 0x14) + 0xB4)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x14) + 0xB4) + 0x1D4) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x14) + 0xB0) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x14) + 0xB4) = arg0;
        *(u8**)(arg0 + 0x1D4) = NULL;
    }
    return found;
}

s32 fn_80202EE0(u8* arg0, u8* arg1, u8* arg2) {
    s32 found = 0;
    u8* p;
    u8* owner;

    *(s32*)(arg0 + 0x14) = 0;
    arg0[0x1C] = 0;
    *(f32*)(arg0 + 0x4) = lbl_80365730;
    *(f32*)(arg0 + 0x8) = lbl_80365730;
    *(f32*)(arg0 + 0xC) = lbl_80365730;
    *(f32*)(arg0 + 0x2C) = lbl_80365734;
    *(u8**)(arg0 + 0x10) = arg1;
    *(u8**)(arg0 + 0x18) = arg2;
    *(s32*)(arg0 + 0x20) = 0;
    *(s32*)(arg0 + 0x24) = *(s32*)(*(u8**)(arg0 + 0x10) + 0xC);

    for (p = *(u8**)(arg1 + 0x2C); p != NULL; p = *(u8**)(p + 0x1CC)) {
        if (p == arg0) {
            found = 1;
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D0) = *(u8**)(*(u8**)(arg0 + 0x10) + 0x30)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x10) + 0x30) = arg0;
        *(u8**)(arg0 + 0x1CC) = NULL;
    }

    for (p = *(u8**)(arg2 + 0x68); p != NULL; p = *(u8**)(p + 0x1D4)) {
        if (p == arg0) {
            if (!found) {
                owner = *(u8**)(arg0 + 0x10);
                if ((*(u8**)(owner + 0x30) = *(u8**)(*(u8**)(owner + 0x30) + 0x1D0)) != NULL) {
                    *(u8**)(*(u8**)(*(u8**)(arg0 + 0x10) + 0x30) + 0x1CC) = NULL;
                } else {
                    *(u8**)(*(u8**)(arg0 + 0x10) + 0x2C) = NULL;
                }
                found = 1;
            }
            break;
        }
    }
    if (!found) {
        if ((*(u8**)(arg0 + 0x1D8) = *(u8**)(*(u8**)(arg0 + 0x18) + 0x6C)) != NULL) {
            *(u8**)(*(u8**)(*(u8**)(arg0 + 0x18) + 0x6C) + 0x1D4) = arg0;
        } else {
            *(u8**)(*(u8**)(arg0 + 0x18) + 0x68) = arg0;
        }
        *(u8**)(*(u8**)(arg0 + 0x18) + 0x6C) = arg0;
        *(u8**)(arg0 + 0x1D4) = NULL;
    }
    return found;
}

