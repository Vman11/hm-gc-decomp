// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_801051CC { virtual void p0(); virtual void p1(); virtual void a(); virtual void p3(); virtual void p4(); virtual void b(void *); };
void fn_800F8DD0(void *);
void fn_800E1E88(void *, void *);
void __dt__9C80108120Fv(void *, s32);
void __dt__9C80129A9CFv(void *, s32);

void fn_801051CC(u8 *p) {
    fn_800F8DD0(p);
    if (*(void **)(p + 0x14) != NULL && *(void **)(p + 0x18) != NULL) {
        (*(V1_801051CC **)(p + 0x18))->a();
        (*(V1_801051CC **)(p + 0x14))->b(*(void **)(p + 0x18));
    }
    if (*(void **)(p + 0x28) != NULL) {
        fn_800E1E88(*(void **)(p + 0x28), (void *)__dt__9C80108120Fv);
    }
    if (*(void **)(p + 0x24) != NULL) {
        fn_800E1E88(*(void **)(p + 0x24), (void *)__dt__9C80129A9CFv);
    }
    *(s32 *)(p + 0x14) = 0;
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1C) = 0;
    *(s32 *)(p + 0x20) = 0;
    *(s32 *)(p + 0x24) = 0;
    *(s32 *)(p + 0x28) = 0;
    *(s32 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x30) = 0;
    *(s32 *)(p + 0x34) = 0;
}

} /* extern "C" */
