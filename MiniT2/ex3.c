#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXT 10
#define TSIZE 12
#define NSIZE 50

/* Guarda nomes das equipas no vetor de strings names e o total de 
 * pontos conquistados de cada equipa na mesma posição no vetor 
 * totalPontos. Retorna o número de equipas lidas, sem repetições.
 * Nota: os nomes dos jogadores são lidos, mas não são guardados. 
 * */
int lerEquipas(char nomes[][TSIZE], int totalPontos[])
{
    char aux[3][NSIZE] = {0};
    int n, a = 1;
    for (int i = 0; i < MAXT; i++)
    {
        scanf("%s %s %s %d", aux[0], aux[1], nomes[i], &totalPontos[i]);
        printf("%s\n", nomes[i]);
        while (scanf("%s", aux[0])==1)
         {
            scanf("%s %s %d", aux[1], aux[2], &n);  
            if (strstr(aux[2], nomes[i]))
            {
                totalPontos[i] += n;break;
            }
        }
        printf("%s merda\n", aux[2]);
        //          //
        //nao da certo 
       //           //
    
    }
    return 10;
}

/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n)
{
    int max = 0, posi_max = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = pontos[i];
            posi_max = i;
        }
        if (pontos[i] > max)
        {
            max = pontos[i];
            posi_max = i;
        }
    }
    return posi_max;
}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int main()
{
    int nequipas, mequipa;
    char equipas[MAXT][TSIZE] = {0};
    int pontosEquipas[MAXT] = {0};

    nequipas = lerEquipas(equipas, pontosEquipas);
    printf("Total de equipas: %d\n", nequipas);

    mequipa = melhorPontuacao(pontosEquipas, nequipas);
    printf("Equipa com maior pontuacao: %s (%d pontos)\n", equipas[mequipa], pontosEquipas[mequipa]);

    return 0;
}
