// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *__ct__9C8002FAE0Fv(void *p);
void *__construct_array(void *arr, void *ctor, void *dtor, u32 size, u32 n);
f64 fn_800EFDA4(f64 x);
extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A1EC;
extern f32 lbl_8035A1E8;
extern volatile f64 lbl_8035E750;

static u8 arr0[72];
static u8 arr1[72];
static u8 arr2[72];
static u8 arr3[72];
static s32 b0[6];
static s32 b1[6];
static s32 b2[6];
static s32 b3[6];
static s32 b4[6];
static s32 b5[6];
static u8 arr4[72];
static s32 c0[6];
static s32 c1[6];
static u8 arr5[72];

void fn_80066624(void) {
    lbl_8035A1EC = lbl_803596E0[0];
    lbl_8035A1E8 = fn_800EFDA4(lbl_8035E750);
    __construct_array(arr0, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(arr1, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(arr2, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(arr3, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(arr4, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
    __construct_array(arr5, (void *)__ct__9C8002FAE0Fv, 0, 12, 6);
}

__declspec(section ".ctors") static void (*const ctor_80066624)(void) = fn_80066624;

} /* extern "C" */
