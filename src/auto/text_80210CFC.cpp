// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void strcpy(char *);

void fn_80210CFC(char *s) {
    char *c;
    strcpy(s);
    for (c = s; *c != 0; c++) {
        if (*c == 92) {
            *c = 47;
        }
    }
}

} /* extern "C" */
