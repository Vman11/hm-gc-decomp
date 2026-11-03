// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void *__ct__9C8015D9A4Fv(void *p);
void *__dt__9C8015D9A4Fv(void *p, s16 f);
void *__register_global_object(void *obj, void *dtor, void *chain);
extern f32 lbl_803596E0[];
extern f32 lbl_8035AD50;
static u8 node1[12];
static u8 obj1[300];
static u8 node2[12];
static u8 obj2[300];
void fn_80179664(void) {
    lbl_8035AD50 = lbl_803596E0[0];
    __register_global_object(__ct__9C8015D9A4Fv(obj1), (void *)__dt__9C8015D9A4Fv, node1);
    __register_global_object(__ct__9C8015D9A4Fv(obj2), (void *)__dt__9C8015D9A4Fv, node2);
}

__declspec(section ".ctors") static void (*const ctor_80179664)(void) = fn_80179664;

} /* extern "C" */
