#include "common.h"

extern "C" {

extern u32 lbl_8035AA10;
void *memcpy(void *, const void *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
u32 strlen(char *);
struct V800FB0F8 { u8 pad0[0x14]; char name[0x110]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void SetState(s32); virtual u32 GetState(); };

void fn_800FB0F8(V800FB0F8 *p, char **out) {
    u32 len;

    if (p->GetState() != 2) {
        p->SetState(3);
    }
    len = strlen(p->name) + 1;
    if (lbl_8035AA10 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA10);
    *out = new char[len];
    fn_800F7E98();
    if (*out == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    if (*out == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    memcpy(*out, p->name, len);
}

} /* extern "C" */
