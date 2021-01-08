#include <stdio.h>
int repeticao(int v[], int n, int i)
{
    int seq = 1, j, max = 0;
    for (j = 1; j < i; j++)
    {
        if (v[j] == n && v[j - 1] == n)
        {
            seq++;
            if (seq > max)
            {
                max = seq;
            }
        }
        else
        {
            seq = 1;
        }
    }
    printf("\n");

    return max;
}
int main()
{
    int v[100], i = 0, n, num;
    while (1)
    {
        printf("Intruduza um numero: \n");
        scanf("%d", &n);
        if (n < 0)
            break;

        v[i] = n;
        i++;
    }
    printf("Número a pesquisar: \n");
    scanf("%d", &num);
    printf("Maior sequência de %d tem tamanho %d\n", num, repeticao(v, num, i));
    return 0;
}