// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035A9F0;
int fn_800F771C(void *, void *);
void free(void *);
}
void operator delete(void *p) throw() {
    if (p) {
        if (!fn_800F771C(lbl_8035A9F0, p)) free(p);
    }
}
extern "C" {

} /* extern "C" */
