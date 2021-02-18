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
    int nEquipas = 0, i, nova = 1;
    int pontos;
    char equipa[TSIZE], n1[TSIZE], n2[TSIZE];

    while (nEquipas < MAXT && scanf("%s %s %s %d", n1, n2, equipa, &pontos) == 4)
    {
        for (i = 0; i < nEquipas; i++){
            if (strcmp(nomes[i], equipa) == 0)
            {
                totalPontos[i] += pontos;
                nova = 0;
            }

            if (nova)
            {
                strcpy(nomes[nEquipas], equipa);
                totalPontos[nEquipas] = pontos;
                nEquipas++;
            }
            nova = 1;
        }   
    }

    return nEquipas;
}

/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n)
{
    int max = 0, posi_max = 0;
    for (int i = 0; i < n; i++)
    {
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
