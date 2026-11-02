// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { u8 pad[88]; f32 f88, f92, f96, f100; };
struct Out { u8 pad[36]; void *f36; f32 f40; u8 pad2[4]; u8 f48[4]; };
struct El { void *p; u32 a, b; };
struct Box { f32 x0, y0, x1, y1; };
extern f32 lbl_80364F40;
extern f32 lbl_803596E0[];
extern f32 lbl_8035AF84;
void fn_801DB744(u8 *);
int fn_801CCDDC(u32, u32 *, Out **, u32);
void fn_8012D0A4(f32, f32, f32, void *, Box *, void *, f32 *, void *, u32);
void fn_801C4B28(u32, int);
void fn_801BD8A0(u32, s32, s32, void *, f32);
void fn_801B79E4(u8 *);
#define U32(o) (*(u32 *)(p + (o)))
#define F32(o) (*(f32 *)(p + (o)))
int fn_801B7FF4(u8 *p) {
    u32 i;
    fn_801DB744(p);
    F32(404) = lbl_80364F40;
    F32(408) = lbl_80364F40;
    if (U32(440)) {
        for (i = 0; i < U32(392); i++) {
            O *o = ((O **)U32(440))[i];
            f32 d = o->f96 - o->f88;
            if (d > F32(404)) F32(404) = d;
            F32(408) = F32(408) + (((O **)U32(440))[i]->f100 - ((O **)U32(440))[i]->f92);
        }
    } else if (U32(444)) {
        for (i = 0; i < U32(392); i++) {
            Out *out;
            u32 idx;
            f32 v[2];
            Box box;
            f32 d;
            *(volatile u32 *)&idx = 0;
            { f32 k = *(volatile f32 *)&lbl_80364F40; v[0] = k; v[1] = k; }
            fn_801CCDDC(*(u32 *)(U32(452) + 112), &idx, &out, *(u32 *)(U32(452) + 104));
            if (out->f36 && ((El *)U32(444))[i].p)
                fn_8012D0A4(lbl_803596E0[0], out->f40, lbl_8035AF84, out->f36, &box, ((El *)U32(444))[i].p, v, out->f48, 17);
            if (*(s32 *)(p + 380)) box.y1 = box.y0 + F32(428);
            box.x1 = box.x0 + (F32(96) - F32(88));
            d = box.x1 - *(volatile f32 *)&box.x0;
            if (d > F32(404)) F32(404) = d;
            F32(408) = F32(408) + (box.y1 - box.y0);
        }
    }
    if (U32(432)) fn_801C4B28(U32(432), 0);
    if (U32(436)) fn_801C4B28(U32(436), 0);
    if (!U32(464)) return 0;
    if (!U32(468)) return 0;
    *(u32 *)(*(u32 *)U32(464) + 20) = 0;
    *(u32 *)(*(u32 *)U32(464) + 24) = U32(392);
    *(u32 *)(U32(464) + 12) = 0;
    if (U32(432)) {
        if (p[400] & 1) fn_801BD8A0(U32(432), 0, 8, p, lbl_80364F40);
        else fn_801BD8A0(U32(432), 0, 4, p, lbl_80364F40);
        fn_801BD8A0(U32(432), 1, 64, p, lbl_80364F40);
        fn_801BD8A0(U32(432), 2, 2048, p, lbl_80364F40);
    }
    if (U32(436)) {
        if (p[400] & 8) fn_801BD8A0(U32(436), 0, 256, p, lbl_80364F40);
        else fn_801BD8A0(U32(436), 0, 512, p, lbl_80364F40);
        fn_801BD8A0(U32(436), 1, 1, p, lbl_80364F40);
        fn_801BD8A0(U32(436), 2, 32, p, lbl_80364F40);
    }
    fn_801B79E4(p);
    return 0;
}

} /* extern "C" */
