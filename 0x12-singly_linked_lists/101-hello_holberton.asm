;Description:64-bit program in assembly that prints
;Hello, Holberton, followed by a new line.

extern printf

section.data
    string: db "Hello, Holderton", 0Ah, 0
    format: db "s", 0Ah, 0

section .text
    global main

main:

    push rbp
   
    mov rdi, format
    mov rdi, string
    mov rax, 0
    call printf

    pop rbp

    mov rax, 0
    ret
