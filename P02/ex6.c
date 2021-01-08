#include<stdio.h>
int main() {

    int num, bi, de = 0, base = 1, rem;
    printf("Qual o valor em binario? ");
    scanf("%d", &num);

    bi = num;
    while(num > 0){

        rem = num % 10;
        num = num / 10;
        de = de + rem * base;
        base = base * 2;

    }
    
    
    
    printf("O valor em binario é %d:\n", bi);
    printf("O valor em decimal é %d\n", de);    
    printf("O valor em Octal é %o\n", de);    
    printf("O valor em Hexadecimal é %X\n", de);    

}