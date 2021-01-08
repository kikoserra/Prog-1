#include<stdio.h>

int main(){

    float r, p, a;
    printf("Qual é o raio?  ");
    scanf("%f", &r);

    p = 2 * 3.1416 * r;
    a = 3.1416 * r * r;
    
    printf("O perímetro é = %f\n", p);

    printf("A área é = %f\n", a);

}