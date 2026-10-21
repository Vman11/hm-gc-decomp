/* ar.c (Dolphin SDK 2003) : 0x800C4E78 - 0x800C6B2C of auto/text_800B2E70. Based on dolsdk2001 src/ar/ar.c. */
#include "common.h"

typedef struct OSContext OSContext;
typedef void (*ARQCallback)(void);

volatile u16 __DSPRegs[32] : 0xCC005000;
#define DSP_ARAM_DMA_MM_HI 16
#define DSP_ARAM_DMA_MM_LO 17
#define DSP_ARAM_DMA_ARAM_HI 18
#define DSP_ARAM_DMA_ARAM_LO 19
#define DSP_ARAM_DMA_SIZE_HI 20
#define DSP_ARAM_DMA_SIZE_LO 21

void OSRegisterVersion(const char *id);
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void OSClearContext(OSContext *context);
void OSSetCurrentContext(OSContext *context);
void *__OSSetInterruptHandler(s16 interrupt, void *handler);
u32 __OSUnmaskInterrupts(u32 mask);
void DCFlushRange(void *addr, u32 nBytes);
void DCInvalidateRange(void *addr, u32 nBytes);
void *memset(void *dst, int c, u32 n);
void fn_800B2EA8(void); /* PPCSync */
#define PPCSync fn_800B2EA8

#define ARRegisterDMACallback fn_800C4E78
#define ARGetDMAStatus fn_800C4EBC
#define ARStartDMA fn_800C4EF8
#define ARInit fn_800C4FE8
#define ARClear fn_800C50AC
#define __ARHandler fn_800C513C
#define __ARClearInterrupt fn_800C51B4
#define __ARGetInterruptStatus fn_800C51D4
#define __ARChecksize fn_800C51E4
#define __ARClearArea fn_800C69D8

char *__ARVersion = "<< Dolphin SDK - AR\trelease build: Apr 17 2003 12:33:55 (0x2301) >>";

static ARQCallback __AR_Callback;
static u32 __AR_Size;
static u32 __AR_InternalSize;
static u32 __AR_ExpansionSize;
static u32 __AR_StackPointer;
static u32 __AR_FreeBlocks;
static u32 *__AR_BlockLength;
static volatile BOOL __AR_init_flag;

static void __ARHandler(s16 exception, OSContext *context);
static void __ARChecksize(void);
static void __ARClearArea(u32 start_addr, u32 length);

ARQCallback ARRegisterDMACallback(ARQCallback callback) {
    ARQCallback old_callback;
    BOOL old;

    old_callback = __AR_Callback;
    old = OSDisableInterrupts();
    __AR_Callback = callback;
    OSRestoreInterrupts(old);
    return old_callback;
}

u32 ARGetDMAStatus(void) {
    BOOL old;
    u32 val;

    old = OSDisableInterrupts();
    val = __DSPRegs[5] & 0x200;
    OSRestoreInterrupts(old);
    return val;
}

void ARStartDMA(u32 type, u32 mainmem_addr, u32 aram_addr, u32 length) {
    BOOL old;

    old = OSDisableInterrupts();
    __DSPRegs[16] = (__DSPRegs[16] & 0xFFFFFC00 | (mainmem_addr >> 0x10));
    __DSPRegs[17] = (__DSPRegs[17] & 0xFFFF001F | ((u16)mainmem_addr));
    __DSPRegs[18] = (__DSPRegs[18] & 0xFFFFFC00 | (aram_addr >> 0x10));
    __DSPRegs[19] = (__DSPRegs[19] & 0xFFFF001F | ((u16)aram_addr));
    __DSPRegs[20] = __DSPRegs[20] & ~0x8000 | ((type << 0xF) & ~0x7FFF);
    __DSPRegs[20] = (__DSPRegs[20] & 0xFFFFFC00) | (length >> 0x10);
    __DSPRegs[21] = (__DSPRegs[21] & 0xFFFF001F) | (length & 0x0000FFFF);
    OSRestoreInterrupts(old);
}

u32 ARInit(u32 *stack_index_addr, u32 num_entries) {
    BOOL old;
    u16 refresh;

    if (__AR_init_flag == TRUE) {
        return 0x4000;
    }
    OSRegisterVersion(__ARVersion);
    old = OSDisableInterrupts();
    __AR_Callback = NULL;
    __OSSetInterruptHandler(6, __ARHandler);
    __OSUnmaskInterrupts(0x02000000);
    __AR_StackPointer = 0x4000;
    __AR_FreeBlocks = num_entries;
    __AR_BlockLength = stack_index_addr;
    refresh = (u16)(__DSPRegs[13] & 0xFF);
    __DSPRegs[13] = (u16)((__DSPRegs[13] & ~0xFF) | (refresh & 0xFF));
    __ARChecksize();
    __AR_init_flag = TRUE;
    OSRestoreInterrupts(old);
    return __AR_StackPointer;
}

void ARClear(u32 flag) {
    switch (flag) {
    case 0:
        if (__AR_InternalSize) {
            __ARClearArea(0, __AR_InternalSize);
        }
        break;
    case 1:
        if (__AR_InternalSize) {
            __ARClearArea(0x4000, __AR_InternalSize - 0x4000);
        }
        break;
    case 2:
        if (__AR_InternalSize && __AR_ExpansionSize) {
            __ARClearArea(__AR_InternalSize, __AR_ExpansionSize);
        }
        break;
    }
}

static void __ARHandler(short exception, OSContext * context) {
    u8 exceptionContext[712] __attribute__((aligned(8)));
    u16 tmp;

    tmp = __DSPRegs[5];
    tmp = (tmp & ~0x88) | 0x20;
    __DSPRegs[5] = (tmp);
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext((OSContext *)exceptionContext);
    if (__AR_Callback) {
        __AR_Callback();
    }
    OSClearContext((OSContext *)exceptionContext);
    OSSetCurrentContext(context);
}

static inline void __ARWaitForDMA(void) {
    while (__DSPRegs[5] & 0x200) ;
}

static inline void __ARWriteDMA(u32 mmem_addr, u32 aram_addr, u32 length) {
	// Main mem address
	__DSPRegs[DSP_ARAM_DMA_MM_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_MM_HI] & ~0x03ff) | (u16)(mmem_addr >> 16));
	__DSPRegs[DSP_ARAM_DMA_MM_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_MM_LO] & ~0xffe0) | (u16)(mmem_addr & 0xffff));

	// ARAM address
	__DSPRegs[DSP_ARAM_DMA_ARAM_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_ARAM_HI] & ~0x03ff) | (u16)(aram_addr >> 16));
	__DSPRegs[DSP_ARAM_DMA_ARAM_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_ARAM_LO] & ~0xffe0) | (u16)(aram_addr & 0xffff));

	// DMA buffer size
	__DSPRegs[DSP_ARAM_DMA_SIZE_HI] = (u16)(__DSPRegs[DSP_ARAM_DMA_SIZE_HI] & ~0x8000);

	__DSPRegs[DSP_ARAM_DMA_SIZE_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_SIZE_HI] & ~0x03ff) | (u16)(length >> 16));
	__DSPRegs[DSP_ARAM_DMA_SIZE_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_SIZE_LO] & ~0xffe0) | (u16)(length & 0xffff));

	__ARWaitForDMA();
}

static inline void __ARReadDMA(u32 mmem_addr, u32 aram_addr, u32 length) {
	// Main mem address
	__DSPRegs[DSP_ARAM_DMA_MM_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_MM_HI] & ~0x03ff) | (u16)(mmem_addr >> 16));
	__DSPRegs[DSP_ARAM_DMA_MM_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_MM_LO] & ~0xffe0) | (u16)(mmem_addr & 0xffff));

	// ARAM address
	__DSPRegs[DSP_ARAM_DMA_ARAM_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_ARAM_HI] & ~0x03ff) | (u16)(aram_addr >> 16));
	__DSPRegs[DSP_ARAM_DMA_ARAM_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_ARAM_LO] & ~0xffe0) | (u16)(aram_addr & 0xffff));

	// DMA buffer size
	__DSPRegs[DSP_ARAM_DMA_SIZE_HI] = (u16)(__DSPRegs[DSP_ARAM_DMA_SIZE_HI] | 0x8000);

	__DSPRegs[DSP_ARAM_DMA_SIZE_HI] = (u16)((__DSPRegs[DSP_ARAM_DMA_SIZE_HI] & ~0x03ff) | (u16)(length >> 16));
	__DSPRegs[DSP_ARAM_DMA_SIZE_LO] = (u16)((__DSPRegs[DSP_ARAM_DMA_SIZE_LO] & ~0xffe0) | (u16)(length & 0xffff));

	__ARWaitForDMA();
}


void __ARClearInterrupt(void) {
    u16 tmp;

    tmp = __DSPRegs[5];
    tmp = (tmp & ~0x88) | 0x20;
    __DSPRegs[5] = tmp;
}

u16 __ARGetInterruptStatus(void) {
    return __DSPRegs[5] & 0x20;
}

static void __ARChecksize(void) {
    u8 test_data_pad[0x20 + 31];
    u8 dummy_data_pad[0x20 + 31];
    u8 buffer_pad[0x20 + 31];
    u8 save_pad_1[0x20 + 31];
    u8 save_pad_2[0x20 + 31];
    u8 save_pad_3[0x20 + 31];
    u8 save_pad_4[0x20 + 31];
    u8 save_pad_5[0x20 + 31];
    u32 *test_data;
    u32 *dummy_data;
    u32 *buffer;
    u32 *save1;
    u32 *save2;
    u32 *save3;
    u32 *save4;
    u32 *save5;
    u16 ARAM_mode = 0;
    u32 ARAM_size = 0;
    u32 i;

    while (!(__DSPRegs[11] & 1)) {
    }

    ARAM_mode = 3;
    ARAM_size = __AR_InternalSize = 0x1000000;
    __DSPRegs[9] = (u16)((__DSPRegs[9] & ~(0x00000007 | 0x00000038)) | 0x20 | 2 | 1);

    test_data = (u32 *)(((u32)test_data_pad + 31) & ~31);
    dummy_data = (u32 *)(((u32)dummy_data_pad + 31) & ~31);
    buffer = (u32 *)(((u32)buffer_pad + 31) & ~31);
    save1 = (u32 *)(((u32)save_pad_1 + 31) & ~31);
    save2 = (u32 *)(((u32)save_pad_2 + 31) & ~31);
    save3 = (u32 *)(((u32)save_pad_3 + 31) & ~31);
    save4 = (u32 *)(((u32)save_pad_4 + 31) & ~31);
    save5 = (u32 *)(((u32)save_pad_5 + 31) & ~31);

    for (i = 0; i < 8; i++) {
        *(test_data + i) = 0xdeadbeef;
        *(dummy_data + i) = 0xbad0bad0;
    }

    DCFlushRange((void *)test_data, 0x20);
    DCFlushRange((void *)dummy_data, 0x20);

    __AR_ExpansionSize = 0;

    DCInvalidateRange((void *)save1, 0x20);
    __ARReadDMA((u32)save1, ARAM_size + 0, 0x20);
    PPCSync();

    __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

    memset((void *)buffer, 0, 0x20);
    DCFlushRange((void *)buffer, 0x20);

    __ARReadDMA((u32)buffer, ARAM_size + 0x0000000, 0x20);
    PPCSync();

    if (buffer[0] == test_data[0]) {
        DCInvalidateRange((void *)save2, 0x20);
        __ARReadDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
        PPCSync();

        DCInvalidateRange((void *)save3, 0x20);
        __ARReadDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
        PPCSync();

        DCInvalidateRange((void *)save4, 0x20);
        __ARReadDMA((u32)save4, ARAM_size + 0x0000200, 0x20);
        PPCSync();

        DCInvalidateRange((void *)save5, 0x20);
        __ARReadDMA((u32)save5, ARAM_size + 0x0400000, 0x20);
        PPCSync();

        __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0200000, 0x20);
        __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

        memset((void *)buffer, 0, 0x20);
        DCFlushRange((void *)buffer, 0x20);

        __ARReadDMA((u32)buffer, ARAM_size + 0x0200000, 0x20);
        PPCSync();

        if (buffer[0] == test_data[0]) {
            __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);

            ARAM_mode |= 0 << 1;
            ARAM_size += 0x0200000;
            __AR_ExpansionSize = 0x0200000;
        } else {
            __ARWriteDMA((u32)dummy_data, ARAM_size + 0x1000000, 0x20);
            __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

            memset((void *)buffer, 0, 0x20);
            DCFlushRange((void *)buffer, 0x20);

            __ARReadDMA((u32)buffer, ARAM_size + 0x1000000, 0x20);
            PPCSync();

            if (buffer[0] == test_data[0]) {
                __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);

                ARAM_mode |= 4 << 1;
                ARAM_size += 0x0400000;
                __AR_ExpansionSize = 0x0400000;
            } else {
                __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0000200, 0x20);
                __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

                memset((void *)buffer, 0, 0x20);
                DCFlushRange((void *)buffer, 0x20);

                __ARReadDMA((u32)buffer, ARAM_size + 0x0000200, 0x20);
                PPCSync();

                if (buffer[0] == test_data[0]) {
                    __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                    __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                    __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);

                    ARAM_mode |= 8 << 1;
                    ARAM_size += 0x0800000;
                    __AR_ExpansionSize = 0x0800000;
                } else {
                    __ARWriteDMA((u32)dummy_data, ARAM_size + 0x0400000, 0x20);
                    __ARWriteDMA((u32)test_data, ARAM_size + 0x0000000, 0x20);

                    memset((void *)buffer, 0, 0x20);
                    DCFlushRange((void *)buffer, 0x20);

                    __ARReadDMA((u32)buffer, ARAM_size + 0x0400000, 0x20);
                    PPCSync();

                    if (buffer[0] == test_data[0]) {
                        __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                        __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                        __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
                        __ARWriteDMA((u32)save4, ARAM_size + 0x0000200, 0x20);

                        ARAM_mode |= 12 << 1;
                        ARAM_size += 0x1000000;
                        __AR_ExpansionSize = 0x1000000;
                    } else {
                        __ARWriteDMA((u32)save1, ARAM_size + 0x0000000, 0x20);
                        __ARWriteDMA((u32)save2, ARAM_size + 0x0200000, 0x20);
                        __ARWriteDMA((u32)save3, ARAM_size + 0x1000000, 0x20);
                        __ARWriteDMA((u32)save4, ARAM_size + 0x0000200, 0x20);
                        __ARWriteDMA((u32)save5, ARAM_size + 0x0400000, 0x20);

                        ARAM_mode |= 16 << 1;
                        ARAM_size += 0x2000000;
                        __AR_ExpansionSize = 0x2000000;
                    }
                }
            }
        }
        __DSPRegs[9] = (u16)((__DSPRegs[9] & ~(0x07 | 0x38)) | ARAM_mode);
    }

    *(u32 *)0xC00000D0 = ARAM_size;
    __AR_Size = ARAM_size;
}

static void __ARClearArea(u32 start_addr, u32 length) {
    u8 buffer_pad[0x800 + 31];
    u8 *buffer;
    u32 end_addr;
    u32 current_addr;
    u32 current_length;

    buffer = (u8 *)(((u32)buffer_pad + 31) & ~31);
    while (!(__DSPRegs[11] & 1)) {
    }
    memset(buffer, 0, 0x800);
    DCFlushRange(buffer, 0x800);
    end_addr = start_addr + length;
    current_addr = start_addr;
    while (current_addr < end_addr) {
        current_length = (end_addr - current_addr < 0x800) ? (end_addr - current_addr) : 0x800;
        current_length = (current_length + 31) & ~31;
        __ARWriteDMA((u32)buffer, current_addr, current_length);
        __ARClearInterrupt();
        current_addr += current_length;
    }
}
