#include<stdio.h>
int main() {
    float a, b;
    
    printf("qual e o numero?\n");
    scanf("%f",&a);
    printf("numero com 3 casas decimais = %.3f\n", a);
    printf("parte inteira = %.0f\n", a);

    b =  a - (int)a ;
    printf("parte decimal = %f\n", b);

    
    
    





}