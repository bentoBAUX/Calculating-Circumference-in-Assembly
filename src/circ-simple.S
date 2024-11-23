.intel_syntax noprefix
.global circsimple

.section .rodata
    pi: .double 6.283185307

.section .text
circsimple:
    movsd xmm1, qword ptr [rip + pi]
    mulsd xmm0, xmm1
    ret