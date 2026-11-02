#include "common.h"


extern "C" {
extern void *lbl_8035A9F0;
int fn_800F771C(void *, void *);
void free(void *);
}
void operator delete[](void *p) throw() {
    if (p != 0) {
        if (fn_800F771C(lbl_8035A9F0, p) == 0) {
            free(p);
        }
    }
}
