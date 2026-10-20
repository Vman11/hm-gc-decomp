// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct DC { struct DC *next; void (*dtor)(void *, s32); void *obj; } DC;
extern DC *__global_destructor_chain;

void __destroy_global_chain(void) {
    DC *g;
    while ((g = __global_destructor_chain) != NULL) {
        __global_destructor_chain = g->next;
        g->dtor(g->obj, -1);
    }
}
