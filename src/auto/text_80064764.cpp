// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80064820 { u8 pad[0x2a0]; C80064820(); virtual ~C80064820(); };
struct C8014D738 { u8 pad[0x30]; C8014D738(); ~C8014D738(); };
struct C800647C0 : C8014D738 { C800647C0() {} virtual void f(); };
struct C80064764 : C80064820 { u8 pad2[0x2c34 - 0x2a4]; C800647C0 m; C80064764(); virtual ~C80064764(); };
C80064764::C80064764() {}

} /* extern "C" */
