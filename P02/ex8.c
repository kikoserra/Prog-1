#include<stdio.h>
int main(){
    float num;
    int numa;
//numa- numero arredondado
    printf("Insira um número: \n");
    scanf("%f", &num);
    numa = (int)num;

    if(num - (int)num > 0.5){
        
        numa++;
        if(numa % 2 == 0){
            printf("Os números pares mais próximos são: %d e %d\n", numa - 2, numa + 2);

        }
        else{
            printf("Os números pares mais próximos são: %d e %d\n", numa - 1, numa + 1);
        }
        
        
    }
    else{
        if(numa % 2 == 0){
            printf("Os números pares mais próximos são: %d e %d\n", numa - 2, numa + 2);
        }
         else{
            printf("Os números pares mais próximos são: %d e %d\n", numa - 1, numa + 1);
        }
    }   
        
}