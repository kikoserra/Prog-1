#include<stdio.h>
int main(){
    int i, num, total = 0, menor=0;
    for (i = 0; i < 53; i++)
    {
        scanf("%d", &num);
        total += num;
            if(num < 35)
                menor++;

            
    }
    
    printf("Total de famílias com crianças de idade inferior a 6 anos: %d\n",total );
    printf("Freguesias com menos de 35 famílias com crianças de idade inferior a 6 anos: %d (%.2f%%) \n", menor, ((float)menor/53)*100);


}