// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S_8015F4A0 {
    u8 pad0[0x10];
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1C;
    u16 f20;
    u16 f22;
    u16 f24;
    u8 pad26[4];
    u16 count;
    union {
        u32 inl[4];
        u32 *ptr;
    } data;
    u8 f3C[16];
    u16 f4C;
    u8 pad4E[2];
    u32 f50;
} S_8015F4A0;

void fn_80176910(void *, void *, u16, u32 *);
s32 fn_8016AB80(void *, void *, u16, S_8015F4A0 *, u16, u32 *, u32, u32, u16, u32, u32, u32, u16);
s32 fn_8016AE14(void *, void *, u16, S_8015F4A0 *, u16, u32 *, u32, u32, u16);
s32 fn_8016B064(void *, void *, u16, S_8015F4A0 *, u16, u32 *, u32, u16, u8 *, u16);

s32 fn_8015F4A0(S_8015F4A0 *p, u8 *q, void *r) {
    fn_80176910(r, q, p->count, p->count <= 4 ? p->data.inl : p->data.ptr);
    if (p->f24 & 0x100) {
        if (p->f10 != 0) {
            return fn_8016AB80(M2C_FIELD(q, void **, 6452), r, p->f20, p, p->count,
                               p->count <= 4 ? p->data.inl : p->data.ptr, p->f50, p->f14, p->f22,
                               p->f10, p->f18, p->f1C, p->f4C);
        }
        return fn_8016AE14(M2C_FIELD(q, void **, 6452), r, p->f20, p, p->count,
                           p->count <= 4 ? p->data.inl : p->data.ptr, p->f50, p->f14, p->f22);
    }
    return fn_8016B064(M2C_FIELD(q, void **, 6452), r, p->f20, p, p->count,
                       p->count <= 4 ? p->data.inl : p->data.ptr, p->f14, p->f22, p->f3C, p->f4C);
}

} /* extern "C" */
