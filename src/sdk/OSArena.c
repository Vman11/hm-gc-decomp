#include <dolphin.h>
#include <dolphin/os.h>

#define ROUND(n, a) (((u32)(n) + (a)-1) & ~((a)-1))
#define TRUNC(n, a) (((u32)(n)) & ~((a)-1))

static void * __OSArenaHi;
static void * __OSArenaLo = (void*)-1;

void * OSGetArenaHi() {
    return __OSArenaHi;
}

void * OSGetArenaLo() {
    return __OSArenaLo;
}

void OSSetArenaHi(void * newHi) {
    __OSArenaHi = newHi;
}

void OSSetArenaLo(void * newLo) {
    __OSArenaLo = newLo;
}

#define OSAllocFromArenaLo fn_800B45C4
void* OSAllocFromArenaLo(u32 size, u32 align) {
    void* ptr;
    u8* arenaLo;

    ptr = (void*)(((u32)__OSArenaLo + align - 1) & ~(align - 1));
    arenaLo = (u8*)ptr + size;
    arenaLo = (u8*)(((u32)arenaLo + align - 1) & ~(align - 1));
    __OSArenaLo = arenaLo;
    return ptr;
}
