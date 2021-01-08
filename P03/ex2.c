#include<stdio.h>
int main(){
    double alt;
    printf("Qual a altura da pessoa? \n");
    scanf("%lf", &alt);
    alt += 0.001;
    if(alt > 1.9)
    {
        printf("Essa pessoa é altíssima\n");
    }
    else if(alt <= 1.9 && alt >= 1.75)
    {
        printf("Essa pessoa é alta\n");
    }
    else if(alt < 1.75 && alt >= 1.6)
    {
        printf("Essa pessoa é mediana\n");
    }
    else if(alt < 1.6 && alt >= 1.3)
    {
        printf("Essa pessoa é baixa\n");
    }
    else 
    {
        printf("Essa pessoa é baixíssima\n");
    }
    return 0;   
}