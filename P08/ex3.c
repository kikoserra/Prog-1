#include <stdio.h>
int main()
{
    int multv[4][3];
    float media;
    for (int i = 0; i < 4; i++)
    {
        printf("Dados do aluno %d \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &multv[i][j]);
        }
    }
    printf("Número\t Nota 1\t Nota 2\t Média \n");
    for (int i = 0; i < 4; i++)
    {
        media=(multv[i][1]+multv[i][2])/2;
        for (int j = 0; j < 3; j++)
        {
            
            printf("%d\t" ,multv[i][j]);
        }
        printf("%.1f\n", media);
    }

    return 0;
}