#include <stdio.h>

void ret(char c, int lin, int col)
{
    int i, j, d;
    for (i = 0; i < lin; i++)
    {
        if (i == 0 || i == (lin - 1))
        {
            for (j = 0; j < col; j++)
            {
                printf("%c", c);
            }
            printf("\n");
        }
        else
        {
            for (j = 0; j < col; j++)
            {
                if (j == 0 || j == (col - 1))
                {
                    printf("%c", c);
                }
                else
                    printf("_");
            }
            printf("\n");
        }
    }
}

int main()
{
    char c;
    int col, lin;

    printf("Introduza um carater: \n");
    scanf(" %c", &c);
    printf("Introduza o número de linhas: \n");
    scanf("%d", &lin);
    printf("Introduza o número de colunas: \n");
    scanf("%d", &col);
    ret(c, lin, col);

    return 0;
}