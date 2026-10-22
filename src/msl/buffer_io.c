/* MSL_C buffer_io.c */
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
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
int __flush_buffer(MslFile *file, u32 *length);
void __prep_buffer(void *arg0);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int __flush_buffer(MslFile *file, u32 *length) {
    u32 count;
    int result;
    count = file->buffer_ptr - file->buffer;
    if (count != 0) {
        file->buffer_len = count;
        result = file->write_proc(file->handle, file->buffer, &file->buffer_len, file->ref_con);
        if (length != NULL) {
            *length = file->buffer_len;
        }
        if (result != 0) {
            return result;
        }
        file->position += file->buffer_len;
    }
    file->buffer_ptr = file->buffer;
    file->buffer_len = file->buffer_size;
    file->buffer_len -= file->position & file->buffer_alignment;
    file->buffer_position = file->position;
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void __prep_buffer(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - (M2C_FIELD(arg0, s32 *, 0x18) & M2C_FIELD(arg0, s32 *, 0x2C)));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
}
#pragma pop
