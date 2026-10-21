// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8018E150 { u32 flags; u8 pad[164]; C8018E150(); ~C8018E150(); };
struct EBase {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18();
};
struct E80095B80 : EBase { u8 pad[0x98]; u32 *f9C; };
typedef struct P80095B80 { u8 pad0[0xE0]; E80095B80 *fE0; u8 padE4[0x130 - 0xE4]; C8018E150 *f130; s32 f134; } P80095B80;
typedef struct G460 { u8 pad[8]; void *f8; } G460;
typedef struct G65C { u8 pad[0xC]; void *fC; } G65C;
extern void *lbl_8035B530;
extern G460 *lbl_8035B460;
extern G65C *lbl_8035B65C;
u32 fn_802416D4(void);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8018DFAC(C8018E150 *, void *, u32 *);
void fn_8019B7E8(void *, C8018E150 *);

u32 fn_80095B80(P80095B80 *p) {
    u32 r;
    u32 *flags;
    s32 i;
    r = fn_802416D4();
    flags = p->fE0->f9C;
    if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    p->f130 = new C8018E150[p->f134];
    fn_800F7E98();
    if (p->f130 == 0) fn_800604C4(-4, 0, 0, 0);
    if (p->f130 != 0) {
        for (i = 0; i < p->f134; i++) {
            fn_8018DFAC(&p->f130[i], lbl_8035B460->f8, flags);
            p->f130[i].flags &= ~0x800;
            fn_8019B7E8(lbl_8035B65C->fC, &p->f130[i]);
        }
    }
    p->fE0->v18();
    *flags &= ~0x800;
    return r;
}

} /* extern "C" */
