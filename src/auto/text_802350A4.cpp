// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80239B40 { void **vt; u8 pad4[592]; C80239B40(); };
extern void *lbl_802F17C8[];
extern volatile f32 lbl_80365E88;
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
struct C80234EC8 : C80239B40 {
    u32 arr[100];
    u32 f996;
    u32 f1000;
    u32 f1004;
    u32 f1008;
    u32 f1012;
    u32 f1016;
    u32 f1020;
    u32 f1024;
    u32 f1028;
    u32 f1032;
    u8 f1036;
    u8 pad1037[7];
    u8 f1044;
    u8 pad1045[7];
    u32 f1052;
    u32 f1056;
    f32 f1060;
    u32 f1064;
    u32 f1068;
    u32 f1072;
    u32 f1076;
    u32 f1080;
    u32 f1084;
    f32 f1088;
    f32 f1092;
    f32 f1096;
    u32 f1100;
    C80234EC8();
    ~C80234EC8();
};

static inline void clr(C80234EC8 *s) {
    u32 i;
    for (i = 0; i < 100; i++) {
        s->arr[i] = 0;
    }
}
inline C80234EC8::C80234EC8() {
    this->vt = lbl_802F17C8;
    clr(this);
    this->f996 = 0;
    this->f1000 = 0;
    this->f1004 = 0;
    this->f1008 = 0;
    this->f1024 = 0;
    this->f1028 = 0;
    this->f1012 = 0;
    this->f1016 = 0;
    this->f1032 = 0;
    this->f1068 = 0;
    this->f1072 = 1;
    this->f1036 = 0;
    this->f1044 = 0;
    this->f1056 = 0;
    this->f1060 = lbl_80365E88;
    this->f1052 = 0;
    this->f1064 = 0;
    this->f1080 = 0;
    this->f1084 = 0;
    this->f1088 = lbl_80365E88;
    this->f1092 = lbl_80365E88;
    this->f1096 = lbl_80365E88;
    this->f1100 = 0;
}
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
C80234EC8 *fn_802350A4(s32 n) {
    C80234EC8 *p;
    if (n <= 1) {
        ALLOC(lbl_8035B320, p, new C80234EC8)
        return p;
    }
    ALLOC(lbl_8035B320, p, new C80234EC8[n])
    return p;
}

} /* extern "C" */
