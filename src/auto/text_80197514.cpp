// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C80196530 { C80196530(); ~C80196530(); u8 b[52]; };
extern "C" {
struct V3 { f32 x, y, z; };
struct V4 { f32 x, y, z, w; };
extern char lbl_802A2350[];
extern void *lbl_8035AE78;
extern volatile u32 lbl_8035A9E8;
extern u16 lbl_802E0F60[];
extern f32 lbl_80364C1C;
extern f32 lbl_80364C20;
void fn_80060568(char *, int, int, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8019628C(C80196530 *, void *, u8 *, V4 *);
void fn_80190C98(void *);
void fn_80197514(u8 *p, void *a) {
    u32 i;
    f32 t;
    if (!F(p,144,u8*)) fn_80060568(lbl_802A2350, 0, 0, 0);
    F(p,160,u32) = F(F(p,144,u8*),296,u32) + 1;
    if (!lbl_8035AE78) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AE78);
    F(p,164,C80196530*) = new C80196530[F(p,160,u32)];
    fn_800F7E98();
    if (!F(p,164,C80196530*)) fn_800604C4(-4, 0, 0, 0);
    fn_8019628C(F(p,164,C80196530*), a, F(p,144,u8*), 0);
    t = lbl_80364C1C;
    for (i = 1; i < F(p,160,u32); i++) {
        u8 *s = F(p,144,u8*);
        V4 v;
        f32 t2;
        t += F(s,304,f32);
        t2 = t * t;
        v = F(s,248,V4);
        v.x = F(s,264,f32) * t + v.x;
        v.y = F(s,268,f32) * t + v.y;
        v.z = F(s,272,f32) * t + v.z;
        v.w = F(s,276,f32) * t + v.w;
        v.x = F(s,280,f32) * t2 + v.x;
        v.y = F(s,284,f32) * t2 + v.y;
        v.z = F(s,288,f32) * t2 + v.z;
        v.w = F(s,292,f32) * t2 + v.w;
        fn_8019628C(&F(p,164,C80196530*)[i], a, s, &v);
    }
    lbl_8035A9E8 = (lbl_8035A9E8 + 1) & 0x7ff;
    F(p,148,u32) = lbl_802E0F60[lbl_8035A9E8];
    F(p,8,V3) = F(F(p,144,u8*),528,V3);
    F(p,20,f32) = F(F(p,144,u8*),540,f32);
    F(p,24,V3) = F(p,8,V3);
    F(p,36,f32) = F(F(p,144,u8*),540,f32);
    fn_80190C98(p);
    F(p,156,f32) = lbl_80364C1C;
    F(p,168,f32) = lbl_80364C20;
}

} /* extern "C" */
