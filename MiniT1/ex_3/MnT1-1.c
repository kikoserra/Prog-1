#include<stdio.h>
int main(){
    int i, pnos, pout, pvitn = 0, pvito = 0;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d%d", &pnos, &pout);
        if(pnos>pout){
            if(pnos >= 90)
                pvitn += 2;
            else if(pnos > 60 && pnos < 90)
                pvitn +=1;
        }
        else if(pnos<pout){
            if(pout >= 90)
                pvito += 2;
            else if(pout > 60 && pout < 90)
                pvito +=1;
            }
    }
    if(pvitn > pvito)
        printf("A nossa equipa ganhou %d - %d\n", pvitn, pvito);
    else if(pvitn < pvito)
        printf("A outra equipa ganhou %d - %d\n",pvito ,pvitn );
    return 0;
}