#include <stdio.h>

int converte_codigo_cores(int cor, int pos, float *ret)
{
    float v[12] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 0.1, 0.01};
    if (cor > 9 && (pos == 1 || pos == 2))
    {
        return -1;
    }
    if (pos == 1)
    {
        *ret += cor * 10;
        return 1;
    }
    else if (pos == 2)
    {
        *ret += cor;
        return 1;
    }
    if (pos == 3)
    {
        *ret = *ret * v[cor];
        return 1;
    }
}

int main()
{
    int cor, i;
    float resistor = 0.0;
    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n");
    for (i = 1; i < 4; i++)
    {
        do
        {
            printf("Introduza a cor da banda %d: ", i);
            scanf("%d", &cor);
        } while ((cor < 0) || (cor > 12));

        if (converte_codigo_cores(cor, i, &resistor) == -1)
        {
            printf("Resistencia invalida nessa posição\n");
            i = i - 1;
            continue;
        }
    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor);
}
