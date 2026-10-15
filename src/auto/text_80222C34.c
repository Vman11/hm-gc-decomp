/* Functions from 0x80222C34 to 0x80222C88, found by decomp-toolkit. */
#include "common.h"

void fn_80222C34(void *arg0) {
    extern f32 lbl_80365A70;
    extern s32 lbl_8035B6E4;
    typedef struct {
        u8 pad[0x26C];
        f32 unk26C;
        f32 unk270;
        f32 unk274;
        f32 unk278;
        s32 unk27C;
        s32 unk280;
    } Fn80222C34;
    Fn80222C34 *obj = (Fn80222C34 *)arg0;
    if (lbl_80365A70 != obj->unk278) {
        obj->unk27C = 1;
        obj->unk274 = (obj->unk26C - obj->unk270) / obj->unk278;
        obj->unk280 = 0;
    } else {
        obj->unk27C = 0;
        obj->unk280 = 1;
        lbl_8035B6E4 = 1;
    }
}
extern f32 lbl_80365A70;
extern s32 lbl_8035B6E4;
typedef struct {
    u8 pad[0x26C];
    f32 unk26C;
    f32 unk270;
    f32 unk274;
    f32 unk278;
    s32 unk27C;
    s32 unk280;
} Fn80222C34;
