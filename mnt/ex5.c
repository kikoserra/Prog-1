#include <stdio.h>

int main()
{
    int total_cafe = 0, total_leite = 0, quantidade, pref, i = 0;
    float lucro = 0;
    char bebida;
    do
    {
        scanf(" %c %d", &bebida, &quantidade);
        if (bebida == 'C')
        {
            total_cafe += quantidade;
            lucro += 0.65 * quantidade;
        }
        else if (bebida == 'L')
        {
            total_leite += quantidade;
            lucro += 0.50 * quantidade;
        }
        i++;

    } while (bebida != 'F' && i < 100);
    pref = total_cafe - total_leite;
    printf("O lucro total foi de %.2f euros\n", lucro);
    printf("Foram pedidos %d cafés e %d leites.\n", total_cafe, total_leite);
    if (pref > 0)
    {
        printf("A bebida preferida é café\n");
    }
    else
    {
        printf("A bebida preferida é leite\n");
    }
}