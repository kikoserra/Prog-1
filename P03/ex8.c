#include<stdio.h>
int main(){
    int x, y;
    printf("Quais são as coordenadas?:\n");
    scanf("%d %d", &x, &y);
    if(x < 0 && y < 0)
    {
        printf("O pornto está no 3º quadrante.\n");
    }
    else if(x < 0 && y > 0)
    {
        printf("O pornto está no 4º quadrante.\n");
    }
    else if(x > 0 && y > 0)
    {
        printf("O pornto está no 1º quadrante.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("O pornto está no 2º quadrante.\n");
    }
    return 0;
}
