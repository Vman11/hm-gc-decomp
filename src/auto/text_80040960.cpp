// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a; u32 b; } T8_80040960;
typedef struct { u8 pad[12]; T8_80040960 *arr; } S14C_80040960;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20_80040960;
typedef struct { u8 pad[12]; void *x0C; } G_80040960;
struct V_80040960 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void del(s32);
};
extern G_80040960 *lbl_8035B65C;
extern T20_80040960 lbl_80294F38;
void __dla__FPv(void *);
void fn_8019B6B8(void *, void *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20_80040960);
void fn_80242210(void *);

void fn_80040960(u8 *p) {
    u32 u;
    u32 v;
    u8 buf[8];
    if (*(void **)(p + 0x154) != 0) {
        fn_8019B6B8(lbl_8035B65C->x0C, *(void **)(p + 0x154));
        if (*(V_80040960 **)(p + 0x154) != 0) {
            (*(V_80040960 **)(p + 0x154))->del(1);
        }
        *(void **)(p + 0x154) = 0;
    }
    if (*(void ***)(p + 0x174) != 0) {
        for (u = 0; u < 3; u++) {
            for (v = 0; v < 2; v++) {
                u32 idx = u * 2 + v;
                if ((*(void ***)(p + 0x174))[idx] != 0) {
                    fn_800F6E88(buf, &(*(S14C_80040960 **)(p + 0x14C))->arr[v]);
                    {
                        T20_80040960 t = lbl_80294F38;
                        t.p = buf;
                        fn_8023F764(p, &(*(void ***)(p + 0x174))[idx], t);
                    }
                    (*(void ***)(p + 0x174))[idx] = 0;
                }
            }
        }
        __dla__FPv(*(void **)(p + 0x174));
        *(void **)(p + 0x174) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */
