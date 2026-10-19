// auto/text_8003F700 fn_8003F700 99.2308
extern u8 lbl_80294ED4[];

s32 fn_8003F700(void **obj) {
    return (*(s32 (**)(void *, void *))((u8 *)*obj + 0x30))(obj, lbl_80294ED4);
}
