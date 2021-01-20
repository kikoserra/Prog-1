#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXP 1000
#define TSIZE 10
#define NSIZE 50
#define TOP 10

typedef struct
{
    char nome[NSIZE];
    char nomeEquipa[TSIZE];
    int jogos;
    float min, pts;
} jogador;

float mvp(jogador statsJogadores[], int n, jogador *mvPlayer)
{
    float max = 0;
    for (int i = 0; i < n; i++)
    {

        if (statsJogadores[i].pts > max)
        {
            max = statsJogadores[i].pts;
            *(mvPlayer) = statsJogadores[i];
        }
    }

    return max;
}

int gravaEstatisticas(jogador statsJogadores[], int n, char *equipa, char *nomeFicheiro)
{
    int num = 0;
    FILE *f;
    f = fopen(nomeFicheiro, "w");
    for (int i = 0; i < n; i++)
    {
        if (strstr(statsJogadores[i].nomeEquipa, equipa))
        {
            fprintf(f, "%s\t%s %d %.2f %.2f\n", statsJogadores[i].nome, statsJogadores[i].nomeEquipa, statsJogadores[i].jogos, statsJogadores[i].min, statsJogadores[i].pts);
            num++;
        }
    }
    fclose(f);

    return num;
}

void top10Jogadores(jogador statsJogadores[], int n, jogador topJogadores[])
{
    int posi_min = 0, j = 0;
    float min = 300;
    for (int i = 0; i < TOP; i++)
    {
        topJogadores[i] = statsJogadores[i];
        if (topJogadores[i].pts < min)
        {
            min = topJogadores[i].pts;
            posi_min = i;
        }
    }
    for (int i = TOP; i < n; i++)
    {
        if (statsJogadores[i].pts > min)
        {
            topJogadores[posi_min] = statsJogadores[i];
            min = 300;
            for (int l = 0; l < TOP; l++)
            {
                if (topJogadores[l].pts < min)
                {
                    min = topJogadores[l].pts;
                    posi_min = l;
                }
            }
        }
    }
    int pos = 0, imin, i = 0;
    jogador aux;
    while (pos < TOP)
    {
        imin = pos;
        i = pos + 1;
        while (i < TOP)
        {
            //procura maior
            if (topJogadores[i].pts > topJogadores[imin].pts)
                imin = i;
            i++;
        }
        if (imin != pos)
        { //troca elementos
            aux = topJogadores[pos];
            topJogadores[pos] = topJogadores[imin];
            topJogadores[imin] = aux;
        }
        pos++;
    }
}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int lerJogadores(char *filename, jogador statsJogadores[]);

void listarJogadores(jogador statsJogadores[], int n);

void imprimirJogador(jogador pl);

int main()
{
    jogador statsJogadores[MAXP], topJogadores[10], mvPlayer;
    int njogadores;
    float pontos;

    njogadores = lerJogadores("nbaStats.txt", statsJogadores);
    printf("\n*** Jogadores (%d) ***\n", njogadores);
    listarJogadores(statsJogadores, njogadores);
    printf("\n");

    pontos = mvp(statsJogadores, njogadores, &mvPlayer);
    printf("\n*** Most Valuable Player (media de pontos %.1f) ***\n\n", pontos);
    if (pontos)
        imprimirJogador(mvPlayer);
    printf("\n");

    printf("\n*** A gravar jogadores da equipa %s para o ficheiro statsJogadores.txt ***\n", "GSW");
    printf("\nInformacao de %d jogadores gravada com sucesso\n", gravaEstatisticas(statsJogadores, njogadores, "GSW", "statsJogadores.txt"));
    printf("\n");

    top10Jogadores(statsJogadores, njogadores, topJogadores);
    printf("\n*** Top 10 jogadores (media de pontos) ***\n\n");
    listarJogadores(topJogadores, 10);
    printf("\n");

    return 0;
}

int lerJogadores(char *filename, jogador statsJogadores[])
{
    FILE *f;
    int njogadores = 0;
    char name[NSIZE];

    f = fopen(filename, "r");
    if (f == NULL)
        return 0;

    while ((njogadores < MAXP) && (fscanf(f, "%s %s %s %d %f %f",
                                          statsJogadores[njogadores].nome, name, statsJogadores[njogadores].nomeEquipa,
                                          &(statsJogadores[njogadores].jogos), &(statsJogadores[njogadores].min),
                                          &(statsJogadores[njogadores].pts)) != EOF))
    {

        strcat(statsJogadores[njogadores].nome, " ");
        strcat(statsJogadores[njogadores].nome, name);
        njogadores++;
    }

    fclose(f);

    return njogadores;
}

void listarJogadores(jogador statsJogadores[], int n)
{
    int i, j;

    for (i = 0; i < 3 && i < n; i++)
    {
        imprimirJogador(statsJogadores[i]);
    }
    if (n > 3)
    {
        if (n > 6)
            puts("...");
        j = i;
        if (n - 3 > j)
            j = n - 3;
        for (i = j; i < n; i++)
        {
            imprimirJogador(statsJogadores[i]);
        }
    }
}

void imprimirJogador(jogador pl)
{
    printf("%s\t%s %2d ", pl.nome, pl.nomeEquipa, pl.jogos);
    printf("%2.1f %2.1f \n", pl.min, pl.pts);
}
