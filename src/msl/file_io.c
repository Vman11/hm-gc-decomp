/* MSL_C file_io.c */
#include "common.h"
int fflush(void *file);
int fclose(void *file);
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
s32 ftell(void *file);
void free(void *ptr);
int __flush_all(void);
int __flush_buffer(MslFile *file, u32 *length);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fflush(void *arg0) {
    MslFile *file = (MslFile *)arg0;
    u32 position;

    if (file == NULL) {
        return __flush_all();
    }
    if (file->state.error || file->mode.file_kind == 0) {
        return -1;
    }
    if (file->mode.io_mode == 1) {
        return 0;
    }
    if (file->state.io_state >= 3) {
        file->state.io_state = 2;
    }
    if (file->state.io_state == 2) {
        file->buffer_len = 0;
    }
    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }
    if (file->mode.file_kind != 1) {
        position = 0;
    } else {
        position = ftell(file);
    }
    if (__flush_buffer(file, 0)) {
        file->state.error = 1;
        file->buffer_len = 0;
        return -1;
    }
    file->state.io_state = 0;
    file->position = position;
    file->buffer_len = 0;
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fclose(void *arg0) {
    MslFile *file = (MslFile *)arg0;
    int flush_result;
    int close_result;
    u32 position;

    if (file == NULL) {
        return -1;
    }
    if (file->mode.file_kind == 0) {
        return 0;
    }
    if (file == NULL) {
        flush_result = __flush_all();
    } else if (file->state.error || file->mode.file_kind == 0) {
        flush_result = -1;
    } else if (file->mode.io_mode == 1) {
        flush_result = 0;
    } else {
        if (file->state.io_state >= 3) {
            file->state.io_state = 2;
        }
        if (file->state.io_state == 2) {
            file->buffer_len = 0;
        }
        flush_result = 0;
        if (file->state.io_state != 1) {
            file->state.io_state = 0;
        } else {
            if (file->mode.file_kind != 1) {
                position = 0;
            } else {
                position = ftell(file);
            }
            if (__flush_buffer(file, 0)) {
                file->state.error = 1;
                file->buffer_len = 0;
                flush_result = -1;
            } else {
                file->state.io_state = 0;
                file->position = position;
                file->buffer_len = 0;
            }
        }
    }
    close_result = ((int (*)(u32))file->close_proc)(file->handle);
    file->mode.file_kind = 0;
    file->handle = 0;
    if (file->state.free_buffer) {
        free(file->buffer);
    }
    return (flush_result || close_result) ? -1 : 0;
}
#pragma pop
