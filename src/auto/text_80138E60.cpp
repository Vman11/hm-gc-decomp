// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O_80138E60 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(void *); };
struct Q_80138E60 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual O_80138E60 *o(); };
extern "C" { extern u8 *lbl_8035AC5C; void __dt__9C8014AAC8Fv(void); void fn_800E1E88(void *, void *); void fn_8013F838(void *); void *memset(void *, s32, u32); }

void fn_80138E60(u8 *p) {
    if (*(void **)(p + 232) != NULL) {
        fn_800E1E88(*(void **)(p + 232), (void *)__dt__9C8014AAC8Fv);
    }
    if (*(void **)(p + 184) != NULL) {
        if (--*(u32 *)lbl_8035AC5C < 1) {
            (*(Q_80138E60 **)p)->o()->m(*(void **)(lbl_8035AC5C + 132));
        }
    }
    fn_8013F838(p);
    *(s32 *)(p + 184) = 0;
    memset(p + 188, 0, 16);
    memset(p + 204, 0, 16);
    *(s32 *)(p + 220) = 0;
    *(s32 *)(p + 240) = -1;
    *(s32 *)(p + 236) = 0;
    *(s32 *)(p + 224) = 0;
    *(s32 *)(p + 228) = 0;
    *(s32 *)(p + 232) = 0;
}

} /* extern "C" */
