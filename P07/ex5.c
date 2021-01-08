#include <stdio.h>
void quociresto(int dividendo, int divisor, int *quociente, int *resto);
int soma(int n);
int par(int n);

int main()
{
    int dividendo, divisor, quociente, resto, n;
    printf("Indique um dividendo um divisor\n");
    scanf("%d %d", &dividendo, &divisor);
    quociresto(dividendo, divisor, &quociente, &resto);
    printf("%d/%d = %d resto %d\n", dividendo, divisor, quociente, resto);
    printf("A soma dos elementos do quociente é %d \n", soma(quociente));
    if (par(resto))
    {
        printf("O resto é par\n");
    }
    else
    {
        printf("O resto é impar\n");
    }

    return 0;
}

void quociresto(int dividendo, int divisor, int *quociente, int *resto)
{
    *quociente = 0;
    while (dividendo >= divisor)
    {
        dividendo -= divisor;
        (*quociente)++;
    }
    *resto = dividendo;
}

int soma(int n)
{
    int soma = 0, t;
    while (n != 0)
    {
        t = n % 10;
        soma += t;
        n = n / 10;
    }

    return soma;
}

int par(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
