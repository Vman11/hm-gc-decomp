// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802BCCA8[];
extern volatile f32 lbl_8035E4A8;
extern f32 lbl_8035E4CC;
void fn_80233124(void *);
void __ct__9C8013ECE4Fv(void);
void __dt__9C8013ECE4Fv(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C8005F938Fv(u8 *p) {
    fn_80233124(p);
    *(void * *)(p + 0) = lbl_802BCCA8;
    __construct_array(p + 804, (void *)__ct__9C8013ECE4Fv, (void *)__dt__9C8013ECE4Fv, 8, 3);
    *(f32 *)(p + 840) = lbl_8035E4A8;
    *(f32 *)(p + 728) = lbl_8035E4A8;
    *(f32 *)(p + 732) = lbl_8035E4A8;
    *(f32 *)(p + 736) = lbl_8035E4A8;
    *(s32 *)(p + 752) = 0;
    *(s32 *)(p + 756) = 0;
    *(s32 *)(p + 760) = 0;
    *(s32 *)(p + 764) = 0;
    *(s32 *)(p + 768) = 0;
    *(s32 *)(p + 772) = 0;
    *(s32 *)(p + 776) = 0;
    *(s32 *)(p + 780) = 0;
    *(s32 *)(p + 740) = 0;
    *(s32 *)(p + 744) = 0;
    *(s32 *)(p + 720) = 0;
    *(s32 *)(p + 724) = 0;
    *(s32 *)(p + 608) = 1;
    *(s32 *)(p + 748) = 0;
    *(s32 *)(p + 868) = 0;
    *(s32 *)(p + 876) = 0;
    *(f32 *)(p + 872) = lbl_8035E4CC;
    *(u8 *)(p + 884) = 0;
    *(s32 *)(p + 828) = 0;
    *(s32 *)(p + 832) = 0;
    *(s32 *)(p + 836) = 0;
    return p;
}
