// auto/text_80250E80 fn_80250E80 99.2000
extern s32 lbl_8035B818;
void fn_80272A48();

void fn_80250E80(s32 param_1) {
    fn_80272A48(lbl_8035B818);
    *(u8 *)(param_1 + 0x11c) = *(u8 *)(param_1 + 0x11c) & 0xfb;
}
