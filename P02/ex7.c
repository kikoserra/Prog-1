#include<stdio.h>
int main(){
    float r1, r2, rt0, rt;
    printf("Valor R1 (em omh): \n");
    scanf("%f", &r1);
    printf("Valor R2 (em omh): \n");
    scanf("%f", &r2);

    //calculo 1/rt = 1/r1 + 1/r2 ...
    //calculo rt
    rt0 = ((float)1 / r1) + ((float)1 / r2);
    rt = (float)1 / rt0;
    printf("Valor da resistencia equivalente em série: %.4f\n", r1 + r2);
    printf("Valor da resistencia equivalente em paralelo: %.4f\n", rt);


}