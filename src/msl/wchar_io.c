/* MSL_C wchar_io.c */
#include "common.h"
typedef struct MslFileMode {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} MslFileMode;
typedef struct MslFile {
    u32 handle;
    MslFileMode mode;
    struct {
        unsigned char io_state : 3;
        unsigned char free_buffer : 1;
        unsigned char eof;
        unsigned char error;
        unsigned char pad;
    } state;
    u8 is_dynamically_allocated;
    u8 pad[0x18 - 0xD];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
    u32 buffer_position;
    void *position_proc;
    void *read_proc;
    int (*write_proc)(u32, u8 *, u32 *, void *);
    void *close_proc;
    void *ref_con;
    struct MslFile *next_file;
} MslFile;
int fwide(void *, int);
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);


#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fwide(void *file, int mode) {
    MslFile *stream = (MslFile *)file;
    int orientation;
    int result;

    if (stream == NULL || stream->mode.file_kind == 0) {
        return 0;
    }
    orientation = stream->mode.file_orientation;
    switch (orientation) {
    case 0:
        if (mode > 0) {
            stream->mode.file_orientation = 2;
        } else if (mode < 0) {
            stream->mode.file_orientation = 1;
        }
        result = mode;
        break;
    case 2:
        result = 1;
        break;
    case 1:
        result = -1;
        break;
    }
    return result;
}
#pragma pop
