#include <stdio.h>
float seno(float x, float tolerancia);
int main()
{
    float x, tole;
    printf("Qual o valor de x? \n"); scanf("%f", &x);
    printf("Qual a tolerancia? \n"); scanf("%f", &tole);
    printf("O seno de %f é %f \n", x, seno(x, tole));


    return 0;
}

float seno(float x, float tolerancia){
    float sen;

    //nao esta acabado porque nao sabia como fazer as contas
    return sen;
}