// auto/text_80212304 fn_80212304 98.6465
extern char lbl_802A72C0[];
extern char lbl_80365858[0x5];
extern char lbl_80365860[0x5];
extern char lbl_80365868[0x5];
extern char lbl_80365870[0x5];
void fn_80060568();
s32 fn_800EB540();
extern void *memcpy(void *, const void *, unsigned long);
extern void *memset(void *, int, unsigned long);

void fn_80212304(s32 *param_1, s32 param_2) {
    s32 iVar1;

    if (*param_1 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        memset(param_1 + 5,0,0x10);
    }
    iVar1 = fn_800EB540(param_2,(void *)lbl_80365858,4);
    if (iVar1 == 0) {
        *param_1 = 1;
    }
    else {
        iVar1 = fn_800EB540(param_2,(void *)lbl_80365860,4);
        if (iVar1 == 0) {
            *param_1 = 2;
        }
        else {
            iVar1 = fn_800EB540(param_2,(void *)lbl_80365868,4);
            if (iVar1 == 0) {
                *param_1 = 3;
            }
            else {
                iVar1 = fn_800EB540(param_2,(void *)lbl_80365870,4);
                if (iVar1 == 0) {
                    *param_1 = 4;
                }
                else {
                    fn_80060568((void *)lbl_802A72C0,0,0,0); /* "AtIoJamInfoHeader::vInit:  expected a valid Jam token!\n" */
                }
            }
        }
    }
    param_1[1] = (u32)*(u8 *)(param_2 + 4) +
                              (u32)*(u8 *)(param_2 + 5) * 0x100 + (u32)*(u8 *)(param_2 + 6) * 0x10000 +
                              (u32)*(u8 *)(param_2 + 7) * 0x1000000;
    param_1[2] = (u32)*(u8 *)(param_2 + 8) +
                              (u32)*(u8 *)(param_2 + 9) * 0x100 + (u32)*(u8 *)(param_2 + 10) * 0x10000 +
                              (u32)*(u8 *)(param_2 + 0xb) * 0x1000000;
    memcpy(param_1 + 5,(void *)(param_2 + 0xc),0xf);
    param_1[3] = (u32)*(u8 *)(param_2 + 0x1c) + (u32)*(u8 *)(param_2 + 0x1d) * 0x100;
    param_1[4] = (u32)*(u8 *)(param_2 + 0x1e);
}
