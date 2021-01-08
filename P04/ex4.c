#include<stdio.h>
int main(){
    int max = 0, min = 0, n = 0, num;
    float med, sum = 0;
    printf("Insira os números para fazer a média (uma letra para acabar)\n");
    
    while (1)
        {
            
            if(scanf("%d\n", &num) != 1)
            break;
            
            sum += num;
            if(n == 0){
                max = num;
                min = num;
            }
            if (num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
            n++;
        }      
    med = sum / n;
    printf("A média é %.3f o máximo é %d e o mínimo é %d %d.\n", med, max, min, n);
    return 0;
}