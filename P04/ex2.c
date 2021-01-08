#include<stdio.h>
int main(){
    int num, res;
    printf("Insira um número:\n");
    scanf("%d", &num);
    res = num;
    while (num != 0){
        if (num % 2 == 0){
            printf("2 ");
            num = num / 2;
        }
        else if(num % 3 == 0){
            printf("3 ");
            num = num / 3;
        }
        else if(num % 5 == 0){ 
            printf("5 ");
            num = num / 5;

        }
        else if(num % 7 == 0){
            printf("7 ");
            num = num / 7;

        }
        else if(num == 1){
            printf("\n");
            num = 0;
        }
        else if(num % 1 == 0){
            printf("%d\n", num);
            num = 0;
        }
        

    }   
    
    return 0;

}