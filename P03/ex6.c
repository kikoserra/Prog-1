#include<stdio.h>
int main(){
    int op1, op2, res;
    char ub, sin;
    printf("Escolha a operação:\n");
    scanf("%c", &sin);

    if(sin == '+')
    {
        printf("Introduza o operando:\n");
        scanf("%d", &op1);
        printf("Introduza o outro operando:\n");
        scanf("%d", &op2);
        res = op1 + op2;
        printf("O resultado é igual a: %d\n", res);
    }
    else if (sin == '*')
    {
         printf("Introduza o operando:\n");
        scanf("%d", &op1);
        printf("Introduza o outro operando:\n");
        scanf("%d", &op2);
        res = op1 * op2;
        printf("O resultado é igual a: %d\n", res);
    }
    else if (sin == '/')
    {
         printf("Introduza o operando:\n");
        scanf("%d", &op1);
        printf("Introduza o outro operando:\n");
        scanf("%d", &op2);
        res = op1 / op2;
        printf("O resultado é igual a: %d\n", res);
    }
    else if (sin == '%')
    {
         printf("Introduza o operando:\n");
        scanf("%d", &op1);
        printf("Introduza o outro operando:\n");
        scanf("%d", &op2);
        res = op1 % op2;
        printf("O resto da divisão de %d por %d é igual a: %d\n", op1, op2, res);
    }
    else 
    {
        printf("Operador unurário (1) ou binário (2)?:\n");
        scanf(" %c", &ub);
        ub = ub;
        if(ub == 'b')
        {
            printf("Introduza o operando:\n");
            scanf("%d", &op1);
            res = 0 - op1;
            printf("O resultado é igual a: %d\n", res);
        }
        else
        {
            printf("Introduza o operando:\n");
            scanf("%d", &op1);
            printf("Introduza o outro operando:\n");
            scanf("%d", &op2);
            res = op1 - op2;
            printf("O resultado é igual a: %d\n", res);
        }
        

    }
    return 0;
}