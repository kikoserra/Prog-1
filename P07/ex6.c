#include <stdio.h>
int main(){
    int var1 = 5;
    char var2 = 'a';
    int *ptr1 = &var1;
    char *ptr2 = &var2;
    *ptr2 = 'b';
    printf("var1 tem o endereco %p e o valor %d\n", ptr1, *ptr1);
    printf("var2 tem o endereco %p e o valor %d\n", ptr2, *ptr2);
    printf("char ocupa %lu byte, *char ocupa %lu bytes, int ocupa %lu bytes, *int ocupa %lu bytes \n", sizeof(char), sizeof(char*), sizeof(int), sizeof(int*));
    printf("%d, %d\n", *ptr1 + 1, *ptr2 + 1);
    return 0;
}