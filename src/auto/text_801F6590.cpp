// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VCall_fn_801F6590_0 { char vptr_pad[4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual u32 m3(); virtual void m4(u32, u8 **); virtual u32 m5(); };
void fn_801F12D4(void *c);
void fn_801F10F8(void *c, u8 *p, u32 n);
u32 fn_801F12C4(void *c);
void fn_80060568(char *msg, int a, int b, int c);
extern char lbl_802A5C20[];
typedef struct Sub { u32 x0; u8 *start; u8 *end; } Sub;
typedef struct Self {
    Sub **x0;
    void *vt;
    u8 type[4];
    u8 *ptr;
    u32 len;
} Self;

s32 fn_801F6590(Self *self) {
    u32 crc;
    u8 c[16];
    self->len = ((VCall_fn_801F6590_0 *)self)->m3();
    if (self->len == 0) return 0;
    ((VCall_fn_801F6590_0 *)self)->m4(self->len + 4, &self->ptr);
    crc = ((VCall_fn_801F6590_0 *)self)->m5();
    fn_801F12D4(c);
    fn_801F10F8(c, self->ptr, self->len + 4);
    if (crc != fn_801F12C4(c)) fn_80060568(lbl_802A5C20, 0, 0, 0);
    self->type[0] = *self->ptr;
    self->ptr++;
    self->type[1] = *self->ptr;
    self->ptr++;
    self->type[2] = *self->ptr;
    self->ptr++;
    self->type[3] = *self->ptr;
    self->ptr++;
    (*self->x0)->start = self->ptr;
    (*self->x0)->end = self->ptr + self->len;
    return 1;
}

} /* extern "C" */
