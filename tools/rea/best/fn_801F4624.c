// auto/text_801F4624 fn_801F4624 95.4167
extern char lbl_802A56BC[];
void fn_80060568();

void fn_801F4624(s32 param_1, u32 param_2) {
    if ((param_2 == 0) || (4 < param_2)) {
        fn_80060568((void *)lbl_802A56BC,0,0,0); /* "Jpeg: Sampling Frequency Outside the Range 1-4" */
    }
    *(u32 *)(param_1 + 4) = param_2;
}
