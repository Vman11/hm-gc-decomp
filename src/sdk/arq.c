/* arq.c (Dolphin SDK 2003) : 0x800C6B2C - 0x800C6EC8 of auto/text_800B2E70. = dolsdk2001 src/ar/arq.c
 * (+OSRegisterVersion; unused functions omitted). */
#include "common.h"

typedef void (*ARQCallback)(u32 pointerToARQRequest);
typedef struct ARQRequest ARQRequest;
struct ARQRequest {
    ARQRequest *next;
    u32 owner;
    u32 type;
    u32 priority;
    u32 source;
    u32 dest;
    u32 length;
    ARQCallback callback;
};
#define ARQ_PRIORITY_LOW 0
#define ARQ_PRIORITY_HIGH 1

void OSRegisterVersion(const char *id);
BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void *fn_800C4E78(void *callback); /* ARRegisterDMACallback */
void fn_800C4EF8(u32 type, u32 mainmem_addr, u32 aram_addr, u32 length); /* ARStartDMA */
#define ARRegisterDMACallback fn_800C4E78
#define ARStartDMA fn_800C4EF8
#define __ARQServiceQueueLo fn_800C6B2C
#define __ARQCallbackHack fn_800C6C2C
#define __ARQInterruptServiceRoutine fn_800C6C30
#define ARQInit fn_800C6CFC
#define ARQPostRequest fn_800C6D6C

char *__ARQVersion = "<< Dolphin SDK - ARQ\trelease build: Apr 17 2003 12:33:56 (0x2301) >>";

static ARQRequest * __ARQRequestQueueHi;
static ARQRequest * __ARQRequestTailHi;
static ARQRequest * __ARQRequestQueueLo;
static ARQRequest * __ARQRequestTailLo;
static ARQRequest * __ARQRequestPendingHi;
static ARQRequest * __ARQRequestPendingLo;
static ARQCallback __ARQCallbackHi;
static ARQCallback __ARQCallbackLo;
static u32 __ARQChunkSize;
static int __ARQ_init_flag;

static inline void __ARQPopTaskQueueHi(void) {
    if (__ARQRequestQueueHi) {
        if (__ARQRequestQueueHi->type == 0) {
            ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->source, __ARQRequestQueueHi->dest, __ARQRequestQueueHi->length);
        } else {
            ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->dest, __ARQRequestQueueHi->source, __ARQRequestQueueHi->length);
        }
        __ARQCallbackHi = __ARQRequestQueueHi->callback;
        __ARQRequestPendingHi = __ARQRequestQueueHi;
        __ARQRequestQueueHi = __ARQRequestQueueHi->next;
    }
}

void __ARQServiceQueueLo(void) {
    if (__ARQRequestPendingLo == 0 && __ARQRequestQueueLo) {
        __ARQRequestPendingLo = __ARQRequestQueueLo;
        __ARQRequestQueueLo = __ARQRequestQueueLo->next;
    }
    if (__ARQRequestPendingLo) {
        if (__ARQRequestPendingLo->length <= __ARQChunkSize) {
            if (__ARQRequestPendingLo->type == 0) {
                ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source, __ARQRequestPendingLo->dest, __ARQRequestPendingLo->length);
            } else {
                ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest, __ARQRequestPendingLo->source, __ARQRequestPendingLo->length);
            }
            __ARQCallbackLo = __ARQRequestPendingLo->callback;
        } else if (__ARQRequestPendingLo->type == 0) {
            ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source, __ARQRequestPendingLo->dest, __ARQChunkSize);
        } else {
            ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest, __ARQRequestPendingLo->source, __ARQChunkSize);
        }
        __ARQRequestPendingLo->length -= __ARQChunkSize;
        __ARQRequestPendingLo->source += __ARQChunkSize;
        __ARQRequestPendingLo->dest += __ARQChunkSize;
    }
}

void __ARQCallbackHack(u32 unused) {
    
}

void __ARQInterruptServiceRoutine() {
    if (__ARQCallbackHi) {
        __ARQCallbackHi((u32)__ARQRequestPendingHi);
        __ARQRequestPendingHi = NULL;
        __ARQCallbackHi = NULL;        
    } else if (__ARQCallbackLo) {
        __ARQCallbackLo((u32)__ARQRequestPendingLo);
        __ARQRequestPendingLo = NULL;
        __ARQCallbackLo = NULL;        
    }
    __ARQPopTaskQueueHi();
    if (__ARQRequestPendingHi == 0) {
        __ARQServiceQueueLo();
    }
}

void ARQInit(void) {
    if (__ARQ_init_flag != 1) {
        OSRegisterVersion(__ARQVersion);
        __ARQRequestQueueHi = __ARQRequestQueueLo = NULL;
        __ARQChunkSize = 0x1000;
        ARRegisterDMACallback(__ARQInterruptServiceRoutine);
        __ARQRequestPendingHi = NULL;
        __ARQRequestPendingLo = NULL;
        __ARQCallbackHi = NULL;
        __ARQCallbackLo = NULL;
        __ARQ_init_flag = 1;
    }
}

void ARQPostRequest(ARQRequest * request, u32 owner, u32 type, u32 priority, u32 source, u32 dest, u32 length, ARQCallback callback) {
    int level;
    request->next = NULL;
    request->owner = owner;
    request->type = type;
    request->source = source;
    request->dest = dest;
    request->length = length;
    if (callback) {
        request->callback = callback;
    } else {
        request->callback = __ARQCallbackHack;
    }
    level = OSDisableInterrupts();
    switch(priority) {
        case ARQ_PRIORITY_LOW:
            if (__ARQRequestQueueLo) {
                __ARQRequestTailLo->next = request;
            } else {
                __ARQRequestQueueLo = request;
            }
            __ARQRequestTailLo = request;
            break;
        case ARQ_PRIORITY_HIGH:
            if (__ARQRequestQueueHi) {
                __ARQRequestTailHi->next = request;
            } else {
                __ARQRequestQueueHi = request;
            }
            __ARQRequestTailHi = request;
            break;
    }
        if ((__ARQRequestPendingHi == 0) && ( __ARQRequestPendingLo == 0)) {
            __ARQPopTaskQueueHi();
        if ( __ARQRequestPendingHi == 0) {
            __ARQServiceQueueLo();
        }
    }
    OSRestoreInterrupts(level);
}

