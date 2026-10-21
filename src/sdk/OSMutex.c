#define OSWakeupThread fn_800BA3B4
#include <dolphin.h>
#include <dolphin/os.h>

/* ---- __os.h ---- */
#ifndef _DOLPHIN_OS_INTERNAL_H_
#define _DOLPHIN_OS_INTERNAL_H_

#include <dolphin/os.h>
#define __OSUnlockAllMutex fn_800B7D84

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


#define ENQUEUE_MUTEX(mutex, queue, link)        \
    do {                                         \
        struct OSMutex * __prev = (queue)->tail; \
        if (__prev == NULL) {                    \
            (queue)->head = (mutex);             \
        } else {                                 \
            __prev->link.next = (mutex);         \
        }                                        \
        (mutex)->link.prev = __prev;             \
        (mutex)->link.next = 0;                  \
        (queue)->tail = (mutex);                 \
    } while(0);

#define DEQUEUE_MUTEX(mutex, queue, link)             \
    do {                                              \
        struct OSMutex * __next = (mutex)->link.next; \
        struct OSMutex * __prev = (mutex)->link.prev; \
        if (__next == NULL) {                         \
            (queue)->tail = __prev;                   \
        } else {                                      \
            __next->link.prev = __prev;               \
        }                                             \
        if (__prev == NULL) {                         \
            (queue)->head = __next;                   \
        } else {                                      \
            __prev->link.next = __next;               \
        }                                             \
    } while(0);

#define DEQUEUE_HEAD(mutex, queue, link)            \
    do {                                            \
        struct OSMutex * __next = mutex->link.next; \
        if (__next == NULL) {                       \
            (queue)->tail = 0;                      \
        } else {                                    \
            __next->link.prev = 0;                  \
        }                                           \
        (queue)->head = __next;                     \
    } while(0);

static int IsMember(struct OSMutexQueue * queue, struct OSMutex * mutex);
int __OSCheckMutex(struct OSMutex * mutex);
int __OSCheckDeadLock(struct OSThread * thread);
int __OSCheckMutexes(struct OSThread * thread);

static inline void OSInitMutex(struct OSMutex * mutex) {
    OSInitThreadQueue(&mutex->queue);
    mutex->thread = 0;
    mutex->count = 0;
}

static inline void OSLockMutex(struct OSMutex * mutex) {
    int enabled = OSDisableInterrupts();
    struct OSThread * currentThread = OSGetCurrentThread();
    
    while(1) {
        struct OSThread * ownerThread = mutex->thread;
        if (ownerThread == 0) {
            mutex->thread = currentThread;
            mutex->count++;
            ENQUEUE_MUTEX(mutex, &currentThread->queueMutex, link);
            break;
        } else if (ownerThread == currentThread) {
            mutex->count++;
            break;
        } else {
            currentThread->mutex = mutex;
            __OSPromoteThread(mutex->thread, currentThread->priority);
            OSSleepThread(&mutex->queue);
            currentThread->mutex = NULL;
        }
    }
    OSRestoreInterrupts(enabled);
}

static inline void OSUnlockMutex(struct OSMutex * mutex) {
    int enabled = OSDisableInterrupts();
    struct OSThread * currentThread = OSGetCurrentThread();

    if (mutex->thread == currentThread) {
        if(!--mutex->count) {
            DEQUEUE_MUTEX(mutex, &currentThread->queueMutex, link);
            mutex->thread = 0;

            if (currentThread->priority < currentThread->base) {
                currentThread->priority = __OSGetEffectivePriority(currentThread);
            }
            OSWakeupThread(&mutex->queue);
        }
    }
    OSRestoreInterrupts(enabled);
}

void __OSUnlockAllMutex(struct OSThread * thread) {
    struct OSMutex * mutex;

    while(thread->queueMutex.head) {
        mutex = thread->queueMutex.head;
        DEQUEUE_HEAD(mutex, &thread->queueMutex, link);
        mutex->count = 0;
        mutex->thread = 0;
        OSWakeupThread(&mutex->queue);
    }
}

static inline int OSTryLockMutex(struct OSMutex * mutex) {
    int enabled = OSDisableInterrupts();
    struct OSThread * currentThread = OSGetCurrentThread();
    int locked;

    if (!mutex->thread) {
        mutex->thread = currentThread;
        mutex->count++;
        ENQUEUE_MUTEX(mutex, &currentThread->queueMutex, link);
        locked = 1;
    } else if(mutex->thread == currentThread) {
        mutex->count++;
        locked = 1;
    } else {
        locked = 0;
    }
    OSRestoreInterrupts(enabled);
    return locked;
}

static inline void OSInitCond(struct OSCond * cond) {
    OSInitThreadQueue(&cond->queue);
}

static inline void OSWaitCond(struct OSCond * cond, struct OSMutex * mutex) {
    int enabled = OSDisableInterrupts();
    struct OSThread * currentThread = OSGetCurrentThread();

    if (mutex->thread == currentThread) {
        long count = mutex->count;
        mutex->count = 0;
        DEQUEUE_MUTEX(mutex, &currentThread->queueMutex, link);
        mutex->thread = 0;
        if (currentThread->priority < currentThread->base) {
            currentThread->priority = __OSGetEffectivePriority(currentThread);
        }
        OSDisableScheduler();
        OSWakeupThread(&mutex->queue);
        OSEnableScheduler();
        OSSleepThread(&cond->queue);
        OSLockMutex(mutex);
        mutex->count = count;
    }
    OSRestoreInterrupts(enabled);
}

static inline void OSSignalCond(struct OSCond * cond) {
    OSWakeupThread(&cond->queue);
}

static inline int IsMember(struct OSMutexQueue * queue, struct OSMutex * mutex) {
    struct OSMutex * member = queue->head;

    while(member) {
        if(mutex == member) {
            return 1;
        }
        member = member->link.next;
    }
    return 0;
}

static inline int __OSCheckMutex(struct OSMutex * mutex) {
    struct OSThread * thread;
    struct OSThreadQueue * queue;
    long priority;

    priority = 0;
    queue = &mutex->queue;

    if (queue->head != NULL && queue->head->link.prev != NULL) {
        return 0;
    }
    if (queue->tail != NULL && queue->tail->link.next != NULL) {
        return 0;
    }
    thread = queue->head;
    while(thread) {
        if (thread->link.next != NULL && (thread != thread->link.next->link.prev)) {
            return 0;
        } 
        if (thread->link.prev != NULL && (thread != thread->link.prev->link.next)) {
            return 0;
        } 
        if (thread->state != 4) {
            return 0;
        } 
        if (thread->priority < priority) {
            return 0;
        }
        priority = thread->priority;
        thread = thread->link.next;
    }
    if (mutex->thread) {
        if (mutex->count <= 0) {
            return 0;
        }
    } else if (mutex->count != 0) {
        return 0;
    }
    return 1;
}

static inline int __OSCheckDeadLock(struct OSThread * thread) {
    struct OSMutex * mutex = thread->mutex;

    while(mutex && mutex->thread) {
        if (mutex->thread == thread) {
            return 1;
        }
        mutex = mutex->thread->mutex;
    }
    return 0;
}

static inline int __OSCheckMutexes(struct OSThread * thread) {
    struct OSMutex * mutex = thread->queueMutex.head;

    while(mutex) {
        if (mutex->thread != thread) {
            return 0;
        }
        if (__OSCheckMutex(mutex) == 0) {
            return 0;
        }
        mutex = mutex->link.next;
    }
    return 1;
}
