#include <stdio.h>
int main(){
    int i, j, *p_1, *p_2, **p_p_1, **p_p_2;
    i = 4;
    j = 5;
    p_1 = &i;
    p_2 = &j;
    p_p_1 = &p_2;
    p_p_2 = &p_1;
    printf(" i = %d\n*p_2 = %d\n&i = %p\n&p_2 = %p\n", i, *p_2, &i, &p_2);
    printf("**p_p_1 = %d\n*p_p_2 = %p\n&(*p_1) = %p\nj = %d\n",**p_p_1,*p_p_2, &(*p_1), j );
    printf("*p_1 = %d\n*(&p_1) = %p\n", *p_1, *(&p_1));
    return 0;
}