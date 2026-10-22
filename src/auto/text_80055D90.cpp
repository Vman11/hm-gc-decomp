// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct CB { void *p; s32 a; s32 b; s32 c; s32 d; } CB;
extern const CB lbl_8029689C;
struct VObj { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual ~VObj(); };
typedef struct Name { u32 v[2]; } Name;
void __dl__FPv(void *p);
void __dla__FPv(void *p);
void fn_800F6E88(Name *dst, void *src);
void fn_8023F764(void *self, void **slot, CB *r);
void fn_80242210(void *self);
typedef struct Info { u8 pad[12]; Name *names; } Info;
typedef struct Self {
    u8 pad0[492];
    Info *info;
    u32 count;
    void **slots;
    u8 pad504[572 - 504];
    VObj *obj;
    s32 x576;
    void *x580;
} Self;

void fn_80055D90(Self *self) {
    u32 i;
    Name buf;
    if (self->x576 == 0 && self->x580 != 0) {
        __dl__FPv(self->x580);
        self->x580 = 0;
    }
    if (self->slots != 0) {
        for (i = 0; i < self->count; i++) {
            if (self->slots[i] != 0) {
                fn_800F6E88(&buf, &self->info->names[i]);
                CB t = lbl_8029689C;
                t.p = &buf;
                CB r = t;
                fn_8023F764(self, &self->slots[i], &r);
                self->slots[i] = 0;
            }
        }
        __dla__FPv(self->slots);
        self->slots = 0;
    }
    if (self->obj != 0) {
        delete self->obj;
        self->obj = 0;
    }
    fn_80242210(self);
}

} /* extern "C" */
