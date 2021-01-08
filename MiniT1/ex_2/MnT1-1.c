#include<stdio.h>
int main(){
    int id, i, mes;
    float omax, omin, amp, ampmax;
    for (i = 1; i < 49; i++)
    {
        scanf("%d%f%f", &mes, &omax, &omin);
        amp = omax - omin;
        if(i == 0){
            ampmax = amp;
            id = i;
        }
        else if(amp > ampmax){
            ampmax = amp;
            id = i;
        }
    }

    printf("Maior amplitude de ondulacao: %f \n", ampmax);

    if(id >=1 && id <=12){
        printf("Registada no mês %d do ano 2014\n", id);
    }
    else if(id >=13 && id <=24){
        printf("Registada no mês %d do ano 2015\n", id - 12);
    }
    else if(id >=25 && id <=36){
        printf("Registada no mês %d do ano 2016\n", id - 24);
    }
     else if(id >=37 && id <=48){
        printf("Registada no mês %d do ano 2014\n", id - 36);
    }

    
    return 0;

}