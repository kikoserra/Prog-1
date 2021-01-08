#include<stdio.h>
#include<math.h>

 int main (){

    int a, b, c, y, z, w;
    float x1, x2;
    printf("Qual é o coeficiente de segundo grau (diferente de 0)?: ");
    scanf("%d", &a);
    printf("Qual é o coeficiente de primeiro grau?: ");
    scanf("%d", &b);
    printf("Qual é o termo independente?: ");
    scanf("%d", &c);

    y = b*b;
    z = 4*a*c;
    w = y-z;
    

    if (w < 0) {
        printf("Equação impossível!\n");
    }   
    else{   
        x1 = ((-b + sqrt(y-z))/(2*a));
        x2 = ((-b - sqrt(y-z))/(2*a));
        printf("X = %f e %f\n" ,x1, x2);
    }
    return (0);
}