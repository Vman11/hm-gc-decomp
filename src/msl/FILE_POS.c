/* MSL_C FILE_POS.c */
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
extern u32 __fwrite(const void *ptr, u32 size, u32 count, void *file);
extern int _fseek(void *file, s32 offset, int mode);
extern s32 lbl_8035A978;
s32 ftell(void *file);
int __flush_buffer(MslFile *file, u32 *length);
int fseek(void *file, s32 offset, int mode);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int fseek(void *file, s32 offset, int mode) {
    int result;
    __begin_critical_region(2);
    result = _fseek(file, offset, mode);
    __end_critical_region(2);
    return result;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
int _fseek(void *arg0, long offset, int whence) {
    MslFile *file = (MslFile *)arg0;
    u32 position;
    if (file->mode.file_kind != 1 || file->state.error) {
        lbl_8035A978 = 0x28;
        return -1;
    }
    if (file->state.io_state == 1 && __flush_buffer(file, 0)) {
        file->state.error = 1;
        file->buffer_len = 0;
        lbl_8035A978 = 0x28;
        return -1;
    }
    if (whence == 1) {
        whence = 0;
        if ((file->mode.file_kind != 1 && file->mode.file_kind != 2) || file->state.error) {
            lbl_8035A978 = 0x28;
            position = -1;
        } else if (file->state.io_state == 0) {
            position = file->position;
        } else {
            position = file->buffer_position + (file->buffer_ptr - file->buffer);
            if (file->state.io_state >= 3)
                position -= file->state.io_state - 2;
        }
        offset += position;
    }
    if (whence != 2 && file->mode.io_mode != 3 &&
        (file->state.io_state == 2 || file->state.io_state == 3)) {
        if (offset >= file->position || offset < file->buffer_position) {
            file->state.io_state = 0;
        } else {
            file->buffer_ptr = file->buffer + (offset - file->buffer_position);
            file->buffer_len = file->position - offset;
            file->state.io_state = 2;
        }
    } else {
        file->state.io_state = 0;
    }
    if (file->state.io_state == 0) {
        if (file->position_proc && ((int (*)(u32,long *,int,void *))file->position_proc)(file->handle, &offset, whence, file->ref_con)) {
            file->state.error = 1;
            file->buffer_len = 0;
            lbl_8035A978 = 0x28;
            return -1;
        }
        file->state.eof = 0;
        file->position = offset;
        file->buffer_len = 0;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
s32 ftell(void *file) {
    s32 position;
    u32 kind;
    u32 state;

    __begin_critical_region(2);
    kind = (M2C_FIELD(file, u16 *, 0x4) >> 6) & 7;
    if ((kind != 1 && kind != 2) || M2C_FIELD(file, u8 *, 0xA) != 0) {
        position = -1;
        lbl_8035A978 = 0x28;
    } else {
        state = (M2C_FIELD(file, u8 *, 0x8) >> 5) & 7;
        if (state == 0) {
            position = M2C_FIELD(file, s32 *, 0x18);
        } else {
            position = M2C_FIELD(file, s32 *, 0x34) + (M2C_FIELD(file, s32 *, 0x24) - M2C_FIELD(file, s32 *, 0x1C));
            if (state >= 3) {
                position -= state - 2;
            }
        }
    }
    __end_critical_region(2);
    return position;
}
#pragma pop
