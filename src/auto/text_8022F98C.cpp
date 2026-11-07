#include "common.h"

extern "C" {

extern u8 __vt__9C80129A9C[];
void __ct__9C80105074Fv(void *);
struct C80239B40 { C80239B40(); virtual ~C80239B40(); };
struct MB80105818 { u8 pad[0x24]; MB80105818() { __ct__9C80105074Fv(this); } ~MB80105818(); };
struct C80105818 : MB80105818 { u8 *vt; C80105818() { vt = __vt__9C80129A9C; } ~C80105818(); };
struct C8023B4DC { C8023B4DC(); u8 pad[0xa4]; };
struct C8022F98C : C80239B40 {
    u8 pad4[0x254 - 4];
    s32 f254; u32 pad258; s32 f25c; s32 f260; s32 f264; s32 f268;
    C80105818 m; C8023B4DC m2; s32 f338; s32 f33c;
    C8022F98C(); virtual ~C8022F98C();
};
C8022F98C::C8022F98C() { f25c = -1; f254 = 0; f260 = 0; f264 = 0; f268 = 0; f338 = 0; f33c = 0; }

} /* extern "C" */
