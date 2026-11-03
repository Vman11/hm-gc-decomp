#include "common.h"
namespace m800604C4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
void fn_800E91D0(const char *fmt, ...);
void exit(int);

#pragma readonly_strings on
void fn_800604C4(s32 code, char *file, s32 line) {
    char *msg;
    switch (code) {
    case 0: msg = "Invalid error condition"; break;
    case -1: msg = "General error occurred"; break;
    case -2: msg = "Invalid parameter detected"; break;
    case -3: msg = "Invalid value detected"; break;
    case -4: msg = "Out of memory error occured"; break;
    case -5: msg = "Critical resource busy"; break;
    case -7: msg = "Assertion Failed"; break;
    default: msg = "Unknown error condition occured"; break;
    }
    fn_800E91D0("%s, file \"%s\" line %d\n", msg, file, line);
    exit(1);
}
#pragma readonly_strings reset

} /* extern "C" */

} /* namespace m800604C4 */

namespace m80060568 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_800E91D0(const char *, ...);
void exit(s32);

void fn_80060568(void *a, void *b, void *c) {
    fn_800E91D0("%s, file \"%s\" line %d\n", a, b, c);
    exit(1);
}

} /* extern "C" */

} /* namespace m80060568 */
