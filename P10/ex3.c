#include <stdio.h>
#include <stdlib.h>
#define TMAX 100
typedef struct
{
    char nome[30];
    char marca[30];
    char modelo[30];
    float preco;
    int disponiveis;
} artigo;
int leArtigos(artigo armazem[], char *f);
int main()
{
    artigo armazem[TMAX];
    FILE *f = fopen("artigos.txt", "r");
    for (int i = 0; i < 100; i++)
    {
        leArtigos(&armazem[i], f);
    }

    return 0;
}

int leArtigos(artigo armazem[], char *f)
{
    int i = 0;
    printf("Nome: ");
    fgets(armazem->nome, 30, stdin);
    armazem->nome[strlen(armazem->nome) - 1] = '\0';

    printf("Marca: ");
    fgets(armazem->marca, 30, stdin);
    armazem->marca[strlen(armazem->marca) - 1] = '\0';

    printf("Modelo: ");
    fgets(armazem->modelo, 30, stdin);
    armazem->modelo[strlen(armazem->modelo) - 1] = '\0';

    printf("Preco: ");
    fscanf(f, "%f", armazem[i].preco);

    printf("Disponibilidade: ");
    fscanf(f, "%d", armazem[i].disponiveis);

    return i;
}