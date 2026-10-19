// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_802A8530[];
extern u32 lbl_8035B30C;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_8023C720(int, int);
void fn_8023CA84(int, void *);
struct C8023C7CC { char pad[0x1c]; C8023C7CC(void); };
struct VCall_fn_802299B8_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual int m(); };
struct VCall_fn_802299B8_1 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };

void fn_802299B8(u32 param_1) {
    s32 iVar1;

    iVar1 = ((VCall_fn_802299B8_0 *)(param_1))->m();
    if (iVar1 != 0) {
        ((VCall_fn_802299B8_1 *)(param_1))->m();
    }
    *(u32 *)(param_1 + 0x44) = 1;
    fn_8023CA84((int)(param_1), lbl_802A8530); /* "GmAcNode" */
    if (lbl_8035B30C == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B30C));
    iVar1 = (u32) new C8023C7CC();
    *(u32 *)(param_1 + 0x50) = iVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x50) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8023C720((int)(*(u32 *)(param_1 + 0x50)), (int)(param_1));
}
}
