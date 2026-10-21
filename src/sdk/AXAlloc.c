/* AXAlloc.c (Dolphin SDK 2003) : 0x800C6F6C - 0x800C74DC of auto/text_800B2E70. = dolsdk2001 src/ax/AXAlloc.c
 * (+ priority reset in __AXPushFreeStack). */
#include "common.h"

#define AX_PRIORITY_STACKS 32
typedef struct _AXVPB {
    void *next;
    void *prev;
    void *next1;
    u32 priority;
    void (*callback)(void *);
    u32 userContext;
    u32 index;
    u32 sync;
    u32 depop;
    u8 _pad[0x138 - 0x24];
    struct {
        u16 nextHi, nextLo, currHi, currLo, srcSelect, coefSelect, mixerCtrl, state;
    } pb;
} AXVPB;

BOOL OSDisableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);
void fn_800C9704(AXVPB *p); /* __AXSetPBDefault */
#define __AXSetPBDefault fn_800C9704

#define __AXGetStackHead fn_800C6F6C
#define __AXServiceCallbackStack fn_800C6F84
#define __AXAllocInit fn_800C6FF8
#define __AXAllocQuit fn_800C70AC
#define __AXPushFreeStack fn_800C7160
#define __AXPushCallbackStack fn_800C7180
#define __AXPopCallbackStack fn_800C7190
#define __AXRemoveFromStack fn_800C71AC
#define AXFreeVoice fn_800C7240
#define AXAcquireVoice fn_800C72C0
#define AXSetVoicePriority fn_800C7434

AXVPB *__AXPopCallbackStack(void);
void __AXRemoveFromStack(AXVPB *p);
void __AXPushFreeStack(AXVPB *p);
static AXVPB * __AXStackHead[AX_PRIORITY_STACKS];
static AXVPB * __AXStackTail[AX_PRIORITY_STACKS];

static AXVPB * __AXCallbackStack;

AXVPB * __AXGetStackHead(u32 priority) {
    return __AXStackHead[priority];
}

void __AXServiceCallbackStack(void) {
    AXVPB *p;

    for (p = __AXPopCallbackStack(); p; p = __AXPopCallbackStack()) {
        if (p->priority) {
            if (p->callback) {
                p->callback(p);
            }
            __AXRemoveFromStack(p);
            __AXPushFreeStack(p);
        }
    }
}

static inline void __AXInitVoiceStacks(void) {
    u32 i;

    __AXCallbackStack = NULL;
    for(i = 0; i < AX_PRIORITY_STACKS; i++) {
        __AXStackHead[i] = __AXStackTail[i] = 0;
    }
}

void __AXAllocInit(void) {
    __AXInitVoiceStacks();
}

void __AXAllocQuit(void) {
    __AXInitVoiceStacks();
}

void __AXPushFreeStack(AXVPB * p) {
    p->next = __AXStackHead[0];
    __AXStackHead[0] = p;
    p->priority = 0;
}

static inline AXVPB * __AXPopFreeStack(void) {
    AXVPB * p;

    p = __AXStackHead[0];
    if (p) {
        __AXStackHead[0] = p->next;
    }
    return p;
}

void __AXPushCallbackStack(AXVPB * p) {
    p->next1 = __AXCallbackStack;
    __AXCallbackStack = p;
}

AXVPB * __AXPopCallbackStack(void) {
    AXVPB * p;

    p = __AXCallbackStack;
    if (p) {
        __AXCallbackStack = p->next1;
    }
    return p;
}

void __AXRemoveFromStack(AXVPB * p) {
    u32 i;
    AXVPB * head;
    AXVPB * tail;
    i = p->priority;
    head = __AXStackHead[i];
    tail = __AXStackTail[i];
    if (head == tail) {
        __AXStackHead[i] = __AXStackTail[i] = 0;
        return;
    }
    if (p == head) {
        __AXStackHead[i] = p->next;
        __AXStackHead[i]->prev = 0;
        return;
    }
    if (p == tail) {
        __AXStackTail[i] = p->prev;
        __AXStackTail[i]->next = 0;
        return;
    }
    head = p->prev;
    tail = p->next;
    head->next = tail;
    tail->prev = head;
}

static inline void __AXPushStackHead(AXVPB * p, u32 priority) {
    p->next = __AXStackHead[priority];
    p->prev = 0;
    if (p->next) {
        __AXStackHead[priority]->prev = p;
        __AXStackHead[priority] = p;
    } else {
        __AXStackTail[priority] = p;
        __AXStackHead[priority] = p;
    }
    p->priority = priority;
}

static inline AXVPB * __AXPopStackFromBottom(u32 priority) {
    AXVPB * p;
    p = NULL;
    if (__AXStackHead[priority]) {
        if (__AXStackHead[priority] == __AXStackTail[priority]) {
            p = __AXStackHead[priority];
            __AXStackHead[priority] = __AXStackTail[priority] = 0;
        } else if (__AXStackTail[priority]) {
            p = __AXStackTail[priority];
            __AXStackTail[priority] = p->prev;
            __AXStackTail[priority]->next = 0;
        }
    }
    return p;
}

void AXFreeVoice(AXVPB * p) {
    int old;
    old = OSDisableInterrupts();
    __AXRemoveFromStack(p);
    if (p->pb.state == 1) {
        p->depop = 1;
    }
    __AXSetPBDefault(p);
    __AXPushFreeStack(p);
    OSRestoreInterrupts(old);
}

AXVPB * AXAcquireVoice(u32 priority, void (* callback)(void *), u32 userContext) {
    int old;
    AXVPB * p;
    u32 i;

    old = OSDisableInterrupts();
    p = __AXPopFreeStack();
    if (p == 0) {
        for(i = 1; i < priority; i++) {
            p = __AXPopStackFromBottom(i);
            if (p) {
                if (p->pb.state == 1) {
                    p->depop = 1;
                }
                if (p->callback != 0) {
                    p->callback(p);
                }
                break;
            }
        }
    }
    if (p) {
        __AXPushStackHead(p, priority);
        p->callback = callback;
        p->userContext = userContext;
        __AXSetPBDefault(p);
    }
    OSRestoreInterrupts(old);
    return p;
}

void AXSetVoicePriority(AXVPB * p, u32 priority) {
    int old;
    old = OSDisableInterrupts();
    __AXRemoveFromStack(p);
    __AXPushStackHead(p, priority);
    OSRestoreInterrupts(old);
}
