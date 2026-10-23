// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VO { u8 pad[128];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void Show(int);
};
extern u32 lbl_8035B9A0;
#define O(o) (*(VO **)(p + (o)))
#define PU(o) (**(u32 **)(p + (o)))
void fn_8002B42C(u8 *p, int on) {
    if (on && *(u8 **)(p + 580) && *(s32 *)(*(u8 **)(p + 580) + 12) == 2) {
        PU(228) |= lbl_8035B9A0;
        PU(232) |= lbl_8035B9A0;
        O(436)->Show(1);
        O(472)->Show(1);
        O(392)->Show(1);
        O(400)->Show(1);
        O(460)->Show(1);
        O(464)->Show(1);
        O(468)->Show(1);
        O(476)->Show(1);
        O(480)->Show(1);
        O(484)->Show(1);
    } else {
        PU(228) &= ~0x800;
        PU(232) &= ~0x800;
        PU(236) &= ~0x800;
        PU(260) &= ~0x800;
        PU(240) &= ~0x800;
        PU(264) &= ~0x800;
        PU(244) &= ~0x800;
        PU(268) &= ~0x800;
        PU(248) &= ~0x800;
        PU(272) &= ~0x800;
        PU(252) &= ~0x800;
        PU(276) &= ~0x800;
        PU(256) &= ~0x800;
        PU(280) &= ~0x800;
        O(436)->Show(0);
        O(472)->Show(0);
        O(392)->Show(0);
        O(400)->Show(0);
        O(460)->Show(0);
        O(464)->Show(0);
        O(468)->Show(0);
        O(476)->Show(0);
        O(480)->Show(0);
        O(484)->Show(0);
    }
}

} /* extern "C" */
