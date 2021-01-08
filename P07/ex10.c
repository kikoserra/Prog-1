#include <stdio.h>
float seno(float x, float tolerancia, int *termos);
int main()
{
    float x, tole;
    int termos;
    printf("Qual o valor de x? \n"); scanf("%f", &x);
    printf("Qual a tolerancia? \n"); scanf("%f", &tole);
    printf("O seno de %f é %f (%d termos da série)\n", x, seno(x, tole, &termos), termos);


    return 0;
}

float seno(float x, float tolerancia, int *termos){
    float sen;

    //nao esta acabado porque nao sabia como fazer as contas
    //e falta fazer as alteracoes requeridas no enunciado
    return sen;
}