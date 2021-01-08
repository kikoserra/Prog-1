#include<stdio.h>
int mult(int num, int exp){
    return num << exp;
}
int main(){
    int num, pot, exp;
    printf("Insira o operando : \n"); scanf("%d", &num);
    
    printf("Insira o outro operando (potência de base 2): \n"); scanf("%d", &pot);
    if(pot == 1){
        exp =0;
    }
    else{
        exp = pot/2;
    }
    printf("O resultado da operação é : %d\n", mult(num, exp));
    

    return 0;
}