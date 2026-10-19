// auto/text_802455A0 fn_802455A0 99.6875
extern "C" {

}


extern "C" f32 fn_802455A0(void* arg0) {
    u32 count = *(u32*)((u8*)arg0 + 0xc);
    if (count != 0) {
        if (*(s32*)((u8*)arg0 + 0x10) != 0) {
            return **(f32**)((u8*)arg0 + 0x3c);
        }
        return (*(f32**)((u8*)arg0 + 0x3c))[count - 1];
    }
    return 0.0f;
}
