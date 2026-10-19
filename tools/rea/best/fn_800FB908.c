// auto/text_800FB908 fn_800FB908 99.4516
extern void *memcpy(void *, const void *, unsigned long);

void fn_800FB908(s32 param_1, s32 param_2, s32 param_3) {
    s32 iVar1;

    iVar1 = *(s32 *)(param_1 + 0x10) + *(s32 *)(param_1 + 4);
    memcpy((void *)(iVar1 + param_2),(void *)(iVar1 + param_3 + 1),
                  (*(s32 *)(param_1 + 8) - *(s32 *)(param_1 + 4)) - param_3);
    *(s32 *)(param_1 + 8) = *(s32 *)(param_1 + 8) - ((param_3 - param_2) + 1);
}
