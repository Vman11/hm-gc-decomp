// auto/text_800447E8 fn_800447E8 99.5455
extern "C" {

}


extern "C" int fn_800447E8(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 0;
    case 3: return 0;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    case 7: return 1;
    default: return 1;
    }
}
