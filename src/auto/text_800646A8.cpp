// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C80064764 { u8 pad[0x2a0]; C80064764(); virtual ~C80064764(); };
struct C801A2188 { u8 pad[0x8c]; C801A2188(); ~C801A2188(); };
struct C80064704 : C801A2188 { C80064704() {} virtual void f(); };
struct C800646A8 : C80064764 { u8 pad2[0x2ea4 - 0x2a4]; C80064704 m; C800646A8(); virtual ~C800646A8(); };
C800646A8::C800646A8() {}

} /* extern "C" */
