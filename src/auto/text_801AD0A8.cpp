// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))

struct Q { virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7(); virtual void q8(); virtual void q9(); virtual void q10(); virtual void q11(); virtual void q12(); virtual void q13(); virtual void q14(); virtual void q15(); virtual void q16(); virtual void q17(); virtual void q18(); virtual void q19(); virtual void q20(); virtual void q21(); virtual void q22(); virtual void q23(); virtual void q24(); virtual void q25(); virtual void q26(); virtual void q27(); virtual void release(void *); };
struct V { u8 pad[0x30]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual Q *get(); };
struct R0 { u8 pad[0x10]; V *x10; };
struct E10 { u8 pad[0x10]; virtual ~E10(); virtual void close(); };
struct E168 { u8 pad[0x168]; virtual ~E168(); virtual void close(); };
struct E1EC { u8 pad[0x1ec]; virtual ~E1EC(); };

struct S_AD0A8;
void fn_801AD0A8(S_AD0A8 *self);
struct S_AD0A8 {
    R0 *x0;
    s32 x4;
    u8 pad8[4];
    void *xC;
    E168 **x10;
    E10 **x14;
    E10 **x18;
    E10 ***x1c;
    E1EC **x20;
    E10 **x24;
    S_AD0A8 **x28;
    void **x2c;
    u8 pad30[4];
    u16 x34, x36, x38, x3a, x3c, x3e, x40, x42;
    s32 x44;
    u16 x48;
    u8 pad4a[6];
    void *x50[9];
    ~S_AD0A8() { if (x4) fn_801AD0A8(this); }
};

void fn_801AAFAC(S_AD0A8 *, s32);
void fn_800F6E88(void *, void *);
void fn_801AAAB0(void *, E10 *);
void fn_80110E5C(E1EC *);
void __ct__9C801AD610Fv(S_AD0A8 *);
void fn_801AD0A8(S_AD0A8 *self);

void fn_801AD0A8(S_AD0A8 *self) {
    char buf[8];
    u32 i;
    s32 j, k, m;
    Q *q;
    S_AD0A8 *c;

    q = 0;
    if (self->x0) q = self->x0->x10->get();
    if (self->x18) {
        for (i = 0; i < self->x38; i++) {
            if (self->x18[i]) {
                if (F(self->x18[i], 0, void *)) self->x18[i]->close();
                delete self->x18[i];
                self->x18[i] = 0;
            }
        }
        delete[] self->x18;
    }
    if (self->x14) {
        for (i = 0; i < self->x36; i++) {
            if (self->x14[i]) {
                if (F(self->x14[i], 0x18, s32)) self->x14[i]->close();
                delete self->x14[i];
                self->x14[i] = 0;
            }
        }
        delete[] self->x14;
    }
    if (self->x10) {
        for (i = 0; i < self->x34; i++) {
            if (self->x10[i]) {
                if (F(self->x10[i], 0xc, s32)) self->x10[i]->close();
                delete self->x10[i];
                self->x10[i] = 0;
            }
        }
        delete[] self->x10;
    }
    if (self->x1c) {
        fn_801AAFAC(self, -1);
        for (j = 0; j < self->x44; j++) {
            for (k = 0; k < self->x48; k++) {
                buf[0] = 0;
                if (F(self->x1c[j][(u32)k], 0xc, void *)) fn_800F6E88(buf, F(self->x1c[j][(u32)k], 0xc, void *));
                fn_801AAAB0(self->x0, self->x1c[j][(u32)k]);
            }
        }
        for (m = 0; m < self->x44; m++) {
            for (i = 0; i < self->x48; i++) {
                if (self->x1c[m][i]) {
                    if (F(self->x1c[m][i], 0x20, s32)) self->x1c[m][i]->close();
                    delete self->x1c[m][i];
                    self->x1c[m][i] = 0;
                }
                if (self->x2c[i]) {
                    delete[] self->x2c[i];
                    self->x2c[i] = 0;
                }
            }
            delete[] self->x1c[m];
        }
        delete[] self->x1c;
        delete[] self->x2c;
    }
    if (self->x20) {
        for (i = 0; i < self->x3c; i++) {
            if (self->x20[i]) {
                if (F(self->x20[i], 0x1e8, s32)) fn_80110E5C(self->x20[i]);
                delete self->x20[i];
                self->x20[i] = 0;
            }
        }
        delete[] self->x20;
    }
    if (self->x24) {
        for (i = 0; i < self->x3e; i++) {
            if (self->x24[i]) {
                if (F(self->x24[i], 0x48, s32)) self->x24[i]->close();
                delete self->x24[i];
                self->x24[i] = 0;
            }
        }
        delete[] self->x24;
    }
    if (self->xC) q->release(self->xC);
    if (self->x28) {
        for (i = 0; i < self->x40; i++) {
            if (self->x28[i]) {
                if (self->x28[i]->x4) fn_801AD0A8(self->x28[i]);
                delete self->x28[i];
                self->x28[i] = 0;
            }
        }
        delete[] self->x28;
    }
    for (i = 0; i < 9; i++) {
        if (self->x50[i]) delete[] self->x50[i];
    }
    __ct__9C801AD610Fv(self);
}

} /* extern "C" */
