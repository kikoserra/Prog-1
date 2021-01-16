#include <stdio.h>
#include<math.h>
#include"complexos.h"
#define TMAX 100
complexo leComplexo();
int main()
{
    complexo c1, c2, soma;
    c1 = leComplexo();
    c2 = leComplexo();
    escreveComplexo(c1);
    escreveComplexo(c2);
    soma = somaComplexo(c1, c2);
    printf("A distancia à origem é %lf\n", argComplexo(c1));
    printf("A distancia à origem é %lf\n", argComplexo(c2));
    return 0;
}