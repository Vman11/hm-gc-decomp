#include "common.h"

extern "C" {

void fn_80217048(void *p);
void fn_80220940(void *p);
struct C800645EC { u8 pad[0x2a0]; C800645EC(); virtual ~C800645EC(); };
struct MB80064530 { u8 pad[0xc]; MB80064530() { fn_80217048(this); } ~MB80064530(); };
struct C8006458C : MB80064530 { C8006458C() {} virtual void f(); };
struct C80064530 : C800645EC { u8 pad2[0x3024 - 0x2a4]; C8006458C m; C80064530(); virtual ~C80064530(); };
struct C802208CC { u8 pad[0x274]; C802208CC() { fn_80220940(this); } ~C802208CC(); };
struct C800644D0 : C802208CC { C800644D0() {} virtual void f(); };
struct C80064474 : C80064530 { u8 pad3[4]; C800644D0 m2; C80064474(); virtual ~C80064474(); };
C80064474::C80064474() {}

} /* extern "C" */
