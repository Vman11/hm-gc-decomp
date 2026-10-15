/* Functions from 0x801F6258 to 0x801F6334, found by decomp-toolkit. */
#include "common.h"

extern void dtor_801F5E3C(void *);
extern void fn_801F5D40(void *);
extern void fn_801F6334(void *);
void fn_801F626C(void *arg0) { unsigned int offset = 0x10; fn_801F6334((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) + 0x20); }

void fn_801F6280(void *arg0) { unsigned int offset = 0x10; fn_801F5D40((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x10); }

void fn_801F62A8(void *arg0) { unsigned int offset = 8; dtor_801F5E3C((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x24); }

void fn_801F62BC(void *arg0) { unsigned int offset = 0x14; dtor_801F5E3C((char *)arg0 + *(unsigned int *)((char *)arg0 + offset) - 0x30); }
