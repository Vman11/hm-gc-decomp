/* Functions from 0x8010CA74 to 0x8010CB34, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010CA74(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}

void fn_8010CA7C(void *arg0) {
    void *parent = M2C_FIELD(arg0, void **, 8);
    void *cur;
    void *prev;
    if (parent != NULL) {
        cur = M2C_FIELD(parent, void **, 0x10);
        if (cur == arg0) {
            M2C_FIELD(parent, void **, 0x10) = M2C_FIELD(cur, void **, 0xC);
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        } else if (cur != NULL) {
            do {
                prev = cur;
                cur = M2C_FIELD(cur, void **, 0xC);
            } while (cur != NULL && cur != arg0);
            if (cur != NULL) {
                M2C_FIELD(prev, void **, 0xC) = M2C_FIELD(cur, void **, 0xC);
                M2C_FIELD(arg0, void **, 0xC) = NULL;
            }
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
}

void fn_8010CAF4(void *arg0, void *arg1) {
    void *cur;
    void *prev;
    void *next;
    BOOL done;
    M2C_FIELD(arg0, void **, 8) = arg1;
    if (arg1 != NULL) {
        next = M2C_FIELD(arg1, void **, 0x10);
        cur = next;
        if (next != NULL) {
            do {
                next = M2C_FIELD(cur, void **, 0xC);
                prev = cur;
                done = next == NULL;
                cur = next;
            } while (!done);
            M2C_FIELD(prev, void **, 0xC) = arg0;
            return;
        }
        M2C_FIELD(arg1, void **, 0x10) = arg0;
    }
}

