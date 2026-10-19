// auto/text_8004DCC0 fn_8004DCC0 99.5161
extern "C" {

}


extern "C" s32 fn_8004DCC0(void* arg0, s32 arg1) {
    void** data = *(void***)((char*)arg0 + 0x98);
    if (data != NULL) {
        return ((s32*)data[3])[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    case 3: return 0;
    case 4: return 0;
    case 5: return 0;
    case 6: return 0;
    default: return 1;
    }
}
