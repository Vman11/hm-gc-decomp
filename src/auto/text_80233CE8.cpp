// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800E1E88(void *, void *);
void __dt__9C8018E150Fv(void);
void __dt__9C801883E0Fv(void);
void __dt__9C80192398Fv(void);
void __dla__FPv(void *);
void fn_8023C754(void *);
void __dt__9C8023C7CCFv(void *, s32);

void fn_80233CE8(u8 *p) {
    if (*(void **)(p + 4) != NULL) {
        u32 i;
        for (i = 0; i < *(u32 *)(p + 12); i++) {
            u8 *e = (*(u8 ***)(p + 4))[i];
            if (e != NULL) {
                if (*(u16 *)(e + 4) == 2) {
                    fn_800E1E88(e, (void *)__dt__9C8018E150Fv);
                } else if (*(u16 *)(e + 4) == 3) {
                    fn_800E1E88(e, (void *)__dt__9C801883E0Fv);
                } else {
                    fn_800E1E88(e, (void *)__dt__9C80192398Fv);
                }
            }
        }
        __dla__FPv(*(void **)(p + 4));
    }
    if (*(void **)(p + 20) != NULL) {
        fn_8023C754(*(void **)(p + 20));
        __dt__9C8023C7CCFv(*(void **)(p + 20), 1);
    }
    if (*(void **)(p + 8) != NULL) {
        __dla__FPv(*(void **)(p + 8));
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 8) = 0;
}

} /* extern "C" */
