#include <stdio.h>
int compacta(char orig[], int N, char dst[]);
void preencher_vetor(char orig[], int tamanho);

int main()
{
    int i, j=0;
    char orig[100], dst[100];
    int tamanho;
    preencher_vetor(orig, tamanho);
    i=compacta(orig, tamanho, &dst);
    while (j<i)
    {
        printf("%c ", dst[j]);
        j++;
    }
    

    return 0;
}
int compacta(char orig[], int N, char dst[])
{
    int i = 0, j = 0;
    while (i < N)
    {
        if (orig[i] != orig[i + 1] && orig[i] != '.')
        {
            dst[j] = orig[i];
        }
        i++;
        j++;
    }

    return j;
}
void preencher_vetor(char orig[], int tamanho)
{
    char cha;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Introduza o elemento %d \n", i + 1);
        scanf(" %c", &cha);
        if(cha=='.'){
            break;
        }
        orig[i] = cha;
    }
}