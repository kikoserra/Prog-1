#include<stdio.h>
int main(){
    int num, res, sum = 0;
    printf("Insira um número: \n");
    scanf("%d", &num);
    while(num != 0){
        res = num %10;
        sum = sum + res;
        num /= 10;
    }
    printf("A soma dos dígitos é %d\n", sum);
   
}