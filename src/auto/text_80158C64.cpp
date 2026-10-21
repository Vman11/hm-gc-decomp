// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 pad[16]; u32 flags; u8 pad14[104 - 20]; } E_80158C64;
typedef struct { E_80158C64 e[2]; s32 idx; } T_80158C64;
typedef struct { u8 b[28]; } S_80158C64;
typedef struct {
    u8 pad0[12];
    s32 x12;
    u8 pad10[4];
    s32 x20;
    T_80158C64 *t;
    u8 pad1C[48 - 28];
    S_80158C64 s[2];
    s32 idx;
    u8 pad6C[4];
    s32 x112;
    u8 pad74[4];
    s32 x120;
} P_80158C64;

void fn_8016B254(void *, u32, u32, u32);
void fn_80166094(void *, E_80158C64 *, S_80158C64 *, u32, u32, u8 *, s32, s32, s32, s32, s32);
void fn_80168AE8(void *, E_80158C64 *, S_80158C64 *, u32, u32, u8 *, s32, s32, s32, s32, s32);
extern u8 lbl_802A04DC[];

void fn_80158C64(P_80158C64 *p, void *a, u32 n, u32 flag) {
    E_80158C64 *e = &p->t->e[p->t->idx];
    S_80158C64 *s = &p->s[p->idx];
    if (n > 1) {
        fn_8016B254(a, !!(e->flags & 0x400), n, flag);
        fn_80166094(a, e, s, n, flag, lbl_802A04DC, p->x12, p->x20, p->x112, p->x120, p->x12);
    } else {
        if (flag == 0) {
            fn_8016B254(a, 0, -1, 0);
        } else {
            fn_8016B254(a, !!(e->flags & 0x400), n, flag);
        }
        fn_80168AE8(a, e, s, n, flag, lbl_802A04DC, p->x12, p->x20, p->x112, p->x120, p->x12);
    }
}

} /* extern "C" */
