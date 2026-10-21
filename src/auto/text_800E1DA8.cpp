// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct DC { struct DC *next; void (*dtor)(void *, s32); void *obj; } DC;
extern DC *__global_destructor_chain;

#pragma exceptions off
void __destroy_global_chain(void) {
    DC *g;
    while ((g = __global_destructor_chain) != 0) {
        __global_destructor_chain = g->next;
        g->dtor(g->obj, -1);
    }
}
#pragma exceptions reset

__declspec(section ".dtors") static void (*const __destroy_global_chain_reference)(void) = __destroy_global_chain;

} /* extern "C" */
