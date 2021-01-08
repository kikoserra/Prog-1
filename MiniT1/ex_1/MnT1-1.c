#include<stdio.h>
int main(){
    float num, max, min, total = 0;
    int i, a=0;
    for (i = 0; i < 24; i++)
    {
        scanf("%f", &num);
        if(num > 3 && num < 5){
            if(a == 0){
                max = num;
                min = num;
                a++;
            }
            else if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
            total = total + num;
        }
    }
    printf("Tempo minimo de enchimento: %.2fs\n", min);
    printf("Tempo maximo de enchimento: %.2fs\n", max);
    printf("%f %f\n", total, num);
    printf("Tempo total: %d minutos, %d segundos e %d milesimos\n", (int)total/60, (int)total%60, (int)((total-(int)total)*1000));



    return 0;
}