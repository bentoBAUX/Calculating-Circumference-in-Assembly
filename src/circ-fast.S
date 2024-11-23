.intel_syntax noprefix
.global circfast
.text
circfast:
    mov rax, 0x401921FB54442D18
    movq xmm1, rax
    mulsd xmm0, xmm1
    ret