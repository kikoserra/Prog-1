#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, ran, n6 = 0;

    printf("Quantos lançamentos? \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        ran = rand() % 6 +1;
        printf("erro0\n");
        if (ran == 6){
            n6++;
            printf("erro1\n");
        }
    }
    printf("A face seis saiu %d vezes.\n", n6);

    return(0);
}
