#include <stdio.h>
#include <math.h>
void preencher_vetor(float v[], int tamanho);
void sum_v(float x[], int n, float vRet[]);
float range_v(float x[], int n);
void diff_v(float x[], int n, float vRet[]);

int main()
{
    int tamanho, i;
    float num, v[15], vRet[100];
    while (1)
    {
        printf("Quanto elementos pretende armazenar? \n");
        scanf("%d", &tamanho);
        if (tamanho <= 15)
        {
            break;
        }
        else
        {
            printf("O número de elementos está limitado a 15!\n");
        }
    }
    preencher_vetor(v, tamanho);
    sum_v(v, tamanho, vRet);
    printf("Gama : %.1f\n", range_v(v, tamanho));
    diff_v(v, tamanho, vRet);

    return 0;
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

void sum_v(float x[], int n, float vRet[])
{
    int i, q = 0, j;
    for (i = 0; i < n; i += 2)
    {
        vRet[q] = x[i] + x[i + 1];
        q++;
    }
    printf("Vetor soma {");
    for (j = 0; j < q; j++)
    {
        printf(" %.2f", vRet[j]);
    }
    printf(" }\n");
}
float range_v(float x[], int n){
    int i;
    float max, min;
    for (i = 0; i < n; i++)
    {
       if(i==0){
           max = x[i];
           min = x[i];
       }
       else if(x[i]> max) max = x[i];
       if(x[i]< min) min = x[i];
    }
    return max - min;
}
void diff_v(float x[], int n, float vRet[]){
    int i, q = 0, j;
    float dif1, dif2;
    for (i = 0; i < n; i += 2)
    {
        vRet[q] = sqrt(x[i] * x[i + 1]);
        q++;
    }
    q = 0;
    printf("Vetor desvio Max par {");
    for (i = 0; i < n; i += 2)
    {
        dif1 = sqrt((vRet[q] - x[i])* (vRet[q] - x[i]));
        dif2 = sqrt((vRet[q] - x[i+1])* (vRet[q] - x[i+1]));
        if ( dif1 > dif2)
            vRet[q] = dif1;
        else
        {
            vRet[q] = dif2;
        }
        printf(" %.1f", vRet[q]);
        
        q++;
    }
    printf(" }\n");

}