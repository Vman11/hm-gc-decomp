// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct P { u8 p0[8]; void *f8; u8 p12[8]; void *f20; void *f24; u8 p28[24]; void *f52; void *f56; void *f60; void *f64; u8 p68[4]; void *f72; void *f76; void *f80; void *f84; void *f88; u8 p92[4]; void *f96; u8 p100[8]; void *f108; void *f112; void *f116; u8 p120[4]; void *f124; void *f128; void *f132; void *f136; void *f140; void *f144; u8 p148[4]; void *f152; void *f156; u8 p160[12]; void *f172; void *f176; void *f180; u8 p184[4]; void *f188; void *f192; void *f196; u8 p200[4]; void *f204; void *f208; };
void fn_800F931C(void *);
void fn_800F9BB4(void *);
void fn_800FBF3C(void *);
void fn_80128EA0(void *);
void fn_8012C2EC(void *);
void fn_8012DCC0(void *);
void fn_8012EE94(void *);
void fn_8012F4C0(void *);
void fn_8012FD20(void *);
void fn_80131C18(void *);
void fn_80132888(void *);
void fn_80133580(void *);
void fn_80134044(void *);
void fn_80134568(void *);
void fn_80134840(void *);
void fn_80136BEC(void *);
void fn_80136EC8(void *);
void fn_80138BBC(void *);
void fn_80139220(void *);
void fn_8013BE58(void *);
void fn_8013C114(void *);
void fn_8013D878(void *);
void fn_8013E7F8(void *);
void fn_8013ECF4(void *);
void fn_8013F0E0(void *);
void fn_8014091C(void *);
void fn_80147568(void *);
void fn_80148B60(void *);
void fn_8014AA0C(void *);
void fn_80179B18(void *);
void fn_801F10E8(void *);
void fn_801F10F0(void *);
void fn_80219B60(void *);
extern u32 lbl_8035A9F8;
extern u32 lbl_8035AA00;
void fn_8011FC6C(void *self, P *p) {
    if (p->f20) { fn_800FBF3C(p->f20); } else { fn_800FBF3C(p->f8); }
    if (p->f24) { fn_8012C2EC(p->f24); } else { fn_8012C2EC(p->f8); }
    if (p->f52) { fn_80128EA0(p->f52); fn_80219B60(p->f52); } else { fn_80128EA0(p->f8); fn_80219B60(p->f8); }
    if (p->f60) { fn_8012EE94(p->f60); } else { fn_8012EE94(p->f8); }
    if (p->f108) { fn_80132888(p->f108); } else { fn_80132888(p->f8); }
    if (p->f108) { fn_80133580(p->f108); } else { fn_80133580(p->f8); }
    if (p->f88) { fn_80131C18(p->f88); } else { fn_80131C18(p->f8); }
    if (p->f152) { fn_80136BEC(p->f152); } else { fn_80136BEC(p->f8); }
    if (p->f76) { fn_8013E7F8(p->f76); } else { fn_8013E7F8(p->f8); }
    if (p->f80) { fn_8013ECF4(p->f80); } else { fn_8013ECF4(p->f8); }
    if (p->f84) { fn_8013F0E0(p->f84); } else { fn_8013F0E0(p->f8); }
    if (p->f96) { fn_801F10E8(p->f96); } else { fn_801F10E8(p->f8); }
    if (p->f116) { fn_8014091C(p->f116); } else { fn_8014091C(p->f8); }
    if (p->f124) { fn_80147568(p->f124); } else { fn_80147568(p->f8); }
    if (p->f128) { fn_80148B60(p->f128); } else { fn_80148B60(p->f8); }
    if (p->f196) { fn_8013D878(p->f196); } else { fn_8013D878(p->f8); }
    if (p->f172) { fn_80138BBC(p->f172); } else { fn_80138BBC(p->f8); }
    if (p->f176) { fn_80139220(p->f176); } else { fn_80139220(p->f8); }
    if (p->f180) { fn_801F10F0(p->f180); } else { fn_801F10F0(p->f8); }
    if (p->f72) { fn_8012FD20(p->f72); } else { fn_8012FD20(p->f8); }
    if (p->f112) { fn_80134044(p->f112); } else { fn_80134044(p->f8); }
    if (p->f64) { fn_8012F4C0(p->f64); } else { fn_8012F4C0(p->f8); }
    if (p->f144) { fn_80179B18(p->f144); } else { fn_80179B18(p->f8); }
    if (p->f156) { fn_80136EC8(p->f156); } else { fn_80136EC8(p->f8); }
    if (p->f56) { fn_8012DCC0(p->f56); } else { fn_8012DCC0(p->f8); }
    if (p->f132) { fn_80134568(p->f132); } else { fn_80134568(p->f8); }
    if (p->f188) { fn_8013BE58(p->f188); } else { fn_8013BE58(p->f8); }
    if (p->f136) { fn_80134840(p->f136); } else { fn_80134840(p->f8); }
    if (p->f140) { fn_8014AA0C(p->f140); } else { fn_8014AA0C(p->f8); }
    if (p->f192) { fn_8013C114(p->f192); } else { fn_8013C114(p->f8); }
    if (lbl_8035A9F8 == 0) {
        if (p->f204) { fn_800F931C(p->f204); } else { fn_800F931C(p->f8); }
    }
    if (lbl_8035AA00 == 0) {
        if (p->f208) { fn_800F9BB4(p->f208); } else { fn_800F9BB4(p->f8); }
    }
}
}

} /* extern "C" */
