// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8020E450 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_802148D4(void *);
void fn_802114B4(void *);
void fn_802114FC(void *);

static inline BOOL act_8020E450(u8 *p) {
    return *(void **)(p + 0x6BC) != NULL;
}

void fn_8020E450(u8 *p, void *a, s32 c) {
    if (act_8020E450(p)) {
        if (act_8020E450(p)) {
            ((S_8020E450 *)(p + 0x88C))->m();
            fn_802148D4(p + 0x6C0);
            fn_802114B4(p);
        }
        *(s32 *)(p + 0x6BC) = 0;
        *(s32 *)(p + 0x880) = -1;
        *(s32 *)(p + 0x884) = -1;
        *(s32 *)(p + 0x888) = -1;
    }
    *(s32 *)(p + 0x6A8) = 1;
    *(s32 *)(p + 0x6A0) = 6;
    *(s32 *)(p + 0x6B4) = 0;
    *(s32 *)(p + 0x6BC) = c;
    fn_802114FC(p);
}

} /* extern "C" */
