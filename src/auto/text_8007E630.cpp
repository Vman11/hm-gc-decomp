// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u32 a; u32 b; } T8_8007E630;
typedef struct { u8 pad[16]; u32 count; } Hdr_8007E630;
typedef struct { Hdr_8007E630 *hdr; u8 pad[8]; T8_8007E630 *arr; } S150_8007E630;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20_8007E630;
} /* extern "C" */
struct V8007E630 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void d(s32);
};
extern "C" {
extern T20_8007E630 lbl_80298768;
void __dl__FPv(void *);
void __dla__FPv(void *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20_8007E630);
void fn_80242210(void *);

void fn_8007E630(u8 *p) {
    u32 i;
    u8 buf[8];
    if (*(s32 *)(p + 360) == 0 && *(void **)(p + 400) != 0) {
        __dl__FPv(*(void **)(p + 400));
        *(void **)(p + 400) = 0;
    }
    if (*(V8007E630 **)(p + 340) != 0) {
        V8007E630 *o = *(V8007E630 **)(p + 340);
        if (o != 0) o->d(1);
        *(V8007E630 **)(p + 340) = 0;
    }
    if (*(void ***)(p + 408) != 0) {
        for (i = 0; i < (*(S150_8007E630 **)(p + 336))->hdr->count; i++) {
            if ((*(void ***)(p + 408))[i] != 0) {
                fn_800F6E88(buf, &(*(S150_8007E630 **)(p + 336))->arr[i]);
                {
                    T20_8007E630 t = lbl_80298768;
                    t.p = buf;
                    fn_8023F764(p, &(*(void ***)(p + 408))[i], t);
                }
                (*(void ***)(p + 408))[i] = 0;
            }
        }
        __dla__FPv(*(void **)(p + 408));
        *(void **)(p + 408) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */
