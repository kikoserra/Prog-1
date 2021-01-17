#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TMAX 100
typedef struct
{
    char nome[30];
    char marca[30];
    char modelo[30];
    float preco;
    int disponiveis;
} artigo;
artigo leArtigos(/*artigo armazem[], char *f*/);
int main()
{
 
    //FILE *f = fopen("artigos.txt", "r");
    for (int i = 0; i < 100; i++)
    {
        leArtigos(/*armazem, f*/);
    }
   // fclose(f);
    return 0;
}

artigo leArtigos(/*artigo armazem[], char *f*/)
{
    artigo armazem/*[TMAX]*/;
    char nome[30];
    char marca[30];
    char modelo[30];

    int i = 0;
/*     printf("Nome: ");
    fgets(armazem->nome, 30, stdin);
    armazem->nome[strlen(armazem->nome)-1]='\0';

    printf("Marca: ");
    fgets(armazem->marca, 30, stdin);
    armazem->marca[strlen(armazem->marca)-1]='\0';

    printf("Modelo: ");
    fgets(armazem->modelo, 30, stdin);
    armazem->modelo[strlen(armazem->modelo)-1]='\0';

    printf("Preço:");
    scanf("%f", armazem->preco);

    printf("Disponibilidade:");
    scanf("%d", armazem->disponiveis);
 */
    printf("Nome: ");
    scanf("%s", armazem.nome);
    if(armazem.nome !=""){

        printf("Marca: ");
        scanf("%s", armazem.marca);

        printf("Modelo: ");
        scanf("%s", armazem.modelo);

        printf("Preço:");
        scanf("%f", &armazem.preco);

        printf("Disponibilidade:");
        scanf("%d", &armazem.disponiveis);
        return armazem;
    }
    return armazem;
}