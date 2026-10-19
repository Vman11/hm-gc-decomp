/* MetroTRK PowerPC register access helpers (inlined into the register read/write handlers). */
#ifndef TRK_PPC_INLINE_H
#define TRK_PPC_INLINE_H

#include "trk_priv.h"

static inline s32 TRKPPCAccessSpecialReg(void *value, u32 *access_func, BOOL read) {
    typedef void (*asm_access_type)(void *, void *);
    asm_access_type asm_access;
    access_func[9] = 0x4E800020;
    asm_access = (asm_access_type)access_func;
    fn_800DF3E0((u32)access_func, sizeof(u32) * 10);
    (*asm_access)(value, (void *)lbl_80325D44);
    return 0;
}
static inline s32 TRKPPCAccessSPR(void *value, u32 spr_register_num, BOOL read) {
    u32 access_func[10] = { 0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000,
                            0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000 };
    if (read) {
        access_func[0] = 0x7C8002A6 | ((spr_register_num & 0x1F) << 16) | ((spr_register_num & 0x3E0) << 6);
        access_func[1] = 0x90830000;
    } else {
        access_func[0] = 0x80830000;
        access_func[1] = 0x7C8003A6 | ((spr_register_num & 0x1F) << 16) | ((spr_register_num & 0x3E0) << 6);
    }
    return TRKPPCAccessSpecialReg(value, access_func, read);
}
static inline s32 TRKPPCAccessPairedSingleRegister(void *srcDestPtr, u32 psr, BOOL read) {
    u32 instructionData[10] = { 0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000,
                                0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000 };
    instructionData[0] = read ? (0xF0030000 | (psr << 21)) : (0xE0030000 | (psr << 21));
    return TRKPPCAccessSpecialReg(srcDestPtr, instructionData, read);
}
static inline s32 TRKPPCAccessFPRegister(void *srcDestPtr, u32 fpr, BOOL read) {
    s32 error = 0;
    u32 instructionData1[10] = { 0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000,
                                 0x60000000, 0x60000000, 0x60000000, 0x60000000, 0x60000000 };
    if (fpr < 0x20) {
        if (read) {
            instructionData1[0] = 0xD8030000 | (fpr << 21);
        } else {
            instructionData1[0] = 0xC8030000 | (fpr << 21);
        }
        error = TRKPPCAccessSpecialReg(srcDestPtr, instructionData1, read);
    } else if (fpr == 0x20) {
        *(u64 *)srcDestPtr &= 0xFFFFFFFF;
    } else if (fpr == 0x21) {
        if (!read) {
            *(u32 *)srcDestPtr = *((u32 *)srcDestPtr + 1);
        }
        error = TRKPPCAccessSPR(srcDestPtr, 1022, read);
        if (read) {
            *(u64 *)srcDestPtr = *(u32 *)srcDestPtr & 0xFFFFFFFFLL;
        }
    }
    return error;
}

#endif
