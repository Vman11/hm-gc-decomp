// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C800646A8 { u8 pad[0x2a0]; C800646A8(); virtual ~C800646A8(); };
struct C801A3D50 { u8 pad[0x1c]; C801A3D50(); ~C801A3D50(); };
struct C80064648 : C801A3D50 { C80064648() {} virtual void f(); };
struct C800645EC : C800646A8 { u8 pad2[0x2f38 - 0x2a4]; C80064648 m; C800645EC(); virtual ~C800645EC(); };
C800645EC::C800645EC() {}

} /* extern "C" */
