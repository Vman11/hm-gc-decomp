/* MSL_C GCN_mem_alloc.c */
#include "common.h"

extern int lbl_80359530; /* __OSCurrHeap (OSAlloc.c) */
void OSReport(const char *, ...);
void *OSGetArenaLo(void);
void *OSGetArenaHi(void);
void OSSetArenaLo(void *);
void *fn_800B44C8(void *, void *, int);
int fn_800B4538(void *, void *);
int fn_800B44B8(int);
void fn_800B443C(int, void *);

static void InitDefaultHeap(void) {
    void *arenaLo;
    void *arenaHi;

    OSReport("GCN_Mem_Alloc.c : InitDefaultHeap. No Heap Available\n");
    OSReport("Metrowerks CW runtime library initializing default heap\n");
    arenaLo = OSGetArenaLo();
    arenaHi = OSGetArenaHi();
    arenaLo = fn_800B44C8(arenaLo, arenaHi, 1);
    OSSetArenaLo(arenaLo);
    arenaLo = (void *)(((u32)arenaLo + 0x1F) & ~0x1F);
    arenaHi = (void *)((u32)arenaHi & ~0x1F);
    fn_800B44B8(fn_800B4538(arenaLo, arenaHi));
    OSSetArenaLo(arenaLo = arenaHi);
}

void __sys_free(void *ptr) {
    if (lbl_80359530 == -1) {
        InitDefaultHeap();
    }
    fn_800B443C(lbl_80359530, ptr);
}
