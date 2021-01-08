#include <stdio.h>
int main()
{
    int num, dig, vez = 0, aux, t;
    printf("Introduza um numero inteiro: \n"); scanf("%d", &num);
    printf("Introduza o digito: \n");scanf("%d", &dig);
    aux = num;
    while (aux != 0)
    {
        t = aux % 10;
        if (t == dig)
            vez++;
        aux = aux / 10;
    }
    printf("O digito %d aparece %d vezes no número %d\n", dig, vez, num);
    return 0;
}