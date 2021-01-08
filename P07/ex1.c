#include <stdio.h>
int *valormax(int *v1, int *v2)
{

    if (*v1 > *v2)
        return v1;
    else
        return v2;
}
int main()
{
    int v1, v2;
    int* w;
    printf("Introduza os dois valores\n");
    scanf("%d%d", &v1, &v1);
    w = valormax(&v1, &v2);
    printf("O endereço do valor maior é : %p \n", w);
    printf("Valor do maior: %d\n", *w);

}