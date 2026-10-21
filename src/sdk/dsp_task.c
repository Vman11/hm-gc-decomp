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


/* .sbss 0x8035A8D8: MWCC lays globals out in reverse definition order */
DSPTaskInfo *__DSP_curr_task;
DSPTaskInfo *__DSP_first_task;
DSPTaskInfo *__DSP_last_task;
DSPTaskInfo *__DSP_tmp_task;
DSPTaskInfo *__DSP_rude_task;
int __DSP_rude_task_pending;

void __DSPHandler(__OSInterrupt intr, OSContext *context)
{
    u8 unused[4];
    OSContext exceptionContext;
    unsigned short tmp;
    unsigned long mail;

    tmp = __DSPRegs[5];
    tmp = (tmp & ~0x28) | 0x80;
    __DSPRegs[5] = tmp;
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    while (DSPCheckMailFromDSP() == 0)
        ;
    mail = DSPReadMailFromDSP();
    if ((__DSP_curr_task->flags & (1<<(31-0x1E)))
     && (mail + 0x232F0000) == 2)
        mail = 0xDCD10003;
    switch (mail)
    {
    case 0xDCD10000:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task->init_cb != NULL)
            __DSP_curr_task->init_cb(__DSP_curr_task);
        break;
    case 0xDCD10001:
        __DSP_curr_task->state = 1;
        if (__DSP_curr_task->res_cb != NULL)
            __DSP_curr_task->res_cb(__DSP_curr_task);
        break;
    case 0xDCD10002:
        if (__DSP_rude_task_pending)
        {
            if (__DSP_curr_task == __DSP_rude_task)
            {
                DSPSendMailToDSP(0xCDD10003);
                while (DSPCheckMailToDSP() != 0)
                    ;
                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = 0;
                if (__DSP_curr_task->res_cb != NULL)
                    __DSP_curr_task->res_cb(__DSP_curr_task);
            }
            else
            {
                DSPSendMailToDSP(0xCDD10001);
                while (DSPCheckMailToDSP() != 0)
                    ;
                __DSP_exec_task(__DSP_curr_task, __DSP_rude_task);
                __DSP_curr_task->state = 2;
                __DSP_curr_task = __DSP_rude_task;
                __DSP_rude_task = NULL;
                __DSP_rude_task_pending = 0;
            }
        }
        else
        {
            if (__DSP_curr_task->next == NULL)
            {
                if (__DSP_curr_task == __DSP_first_task)
                {
                    DSPSendMailToDSP(0xCDD10003);
                    while (DSPCheckMailToDSP() != 0)
                        ;
                    if (__DSP_curr_task->res_cb != NULL)
                        __DSP_curr_task->res_cb(__DSP_curr_task);
                }
                else
                {
                    DSPSendMailToDSP(0xCDD10001);
                    while (DSPCheckMailToDSP() != 0)
                        ;
                    __DSP_exec_task(__DSP_curr_task, __DSP_first_task);
                    __DSP_curr_task->state = 2;
                    __DSP_curr_task = __DSP_first_task;
                }
            }
            else
            {
                DSPSendMailToDSP(0xCDD10001);
                while (DSPCheckMailToDSP() != 0)
                    ;
                __DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);
                __DSP_curr_task->state = 2;
                __DSP_curr_task = __DSP_curr_task->next;
            }
        }
        break;
    case 0xDCD10003:
        if (__DSP_rude_task_pending)
        {
            if (__DSP_curr_task->done_cb != NULL)
                __DSP_curr_task->done_cb(__DSP_curr_task);
            DSPSendMailToDSP(0xCDD10001);
            while (DSPCheckMailToDSP() != 0)
                ;
            __DSP_exec_task(NULL, __DSP_rude_task);
            __DSP_remove_task(__DSP_curr_task);
            __DSP_curr_task = __DSP_rude_task;
            __DSP_rude_task = NULL;
            __DSP_rude_task_pending = 0;
        }
        else
        {
            if (__DSP_curr_task->next == NULL)
            {
                if (__DSP_curr_task == __DSP_first_task)
                {
                    if (__DSP_curr_task->done_cb != NULL)
                        __DSP_curr_task->done_cb(__DSP_curr_task);
                    DSPSendMailToDSP(0xCDD10002);
                    while (DSPCheckMailToDSP() != 0)
                        ;
                    __DSP_curr_task->state = 3;
                    __DSP_remove_task(__DSP_curr_task);
                }
                else
                {
                    if (__DSP_curr_task->done_cb != NULL)
                        __DSP_curr_task->done_cb(__DSP_curr_task);
                    DSPSendMailToDSP(0xCDD10001);
                    while (DSPCheckMailToDSP() != 0)
                        ;
                    __DSP_curr_task->state = 3;
                    __DSP_exec_task(NULL, __DSP_first_task);
                    __DSP_curr_task = __DSP_first_task;
                    __DSP_remove_task(__DSP_last_task);
                }
            }
            else
            {
                if (__DSP_curr_task->done_cb != NULL)
                    __DSP_curr_task->done_cb(__DSP_curr_task);
                DSPSendMailToDSP(0xCDD10001);
                while (DSPCheckMailToDSP() != 0)
                    ;
                __DSP_curr_task->state = 3;
                __DSP_exec_task(NULL, __DSP_curr_task->next);
                __DSP_curr_task = __DSP_curr_task->next;
                __DSP_remove_task(__DSP_curr_task->prev);
            }
        }
        break;
    case 0xDCD10004:
        if (__DSP_curr_task->req_cb != NULL)
            __DSP_curr_task->req_cb(__DSP_curr_task);
        break;
    default:
        break;
    }
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
}

void __DSP_exec_task(DSPTaskInfo *curr, DSPTaskInfo *next)
{
    if (curr != NULL)
    {
        DSPSendMailToDSP((u32)curr->dram_mmem_addr);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(curr->dram_length);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(curr->dram_addr);
        while (DSPCheckMailToDSP() != 0)
            ;
    }
    else
    {
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
    }
    DSPSendMailToDSP((u32)next->iram_mmem_addr);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(next->iram_length);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(next->iram_addr);
    while (DSPCheckMailToDSP() != 0)
        ;
    if (next->state == 0)
    {
        DSPSendMailToDSP(next->dsp_init_vector);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(0);
        while (DSPCheckMailToDSP() != 0)
            ;
    }
    else
    {
        DSPSendMailToDSP(next->dsp_resume_vector);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP((u32)next->dram_mmem_addr);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(next->dram_length);
        while (DSPCheckMailToDSP() != 0)
            ;
        DSPSendMailToDSP(next->dram_addr);
        while (DSPCheckMailToDSP() != 0)
            ;
    }
}

void __DSP_boot_task(DSPTaskInfo *task)
{
    volatile u32 mail;
    while (DSPCheckMailFromDSP() == 0)
        ;
    mail = DSPReadMailFromDSP();
    DSPSendMailToDSP(0x80F3A001);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP((u32)task->iram_mmem_addr);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(0x80F3C002);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(task->iram_addr & 0xFFFF);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(0x80F3A002);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(task->iram_length);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(0x80F3B002);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(0);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(0x80F3D001);
    while (DSPCheckMailToDSP() != 0)
        ;
    DSPSendMailToDSP(task->dsp_init_vector);
    while (DSPCheckMailToDSP() != 0)
        ;
    __DSP_debug_printf("DSP is booting task: 0x%08X\n", (u32)task);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM MMEM ADDR: 0x%08X\n", (u32)task->iram_mmem_addr);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM DSP ADDR : 0x%08X\n", task->iram_addr);
    __DSP_debug_printf("__DSP_boot_task()  : IRAM LENGTH   : 0x%08X\n", task->iram_length);
    __DSP_debug_printf("__DSP_boot_task()  : DRAM MMEM ADDR: 0x%08X\n", task->dram_length);
    __DSP_debug_printf("__DSP_boot_task()  : Start Vector  : 0x%08X\n", task->dsp_init_vector);
}

void __DSP_insert_task(DSPTaskInfo *task)
{
    DSPTaskInfo *temp;

    if (__DSP_first_task == NULL)
    {
        __DSP_curr_task = task;
        __DSP_first_task = __DSP_last_task = task;
        task->next = task->prev = NULL;
        return;
    }
    temp = __DSP_first_task;
    while (temp != NULL)
    {
        if (task->priority < temp->priority)
        {
            task->prev = temp->prev;
            temp->prev = task;
            task->next = temp;
            if (task->prev == NULL)
                __DSP_first_task = task;
            else
                task->prev->next = task;
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        __DSP_last_task->next = task;
        task->next = NULL;
        task->prev = __DSP_last_task;
        __DSP_last_task = task;
    }
}

static inline void __DSP_add_task(DSPTaskInfo *task)
{
    if (__DSP_last_task == NULL)
    {
        __DSP_curr_task = task;
        __DSP_last_task = task;
        __DSP_first_task = task;
        task->next = task->prev = NULL;
    }
    else
    {
        __DSP_last_task->next = task;
        task->next = NULL;
        task->prev = __DSP_last_task;
        __DSP_last_task = task;
    }
    task->state = 0;
    __DSP_debug_printf("__DSP_add_task() : Added task    : 0x%08X\n", (u32)task);
}

void __DSP_remove_task(DSPTaskInfo *task)
{
    task->flags = 0;
    task->state = 3;
    if (__DSP_first_task == task)
    {
        if (task->next != NULL)
        {
            __DSP_first_task = task->next;
            task->next->prev = NULL;
        }
        else
            __DSP_first_task = __DSP_last_task = __DSP_curr_task = NULL;
        return;
    }
    if (__DSP_last_task == task)
    {
        __DSP_last_task = task->prev;
        task->prev->next = NULL;
        __DSP_curr_task = __DSP_first_task;
        return;
    }
    __DSP_curr_task = task->next;
    task->prev->next = task->next;
    task->next->prev = task->prev;
}
/* string of __DSP_add_task (stripped from the game, its string remains in .data) */
static char __DSPAddTaskMsg[] = "__DSP_add_task() : Added task    : 0x%08X\n";
