#include <stdio.h>

#define N_PILOTOS 60

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int ler_voos(float horas[])
{
    int piloto, conta = 0;
    float hora;
    while (scanf("%d %f", &piloto, &horas[piloto])==1)
    {
        /* if (piloto > 60 || piloto < 1)
        {
            continue;
        }
        else */
        {
            conta++;
        }
    }

    return conta;
}

/****************************************************/

float processa_voos(float horas[], int pilotos[], int *nPilotos)
{
    int soma=0, i, total=0, j, l=0;
    float media;
    for (i = 0; i < 100; i++)
    {
        if (horas[i]>0)
        {
            soma += horas[i];
            total++;
        }
        else
        {
            continue;
        }
        printf("%f\n",horas[i]);
    }
    media = (float) soma/total;
    for (j = 0; j < total; j++)
    {
        if (horas[j]<media)
        {
            pilotos[l]=j+1;
            nPilotos++;
        }
        
    }
    
    return media;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/

int main()
{
    float voos[N_PILOTOS + 1] = {0}, media;
    int pilotos[N_PILOTOS], nRes = 0, total, i;

    /****************************************************/
    total = ler_voos(voos);
    printf("\nNumero total de pilotos com voo registado: %d\n", total);
    /****************************************************/
    media = processa_voos(voos, pilotos, &nRes);
    printf("\nMedia de horas de voo: %.1f\n", media);
    printf("Pilotos com voos abaixo da media (%d):\n", nRes);
    for (i = 0; i < nRes; i++)
        printf("%d ", pilotos[i]);
    printf("\n\n");
    /****************************************************/

    return 0;
}