/* Functions from 0x800F9BB4 to 0x800F9BEC, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035AA00;

void fn_800F9BB4(s32 arg0) {
    lbl_8035AA00 = arg0;
}

typedef struct N { struct N *a; struct N *next; } N;
N *fn_800F9BBC(N **arg0) { N *p = *arg0; if (p) { N *q; for (q = p; (p = q->next) != NULL; q = p) {} return q; } return NULL; }
