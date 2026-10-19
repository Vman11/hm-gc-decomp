// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
void fn_8011A3F4(int, int, int);
void fn_8011A470(void);
struct VCall_fn_8011B574_0 { char vptr_pad[0x74]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };
struct VCall_fn_8011B574_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_8011B574(u32 param_1, u32 param_2) {
    u8 auStack_18 [16];

    fn_8011A470();
    ((VCall_fn_8011B574_0 *)(param_1))->m((u32)(param_2));
    ((VCall_fn_8011B574_1 *)(param_1 + 0x78))->m((u32)(auStack_18));
    *(u32 *)(param_1 + 4) = param_1 + 0x78;
    if (*(u32 *)(param_2 + 4) < 1) {
        *(u32 *)(param_2 + 4) = 1;
    }
    if (*(u32 *)(param_2 + 8) == 0) {
        *(u32 *)(param_2 + 8) = 8;
    }
    if (*(u32 *)(param_2 + 0x10) == 0) {
        *(u32 *)(param_2 + 0x10) = 1;
    }
    fn_8011A3F4((int)(param_1), (int)(*(u32 *)(param_1 + 4)), (int)(param_2));
}
}
