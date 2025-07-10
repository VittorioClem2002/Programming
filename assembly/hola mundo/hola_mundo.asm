     section .data
         mensaje db "Hola Mundo", 0xa ; 0xa es el salto de línea
         longitud equ $-mensaje

     section .text
         global _start

     _start:
         ; sys_write (syscall 1)
         mov rax, 1          ; Syscall number for sys_write
         mov rdi, 1          ; File descriptor 1 = stdout
         mov rsi, mensaje    ; Pointer to the string
         mov rdx, longitud   ; String length
         syscall

         ; sys_exit (syscall 60)
         mov rax, 60         ; Syscall number for sys_exit
         xor rdi, rdi        ; Exit code 0
         syscall