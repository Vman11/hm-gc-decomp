// auto/text_8020EBB0 fn_8020EBB0 95.5172
extern char lbl_802A6D00[];
void fn_80060568();

void fn_8020EBB0(s32 param_1, u32 param_2, u32 param_3) {
    if (param_2 >= *(u32 *)(param_1 + 0xc)) {
        fn_80060568((void *)lbl_802A6D00,0,0,0); /* "AtIoDirectoryListing::vSetDirectoryAttributes:  offset out of bounds!\n" */
    }
    *(u32 *)(*(s32 *)(param_1 + 4) + param_2 * 0x1c + 4) = param_3;
}
