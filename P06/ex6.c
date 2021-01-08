#include <stdio.h>
int preencher_vetor(float v[]);
void imprimir_vetor(float v[], int tamanho);

int main()
{
    int i = 0;
    float num, v[15];
    i = preencher_vetor(v);
    imprimir_vetor(v, i);

    return 0;
}

int preencher_vetor(float v[])
{
    float num, min, aux, aux1;
    int i = 0, j;
    do
    {
        printf("Introduza o elemento %d \n", i + 1);
        scanf("%f", &v[i]);
        for (j = 0; j < i; j++)
        {
            if (v[i] <= v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        i++;
        imprimir_vetor(v, i);
    } while (i < 10);
    printf("%d", i);
    return i;
}
void imprimir_vetor(float v[], int tamanho)
{
    int i;
    printf("O vetor lido foi { ");
    for (i = 0; i < tamanho; i++)
    {

        printf("%.2f ", v[i]);
    }
    printf("}\n");
}