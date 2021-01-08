#include <stdio.h>
#define N 4
void ordena(float notas[][2], int n);
void lernot(float notas[][2], int n);
int main()
{
    float notas[N][2];
    lernot(notas, N);
    ordena(notas, N);
    printf("Número\t Média \n");
    for (int i = 0; i < N; i++)
    {
        printf("%.0f\t %.1f\n", notas[i][0], notas[i][1]);
    }

    return 0;
}
void ordena(float notas[][2], int n)
{
    float temp[2];
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (notas[i][1] < notas[j][1])
            {
                temp[0] = notas[i][0];
                temp[1] = notas[i][1];
                notas[i][0] = notas[j][0];
                notas[i][1] = notas[j][1];
                notas[j][0] = temp[0];
                notas[j][1] = temp[1];
            }
        }
    }
}
void lernot(float notas[][2], int n)
{
    int n1, n2;
    for (int i = 0; i < n; i++)
    {
        printf("Dados aluno %d", i + 1);
        scanf("%f %d %d", &notas[i][0], &n1, &n2);
        notas[i][1] = (float)((n1 + n2) / 2);
    }
}