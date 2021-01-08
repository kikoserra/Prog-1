#include<stdio.h>
int main(){

float c, f, k, a;

printf("Qual a temperatura? \n");
scanf("%f", &c);

k = c + 273.15;
f = (c * ((float)9 / 5)) + 32; 

printf("%.1f C = %.2f K\n", c, k);
printf("%.1f C = %.2f F\n", c, f);



}