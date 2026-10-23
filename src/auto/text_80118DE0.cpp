// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V80118E78 { u8 pad[12]; virtual void f0(); };
extern u8 lbl_802E3998[];
void __dt__9C8011F770Fv(void *p, s16 f);
void __dl__FPv(void *p);

void *__dt__9C80118E78Fv(u8 *p, s16 f) {
    if (p) {
        M2C_FIELD(p, u8 **, 12) = lbl_802E3998;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0), u8 **, 208) = lbl_802E3998 + 24;
        M2C_FIELD(M2C_FIELD(p, u8 **, 0), s32 *, 212) = (p + 16) - M2C_FIELD(p, u8 **, 0);
        ((V80118E78 *)p)->f0();
        if (f) __dt__9C8011F770Fv(p + 16, 0);
        if (f > 0) __dl__FPv(p);
    }
    return p;
}

} /* extern "C" */
