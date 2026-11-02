// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80217048(void *p);
struct C800645EC { u8 pad[0x2a0]; C800645EC(); virtual ~C800645EC(); };
struct MB80064530 { u8 pad[0xc]; MB80064530() { fn_80217048(this); } ~MB80064530(); };
struct C8006458C : MB80064530 { C8006458C() {} virtual void f(); };
struct C80064530 : C800645EC { u8 pad2[0x3024 - 0x2a4]; C8006458C m; C80064530(); virtual ~C80064530(); };
C80064530::C80064530() {}

} /* extern "C" */
