// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct { u32 f0; } R;
typedef struct { u8 p[0x30]; void *f30; void *f34; u8 m38[0x44 - 0x38]; R *f44; R *f48; } O;
void fn_801912A4(R *, void *);
static inline void *g1(O *o) { return o->f34 != 0 ? o->f34 : o->f30; }
static inline R *g2(O *o) { return o->f48 != 0 ? o->f48 : o->f44; }
void fn_801E96A0(O *o) {
    if (g1(o) != 0) {
        g2(o)->f0 |= 0x400;
    } else {
        fn_801912A4(g2(o), o->m38);
    }
}
