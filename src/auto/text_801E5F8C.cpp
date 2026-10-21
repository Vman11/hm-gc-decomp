#include "common.h"

/* C801E6678 has two vptrs (0x14 from its primary base with 9 virtuals, 0x18 from a second polymorphic
 * base), so the derived vtable is stored at 0x14 and __vt__+0x2C at 0x18. */

extern "C" {
void fn_8017BB64(void *p);
}

struct C801EB864 { s32 m0; u8 b[0x10]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); };
struct C801E6678S { virtual void w0(); };
struct C801E6678 : C801EB864, C801E6678S { C801E6678(); ~C801E6678(); };

struct C801E5F8C : C801E6678 {
    u8 pad1C[0x34 - 0x1c];
    s32 m34;
    u8 m38[4];
    C801E5F8C();
    virtual void v0();
};

C801E5F8C::C801E5F8C() {
    fn_8017BB64(m38);
    m34 = 0;
    m0 = 6;
}
