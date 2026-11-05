// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
struct N8010FEDC { u8 pad[8]; N8010FEDC *parent; };
N8010FEDC *fn_80110064(void *mgr, const char *path, N8010FEDC *node);
N8010FEDC *fn_8010FEDC(void *mgr, N8010FEDC *nd, const char *p, s32 up) {
    N8010FEDC *node = nd;
    const char *path = p;
    while (*path) {
        if (up) {
            N8010FEDC *parent;
            s32 again;
            do {
                again = 0;
                if (node) parent = node->parent;
                else parent = 0;
                node = fn_80110064(mgr, path, node);
                if (!node && parent) { again = 1; node = parent; }
            } while (again);
        } else {
            node = fn_80110064(mgr, path, node);
            if (!node) break;
        }
        while (*path && *path != '\\') path++;
        if (*path == '\\') path++;
    }
    if (!node) return 0;
    return node;
}
}
