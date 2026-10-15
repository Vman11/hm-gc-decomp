/* Functions from 0x8019B990 to 0x8019BB1C, found by decomp-toolkit. */
#include "common.h"

void fn_8019B990(void *arg0, void *arg1) {
    void *head = M2C_FIELD(arg0, void **, 0x48);
    void *node = head;
    void *prev = head;

    while (node != NULL) {
        if (node == arg1) {
            if (node == head) {
                M2C_FIELD(arg0, void **, 0x48) = M2C_FIELD(arg1, void **, 8);
            } else {
                M2C_FIELD(prev, void **, 8) = M2C_FIELD(arg1, void **, 8);
            }
            M2C_FIELD(arg1, void **, 8) = NULL;
            return;
        }
        prev = node;
        node = M2C_FIELD(node, void **, 8);
    }
}

void fn_8019B9E4(void *arg0, void *arg1) {
    void *head = M2C_FIELD(arg0, void **, 0x48);
    void *node;
    void *prev;

    if (head == NULL) {
        M2C_FIELD(arg0, void **, 0x48) = arg1;
        return;
    }
    node = head;
    prev = head;
    while (node != NULL) {
        if (arg1 == node) {
            return;
        }
        prev = node;
        node = M2C_FIELD(node, void **, 8);
    }
    M2C_FIELD(prev, void **, 8) = arg1;
}

void fn_8019BA24(void *arg0, void *arg1) {
    void *head = M2C_FIELD(arg0, void **, 0x44);
    void *node = head;
    void *prev = head;

    while (node != NULL) {
        if (node == arg1) {
            if (node == head) {
                M2C_FIELD(arg0, void **, 0x44) = M2C_FIELD(arg1, void **, 8);
            } else {
                M2C_FIELD(prev, void **, 8) = M2C_FIELD(arg1, void **, 8);
            }
            M2C_FIELD(arg1, void **, 8) = NULL;
            return;
        }
        prev = node;
        node = M2C_FIELD(node, void **, 8);
    }
}

void *fn_8019BAB8(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    if (temp_r4 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, void **, 0x14) = (void *) M2C_FIELD(temp_r4, void **, 0x10);
    return temp_r4;
}

void fn_8019BADC(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}

void *fn_8019BAF4(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r4, void **, 0) = arg0;
    M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(temp_r4, void **, 0x14);
    return temp_r4;
}

