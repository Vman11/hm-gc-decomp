// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V64_8019C9CC { u8 pad[8]; virtual void v0(); virtual void v1(void *); };
extern "C" {

typedef struct Buf_8019C9CC { u32 w[8]; } Buf_8019C9CC;
typedef struct Src_8019C9CC { u32 f0, f4, f8, f12, f16, f20, f24; } Src_8019C9CC;
typedef struct Self_8019C9CC {
    u32 f0; u32 f4; u32 f8; u32 f12; u32 f16; u32 f20; u32 f24; V64_8019C9CC *f28; u32 f32; V64_8019C9CC *f36;
    u32 f40; V64_8019C9CC *f44; u32 f48; V64_8019C9CC *f52; u32 f56; V64_8019C9CC *f60; V64_8019C9CC *f64;
} Self_8019C9CC;
typedef struct B_8019C9CC { u8 pad0[528]; u8 f528[84]; u32 f612; u32 f616; } B_8019C9CC;

extern char lbl_802A24C8[];
Buf_8019C9CC *fn_80188434(Buf_8019C9CC *);
void fn_8019BB1C(Self_8019C9CC *);
void fn_80060568(char *, s32, s32, s32);
void fn_8019C358(Self_8019C9CC *);
void fn_80189660(V64_8019C9CC *, Buf_8019C9CC *);
void fn_8018F424(void *, u32, u32, s32);
void fn_8018F3D4(void *);

void fn_8019C9CC(Self_8019C9CC *self, B_8019C9CC *b, const Src_8019C9CC *src) {
    Buf_8019C9CC buf;
    fn_80188434(&buf);
    if (self->f64 != 0) fn_8019BB1C(self);
    self->f0 = src->f0;
    self->f12 = src->f4;
    self->f24 = src->f8;
    self->f32 = src->f12;
    self->f40 = src->f16;
    self->f48 = src->f20;
    self->f56 = src->f24;
    if (self->f56 < 1) fn_80060568(lbl_802A24C8, 0, 0, 0);
    fn_8019C358(self);
    if (self->f32 != 0) {
        self->f64 = self->f36;
    } else if (self->f40 != 0) {
        self->f64 = self->f44;
    } else if (self->f48 != 0) {
        self->f64 = self->f52;
    } else if (self->f24 != 0) {
        self->f64 = self->f28;
    } else {
        self->f64 = self->f60;
        if (self->f56 == 1) fn_80189660(self->f60, &buf);
    }
    fn_8018F424(b->f528, b->f612, b->f616, 1);
    self->f64->v1(b);
    fn_8018F3D4(b->f528);
}

} /* extern "C" */
