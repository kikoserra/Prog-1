#include <stdio.h>
void multiEspecial(int n, int v1[], int v2[], int vRet[]);
void preencher_vetor(int v[], int n);
int main()
{
    int tamanho, v1[100], v2[100], vRet[100];

    printf("Quanto elementos pretende armazenar? \n");
    scanf("%d", &tamanho);
    printf("Vetor 1 : \n");
    preencher_vetor(v1, tamanho);
    printf("Vetor 2 : \n");
    preencher_vetor(v2, tamanho);
    multiEspecial(tamanho, v1, v2, vRet);

    return 0;
}

void multiEspecial(int n, int v1[], int v2[], int vRet[])
{
    int i, aux;
    for (i = 0; i < n; i++)
    {
        aux = v2[i];
        v2[i] = v2[n - (i + 1)];
        v2[n - (i + 1)] = aux;
    }
    for (i = 0; i < n; i++)
    {
        vRet[i] = v1[i] * v2[n - (i + 1)];
    }
    printf("{ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vRet[i]);
    }
    printf("}\n");
}
void preencher_vetor(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}