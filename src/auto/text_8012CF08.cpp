// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C8012C740 { public: u32 code; u8 d[20]; C8012C740(); };
struct F { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual u32 map(s32); virtual void draw(f32, f32, f32, void *, C8012C740 *, u32, u32, u32, u32); };
extern "C" { u32 strlen(const char *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035A9F4; extern u8 lbl_80328C90[]; }

extern "C" void fn_8012CF08(f32 x, f32 y, f32 z, F *f, void *a, const char *s, u32 b, u32 c, u32 d) {
    C8012C740 *q;
    C8012C740 *heap;
    C8012C740 *g;
    u32 i;
    u32 len = strlen(s);
    if (len > 256) {
        if (!lbl_8035A9F4) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        heap = new C8012C740[len];
        fn_800F7E98();
        if (!heap) fn_800604C4(-4, 0, 0, 0);
        g = heap;
    } else {
        heap = 0;
        g = (C8012C740 *)lbl_80328C90;
    }
    for (q = g, i = 0; i < len; q++, i++, s++) {
        q->code = f->map(*s);
    }
    f->draw(x, y, z, a, g, len, b, c, d);
    if (heap) delete[] heap;
}

} /* extern "C" */
