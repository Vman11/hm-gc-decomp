// auto/text_8009DC2C fn_8009DC34 99.5161
extern "C" {

}


extern "C" s32 fn_8009DC34(void* arg0, s32 arg1) {
    void** data = *(void***)((char*)arg0 + 0x98);
    if (data != NULL) {
        return ((s32*)data[3])[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 0;
    case 2: return 1;
    case 3: return 0;
    case 4: return 1;
    case 5: return 0;
    case 6: return 1;
    default: return 1;
    }
}
