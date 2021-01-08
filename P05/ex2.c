#include<stdio.h>
int main(){
    float peso, alt;
    char sexo;

    printf("Insira a altura da pessoa: \n");
    scanf("%f", &alt);
    printf("Insira o sexo da pessoa(M/F): \n");
    scanf(" %c", &sexo);
    if(sexo == 'M'){
        peso = 72.7*alt - 58;
    }
    else if(sexo == 'F'){
        peso = 62.1*alt - 44.7;
    }
    printf("O peso ideal é %.2f quilos. \n", peso);
    return(0);
}