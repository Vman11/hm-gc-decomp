/* OSCache.c (Dolphin SDK 2003) : 0x800B4884 - 0x800B4CBC. dolsdk2001 src/os/OSCache.c + 2003 range ops.
 * Uses the SDK headers from tools/rea/ref/dolsdk2004/include (no common.h). */
#include <dolphin.h>
#include <dolphin/db.h>
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


// Can't use this due to weird condition register issues
//#include "asm_types.h"
#define HID2 920
#define DCStoreRange fn_800B48F4

void DMAErrorHandler(OSError error, OSContext* context, ...);

/* clang-format off */
asm void DCEnable(void) {
  nofralloc
  sync
  mfspr r3, HID0
  ori   r3, r3, 0x4000
  mtspr HID0, r3
  blr
}

asm void DCInvalidateRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes
@1
  dcbi r0, addr
  addi addr, addr, 32
  bdnz @1
  blr
}


asm void DCFlushRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes
@1
  dcbf r0, addr
  addi addr, addr, 32
  bdnz @1
  sc
  blr
}

asm void DCStoreRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes
@1
  dcbst r0, addr
  addi addr, addr, 32
  bdnz @1
  sc
  blr
}

asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes
@1
  dcbf r0, addr
  addi addr, addr, 32
  bdnz @1
  blr
}


asm void ICInvalidateRange(register void* addr, register u32 nBytes) {
  nofralloc
  cmplwi nBytes, 0
  blelr
  clrlwi r5, addr, 27
  add nBytes, nBytes, r5
  addi nBytes, nBytes, 31
  srwi nBytes, nBytes, 5
  mtctr nBytes
@1
  icbi r0, addr
  addi addr, addr, 32
  bdnz @1
  sync
  isync
  blr
}


asm void ICFlashInvalidate(void) {
  nofralloc
  mfspr r3, HID0
  ori r3, r3, 0x800
  mtspr HID0, r3
  blr
}

asm void ICEnable(void) {
  nofralloc
  isync
  mfspr r3, HID0
  ori r3, r3, 0x8000
  mtspr HID0, r3
  blr
}

#define LC_LINES    512
#define CACHE_LINES 1024


asm void LCDisable(void) {
  nofralloc
  lis     r3, LC_BASE_PREFIX
  li      r4, LC_LINES
  mtctr r4
@1
  dcbi r0, r3
  addi r3, r3, 32
  bdnz @1
  mfspr r4, HID2
  rlwinm r4, r4, 0, 4, 2
  mtspr HID2, r4
  blr
}

/* clang-format on */

/* clang-format off */
/* clang-format on */
static inline void L2Init(void) {
  u32 oldMSR;
  oldMSR = PPCMfmsr();
  __sync();
  PPCMtmsr(MSR_IR | MSR_DR);
  __sync();
  L2Disable();
  L2GlobalInvalidate();
  PPCMtmsr(oldMSR);
}

static inline void L2Enable(void) { 
    PPCMtl2cr((PPCMfl2cr() | L2CR_L2E) & ~L2CR_L2I);
}

static inline void L2Disable(void) {
  __sync();
  PPCMtl2cr(PPCMfl2cr() & ~0x80000000);
  __sync();
}

void L2GlobalInvalidate(void) {
  L2Disable();
  PPCMtl2cr(PPCMfl2cr() | 0x00200000);
  while (PPCMfl2cr() & 0x00000001u)
    ;
  PPCMtl2cr(PPCMfl2cr() & ~0x00200000);
  while (PPCMfl2cr() & 0x00000001u) {
    DBPrintf(">>> L2 INVALIDATE : SHOULD NEVER HAPPEN\n");
  }
}

void DMAErrorHandler(OSError error, OSContext* context, ...) {
  u32 hid2 = PPCMfhid2();

  OSReport("Machine check received\n");
  OSReport("HID2 = 0x%x   SRR1 = 0x%x\n", hid2, context->srr1);
  if (!(hid2 & (HID2_DCHERR | HID2_DNCERR | HID2_DCMERR | HID2_DQOERR)) ||
      !(context->srr1 & SRR1_DMA_BIT)) {
    OSReport("Machine check was not DMA/locked cache related\n");
    OSDumpContext(context);
    PPCHalt();
  }

  OSReport("DMAErrorHandler(): An error occurred while processing DMA.\n");
  OSReport("The following errors have been detected and cleared :\n");

  if (hid2 & HID2_DCHERR) {
    OSReport("\t- Requested a locked cache tag that was already in the cache\n");
  }

  if (hid2 & HID2_DNCERR) {
    OSReport("\t- DMA attempted to access normal cache\n");
  }

  if (hid2 & HID2_DCMERR) {
    OSReport("\t- DMA missed in data cache\n");
  }

  if (hid2 & HID2_DQOERR) {
    OSReport("\t- DMA queue overflowed\n");
  }

  // write hid2 back to clear the error bits
  PPCMthid2(hid2);
}

void __OSCacheInit() {
  if (!(PPCMfhid0() & HID0_ICE)) {
    ICEnable();
    DBPrintf("L1 i-caches initialized\n");
  }
  if (!(PPCMfhid0() & HID0_DCE)) {
    DCEnable();
    DBPrintf("L1 d-caches initialized\n");
  }

  if (!(PPCMfl2cr() & L2CR_L2E)) {
    L2Init();
    L2Enable();
    DBPrintf("L2 cache initialized\n");
  }

  OSSetErrorHandler(OS_ERROR_MACHINE_CHECK, DMAErrorHandler);
  DBPrintf("Locked cache machine check handler installed\n");
}
