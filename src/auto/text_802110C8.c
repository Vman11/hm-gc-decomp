// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#pragma readonly_strings on
extern const char lbl_80365848[5];
s32 fn_800E8F6C(char *, const char *, ...);
s32 fn_800E904C(char *, const char *, void *);
void fn_80060568(char *, s32, s32, s32);

static const char *errstr_802110C8(u32 code) {
    switch (code) {
    case 0: return "no error";
    case 1: return "file or directory not found";
    case 2: return "error opening the specified file";
    case 3: return "general error";
    case 4: return "media not formatted";
    case 5: return "media format incorrect";
    case 6: return "buffer supplied was insufficient";
    case 7: return "asynchronous operation is pending";
    case 8: return "file pointer is out of bounds";
    case 9: return "access violation";
    case 10: return "write was only partially completed";
    case 11: return "memory card error (is the card attached?)";
    case 12: return "memory card is not attached";
    case 13: return "memory card file system has no save game specified";
    case 14: return "device is out of space";
    case 15: return "bad file descriptor";
    case 16: return "media not ready";
    case 17: return "media is corrupt";
    case 18: return "media is invalid";
    case 20: return "feature is unimplemented";
    case 21: return "feature is unsupported";
    default: return "<unspecified error>";
    }
}

void fn_802110C8(u32 code, const char *msg, void *args) {
    char buf[528];
    char *p;
    if (msg == 0) {
        msg = "<No Message>";
    }
    p = buf + fn_800E8F6C(buf, lbl_80365848, errstr_802110C8(code));
    fn_800E904C(p, msg, args);
    fn_80060568(buf, 0, 0, 0);
}
