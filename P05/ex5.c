#include<stdio.h>
float f(float a, float x){
    return a * x * x;
}
int main(){
    float a, inf, sup, inc;
    printf("Qual o valor de a?\n"); scanf("%f", &a);
    printf("Qual o intervalo?\n"); scanf("%f %f", &inf, &sup);
    printf("Qual o incremento?\n"); scanf("%f", &inc);
    

    while(inf<=sup){
        printf("f(%.1f) = %.1f \n", inf, f(a, inf));
        inf += inc;
    }
}

