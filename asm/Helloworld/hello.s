; Sample program to print out "Hello world!"
; To assemble and run: 
; nasm -felf64 hello.s && ld hello.o && ./a.out
; or
; nasm -felf64 hello.s && ld hello.o -o a.exe && ./a.exe

section	.text
   global _start     ;must be declared for linker (ld)
	
_start:	            ;tells linker entry point
   mov	edx,len     ;message length
   mov	ecx,msg     ;message to write
   mov	ebx,1       ;file descriptor (stdout)
   mov	eax,4       ;system call number (sys_write)
   int	0x80        ;call kernel
	
   mov	eax,1       ;system call number (sys_exit)
   int	0x80        ;call kernel

section	.data
msg db 'Hello world!', 0xa  ;string to be printed
len equ $ - msg     ;length of the string