#include <stdio.h>
#include <string.h>

#define TSIZE 50
#define MAXATLETAS 36
#define DISTMAX 10.0
#define DESCONTO 7.0

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

/* Guarda nomes completos dos atletas no vetor de strings nomes e as suas 
 * pontuacoes na mesma posicao no vetor distancia.
 * Retorna o numero de atletas lidos.
 * Nota: a informacao da origem e’ lida, mas nao guardada. 
 */
int lerAtletas(char nomes[][TSIZE], float distancia[])
{
    int cont = 0;
    char aux[TSIZE], aux_nome[TSIZE];
    for (int i = 0; i < MAXATLETAS; i++)
    {
        if (scanf("%s", aux) != 1)
            break;

        if (strcmp(aux, "Galia") == 0)
        {
            scanf("%s %f", nomes[i], &distancia[i]);
        }
        else
        {
            scanf("%s %s %f", nomes[i], aux_nome, &distancia[i]);
            strcat(nomes[i], " ");
            strcat(nomes[i], aux_nome);
        }
        cont++;
    }

    return cont;
}

/* Identifica quais sao os atletas romanos infratores (>10m) e 
 * penaliza em 7 metros a distancia desses atletas.
 * Retorna numero de correcoes feitas.
 */
int corrigeTabela(char nomes[][TSIZE], float distancia[], int nAtleta)
{
    int n, cont = 0;
    for (int i = 0; i < nAtleta; i++)
    {
        n = strlen(nomes[i]);
        if (strcmp(&(nomes[i][n - 2]), "ix") && distancia[i] > DISTMAX)
        {
            distancia[i] -= DESCONTO;
            cont++;
        }
    }

    return cont;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/

void imprimePontuacoes(float distancias[], int n);

int main()
{
    char nomes[MAXATLETAS][TSIZE];
    float distancias[MAXATLETAS];
    int nAtletas, nCorrigidos;

    nAtletas = lerAtletas(nomes, distancias);
    printf("Numero de atletas lidos: %d\n", nAtletas);

    nCorrigidos = corrigeTabela(nomes, distancias, nAtletas);
    printf("Numero de valores corrigidos: %d\n", nCorrigidos);
    printf("Vetor corrigido:\n");
    imprimePontuacoes(distancias, nAtletas);

    return 0;
}

void imprimePontuacoes(float distancias[], int n)
{
    int i = 0;
    for (; i < n; i++)
    {
        if ((2 * i + 1) == MAXATLETAS)
            printf("\n");
        printf("%2.1f ", distancias[i]);
    }
    printf("\n");
}
