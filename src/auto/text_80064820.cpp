// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
// extab DESTROYBASE dtors need renames: dtor_801192BC=__dt__9C801192BCFv dtor_80119618=__dt__9C80119618Fv dtor_80119BA0=__dt__9C80119BA0Fv
// dtor_8011A1B8=__dt__9C8011A1B8Fv dtor_8011AABC=__dt__9C8011AABCFv dtor_80119D80=__dt__9C80119D80Fv dtor_8011AF8C=__dt__9C8011AF8CFv
extern u8 __vt__9C80064A58[];
extern u8 __vt__9C800649F8[];
extern u8 __vt__9C80064998[];
extern u8 __vt__9C80064938[];
extern u8 lbl_802E3A10[];
extern u8 lbl_802E3A50[];
extern u8 lbl_802E3AB8[];
extern u8 lbl_802E3B90[];
extern u8 lbl_802E3CB0[];
extern u8 lbl_802E3B00[];
extern u8 lbl_802E3D48[];
extern u8 lbl_802E3C00[];
void fn_8011B204(void *);
void fn_80119904(void *);
void fn_8011B498(void *);
void fn_8011AC8C(void *);
void fn_8011A054(void *);
void fn_8011AE1C(void *);
} /* extern "C" */
#pragma inline_depth(16)
struct C8011B190 { u8 pad[0x298]; u8 *vt; u32 x29c; C8011B190() { fn_8011B204(this); } ~C8011B190(); };
struct C80064A58 : C8011B190 { C80064A58() { vt = __vt__9C80064A58; } ~C80064A58(); };
struct C80119904 { u8 pad[136]; C80119904() { fn_80119904(this); } ~C80119904(); };
struct C8011B424 { u8 pad[28]; u8 *vt; C8011B424() { fn_8011B498(this); } ~C8011B424(); };
struct C800649F8 : C8011B424 { C800649F8() { vt = __vt__9C800649F8; } ~C800649F8(); };
struct C8011B6B0 { u8 pad[116]; u8 *vt; C8011B6B0(); ~C8011B6B0(); };
struct C80064998 : C8011B6B0 { C80064998() { vt = __vt__9C80064998; } ~C80064998(); };
struct C8011AC8C { u8 pad[12]; C8011AC8C() { fn_8011AC8C(this); } ~C8011AC8C(); };
struct C8011A054 { u8 pad[132]; C8011A054() { fn_8011A054(this); } ~C8011A054(); };
struct C8011AE1C { u8 pad[10176]; C8011AE1C() { fn_8011AE1C(this); } ~C8011AE1C(); };
struct C8021E4C4 { u8 pad[8]; u8 *vt; C8021E4C4(); ~C8021E4C4(); };
struct C80064938 : C8021E4C4 { C80064938() { vt = __vt__9C80064938; } ~C80064938(); };

struct VH80064820_0 { VH80064820_0() { *(u8 **)((u8 *)this + 672) = lbl_802E3A10; } };
struct VH80064820_1 { VH80064820_1() { *(u8 **)((u8 *)this - (676 - 672)) = lbl_802E3A50; } };
struct VH80064820_2 { VH80064820_2() { *(u8 **)((u8 *)this - (812 - 672)) = lbl_802E3AB8; } };
struct VH80064820_3 { VH80064820_3() { *(u8 **)((u8 *)this - (844 - 672)) = lbl_802E3B90; } };
struct VH80064820_4 { VH80064820_4() { *(u8 **)((u8 *)this - (980 - 672)) = lbl_802E3CB0; } };
struct VH80064820_5 { VH80064820_5() { *(u8 **)((u8 *)this - (992 - 672)) = lbl_802E3B00; } };
struct VH80064820_6 { VH80064820_6() { *(u8 **)((u8 *)this - (1124 - 672)) = lbl_802E3D48; } };
struct VH80064820_7 { VH80064820_7() { *(u8 **)((u8 *)this - (11300 - 672)) = lbl_802E3C00; } };

struct C801192BC : VH80064820_0 { C80064A58 m0; u8 *vt; C801192BC() {} ~C801192BC(); };
struct C80119618 : C801192BC, VH80064820_1 { C80119904 m1; C80119618() {} ~C80119618(); };
struct C80119BA0 : C80119618, VH80064820_2 { C800649F8 m2; C80119BA0() {} ~C80119BA0(); };
struct C8011A1B8 : C80119BA0, VH80064820_3 { C80064998 m3; u8 pad3[16]; C8011A1B8() {} ~C8011A1B8(); };
struct C8011AABC : C8011A1B8, VH80064820_4 { C8011AC8C m4; C8011AABC() {} ~C8011AABC(); };
struct C80119D80 : C8011AABC, VH80064820_5 { C8011A054 m5; C80119D80() {} ~C80119D80(); };
struct C8011AF8C : C80119D80, VH80064820_6 { C8011AE1C m6; C8011AF8C() {} ~C8011AF8C(); };
struct C80064820 : C8011AF8C, VH80064820_7 { C80064938 m7; C80064820(); ~C80064820(); };
C80064820::C80064820() {}
extern "C" {

} /* extern "C" */
