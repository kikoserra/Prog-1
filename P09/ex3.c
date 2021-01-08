#include <stdio.h>
#include <string.h>
#define NUM 30
int multiplicacao(int primeiroNumero, int segundoNumero);
int main(){
    int prim, seg;
    printf("Qual os números que pretende multiplicar? \n"); scanf("%d %d", &prim, &seg);
    printf("O resultado é %d\n", multiplicacao(prim, seg));
    return 0;
}

int multiplicacao(int primeiroNumero, int segundoNumero){
    if(primeiroNumero==0 || segundoNumero ==0) return 0;
    if(segundoNumero < 0) return -multiplicacao(primeiroNumero, -segundoNumero);
    return primeiroNumero + multiplicacao(primeiroNumero, segundoNumero -1);
}