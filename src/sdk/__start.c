/* __start.c: .init entry point (0x80003100..0x80003400) and the InitMetroTRK_BBA stub. */
#include "common.h"

typedef struct __rom_copy_info {
    char *rom;
    char *addr;
    unsigned int size;
} __rom_copy_info;

typedef struct __bss_init_info {
    char *addr;
    unsigned int size;
} __bss_init_info;

extern __rom_copy_info _rom_copy_info[];
extern __bss_init_info _bss_init_info[];
extern char _stack_addr[];
extern char _SDA_BASE_[];
extern char _SDA2_BASE_[];

void OSResetSystem(int reset, u32 resetCode, int forceMenu);
void DBInit(void);
void OSInit(void);
void __init_user(void);
void InitMetroTRK(void);
void InitMetroTRK_BBA(void);
int main(int argc, char **argv);
void exit(int status);
void *memcpy(void *dst, const void *src, unsigned long n);
void *memset(void *dst, int val, unsigned long n);
void __init_hardware(void);
void __flush_cache(void *address, unsigned int size);

__declspec(section ".init") static void __init_registers(void);
__declspec(section ".init") static void __init_data(void);

static u8 Debug_BBA;

__declspec(section ".init") static void __check_pad3(void) {
    if ((*(u16 *)0x800030E4 & 0x0EEF) == 0x0EEF) {
        OSResetSystem(0, 0, 0);
    }
}

__declspec(section ".init") static void __set_debug_bba(void) {
    Debug_BBA = 1;
}

__declspec(section ".init") static u8 __get_debug_bba(void) {
    return Debug_BBA;
}

__declspec(section ".init") __declspec(weak) asm void __start(void) {
    nofralloc
    bl __init_registers
    bl __init_hardware
    li r0, -0x1
    stwu r1, -0x8(r1)
    stw r0, 0x4(r1)
    stw r0, 0x0(r1)
    bl __init_data
    li r0, 0x0
    lis r6, 0x8000
    addi r6, r6, 0x44
    stw r0, 0x0(r6)
    lis r6, 0x8000
    addi r6, r6, 0xf4
    lwz r6, 0x0(r6)
    cmplwi r6, 0x0
    beq L_8000319C
    lwz r7, 0xc(r6)
    b L_800031BC
L_8000319C:
    lis r5, 0x8000
    addi r5, r5, 0x34
    lwz r5, 0x0(r5)
    cmplwi r5, 0x0
    beq L_800031F8
    lis r7, 0x8000
    addi r7, r7, 0x30e8
    lwz r7, 0x0(r7)
L_800031BC:
    li r5, 0x0
    cmplwi r7, 0x2
    beq L_800031E8
    cmplwi r7, 0x3
    li r5, 0x1
    beq L_800031E8
    cmplwi r7, 0x4
    bne L_800031F8
    li r5, 0x2
    bl __set_debug_bba
    b L_800031F8
L_800031E8:
    lis r6, InitMetroTRK@ha
    addi r6, r6, InitMetroTRK@l
    mtlr r6
    blrl
L_800031F8:
    lis r6, 0x8000
    addi r6, r6, 0xf4
    lwz r5, 0x0(r6)
    cmplwi r5, 0x0
    beq+ L_80003258
    lwz r6, 0x8(r5)
    cmplwi r6, 0x0
    beq+ L_80003258
    add r6, r5, r6
    lwz r14, 0x0(r6)
    cmplwi r14, 0x0
    beq L_80003258
    addi r15, r6, 0x4
    mtctr r14
L_80003230:
    addi r6, r6, 0x4
    lwz r7, 0x0(r6)
    add r7, r7, r5
    stw r7, 0x0(r6)
    bdnz L_80003230
    lis r5, 0x8000
    addi r5, r5, 0x34
    clrrwi r7, r15, 5
    stw r7, 0x0(r5)
    b L_80003260
L_80003258:
    li r14, 0x0
    li r15, 0x0
L_80003260:
    bl DBInit
    bl OSInit
    lis r4, 0x8000
    addi r4, r4, 0x30e6
    lhz r3, 0x0(r4)
    andi. r5, r3, 0x8000
    beq L_80003288
    andi. r3, r3, 0x7fff
    cmplwi r3, 0x1
    bne L_8000328C
L_80003288:
    bl __check_pad3
L_8000328C:
    bl __get_debug_bba
    cmplwi r3, 0x1
    bne L_8000329C
    bl InitMetroTRK_BBA
L_8000329C:
    bl __init_user
    mr r3, r14
    mr r4, r15
    bl main
    b exit
}

__declspec(section ".init") static asm void __init_registers(void) {
    nofralloc
    li r0, 0x0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    li r11, 0x0
    li r12, 0x0
    li r14, 0x0
    li r15, 0x0
    li r16, 0x0
    li r17, 0x0
    li r18, 0x0
    li r19, 0x0
    li r20, 0x0
    li r21, 0x0
    li r22, 0x0
    li r23, 0x0
    li r24, 0x0
    li r25, 0x0
    li r26, 0x0
    li r27, 0x0
    li r28, 0x0
    li r29, 0x0
    li r30, 0x0
    li r31, 0x0
    lis r1, _stack_addr@h
    ori r1, r1, _stack_addr@l
    lis r2, _SDA2_BASE_@h
    ori r2, r2, _SDA2_BASE_@l
    lis r13, _SDA_BASE_@h
    ori r13, r13, _SDA_BASE_@l
    blr
}

static inline void __copy_rom_section(void *dst, const void *src, unsigned long size) {
    if (size && (dst != src)) {
        memcpy(dst, src, size);
        __flush_cache(dst, size);
    }
}

static inline void __init_bss_section(void *dst, unsigned long size) {
    if (size) {
        memset(dst, 0, size);
    }
}

__declspec(section ".init") static void __init_data(void) {
    __rom_copy_info *dci;
    __bss_init_info *bii;

    dci = _rom_copy_info;
    while (1) {
        if (dci->size == 0) {
            break;
        }
        __copy_rom_section(dci->addr, dci->rom, dci->size);
        dci++;
    }

    bii = _bss_init_info;
    while (1) {
        if (bii->size == 0) {
            break;
        }
        __init_bss_section(bii->addr, bii->size);
        bii++;
    }
}

__declspec(weak) void InitMetroTRK_BBA(void) {
}
