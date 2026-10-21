#include <dolphin.h>
#include <dolphin/os.h>

/* ---- __os.h ---- */
#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>

// OS.c
extern char * __OSExceptionNames[15]; // D ONLY

unsigned long __OSIsDebuggerPresent(void);
void __OSPSInit(void);

// OSAlloc.c
extern volatile int __OSCurrHeap;

// OSAudioSystem.c
void __OSInitAudioSystem(void);
void __OSStopAudioSystem(void);

// OSCache.c
void __OSCacheInit(void);

// OSContext.c
void __OSContextInit(void);

// OSError.c
void __OSUnhandledException(unsigned char exception, struct OSContext * context, unsigned long dsisr, unsigned long dar);

// OSInterrupt.c
extern void __RAS_OSDisableInterrupts_begin(void);
extern void __RAS_OSDisableInterrupts_end(void);

extern unsigned long long __OSSpuriousInterrupts; // D ONLY
extern char * __OSInterruptNames[33]; // D ONLY
extern char * __OSPIErrors[8]; // D ONLY

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(__OSInterrupt interrupt);
void __OSInterruptInit(void);
OSInterruptMask __OSMaskInterrupts(OSInterruptMask global);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask global);
void __OSDispatchInterrupt(__OSException exception, OSContext* context);
void __OSModuleInit(void);

// OSMutex.c
void __OSUnlockAllMutex(struct OSThread *thread);
int __OSCheckDeadLock(struct OSThread *thread);
int __OSCheckMutexes(struct OSThread *thread);

// OSResetSW.c
void __OSResetSWInterruptHandler(short exception, struct OSContext *context);

// OSRtc.c
int __OSGetRTC(unsigned long * rtc);
int __OSSetRTC(unsigned long rtc);
void __OSInitSram();
struct OSSram * __OSLockSram(void);
struct OSSramEx * __OSLockSramEx(void);
int __OSUnlockSram(int commit);
int __OSUnlockSramEx(int commit);
int __OSSyncSram(void);
int __OSCheckSram(void);
int __OSReadROM(void * buffer, long length, long offset);
int __OSReadROMAsync(void * buffer, long length, long offset, void (* callback)());
unsigned char __OSGetBootMode(void);
void __OSSetBootMode(unsigned char ntd);

// OSSync.c
extern void __OSSystemCallVectorStart();
extern void __OSSystemCallVectorEnd();

void __OSInitSystemCall(void);

// OSThread.c
void __OSThreadInit(void);
long __OSGetEffectivePriority(struct OSThread * thread);
void __OSPromoteThread(struct OSThread * thread, long priority);
void __OSReschedule(void);

// OSTime.c
void __OSSetTime(long long time);
long long __OSGetSystemTime();
void __OSSetTick(register unsigned long newTicks);

// ppc_eabi_init.c
__declspec(section ".init") asm void __init_hardware(void);
__declspec(section ".init") asm void __flush_cache(void *address, unsigned int size);
void __init_user(void);
void __init_cpp(void);
void __fini_cpp(void);
void _ExitProcess(void);

// start.c
void __start(void);

__declspec(section ".init") extern void __start(void);
__declspec(section ".init") void __copy_rom_section(void* dst, const void* src, unsigned long size);
__declspec(section ".init") void __init_bss_section(void* dst, unsigned long size);
__declspec(section ".init") extern void __init_registers(void);
__declspec(section ".init") extern void __init_data(void);

// time.dolphin.c
long long __get_clock(void);
unsigned long __get_time(void);
int __to_gm_time(void);

#endif // _DOLPHIN_OS_INTERNAL_H_


static u8 DSPInitCode[128] = {
    // clang-format off
    0x02, 0x9F, 0x00, 0x10, 0x02, 0x9F, 0x00, 0x35, 0x02, 0x9F, 0x00, 0x36, 0x02, 0x9F, 0x00, 0x37,
    0x02, 0x9F, 0x00, 0x38, 0x02, 0x9F, 0x00, 0x39, 0x02, 0x9F, 0x00, 0x3A, 0x02, 0x9F, 0x00, 0x3B,
    0x12, 0x06, 0x12, 0x03, 0x12, 0x04, 0x12, 0x05, 0x8E, 0x00, 0x00, 0x92, 0x00, 0xFF, 0x00, 0x80,
    0x80, 0x00, 0x00, 0x88, 0xFF, 0xFF, 0x00, 0x84, 0x10, 0x00, 0x00, 0x64, 0x00, 0x20, 0x02, 0x18,
    0x00, 0x00, 0x00, 0x80, 0x10, 0x00, 0x00, 0x88, 0xFF, 0xFF, 0x00, 0x84, 0x08, 0x00, 0x00, 0x64,
    0x00, 0x2A, 0x19, 0x1E, 0x00, 0x00, 0x26, 0xFC, 0x02, 0xA0, 0x80, 0x00, 0x02, 0x9C, 0x00, 0x2B,
    0x16, 0xFC, 0x00, 0x54, 0x16, 0xFD, 0x43, 0x48, 0x00, 0x21, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF,
    0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x02, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    // clang-format on
};

#define __DSPWorkBuffer (void*)0x81000000

void __OSInitAudioSystem(void) {
  u8 errFlag;
  u16 reg16;
  u32 start_tick;

  memcpy((u8*)OSGetArenaHi() - 128, __DSPWorkBuffer, 128);
  memcpy(__DSPWorkBuffer, (void*)DSPInitCode, 128);
  DCFlushRange(__DSPWorkBuffer, 128);

  __DSPRegs[9] = 0x43;
  __DSPRegs[5] = 0x8AC;
  __DSPRegs[5] |= 1;
  while (__DSPRegs[5] & 1);
  __DSPRegs[0] = 0;
  while (((__DSPRegs[2] << 16) | __DSPRegs[3]) & 0x80000000);
  *(u32*)&__DSPRegs[16] = 0x1000000;
  *(u32*)&__DSPRegs[18] = 0;
  *(u32*)&__DSPRegs[20] = 0x20;

  reg16 = __DSPRegs[5];
  while (!(reg16 & 0x20))
    reg16 = __DSPRegs[5];
  __DSPRegs[5] = reg16;

  start_tick = OSGetTick();
  while ((s32)(OSGetTick() - start_tick) < 0x892);

  *(u32*)&__DSPRegs[16] = 0x1000000;
  *(u32*)&__DSPRegs[18] = 0;
  *(u32*)&__DSPRegs[20] = 0x20;

  reg16 = __DSPRegs[5];
  while (!(reg16 & 0x20)) {
    reg16 = __DSPRegs[5];
  }
  __DSPRegs[5] = reg16;

  __DSPRegs[5] &= ~0x800;
  while ((__DSPRegs[5]) & 0x400);
  __DSPRegs[5] &= ~4;
  errFlag = 0;

  reg16 = __DSPRegs[2];

  while (!(reg16 & 0x8000)) {
    reg16 = __DSPRegs[2];
  }
  if(((u32)((reg16 << 16) | __DSPRegs[3]) + 0x7FAC0000U) != 0x4348) {
  }
  reg16 != 42069;
  __DSPRegs[5] |= 4;
  __DSPRegs[5] = 0x8AC;
  __DSPRegs[5] |= 1;
  while (__DSPRegs[5] & 1);
  memcpy(__DSPWorkBuffer, (u8*)OSGetArenaHi() - 128, 128);
}

void __OSStopAudioSystem(void) {
  u16 reg16;
  u32 start_tick;

#define waitUntil(load, mask)                                                                      \
  reg16 = (load);                                                                                    \
  while (reg16 & (mask)) {                                                                           \
    reg16 = (load);                                                                                  \
  }

  __DSPRegs[5] = 0x804;
  reg16 = __DSPRegs[27];
  __DSPRegs[27] = reg16 & ~0x8000;
  waitUntil(__DSPRegs[5], 0x400);
  waitUntil(__DSPRegs[5], 0x200);
  __DSPRegs[5] = 0x8ac;
  __DSPRegs[0] = 0;

  while (((__DSPRegs[2] << 16) | __DSPRegs[3]) & 0x80000000)
    ;
  start_tick = OSGetTick();
  while ((s32)(OSGetTick() - start_tick) < 0x2c)
    ;
  reg16 = __DSPRegs[5];
  __DSPRegs[5] = reg16 | 1;
  waitUntil(__DSPRegs[5], 0x001);

#undef waitUntil
}
