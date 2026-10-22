// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct Node8003AA34 {
    u8 pad[120];
    s32 m120;
    u8 pad2[160];
    struct Node8003AA34 *parent;
} Node8003AA34;
extern u8 *lbl_8035B65C;
void fn_801D6DD8(Node8003AA34 *a, void *b);
void fn_801D6E5C(Node8003AA34 *a, void *b, s32 c, s32 d);
Node8003AA34 *fn_801C2544(void *a, Node8003AA34 *b, void *c);

void fn_8003AA34(u8 *s, Node8003AA34 *n, s32 flag) {
    Node8003AA34 *root;
    Node8003AA34 *r;
    u8 buf[8];
    if (*(Node8003AA34 **)(s + 8) != 0) {
        fn_801D6DD8(*(Node8003AA34 **)(s + 8), s);
    }
    if (n != 0) {
        fn_801D6E5C(n, s, 1, 1);
        *(Node8003AA34 **)(s + 8) = n;
        *(s32 *)(s + 4) = 1;
        if (flag != 0) {
            for (root = n; root->parent != 0; root = root->parent) {
            }
            r = fn_801C2544(*(void **)(lbl_8035B65C + 120), root, buf);
            if (r != 0) {
                r->m120 = 0;
            }
            n->m120 = 1;
        }
    }
}

} /* extern "C" */
