#include <stdio.h>
#define TMAX 100
typedef struct
{
    int real, ima;
} complexo;
void escreveComplexo(complexo c);
complexo somaComplexo(complexo c1, complexo c2);

complexo leComplexo();
int main()
{
    complexo c1, c2, soma;
    c1 = leComplexo();
    c2 = leComplexo();
    escreveComplexo(c1);
    escreveComplexo(c2);
    soma = somaComplexo(c1, c2);

    return 0;
}


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