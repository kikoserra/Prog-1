#include<stdio.h>
int main(){
    int mes, ano;
    printf("Insira uma data (mês ano):\n");
    scanf("%d %d", &mes, &ano);
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("O mês %d de %d tem 31 dias.\n", mes, ano);
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        printf("O mês %d de %d tem 30 dias.\n", mes, ano);
    }
    else{
        if(ano % 4 == 0 && ano % 100 !=0)
        {
            printf("O mês %d de %d tem 29 dias.\n", mes, ano);
        }
        else
        {
            printf("O mês %d de %d tem 28 dias.\n", mes, ano);
        }
    }
    return 0;
}