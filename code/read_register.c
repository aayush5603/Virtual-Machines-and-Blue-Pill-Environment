#include<stdio.h>


int main(){
    unsigned long result;
    asm("movq %%rbx, %%rax\n\t" : "=r"(result) : "r"(result));
    printf("Value of RBX = %u\n", result);
    return 0;
}
