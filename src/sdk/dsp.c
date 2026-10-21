#define __DSP_debug_printf fn_800CC3A4
#define __DSPHandler fn_800CC3F4
#define __DSP_exec_task fn_800CC818
#define __DSP_boot_task fn_800CC9B8
#define __DSP_insert_task fn_800CCB44
#define __DSP_remove_task fn_800CCBE4
#define DSPCheckMailToDSP fn_800CC114
#define DSPCheckMailFromDSP fn_800CC124
#define DSPReadMailFromDSP fn_800CC134
#define DSPSendMailToDSP fn_800CC14C
#define __DSP_curr_task lbl_8035A8EC
#define __DSP_first_task lbl_8035A8E8
#define __DSP_last_task lbl_8035A8E4
#define __DSP_tmp_task lbl_8035A8E0
#define __DSP_rude_task lbl_8035A8DC
#define __DSP_rude_task_pending lbl_8035A8D8
#define __DSPVersion lbl_803595F8
#define __DSP_init_flag lbl_8035A8D0
#include <stddef.h>
#include <dolphin.h>
#include <dolphin/hw_regs.h>
char *__DSPVersion = "<< Dolphin SDK - DSP\trelease build: Apr 17 2003 12:34:16 (0x2301) >>";
#define DSPInit fn_800CC160
#define DSPCheckInit fn_800CC224
#define DSPAddTask fn_800CC22C
#define DSPCancelTask fn_800CC29C
#define DSPAssertTask fn_800CC2DC

/* ---- __dsp.h ---- */
extern DSPTaskInfo *__DSP_curr_task;
extern DSPTaskInfo *__DSP_last_task;
extern DSPTaskInfo *__DSP_first_task;

void __DSPHandler(__OSInterrupt, OSContext *);
void __DSP_exec_task(DSPTaskInfo *, DSPTaskInfo *);
void __DSP_boot_task(DSPTaskInfo *);
void __DSP_insert_task(DSPTaskInfo *);
void __DSP_add_task(DSPTaskInfo *task);
void __DSP_remove_task(DSPTaskInfo *task);
void __DSP_debug_printf(const char *fmt, ...);


#define BUILD_DATE "Apr 17 2003"
#define BUILD_TIME "12:34:16"

u32 DSPCheckMailToDSP(void)
{
    return (__DSPRegs[0] & (1 << 15)) >> 15;
}

u32 DSPCheckMailFromDSP(void)
{
    return (__DSPRegs[2] & (1 << 15)) >> 15;
}

static inline u32 DSPReadCPUToDSPMbox(void)
{
    return (__DSPRegs[0] << 16) | __DSPRegs[1];
}

u32 DSPReadMailFromDSP(void)
{
    return (__DSPRegs[2] << 16) | __DSPRegs[3];
}

void DSPSendMailToDSP(u32 mail)
{
    __DSPRegs[0] = mail >> 16;
    __DSPRegs[1] = mail & 0xFFFF;
}

static inline void DSPAssertInt(void)
{
    BOOL old;
    u16 tmp;

    old = OSDisableInterrupts();
    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xA8) | 2;
    __DSPRegs[5] = tmp;
    OSRestoreInterrupts(old);
}

int __DSP_init_flag;
extern DSPTaskInfo *__DSP_first_task;
extern DSPTaskInfo *__DSP_last_task;
extern DSPTaskInfo *__DSP_curr_task;
extern DSPTaskInfo *__DSP_tmp_task;

void DSPInit(void)
{
    BOOL old;
    u16 tmp;

    __DSP_debug_printf("DSPInit(): Build Date: %s %s\n", BUILD_DATE, BUILD_TIME);

    if (__DSP_init_flag == 1)
        return;
    OSRegisterVersion(__DSPVersion);

    old = OSDisableInterrupts();
    __OSSetInterruptHandler(7, __DSPHandler);
    __OSUnmaskInterrupts(OS_INTERRUPTMASK_DSP_DSP);

    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xA8) | 0x800;
    __DSPRegs[5] = tmp;

    tmp = __DSPRegs[5];
    __DSPRegs[5] = tmp = tmp & ~0xAC;

    __DSP_first_task = __DSP_last_task = __DSP_curr_task = __DSP_tmp_task = NULL;
    __DSP_init_flag = 1;

    OSRestoreInterrupts(old);
}

BOOL DSPCheckInit(void)
{
    return __DSP_init_flag;
}

static inline void DSPReset(void)
{
    BOOL old;
    u16 tmp;

    old = OSDisableInterrupts();
    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xA8) | 0x800 | 1;
    __DSPRegs[5] = tmp;
    __DSP_init_flag = 0;
    OSRestoreInterrupts(old);
}

static inline void DSPHalt(void)
{
    BOOL old;
    u16 tmp;

    old = OSDisableInterrupts();
    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xA8) | 4;
    __DSPRegs[5] = tmp;
    OSRestoreInterrupts(old);
}

static inline void DSPUnhalt(void)
{
    BOOL old;
    u16 tmp;

    old = OSDisableInterrupts();
    tmp = __DSPRegs[5];
    tmp = (tmp & ~0xAC);
    __DSPRegs[5] = tmp;
    OSRestoreInterrupts(old);
}

static inline u32 DSPGetDMAStatus(void)
{
    return (__DSPRegs[5] & (1 << 9));
}

DSPTaskInfo *DSPAddTask(DSPTaskInfo *task)
{
    BOOL old;

    old = OSDisableInterrupts();

    __DSP_insert_task(task);
    task->state = 0;
    task->flags = 1;

    OSRestoreInterrupts(old);
    if (task == __DSP_first_task)
        __DSP_boot_task(task);
    return task;
}

DSPTaskInfo *DSPCancelTask(DSPTaskInfo *task)
{
    BOOL old;

    old = OSDisableInterrupts();

    task->flags |= 2;

    OSRestoreInterrupts(old);
    return task;
}

extern DSPTaskInfo *__DSP_rude_task;
extern int __DSP_rude_task_pending;

DSPTaskInfo *DSPAssertTask(DSPTaskInfo *task)
{
    s32 old;

    old = OSDisableInterrupts();

    if (__DSP_curr_task == task) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        OSRestoreInterrupts(old);
        return task;
    }
    if (task->priority < __DSP_curr_task->priority) {
        __DSP_rude_task = task;
        __DSP_rude_task_pending = 1;
        if (__DSP_curr_task->state == 1) {
            DSPAssertInt();
        }
        OSRestoreInterrupts(old);
        return task;
    }
    OSRestoreInterrupts(old);
    return NULL;
}
