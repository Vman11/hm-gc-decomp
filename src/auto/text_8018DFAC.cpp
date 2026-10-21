// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80190308 { C80190308(); u8 pad[32]; };
struct Obj8018DFAC { u8 pad[144]; u32 f144; u8 pad2[12]; C80190308 *arr; u32 count; };
extern void *lbl_8035AEA8;
void fn_801A1060(Obj8018DFAC *p, void *a, Obj8018DFAC *src, s32 x);
void fn_800604C4(s32 a, s32 b, s32 c, s32 d);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
void fn_801900E0(C80190308 *dst, C80190308 *src);

void fn_8018DFAC(Obj8018DFAC *p, void *a, Obj8018DFAC *src) {
    u32 i;
    fn_801A1060(p, a, src, 0);
    p->f144 = src->f144;
    p->count = src->count;
    if (p->count != 0) {
        if (lbl_8035AEA8 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AEA8);
        p->arr = new C80190308[p->count];
        fn_800F7E98();
        if (p->arr == 0) fn_800604C4(-4, 0, 0, 0);
        for (i = 0; i < p->count; i++) {
            fn_801900E0(&p->arr[i], &src->arr[i]);
        }
    }
}

} /* extern "C" */
