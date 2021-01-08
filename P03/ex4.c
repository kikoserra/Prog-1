#include<stdio.h>
int main(){
    int num, num1, num3;
    printf("Introduza um número com 3 algarismos:\n");
    scanf("%d", &num);
//o resto da divisao de num por 10 dá-me o valor da casa das unidades
//a divisao de num por 100 dá-me o valor das casa das centenas
    num1 = num % 10;
    num3 = num / 100;
    if (num1 == num3 )
    {
        printf("Este número é capicua!\n");
    }
    else
    {
        printf("Este número não é capicua.\n");
    }
    
    return 0;
}