// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 d[24]; } Tab801F7154;
typedef struct { u8 pad[24]; Tab801F7154 a; Tab801F7154 b; } Mgr801F7154;
typedef struct { u8 pad[576]; Mgr801F7154 mgr; } Res801F7154;
void fn_800FB064(void *stream, char *dst);
void *fn_800F9398(Tab801F7154 *tab, char *name);
void *fn_800F9788(Tab801F7154 *tab, char *group, char *name);
void fn_801F7518(u8 *self, void *stream);

inline void *lookup_801F7154(Mgr801F7154 *m, char *name, char *group) {
    if (group == 0 || group[0] == 0) {
        return fn_800F9398(&m->a, name);
    }
    return fn_800F9788(&m->b, group, name);
}

void fn_801F7154(u8 *self, void *stream, s32 id) {
    char name[8];
    char group[8];
    switch (id) {
    case 114:
        fn_800FB064(stream, name);
        fn_800FB064(stream, group);
        *(void **)(self + 120) = lookup_801F7154(*(Mgr801F7154 **)(*(u8 **)(self + 8) + 212), name, group);
        break;
    case 150:
        fn_800FB064(stream, name);
        fn_800FB064(stream, group);
        *(void **)(self + 124) = lookup_801F7154(&(**(Res801F7154 ***)(*(u8 **)(self + 8) + 208))->mgr, name, group);
        break;
    default:
        fn_801F7518(self, stream);
        break;
    }
}

} /* extern "C" */
