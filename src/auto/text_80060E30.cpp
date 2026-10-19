// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include <stdarg.h>

extern "C" {

void fn_802110C8(void *, const char *, va_list);

void fn_80060E30(void *a, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    fn_802110C8(a, fmt, args);
}

} /* extern "C" */
