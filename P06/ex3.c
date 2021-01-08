#include <stdio.h>
void preencher_vetor(float v[], int tamanho){
    float num;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Introduza o elemento %d \n", i+1);
        scanf("%f", &num);
        v[i]=num;
        
    }
}
float somatorio_vetor(float v[], int tamanho){
    int i;
    float soma=0;
    for (i = 0; i < tamanho; i++)
    {
        soma+=v[i];
    }
    return soma;
}
void imprimir_vetor(float v[], int tamanho){
    int i;
    printf("O vetor lido foi { "); 
    for (i = 0; i < tamanho; i++)
    {
        
        printf("%.2f ", v[i]);
    }
    printf("}\n");
}
int main(){
    int tamanho, i;
    float num, v[15];
    while (1)
    {
        printf("Quanto elementos pretende armazenar? \n");
        scanf("%d", &tamanho);
        if(tamanho<=15){break;}
        else{
        printf("O número de elementos está limitado a 15!\n");
        }
    }
    preencher_vetor(v, tamanho);
    
    imprimir_vetor(v, tamanho);
    printf("e a soma dos seus elementos foi %.2f \n ", somatorio_vetor(v, tamanho));
   

    return 0;
}