nasm -felf64 fib.asm && gcc fib.o && ./a.out

file is called "fib"

(if core dump, use "-no-pie" to compile your code)
nasm -felf64 fib.asm && gcc -no-pie fib.o && ./a.out

