#include<stdio.h>
int main(){
    int ci, j, n, a;
    float ca ,t, d, novo;
    printf("Qual o capital inicial?\n");
    scanf("%d", &ci);
    printf("Qual a taxa de juro dada pelo banco?\n");
    scanf("%d", &j);
    printf("Durante quantos anos?\n");
    scanf("%d", &n);
    t = (1 + ((float)j / 100));
    ca = ci * t;
    a = n; 
    novo=1;
    
    if(n >= 1)
    {
        while (n >=1)
        {
            novo=novo*t;
            n = n - 1;
        }
        ca = ci * novo;
        printf("O capital acumulado ao fim de %d anos é de %.3f euros.\n", a, ca);
    }
    else if (n == 1)
        {
            printf("O capital acumulado ao fim de 1 ano é de %.3f euros.\n", ca);
        }
    
    else if (n == 0){
        printf("O capital acumulado ao fim de 0 anos é de %d euros. \n", ci);
    }
    return 0;    
}
