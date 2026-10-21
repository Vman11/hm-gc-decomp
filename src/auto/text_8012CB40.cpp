// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

class C8012C740 { public: u32 code; u32 pad4; f32 r[4]; C8012C740(); };
struct Buf { u8 d[16]; };
struct F { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual u32 map(s32); virtual void layout(f32, f32, f32, Buf *, C8012C740 *, u32, u32, u32, u32); };
extern "C" { u32 strlen(const char *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035A9F4; extern u8 lbl_80328C90[]; }

extern "C" void fn_8012CB40(f32 x, f32 y, f32 z, F *f, f32 *out, const char *s, u32 n, u32 b, u32 c, u32 d) {
    Buf buf;
    C8012C740 *q;
    C8012C740 *heap;
    C8012C740 *g;
    u32 i;
    u32 len;
    strlen(s);
    len = n + 1;
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
    f->layout(x, y, z, &buf, g, len, b, c, d);
    if (heap) delete[] heap;
    out[0] = g[n].r[0];
    out[1] = g[n].r[1];
    out[2] = g[n].r[2];
    out[3] = g[n].r[3];
}

} /* extern "C" */
