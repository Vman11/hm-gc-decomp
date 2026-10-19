// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8022F828 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void *a(); };
struct V2_8022F828 { virtual void *b(); };
struct S_8022F828 { u8 pad[0xA0]; virtual void m(void *, void *, void *); };
extern u8 *lbl_8035B460;
extern u32 lbl_80365DB4;
extern u32 lbl_80365DBC;
void fn_80239658(void *, void *);
void fn_80104F78(void *, void *, void *);

void fn_8022F828(u8 *p, u8 *q) {
    fn_80239658(p, q);
    *(u8 **)(q + 0x48) = p;
    *(void **)(p + 0x260) = (*(V1_8022F828 **)(*(u8 **)(lbl_8035B460 + 0xC) + 0x2C4C))->a();
    *(void **)(p + 0x264) = (*(V2_8022F828 **)(p + 0x260))->b();
    *(void **)(p + 0x268) = (*(V2_8022F828 **)(p + 0x260))->b();
    fn_80104F78(p + 0x26C, *(void **)(p + 0x264), *(void **)(p + 0x268));
    ((S_8022F828 *)(p + 0x294))->m(*(void **)(*(u8 **)(lbl_8035B460 + 8) + 8), &lbl_80365DB4, &lbl_80365DBC);
}

} /* extern "C" */
