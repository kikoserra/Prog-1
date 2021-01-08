#include <stdio.h>
int pos(int x, int y, int tamanho);
void leMatriz(int v[], int n);
void imprimeMatriz(int v[], int n);
void produtoEscalar(int matriz[], int N, int escalar);
void multMatrizes(int matriz[], int mult[], int resultado[], int N);

int main()
{
    int n, v[100], escalar, mt[100], resultado[100];
    printf("Qual o tamanho da matriz N x N N<10\n");
    scanf("%d", &n);
    leMatriz(v, n * n);
    imprimeMatriz(v, n);
    printf("Quer multiplicar por que escalar? ");
    scanf("%d", &escalar);
    produtoEscalar(v, n, escalar);
    printf("Matriz a multiplicar (%dx1): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mt[i]);
    }
    multMatrizes(v, mt, resultado, n);
    imprimeMatriz(resultado, n);
    return 0;
}
int pos(int x, int y, int tamanho)
{
    return x + y * tamanho;
}

void leMatriz(int v[], int n)
{
    printf("Dados: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}
void imprimeMatriz(int v[], int n)
{
    printf("Matriz Original \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", v[pos(j, i, n)]);
        }
        printf("\n");
    }
}
void produtoEscalar(int v[], int n, int escalar)
{
    printf("\nMatriz Multiplicada por %d \n\n", escalar);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", escalar * v[pos(j, i, n)]);
        }
        printf("\n");
    }
}
void multMatrizes(int matriz[], int mult[], int resultado[], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            resultado[pos(i, j, N)] = matriz[pos(i, j, N)] * mult[j];
        }
    }
}