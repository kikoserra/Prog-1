#include <stdio.h>
int main(){
    int i = 0, j, n=0, x, cont=0;
    printf("Insira o número de números primos que pretende: ");
     scanf("%d",&x);
    printf("Os primeiros %d primos são: \n",x);
    while(cont <= x){
        
            for(j=1;j<=i;j++)
            {
                if(i%j ==0)
                {
                    n++;
                    
                }
            }
        if(n==2){
        printf("%d\n",i);
        cont++;}
        if(cont==x) break;

        
        n=0;
        i++;
    }
    printf("Foram impressos %d números\n", cont);
     return 0;
}