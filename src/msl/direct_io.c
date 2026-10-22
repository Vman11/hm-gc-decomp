/* MSL_C direct_io.c */
#include "common.h"
void __begin_critical_region(int region);
void __end_critical_region(int region);
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
int __flush_buffer(MslFile *file, u32 *length);
void __prep_buffer(void *arg0);
int fseek(void *file, s32 offset, int mode);
void* __memrchr(const void* src, int val, unsigned long n);
void __stdio_atexit(void);
u32 fwrite(const void *ptr, u32 size, u32 count, void *file);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
u32 __fwrite(const void *ptr, u32 size, u32 count, void *arg) {
    int fwide(void *, int);
    int fseek(MslFile *, int, int);
    void __stdio_atexit(void);
    void __prep_buffer(void *);
    int __flush_buffer(MslFile *, u32 *);
    void *__memrchr(const void *, int, u32);
    void *memcpy(void *, const void *, u32);
    int buffered;
    const u8 *src;
    u32 bytes;
    s32 written;
    u8 *newline;
    u32 amount;
    int binary_buffer;
    MslFile *file = arg;

    if (!fwide(file, 0)) fwide(file, -1);
    bytes = size * count;
    if (!bytes || file->state.error || !file->mode.file_kind) return 0;
    if (file->mode.file_kind == 2) __stdio_atexit();
    buffered = 1;
    binary_buffer = !file->mode.binary_io || file->mode.buffer_mode == 2;
    if (!binary_buffer && file->mode.buffer_mode != 1)
        buffered = 0;
    if (file->state.io_state == 0 && (file->mode.io_mode & 2)) {
        if ((file->mode.io_mode & 4) && fseek(file, 0, 2)) return 0;
        file->state.io_state = 1;
        __prep_buffer(file);
    }
    if (file->state.io_state != 1) {
        file->state.error = 1;
        file->buffer_len = 0;
        return 0;
    }
    src = ptr;
    written = 0;
    if (bytes && (file->buffer_ptr != file->buffer || buffered)) {
        file->buffer_len = file->buffer_size - (file->buffer_ptr - file->buffer);
        do {
            amount = file->buffer_len;
            newline = 0;
            if (amount > bytes) amount = bytes;
            if (file->mode.buffer_mode == 1 && amount) {
                newline = __memrchr(src, 10, amount);
                if (newline) amount = newline + 1 - src;
            }
            if (amount) {
                memcpy(file->buffer_ptr, src, amount);
                src += amount;
                written += amount;
                bytes -= amount;
                file->buffer_ptr += amount;
                file->buffer_len -= amount;
            }
            if ((!file->buffer_len || newline || !file->mode.buffer_mode) && __flush_buffer(file, 0)) {
                file->state.error = 1;
                file->buffer_len = 0;
                bytes = 0;
                break;
            }
        } while (bytes && buffered);
    }
    if (bytes && !buffered) {
        u8 *saved_buffer = file->buffer;
        u32 saved_size = file->buffer_size;
        file->buffer = (u8 *)src;
        file->buffer_size = bytes;
        file->buffer_ptr = (u8 *)src + bytes;
        if (__flush_buffer(file, &amount)) {
            file->state.error = 1;
            file->buffer_len = 0;
        }
        written += amount;
        file->buffer = saved_buffer;
        file->buffer_size = saved_size;
        __prep_buffer(file);
        file->buffer_len = 0;
    }
    if (file->mode.buffer_mode != 2) file->buffer_len = 0;
    return (written + size - 1) / size;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
u32 fwrite(const void *ptr, u32 size, u32 count, void *file) {
    u32 result;
    __begin_critical_region(2);
    result = __fwrite(ptr, size, count, file);
    __end_critical_region(2);
    return result;
}
#pragma pop
