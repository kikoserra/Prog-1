#include<stdio.h>

int main() {
    int a, b;

    printf("Número inteiro 1?  ");
    scanf("%d", &a);
    
    printf("Número inteiro 2?  ");
    scanf("%d", &b);

    if(a % b == 0)
    {
        printf("%d é multiplo de %d\n", a, b);
    }
    else{
        printf("%d não é multiplo de %d\n", a, b);
    }
}