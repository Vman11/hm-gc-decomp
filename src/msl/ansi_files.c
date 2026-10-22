/* MSL_C ansi_files.c */
#include "common.h"
void __begin_critical_region(int region);
void __end_critical_region(int region);
int fflush(void *file);
int fclose(void *file);
extern u8 __files[];
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
extern void __close_all(void);
void free(void *ptr);
int __flush_all(void);

int __flush_all(void) {
    int result = 0;
    MslFile *file = (MslFile *)__files;

    while (file) {
        if (file->mode.file_kind && fflush(file)) {
            result = -1;
        }
        file = file->next_file;
    }
    return result;
}

#pragma push
#pragma dont_inline on
void __close_all(void) {
    MslFile *p = (MslFile *)__files;
    MslFile *plast;

    __begin_critical_region(2);
    while (p) {
        if (p->mode.file_kind != 0) {
            fclose(p);
        }
        plast = p;
        p = p->next_file;
        if (plast->is_dynamically_allocated) {
            free(plast);
        } else {
            plast->mode.file_kind = 3;
            if (p && p->is_dynamically_allocated) {
                plast->next_file = NULL;
            }
        }
    }
    __end_critical_region(2);
}
#pragma pop
