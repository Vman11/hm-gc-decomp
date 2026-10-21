// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 b[68]; } T68;
typedef struct { u8 pad[6996]; u32 idx[255]; T68 arr[1]; } S;
void fn_801F59BC(void *);
void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_801F4430(void *);
void __dt__9C801F4708Fv(void);
void __dt__9C801F5108Fv(void);
void __dt__9C801F591CFv(void);
void fn_800E1F04(void *, void *, u32, u32);
void __dt__9C801F5AC4Fv(void *, s32);

void *dtor_8013D5C8(u8 *p, s16 f) {
    u32 i;
    u8 *t;
    if (p != NULL) {
        fn_801F59BC(p);
        if (*(void **)(p + 44) != NULL) {
            __dla__FPv(*(void **)(p + 44));
            *(s32 *)(p + 44) = 0;
        }
        if (*(void **)(p + 26384) != NULL) {
            for (t = p, i = 0; i < *(u32 *)(p + 26408); t += 4, i++) {
                fn_801F4430(&((S *)p)->arr[*(u32 *)(t + 6996)]);
            }
        }
        fn_800E1F04(p + 8016, (void *)__dt__9C801F4708Fv, 68, 255);
        fn_800E1F04(p + 3360, (void *)__dt__9C801F5108Fv, 904, 4);
        fn_800E1F04(p + 1708, (void *)__dt__9C801F591CFv, 412, 4);
        fn_800E1F04(p + 60, (void *)__dt__9C801F591CFv, 412, 4);
        __dt__9C801F5AC4Fv(p, -1);
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
