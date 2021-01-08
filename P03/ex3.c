#include<stdio.h>
int main(){
    float num;
    printf("Indique um número: \n");
    scanf("%f", &num);

    if(num < -10)
    {
        printf("O número encontra-se no intervalo ]-00, -10[\n");
    }
    else if ( num >= 5 && num < 45)
    {
        printf("O número encontra-se no intervalo [5, 45[\n");
    }
    else if ( num > 120 && num <= 245)
    {
        printf("O número encontra-se no intervalo ]120,245]\n");
    }
    else 
    {
        printf("O número não se encontra nos intervalos.\n");
    }
    return 0;
    }