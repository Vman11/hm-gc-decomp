/* RAD Bink: 0x8028389C-0x80284068 */
#include "bink_common.h"

void fn_8028389C(void *p) {
    fn_8027B790(p);
}

s32 fn_802838BC(s32 arg0, s32 arg1) {
    s32 p;
    s32 n;
    if (arg0 == 0) {
        return 0;
    }
    p = *(s32 *)(arg0 + 0x30);
    if (p == arg1) {
        *(s32 *)(arg0 + 0x30) = *(s32 *)p;
        return 1;
    }
    while (*(s32 *)p != 0) {
        n = *(s32 *)p;
        if (n == arg1) {
            *(s32 *)p = *(s32 *)n;
            return 1;
        }
        p = n;
    }
    return 0;
}

void fn_8028391C(wCN **head, wCN *n) {
    wCN *c = *head;
    wCN *prev;
    if (c == 0) {
        n->next = c;
        *head = n;
    } else if (n->key >= c->key) {
        n->next = c;
        *head = n;
    } else {
        for (prev = c; prev->next != 0; prev = prev->next) {
            if (n->key >= prev->next->key) {
                n->next = prev->next;
                prev->next = n;
                return;
            }
        }
        n->next = 0;
        prev->next = n;
    }
}

void fn_80283984(void *arg0) {
    void fn_8028391C(wCN **, wCN *);
    void *sp8;
    s32 temp_r3;
    void *var_r31;
    void *var_r31_2;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1) {
        var_r31 = M2C_FIELD(arg0, void **, 0x30);
        sp8 = NULL;
        if (var_r31 != NULL) {
loop_2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0) == 1) {
                if ((s32) M2C_FIELD(var_r31, s32 *, 0xC) == 1) {
                    temp_r3 = M2C_FIELD(var_r31, s32 (**)(void *, s32), 0x14)(var_r31, M2C_FIELD(arg0, s32 *, 0x34));
                    M2C_FIELD(var_r31, s32 *, 8) = temp_r3;
                    if (temp_r3 != 0) {
                        fn_8028391C(&sp8, var_r31);
                    }
                }
                var_r31 = M2C_FIELD(var_r31, void **, 0);
                if (var_r31 == NULL) {
                    goto block_7;
                }
                goto loop_2;
            }
        } else {
block_7:
            var_r31_2 = sp8;
            if (var_r31_2 != NULL) {
                do {
                    M2C_FIELD(var_r31_2, M2C_UNK (**)(void *, s32), 0x18)(var_r31_2, M2C_FIELD(arg0, s32 *, 0x34));
                    var_r31_2 = M2C_FIELD(var_r31_2, void **, 4);
                } while (var_r31_2 != NULL);
            }
        }
    }
}

void fn_80283A54(u8 *a) {
    u8 *p = a - 8;
    if (p != 0 && *(s32 *)(p + 48) != 0) {
        s32 e = OSEnableInterrupts();
        fn_80283984(p);
        wC_OSRestoreInterrupts(e);
    }
}

void *fn_80283AA4(s32 n) {
    s32 *p = (s32 *)fn_8027B6D4(64);
    if (p != 0) {
        wC_memset_83AA4(p, 0, 64);
        p[14] = 0;
        p[1] = 1;
        p[12] = 0;
        p[0] = 0;
        p[13] = 1;
        if (n < 0) {
            n = -n;
        }
        p[15] = n;
    }
    return p;
}

void fn_80283B20(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    OSDisableInterrupts();
    arg1[3] = 1;
    arg1[5] = arg2;
    arg1[6] = arg3;
    arg1[4] = 0;
    arg1[0] = arg0[12];
    arg0[12] = (s32)arg1;
    arg0[14]++;
    OSRestoreInterrupts();
}

s32 fn_80283B8C(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    s32 level;

    ret = 0;
    if (arg0 != 0 && arg1 != 0 && *(s32 *)(arg1 + 0x18) != 0 && *(s32 *)(arg1 + 0x14) != 0) {
        level = OSDisableInterrupts();
        if (fn_802838BC(arg0, arg1) != 0) {
            *(s32 *)(arg0 + 0x38) -= 1;
            if ((arg2 & 1) && *(s32 *)(arg0 + 0x30) == 0) {
                ret = 1;
                fn_80283FE4((u8 *)arg0);
            }
        }
        wC_OSRestoreInterrupts_80283B8C(level);
    }
    return ret;
}

s32 fn_80283C38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    a = fn_80283B8C_wD(arg0, arg1, arg4);
    return a | (fn_80283B8C_wD(arg2, arg3, arg4) << 1);
}

s32 fn_80283C8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

s32 fn_80283C94(void *q) {
    volatile s32 *p = q;
    s32 r;
    if (p != 0) {
        s32 e = OSDisableInterrupts();
        if (p[0] == 1) {
            p[0] = 2;
        }
        p[1]++;
        wC_OSRestoreInterrupts_80283C94(e);
        r = 1;
        if (p[0] == 1) {
            r = 0;
        }
    } else {
        r = 1;
    }
    return r;
}

void fn_80283D04(void *arg0) {
    for (; fn_80283C94(arg0) == 0;) {
        fn_800B9CD8();
    }
}

void fn_80283D44(void *q) {
    volatile s32 *p = q;
    if (p != 0) {
        s32 e = OSDisableInterrupts();
        p[1]--;
        if (p[1] == 0) {
            if (p[0] == 0) {
                fn_800B3E7C((void *)(p + 2), OSGetTime(), (1000 / (u32)p[15]) * ((((wCOSG *)0x80000000)->bus / 4) / 1000), fn_80283A54);
            }
            p[0] = 1;
        }
        wC_OSRestoreInterrupts_80283D44(e);
    }
}

s32 fn_80283DFC(s32 a, void *q) {
    volatile s32 *p = q;
    s32 r;
    if (a != 0 && p != 0 && p[6] != 0 && p[5] != 0) {
        s32 e = OSDisableInterrupts();
        if (p[3] == 1) {
            p[3] = 2;
        }
        p[4]++;
        wC_OSRestoreInterrupts_80283DFC(e);
        r = 1;
        if (p[3] == 1) {
            r = 0;
        }
    } else {
        r = 1;
    }
    return r;
}

void fn_80283E90(s32 a, void *b) {
    if (a && b && ((s32 *)b)[6] && ((s32 *)b)[5]) {
        for (; fn_80283DFC(a, b) == 0;) {
            fn_800B9CD8();
        }
    }
}

void fn_80283EFC(void *a, void *b, void *c, void *d) {
    fn_80283E90(a, b);
    fn_80283E90(c, d);
}

void fn_80283F38(s32 a, void *q) {
    volatile s32 *p = q;
    if (a != 0 && p != 0 && p[6] != 0 && p[5] != 0) {
        s32 e = OSDisableInterrupts();
        p[4]--;
        if (p[4] == 0) {
            p[3] = 1;
        }
        wC_OSRestoreInterrupts_80283F38(e);
    }
}

void fn_80283FB0(void *a, void *b) {
    fn_80283D04(a);
    fn_80283D04(b);
}

void fn_80283FE4(u8 *arg0) {
    if (arg0 != 0) {
        fn_80283D04(arg0);
        fn_800B3EF8(arg0 + 8);
        fn_8027B790(arg0);
    }
}

void fn_80284028(void *a, void *b) {
    fn_80283FE4(a);
    fn_80283FE4(b);
}

void fn_8028405C(void) {

}

s32 fn_80284060(void) {
    return 0x1C;
}
