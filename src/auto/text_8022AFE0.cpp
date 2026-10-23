// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct M8022AFE0 {
    u32 unk0;
    u32 unk4;
    u32 count;
};

struct O8022AFE0 {
    u32 flags;
    u16 type;
    u8 pad6[84 - 6];
    O8022AFE0 *next;
    O8022AFE0 *child;
    u8 pad5C[136 - 92];
    void *unk88;
    u8 pad8C[144 - 140];
    M8022AFE0 *unk90;
};

struct S8022AFE0 {
    u8 pad[12];
    void *unkC;
};

extern S8022AFE0 *lbl_8035B65C;
extern u32 lbl_80365D30;
void fn_8019B7E8(void *a, O8022AFE0 *o);

static inline u8 IsValidType(u16 t) {
    u8 r = 0;
    if (t >= 1 && t <= 13) r = 1;
    return r;
}

static inline s32 IsReady(O8022AFE0 *o) {
    s32 r = 1;
    if ((o->type == 2 || o->type == 3) && (o->unk90 == 0 || o->unk90->count == 0)) r = 0;
    return r;
}

struct C8022AFE0 {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
    virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14();
    virtual void f15(); virtual void f16(); virtual void f17(); virtual void f18();
    virtual void Activate();
    u8 pad4[156 - 4];
    O8022AFE0 *obj;
};

void fn_8022AFE0(C8022AFE0 *self) {
    O8022AFE0 *o;
    if (self->obj != 0 && IsValidType(self->obj->type)) {
        s32 r = 1;
        if ((self->obj->type == 2 || self->obj->type == 3) && (self->obj->unk90 == 0 || self->obj->unk90->count == 0)) r = 0;
        if (r) self->Activate();
        for (o = self->obj->child; o != 0; o = o->next) {
            r = 1;
            if (!(o->flags & 0x800)) {
                if ((o->type == 2 || o->type == 3) && (o->unk90 == 0 || o->unk90->count == 0)) r = 0;
                if (r) {
                    if (o->unk88 == 0) fn_8019B7E8(lbl_8035B65C->unkC, o);
                    o->flags |= lbl_80365D30;
                }
            }
        }
    }
}

} /* extern "C" */
