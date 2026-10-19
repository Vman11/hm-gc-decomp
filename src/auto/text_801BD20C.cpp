/* Functions from 0x801BD20C to 0x801BD37C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801BD20C(void *arg0, s32 arg1, void *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x14) = (u8) M2C_FIELD(arg2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x15) = (u8) M2C_FIELD(arg2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) M2C_FIELD(arg2, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x17) = (u8) M2C_FIELD(arg2, u8 *, 3);
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 0x18) = (u8) M2C_FIELD(arg2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x1A) = (u8) M2C_FIELD(arg2, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x1B) = (u8) M2C_FIELD(arg2, u8 *, 3);
        return;
    case 2:
        M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(arg2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(arg2, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(arg2, u8 *, 3);
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 0x20) = (u8) M2C_FIELD(arg2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x21) = (u8) M2C_FIELD(arg2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(arg2, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(arg2, u8 *, 3);
        return;
    }
}

void fn_801BD2C4(void *arg0, s32 arg1, void *arg2) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x14);
        M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x16);
        M2C_FIELD(arg2, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 0x17);
        return;
    case 1:
        M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x18);
        M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
        M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x1A);
        M2C_FIELD(arg2, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 0x1B);
        return;
    case 2:
        M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x1C);
        M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0x1D);
        M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x1E);
        M2C_FIELD(arg2, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 0x1F);
        return;
    case 3:
        M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD(arg0, u8 *, 0x20);
        M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0x21);
        M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x22);
        M2C_FIELD(arg2, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 0x23);
        return;
    }
}

} /* extern "C" */
