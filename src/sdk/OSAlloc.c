#define __GEKKO__ 1

#define DLInsert fn_800B4294
#define OSAllocFromHeap fn_800B4340
#define OSFreeToHeap fn_800B443C
#define OSSetCurrentHeap fn_800B44B8
#define OSInitAlloc fn_800B44C8
#define OSCreateHeap fn_800B4538
#define OSGetCurrentThread fn_800B9790
#define OSResumeThread fn_800B9ED0
#define OSSleepThread fn_800BA2C8
#define OSSuspendThread fn_800BA158
#define OSWakeupThread fn_800BA3B4
#define OSYieldThread fn_800B9CD8
#define PPCMfwpar fn_800B2F4C
#define PPCMthid0 fn_800B2E88
#define PPCSync fn_800B2EA8
#define __GetImageTileCount fn_800D7D5C
#define __GXAbort fn_800D62CC
#define GXBegin fn_800D6B8C
#define __GXCalculateVLim fn_800D57B0
#define GXCallDisplayList fn_800D9C58
#define __GXCleanGPFifo fn_800D50D0
#define GXClearBoundingBox fn_800D7774
#define GXClearGPMetric fn_800DAA70
#define GXClearVtxDesc fn_800D58D4
#define GXCopyDisp fn_800D7480
#define GXCopyTex fn_800D75E8
#define GXCPInterruptHandler fn_800D4AA8
#define GXDrawDone fn_800D6700
#define GXEnableTexOffsets fn_800D6D64
#define __GXFifoLink fn_800D503C
#define __GXFifoReadDisable fn_800D5018
#define __GXFifoReadEnable fn_800D4FF4
#define GXFinishInterruptHandler fn_800D6A18
#define GXFlush fn_800D6270
#define GXGetCPUFifo fn_800D51D0
#define GXGetLightAttnK fn_800D77D8
#define GXGetLightColor fn_800D7A00
#define GXGetLightDir fn_800D79CC
#define GXGetLightPos fn_800D7994
#define GXGetTexObjFmt fn_800D8318
#define GXGetTexObjMipMap fn_800D8320
#define GXInitFifoLimits fn_800D4CB8
#define GXInitFifoPtrs fn_800D4C48
#define GXInitLightAttn fn_800D77AC
#define GXInitLightAttnK fn_800D77C8
#define GXInitLightColor fn_800D79F4
#define GXInitLightDir fn_800D79B0
#define GXInitLightPos fn_800D7984
#define GXInitTexObjCI fn_800D8070
#define GXInitTexObjFilter fn_800D8240
#define GXInitTexObj fn_800D7E24
#define GXInitTexObjLOD fn_800D80B8
#define GXInitTexObjMaxLOD fn_800D8278
#define GXInitTexObjMinLOD fn_800D82C8
#define GXInitTexObjTlut fn_800D8238
#define GXInitTexObjWrapMode fn_800D821C
#define GXInitTlutObj fn_800D8508
#define GXInvalidateTexAll fn_800D8704
#define GXInvalidateVtxCache fn_800D5F10
#define GXLoadLightObjImm fn_800D7A0C
#define GXLoadNrmMtxImm fn_800D9E48
#define GXLoadPosMtxImm fn_800D9DF8
#define GXLoadTexMtxImm fn_800D9ECC
#define GXLoadTexObj fn_800D84B4
#define GXLoadTexObjPreLoaded fn_800D8338
#define GXLoadTlut fn_800D8540
#define GXPeekARGB fn_800D68A4
#define GXPokeAlphaMode fn_800D6780
#define GXPokeAlphaRead fn_800D6794
#define GXPokeAlphaUpdate fn_800D67B4
#define GXPokeARGB fn_800D68C8
#define GXPokeBlendMode fn_800D67CC
#define GXPokeColorUpdate fn_800D6830
#define GXPokeDither fn_800D686C
#define GXPokeDstAlpha fn_800D6848
#define GXPokeZ fn_800D68E8
#define GXPokeZMode fn_800D6884
#define GXReadDrawSync fn_800D665C
#define __GXSendFlushPrim fn_800D6C5C
#define GXSetAlphaCompare fn_800D937C
#define GXSetAlphaUpdate fn_800D99D8
#define GXSetBlendMode fn_800D9958
#define GXSetBreakPtCallback fn_800D4F64
#define GXSetClipMode fn_800DA17C
#define GXSetColorUpdate fn_800D99AC
#define GXSetCoPlanar fn_800D6DF0
#define GXSetCopyClamp fn_800D70C8
#define GXSetCopyClear fn_800D71EC
#define GXSetCopyFilter fn_800D7264
#define GXSetCurrentMtx fn_800D9E98
#define __GXSetDirtyState fn_800D6B0C
#define GXSetDispCopyDst fn_800D6F40
#define GXSetDispCopyFrame2Field fn_800D70A4
#define GXSetDispCopyGamma fn_800D746C
#define GXSetDispCopySrc fn_800D6E48
#define GXSetDispCopyYScale fn_800D7120
#define GXSetDither fn_800D9B40
#define GXSetDrawDoneCallback fn_800D69D4
#define GXSetDrawDone fn_800D6668
#define GXSetDrawSyncCallback fn_800D6908
#define GXSetDrawSync fn_800D65A8
#define GXSetDstAlpha fn_800D9B6C
#define GXSetFieldMask fn_800D9BA8
#define GXSetFieldMode fn_800D9BE0
#define GXSetFogRangeAdj fn_800D9834
#define __GXSetGenMode fn_800D6E24
#define GXSetGPMetric fn_800DA228
#define GXSetIndTexCoordScale fn_800D8D50
#define GXSetLineWidth fn_800D6CE4
#define __GXSetMatrixIndex fn_800DA1A4
#define GXSetNumChans fn_800D7C68
#define GXSetNumIndStages fn_800D8E94
#define GXSetNumTevStages fn_800D95E8
#define GXSetNumTexGens fn_800D61A0
#define GXSetPixelFmt fn_800D9A6C
#define GXSetPointSize fn_800D6D24
#define GXSetProjection fn_800D9CC8
#define GXSetProjectionv fn_800D9D6C
#define GXSetScissorBoxOffset fn_800DA13C
#define GXSetScissor fn_800DA0C4
#define __GXSetSUTexRegs fn_800D8814
#define GXSetTevAlphaIn fn_800D8FF8
#define GXSetTevAlphaOp fn_800D90A4
#define GXSetTevColorIn fn_800D8FB4
#define GXSetTevColorOp fn_800D903C
#define GXSetTevDirect fn_800D8EB8
#define GXSetTevIndirect fn_800D8CE4
#define GXSetTevKAlphaSel fn_800D9258
#define GXSetTevKColorSel fn_800D91FC
#define GXSetTevOp fn_800D8F28
#define GXSetTevOrder fn_800D944C
#define GXSetTevSwapMode fn_800D92B4
#define GXSetTevSwapModeTable fn_800D92FC
#define GXSetTexCoordGen2 fn_800D5F20
#define GXSetTexCopyDst fn_800D6F74
#define GXSetTexCopySrc fn_800D6EC4
#define GXSetTexRegionCallback fn_800D874C
#define GXSetTlutRegionCallback fn_800D8760
#define __GXSetVCD fn_800D56F4
#define GXSetViewport fn_800DA010
#define GXSetVtxAttrFmt fn_800D590C
#define GXSetVtxAttrFmtv fn_800D5B68
#define GXSetVtxDesc fn_800D5488
#define GXSetZCompLoc fn_800D9A38
#define GXSetZMode fn_800D9A04
#define GXSetZTexture fn_800D93C0
#define GXTokenInterruptHandler fn_800D694C
#define __GXUpdateBPMask fn_800D8F00
#define __GXWriteFifoIntEnable fn_800D5070
#define __GXWriteFifoIntReset fn_800D50A0
#define __SetSURegs fn_800D8774
#define GXRedirectWriteGatherPipe fn_800D51E0
#define GXRestoreWriteGatherPipe fn_800D52E8
#define BreakPointCB lbl_8035A934
#define CPGPLinked lbl_8035A92C
#define CPUFifo lbl_8035A920
#define GPFifo lbl_8035A924
#define GXOverflowSuspendInProgress lbl_8035A930
#define __GXCurrentThread lbl_8035A928
#define __GXOverflowCount lbl_8035A938
#define DrawDone lbl_8035A948
#define DrawDoneCB lbl_8035A944
#define FinishQueue lbl_8035A94C
#define GXGetGPFifo fn_800D51D8
#define TokenCB lbl_8035A940
#define GX2HWFiltConv lbl_80359668
#define GXTexImage0Ids lbl_80359640
#define GXTexImage1Ids lbl_80359648
#define GXTexImage2Ids lbl_80359650
#define GXTexImage3Ids lbl_80359658
#define GXTexMode0Ids lbl_80359630
#define GXTexMode1Ids lbl_80359638
#define GXTexTlutIds lbl_80359660
#define cosf cosf
#define GXEurgb60Hz480IntDf lbl_802DFDC4
#define GXMpal480IntDf lbl_802DFB6C
#define GXNtsc480IntDf lbl_802DF950
#define GXPal528IntDf lbl_802DFD10
#define GXSetChanAmbColor fn_800D7A88
#define GXSetChanCtrl fn_800D7CA4
#define GXSetChanMatColor fn_800D7B78
#define GXSetCullMode fn_800D6DAC
#define GXSetFog fn_800D9610
#define calledOnce lbl_8035A918
#define peCount lbl_8035A908
#define time lbl_8035A910
#define AlarmQueue AlarmQueue_8035A560
#define __OSTimeToSystemTime fn_800BA5E8
#define EXIImmEx fn_800F2120
#define Scb Scb_803078A0
#define OSGetCurrentContext fn_800B4F6C
#define OSGetStackPointer fn_800B50D0
#define OSSaveContext fn_800B4F78
#define Reschedule Reschedule_8035A5F0
#define RunQueue RunQueue_803078F8
#define RunQueueBits RunQueueBits_8035A5E8
#define RunQueueHint RunQueueHint_8035A5EC
#define SwitchThreadCallback SwitchThreadCallback_80359558
#define __OSUnlockAllMutex fn_800B7D84
#define __OSFpscrEnableBits lbl_80359540
#define InterruptHandlerTable InterruptHandlerTable_8035A590
#define InterruptPrioTable lbl_802D8A40
#define LeapYearDays lbl_802D8AB0
#define YearDays lbl_802D8A80
#define Down lbl_8035A5CC
#define HoldDown lbl_8035A5E0
#define HoldUp lbl_8035A5D8
#define LastState lbl_8035A5D0
#define ResetCallback lbl_8035A5C8
#define ArenaEnd lbl_8035A574
#define ArenaStart lbl_8035A570
#define HeapArray lbl_8035A568
#define NumHeaps lbl_8035A56C
#define __OSCurrHeap lbl_80359530
#include <dolphin.h>
#include <dolphin/os.h>

#define ALIGNMENT 32

#define InRange(cell, arenaStart, arenaEnd) \
    ((u32) arenaStart <= (u32) cell) && ((u32) cell < (u32) arenaEnd)

#define HEADERSIZE 32u
#define MINOBJSIZE 64u

#ifdef DEBUG
#define ENABLE_HEAPDESC
#endif

typedef struct Cell Cell;
typedef struct HeapDesc HeapDesc;
struct Cell {
    Cell* prev;
    Cell* next;
    s32 size;
#ifdef ENABLE_HEAPDESC
    HeapDesc* hd;
    s32 requested;
#endif
};

struct HeapDesc {
    s32 size;
    Cell* free;
    Cell* allocated;
#ifdef ENABLE_HEAPDESC
    u32 paddingBytes;
    u32 headerBytes;
    u32 payloadBytes;
#endif
};

volatile int __OSCurrHeap = -1;

static HeapDesc* HeapArray;
static int NumHeaps;
static void* ArenaStart;
static void* ArenaEnd;

// prototypes
static inline Cell* DLAddFront(Cell* list, Cell* cell);
static inline Cell* DLLookup(Cell* list, Cell* cell);
static inline Cell* DLExtract(Cell* list, Cell* cell);
static Cell* DLInsert(Cell* list, Cell* cell);
static inline int DLOverlap(Cell* list, void* start, void* end);
static inline s32 DLSize(Cell* list);

static inline Cell* DLAddFront(Cell* list, Cell* cell) {
    cell->next = list;
    cell->prev = 0;
    if (list) {
        list->prev = cell;
    }
    return cell;
}

static inline Cell* DLLookup(Cell* list, Cell* cell) {
    for(; list; list = list->next) {
        if (list == cell) {
            return list;
        }
    }
    return NULL;
}

static inline Cell* DLExtract(Cell* list, Cell* cell) {
    if (cell->next) {
        cell->next->prev = cell->prev;
    }
    if (cell->prev == NULL) {
        return cell->next;
    }
    cell->prev->next = cell->next;
    return list;
}

static Cell* DLInsert(Cell* list, Cell* cell) {
    Cell* prev;
    Cell* next;

    for(next = list, prev = NULL; next != 0; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;
    if (next) {
        next->prev = cell;
        if ((u8*)cell + cell->size == (u8*)next) {
            cell->size += next->size;
            next = next->next;
            cell->next = next;
            if (next) {
                next->prev = cell;
            }
        }
    }
    if (prev) {
        prev->next = cell;
        if ((u8*)prev + prev->size == (u8*)cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next) {
                next->prev = prev;
            }
        }
        return list;
    }
    return cell;
}

static inline int DLOverlap(Cell* list, void* start, void* end) {
    Cell* cell = list;

    while(cell) {
        if (((start <= cell) 
            && (cell < end)) 
            || ((start < (void* ) ((u8*)cell + cell->size)) 
            && ((void* ) ((u8*)cell + cell->size) <= end))) {
            return 1;
        }
        cell = cell->next;
    }
    return 0;
}

static inline s32 DLSize(Cell* list) {
    Cell* cell;
    s32 size;

    size = 0;
    cell = list;

    while(cell) {
        size += cell->size;
        cell = cell->next;
    }

    return size;
}

void* OSAllocFromHeap(int heap, u32 size) {
    HeapDesc* hd;
    Cell* cell;
    Cell* newCell;
    s32 leftoverSize;
    s32 requested;

    requested = size;
    ASSERTMSGLINE(337, HeapArray, "OSAllocFromHeap(): heap is not initialized.");
    ASSERTMSGLINE(338, (s32)size > 0, "OSAllocFromHeap(): invalid size.");
    ASSERTMSGLINE(339, heap >= 0 && heap < NumHeaps, "OSAllocFromHeap(): invalid heap handle.");
    ASSERTMSGLINE(340, HeapArray[heap].size >= 0, "OSAllocFromHeap(): invalid heap handle.");

    hd = &HeapArray[heap];
    size += 0x20;
    size = (size + 0x1F) & 0xFFFFFFE0;

    for(cell = hd->free; cell != NULL; cell = cell->next) {
        if ((signed)size <= (signed)cell->size) {
            break;
        }
    }

    if (cell == NULL) {
#if DEBUG
        OSReport("OSAllocFromHeap: Warning- failed to allocate %d bytes\n", size);
#endif
        return NULL;
    }
    ASSERTMSGLINE(364, !((s32)cell & 0x1F), "OSAllocFromHeap(): heap is broken.");
    ASSERTMSGLINE(365, cell->hd == NULL, "OSAllocFromHeap(): heap is broken.");

    leftoverSize = cell->size - size;
    if (leftoverSize < 0x40U) {
        hd->free = DLExtract(hd->free, cell);
    } else {
        cell->size = size;
        newCell = (void*)((u8*)cell + size);
        newCell->size = leftoverSize;
#ifdef ENABLE_HEAPDESC
        newCell->hd = 0;
#endif
        newCell->prev = cell->prev;
        newCell->next = cell->next;
        if (newCell->next != NULL) {
            newCell->next->prev = newCell; 
        }
        if (newCell->prev != NULL) {
            newCell->prev->next = newCell; 
        } else {
            ASSERTMSGLINE(394, hd->free == cell, "OSAllocFromHeap(): heap is broken.");
            hd->free = newCell;
        }
    }

    hd->allocated = DLAddFront(hd->allocated, cell);
#ifdef ENABLE_HEAPDESC
    cell->hd = hd;
    cell->requested = requested;
    hd->headerBytes += 0x20;
    hd->paddingBytes += (cell->size - (requested + 0x20));
    hd->payloadBytes += requested;
#endif
    return (u8*)cell + 0x20;
}

void OSFreeToHeap(int heap, void* ptr) {
    HeapDesc* hd;
    Cell* cell;

    ASSERTMSGLINE(577, HeapArray, "OSFreeToHeap(): heap is not initialized.");
    ASSERTMSGLINE(579, ((u32)ArenaStart+0x20) <= (u32)ptr && (u32)ptr < (u32)ArenaEnd, "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE(580, OFFSET(ptr, ALIGNMENT) == 0, "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE(581, HeapArray[heap].size >= 0, "OSFreeToHeap(): invalid heap handle.");
    cell = (void*)((u32)ptr-0x20);
    hd = &HeapArray[heap];
    ASSERTMSGLINE(586, cell->hd == hd, "OSFreeToHeap(): invalid pointer.");
    ASSERTMSGLINE(587, DLLookup(hd->allocated, cell), "OSFreeToHeap(): invalid pointer.");
#ifdef ENABLE_HEAPDESC
    cell->hd = 0;
    hd->headerBytes -= 0x20;
    hd->paddingBytes -= (cell->size - (cell->requested + 0x20));
    hd->payloadBytes -= cell->requested;
#endif
    hd->allocated = DLExtract(hd->allocated, cell);
    hd->free = DLInsert(hd->free, cell);
}

int OSSetCurrentHeap(int heap) {
    int prev;

    ASSERTMSGLINE(619, HeapArray, "OSSetCurrentHeap(): heap is not initialized.");
    ASSERTMSGLINE(620, (heap >= 0) && (heap < NumHeaps), "OSSetCurrentHeap(): invalid heap handle.");
    ASSERTMSGLINE(621, HeapArray[heap].size >= 0, "OSSetCurrentHeap(): invalid heap handle.");
    prev = __OSCurrHeap;
    __OSCurrHeap = heap;
    return prev;
}

void* OSInitAlloc(void* arenaStart, void* arenaEnd, int maxHeaps) {
    u32 arraySize;
    int i;
    HeapDesc* hd;

    ASSERTMSGLINE(647, maxHeaps > 0, "OSInitAlloc(): invalid number of heaps.");
    ASSERTMSGLINE(649, (u32)arenaStart < (u32)arenaEnd, "OSInitAlloc(): invalid range.");
    ASSERTMSGLINE(652, maxHeaps <= (((u32)arenaEnd - (u32)arenaStart) / 24U), "OSInitAlloc(): too small range.");
    arraySize = maxHeaps * sizeof(HeapDesc);
    HeapArray = arenaStart;
    NumHeaps = maxHeaps;

    for(i = 0; i < NumHeaps; i++) {
        hd = &HeapArray[i];
        hd->size = -1;
        hd->free = hd->allocated = 0;
#ifdef ENABLE_HEAPDESC
        hd->paddingBytes = hd->headerBytes = hd->payloadBytes = 0;
#endif
    }
    __OSCurrHeap = -1;
    arenaStart = (void*) ((u32)((char*)HeapArray + arraySize));
    arenaStart = (void*) (((u32)arenaStart + 0x1F) & 0xFFFFFFE0);
    ArenaStart = arenaStart;
    ArenaEnd = (void*) ((u32)arenaEnd & 0xFFFFFFE0);
    ASSERTMSGLINE(680, ((u32)ArenaEnd - (u32)ArenaStart) >= 0x40U, "OSInitAlloc(): too small range.");
    return arenaStart;
}

int OSCreateHeap(void* start, void* end) {
    int heap;
    HeapDesc* hd;
    Cell* cell;

    ASSERTMSGLINE(705, HeapArray, "OSCreateHeap(): heap is not initialized.");
    ASSERTMSGLINE(706, (u32)start < (u32)end, "OSCreateHeap(): invalid range.");

    start = (void*)(((u32)start + 0x1FU) & ~((32)-1));
    end = (void*)(((u32)end) & ~((32)-1));

    ASSERTMSGLINE(709, (u32)start < (u32)end, "OSCreateHeap(): invalid range.");
    ASSERTMSGLINE(711, (u32)ArenaStart <= (u32)start && (u32)end <= (u32)ArenaEnd, "OSCreateHeap(): invalid range.");
    ASSERTMSGLINE(713, ((u32)end - (u32)start) >= 0x40U, "OSCreateHeap(): too small range.");

#if DEBUG
    for(heap = 0; heap < NumHeaps; heap++) {
        if (HeapArray[heap].size >= 0) {
            ASSERTMSGLINE(723, !DLOverlap(HeapArray[heap].free, start, end), "OSCreateHeap(): invalid range.");
            ASSERTMSGLINE(725, !DLOverlap(HeapArray[heap].allocated, start, end), "OSCreateHeap(): invalid range.");
        }
    }
#endif

    for(heap = 0; heap < NumHeaps; heap++) {
        hd = &HeapArray[heap];
        if (hd->size < 0) {
            hd->size = (u32)end - (u32)start;
            cell = start;
            cell->prev = 0;
            cell->next = 0;
            cell->size = hd->size;
#ifdef ENABLE_HEAPDESC
            cell->hd = 0;
#endif
            hd->free = cell;
            hd->allocated = 0;
#ifdef ENABLE_HEAPDESC
            hd->paddingBytes = hd->headerBytes = hd->payloadBytes = 0;
#endif
            return heap;
        }
    }
#if DEBUG
    OSReport("OSCreateHeap: Warning - Failed to find free heap descriptor.");
#endif
    return -1;
}

