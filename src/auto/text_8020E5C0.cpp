// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C8021157C { u8 pad[0x6b8]; C8021157C(); ~C8021157C(); };
struct C80214C34 { u8 pad[0x1c0]; C80214C34(); ~C80214C34(); };
struct C8020CE94 { u8 pad[4]; C8020CE94(); };
struct C80211728 : C8021157C { C80211728() {} virtual ~C80211728(); };
struct C8020E5C0 : C80211728 { s32 x6bc; C80214C34 m6c0; s32 a, b, c; C8020CE94 m88c; C8020E5C0(); virtual ~C8020E5C0(); };
C8020E5C0::C8020E5C0() { x6bc = 0; a = -1; b = -1; c = -1; }

} /* extern "C" */
