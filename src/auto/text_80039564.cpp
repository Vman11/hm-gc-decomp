// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8003965C { u8 pad[0x70]; virtual void d(s32); virtual void p1(); virtual void a(); };
struct V2_8003965C { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void b(); };
struct V3_8003965C { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void c(void *); };
extern u8 *lbl_8035A1DC;
void fn_801AD0A8(void *);
void __dt__9C801AD710Fv(void *, s32);
void __dl__FPv(void *);

void *__dt__9C8003965CFv(u8 *p, s16 f) {
    if (p != NULL) {
        if (*(V1_8003965C **)(p + 0xC) != NULL) {
            (*(V1_8003965C **)(p + 0xC))->a();
            if (*(V1_8003965C **)(p + 0xC) != NULL) {
                (*(V1_8003965C **)(p + 0xC))->d(1);
            }
        }
        if (*(void **)(p + 8) != NULL) {
            fn_801AD0A8(*(void **)(p + 8));
            __dt__9C801AD710Fv(*(void **)(p + 8), 1);
        }
        if (*(V2_8003965C **)(p + 4) != NULL) {
            (*(V2_8003965C **)(p + 4))->b();
            (*(V3_8003965C **)(lbl_8035A1DC + 0x2C44))->c(*(void **)(p + 4));
        }
        *(s32 *)(p + 0x14) = 0;
        *(s32 *)(p + 0x18) = 0;
        *(s32 *)(p + 0xC) = 0;
        *(s32 *)(p + 4) = 0;
        *(s32 *)(p + 8) = 0;
        *(s32 *)(p + 0x10) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
