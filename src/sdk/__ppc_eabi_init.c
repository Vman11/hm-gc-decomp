/* __ppc_eabi_init.c: .init hardware setup (0x80003400..0x80003458) and __init_user/__init_cpp/_ExitProcess. */
#include "common.h"

void __OSPSInit(void);
void __OSFPRInit(void);
void __OSCacheInit(void);
void PPCHalt(void);
static void __init_cpp(void);

__declspec(section ".init") asm void __init_hardware(void) {
    nofralloc
    mfmsr r0
    ori r0, r0, 0x2000
    mtmsr r0
    mflr r31
    bl __OSPSInit
    bl __OSFPRInit
    bl __OSCacheInit
    mtlr r31
    blr
}

__declspec(section ".init") asm void __flush_cache(void) {
    nofralloc
    lis r5, 0xffff
    ori r5, r5, 0xfff1
    and r5, r5, r3
    subf r3, r5, r3
    add r4, r4, r3
L_80003438:
    dcbst r0, r5
    sync
    icbi r0, r5
    addic r5, r5, 0x8
    subic. r4, r4, 0x8
    bge L_80003438
    isync
    blr
}

void __init_user(void) {
    __init_cpp();
}

/* built with the peephole optimizer off */
#pragma push
#pragma peephole off
static void __init_cpp(void) {
    extern void (*_ctors[])(void);
    void (**constructor)(void);

    for (constructor = _ctors; *constructor; constructor++) {
        (*constructor)();
    }
}

void _ExitProcess(void) {
    PPCHalt();
}
#pragma pop
