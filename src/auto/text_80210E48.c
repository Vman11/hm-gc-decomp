/* Functions from 0x80210E48 to 0x80210F20, found by decomp-toolkit. */
#include "common.h"

const char *fn_80210E48(u32 n) {
    switch (n) {
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
    case 19:
    default: return "<unspecified error>";
    }
}
