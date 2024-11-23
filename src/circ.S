.intel_syntax noprefix
.global circ

.section .rodata
pi: 
	.double 6.283185307

.section .text
circ:
    movsd xmm1, 0x401921fb54442eea
    mulsd xmm0, xmm1
    ret