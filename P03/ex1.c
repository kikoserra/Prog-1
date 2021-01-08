#include<stdio.h>

int main(){
    int number;
    printf("Escreva um número:");
    scanf("%d", &number);

    if (number %2 == 0){
        printf("Este número é par!\n");
    }
    else{
        printf("Este número é impar!\n");
    }
    return 0;
}