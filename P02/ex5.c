#include<stdio.h>
int main(){


    int a, n ,s, m, h, d;
    printf("Quantos segundos? \n" );
    scanf("%d", &n);
    a = n;
    d = n / (3600 *24);
    n = n % (24 * 3600); 
    h = n / 3600; 
  
    n %= 3600; 
    m = n / 60 ; 
  
    n %= 60; 
    s = n; 
    printf("%d correspondem a %d dias, %d horas, %d minutos, %d segundos\n", a, d, h, m, s);
}