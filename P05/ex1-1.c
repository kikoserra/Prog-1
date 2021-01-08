#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void aleatorio(int limInf, int limSup);
int main(){
    int limInf, limSup;
    srand(time(NULL));

    printf("Qual o limite inferior? \n");
    scanf("%d", &limInf);
    printf("Qual o limite superior? \n");
    scanf("%d", &limSup);
    aleatorio(limInf, limSup);
    return(0);
}
void aleatorio(int limInf, int limSup){
    int num;
    num = rand() % ((limSup - limInf +1)+ limInf);
    printf("%d\n", num);
}