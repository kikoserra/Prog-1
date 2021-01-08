#include<stdio.h>
int main(){
    int n, resto, inv = 0;

    printf("Escreva um número: \n");
    scanf("%d", &n);

    while (n != 0)
    {
        resto = n % 10;
        inv = (inv * 10) + resto;
        n /= 10;
    }
    printf("O inverso é %d! \n", inv);
    return 0;
}