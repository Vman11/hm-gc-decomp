// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct { u8 pad[28]; void *f28; } A801A435C;
typedef struct { u8 pad[4]; A801A435C *f4; } B801A435C;
void fn_801A3DA8(void *p);
void fn_801A435C(const B801A435C *p) { fn_801A3DA8(p->f4->f28); }

} /* extern "C" */
