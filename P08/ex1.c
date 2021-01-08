#include <stdio.h>
int procuraTodos(int *v, int N, int x, int posicoes[], int *nPosicoes);
void imprimir_vetor(int v[], int tamanho);

int main(){
    int tamanho, v[8]={2,3,5,5,6,9,9,8};
    int x, posicoes[8], nPosicoes;
    printf("Qual o tamanho do vetor? E qual o número a procurar \n"); scanf("%d %d", &tamanho, &x);
    procuraTodos(v, tamanho, x, posicoes, &nPosicoes);

    if(procuraTodos(v, tamanho, x, posicoes, &nPosicoes)){
        printf("O número %d foi encontrado nas posicoes \n", x);
        imprimir_vetor(posicoes, nPosicoes);
    }
    else{
        printf("O elemento %d nao foi encontrado\n", x);
    }

    return 0;
}

int procuraTodos(int *v, int N, int x, int posicoes[], int *nPosicoes){
    int i;
    *nPosicoes =0;
    for (i = 0; i < N; i++)
    {
        if(v[i]== x){
            posicoes[*nPosicoes]=i;
            (*nPosicoes)++;
            
        }
    }
    
    return *nPosicoes > 0;
    
}
void imprimir_vetor(int v[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
    {
        
        printf("%d\n", v[i]);
    }
}