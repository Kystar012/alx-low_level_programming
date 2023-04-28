;Description:64-bit program in assembly that prints
;Hello, Holberton, followed by a new line.

extern printf

section.data
    string db "Hello, Holberton", 10, 0
    frmt db "s", 10, 0

section .text
    global main

main:
;Save base pointer and set up stack frame.

    push rbp
    mov rbp, rsp
;Call printf with message and format arguments

    mov rdi, frmt
    mov rsi, string
    xor rax, rax
    call printf

;Restore base pointer and return

    pop rbp
    xor rax, rax
    ret
