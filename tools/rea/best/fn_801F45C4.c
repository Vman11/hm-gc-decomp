// auto/text_801F45C4 fn_801F45C4 95.4167
extern char lbl_802A5684[];
void fn_80060568();

void fn_801F45C4(s32 param_1, u32 param_2) {
    if ((param_2 == 0) || (4 < param_2)) {
        fn_80060568((void *)lbl_802A5684,0,0,0); /* "Jeg:  Vertical Sampling Frequency Outside the Range 1-4" */
    }
    *(u32 *)(param_1 + 8) = param_2;
}
