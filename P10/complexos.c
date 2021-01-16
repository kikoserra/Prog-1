#include<math.h>
#include<stdio.h>
typedef struct
{
    int real, ima;
} complexo;
complexo leComplexo();
complexo leComplexo()
{
    complexo a;
    printf("Valor real e imaginario:\n");scanf("%d %d", &a.real, &a.ima);
    return a;
}
void escreveComplexo(complexo c){
    printf("z = %d + %di\n", c.real, c.ima);
}
complexo somaComplexo(complexo c1, complexo c2){
    complexo soma;;
    soma.real=(c1.real)+(c2.real);
    soma.ima= (c1.ima)+ (c2.ima);
    return soma;
}
double argComplexo(complexo c){
    return sqrt((c.real)*(c.real) + (c.ima)*(c.ima));
}