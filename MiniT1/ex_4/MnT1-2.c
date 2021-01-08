#include<stdio.h>
float converte (float pres, char op);
float pres, total = 0;
char op;
int main(){
    
    while (scanf("%f %c", &pres, &op) == 2)
    {
       converte (pres, op);
    }
    printf("Valor total (atm): %.4f atm\n", total);
    
    return 0;
}

float converte (float pres, char op){
    
     switch (op)
        {
        case 'P':
            printf("%f  %c  %.4f\n", pres, op, pres/101325);
            total += pres/101325;
            break;
        case 'b':
            printf("%f  %c  %.4f\n", pres, op, pres/1.01325);
            total += pres/1.01325;
            break;
        case 'p':
            printf("%f  %c  %.4f\n", pres, op, pres/14.6959487755);
            total += pres/14.6959487755;
            break;
        case 'H':
            printf("%f  %c  %.4f\n", pres, op, pres/760);
            total += pres/760;
            break;    
        default:printf(" %f  %c  Unidade de medida desconhecida\n", pres, op);
            break;
        }
        return 0;
    }
    
