/* MetroTRK exception vector table (0x800034AC..0x800053E0), emitted as raw words. */
.include "macros.inc"
.file "__exception.s"

.section .init, "ax"
.balign 4

.global gTRKInterruptVectorTable
gTRKInterruptVectorTable:
	.4byte 0x4D657472 /* .4byte 0x4D657472  invalid */
	.4byte 0x6F776572 /* xoris r23, r27, 0x6572 */
	.4byte 0x6B732054 /* xori r19, r27, 0x2054 */
	.4byte 0x61726765 /* ori r18, r11, 0x6765 */
	.4byte 0x74205265 /* andis. r0, r1, 0x5265 */
	.4byte 0x73696465 /* andi. r9, r27, 0x6465 */
	.4byte 0x6E74204B /* xoris r20, r19, 0x204b */
	.4byte 0x65726E65 /* oris r18, r11, 0x6e65 */
	.4byte 0x6C20666F /* xoris r0, r1, 0x666f */
	.4byte 0x7220506F /* andi. r0, r17, 0x506f */
	.4byte 0x77657250 /* andis. r5, r27, 0x7250 */
	.4byte 0x43000000 /* .4byte 0x43000000  illegal: bc 24, lt, 0x0 */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x48001E34 /* b fn_800053E0 */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C0017AC /* icbi r0, r2 */
	.4byte 0x7C5302A6 /* mfdar r2 */
	.4byte 0x7C0013AC /* dcbi r0, r2 */
	.4byte 0x7C5142A6 /* mfsprg r2, 1 */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600200 /* li r3, 0x200 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600300 /* li r3, 0x300 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600400 /* li r3, 0x400 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600500 /* li r3, 0x500 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600600 /* li r3, 0x600 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600700 /* li r3, 0x700 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600800 /* li r3, 0x800 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600900 /* li r3, 0x900 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600C00 /* li r3, 0xc00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600D00 /* li r3, 0xd00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600E00 /* li r3, 0xe00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x48000054 /* b .L_80004400 */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600F20 /* li r3, 0xf20 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38600F00 /* li r3, 0xf00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C400026 /* mfcr r2 */
	.4byte 0x7C5243A6 /* mtsprg 2, r2 */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x74420002 /* andis. r2, r2, 0x2 */
	.4byte 0x4182001C /* beq .L_800044DC */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x6C420002 /* xoris r2, r2, 0x2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C400124 /* mtmsr r2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C5242A6 /* mfsprg r2, 2 */
	.4byte 0x7C4FF120 /* mtcrf 255, r2 */
	.4byte 0x7C5142A6 /* mfsprg r2, 1 */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601000 /* li r3, 0x1000 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C400026 /* mfcr r2 */
	.4byte 0x7C5243A6 /* mtsprg 2, r2 */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x74420002 /* andis. r2, r2, 0x2 */
	.4byte 0x4182001C /* beq .L_800045DC */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x6C420002 /* xoris r2, r2, 0x2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C400124 /* mtmsr r2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C5242A6 /* mfsprg r2, 2 */
	.4byte 0x7C4FF120 /* mtcrf 255, r2 */
	.4byte 0x7C5142A6 /* mfsprg r2, 1 */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601100 /* li r3, 0x1100 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C400026 /* mfcr r2 */
	.4byte 0x7C5243A6 /* mtsprg 2, r2 */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x74420002 /* andis. r2, r2, 0x2 */
	.4byte 0x4182001C /* beq .L_800046DC */
	.4byte 0x7C4000A6 /* mfmsr r2 */
	.4byte 0x6C420002 /* xoris r2, r2, 0x2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C400124 /* mtmsr r2 */
	.4byte 0x7C0004AC /* sync */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C5242A6 /* mfsprg r2, 2 */
	.4byte 0x7C4FF120 /* mtcrf 255, r2 */
	.4byte 0x7C5142A6 /* mfsprg r2, 1 */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601200 /* li r3, 0x1200 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601300 /* li r3, 0x1300 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601400 /* li r3, 0x1400 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601600 /* li r3, 0x1600 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601700 /* li r3, 0x1700 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601C00 /* li r3, 0x1c00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601D00 /* li r3, 0x1d00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601E00 /* li r3, 0x1e00 */
	.4byte 0x4C000064 /* rfi */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x00000000 /* .4byte 0x00000000  invalid */
	.4byte 0x7C5143A6 /* mtsprg 1, r2 */
	.4byte 0x7C7243A6 /* mtsprg 2, r3 */
	.4byte 0x7C9343A6 /* mtsprg 3, r4 */
	.4byte 0x7C5A02A6 /* mfsrr0 r2 */
	.4byte 0x7C9B02A6 /* mfsrr1 r4 */
	.4byte 0x7C6000A6 /* mfmsr r3 */
	.4byte 0x60630030 /* ori r3, r3, 0x30 */
	.4byte 0x7C7B03A6 /* mtsrr1 r3 */
	.4byte 0x3C60800D /* lis r3, 0x800d */
	.4byte 0x6063F51C /* ori r3, r3, 0xf51c */
	.4byte 0x7C7A03A6 /* mtsrr0 r3 */
	.4byte 0x38601F00 /* li r3, 0x1f00 */
	.4byte 0x4C000064 /* rfi */
.global gTRKInterruptVectorTableEnd
gTRKInterruptVectorTableEnd:
