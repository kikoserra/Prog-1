#include <stdio.h>
#define TAMANHO 10
void imprimir_vetor(float v[], int tamanho);
void preencher_vetor(float v[], int tamanho);
float min(float x[]);
float max(float x[]);
float avg(float x[]);

int main()
{
    int tamanho, i;
    float num, v[TAMANHO];

    preencher_vetor(v, TAMANHO);
    printf("Média: %.2f\n", avg(v));
    printf("Máximo: %.1f\n", max(v));
    printf("Mínimo: %.1f\n", min(v));
    imprimir_vetor(v, TAMANHO);

    return 0;
}

void imprimir_vetor(float v[], int tamanho)
{
    int i;
    printf("O vetor lido foi {");
    for (i = 0; i < tamanho; i++)
    {

        printf("%.2f; ", v[i]);
    }
    printf("}\n");
}

void preencher_vetor(float v[], int tamanho)
{
    float num;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Introduza o elemento %d \n", i + 1);
        scanf("%f", &num);
        v[i] = num;
    }
}

float min(float x[])
{
    int i;
    float min;
    for (i = 0; i < TAMANHO; i++)
    {
        if (i == 0)
            min = x[i];
        else if (x[i] < min)
        {
            min = x[i];
        }
    }
    return min;
}

float max(float x[])
{
    int i;
    float max;
    for (i = 0; i < TAMANHO; i++)
    {
        if (i == 0)
            max = x[i];
        else if (x[i] > max)
        {
            max = x[i];
        }
    }
    return max;
}

float avg(float x[])
{
    int i;
    float soma = 0, media;
    for (i = 0; i < TAMANHO; i++)
    {
        soma += x[i];
    }
    return (soma / TAMANHO);
}
