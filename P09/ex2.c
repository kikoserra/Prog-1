#include <stdio.h>
#include <string.h>
int conta(char *frase, char *palavra);
int main()
{
    char frase[100], palavra[10];
    printf("Frase: ");
    fgets(frase, 100, stdin);
    printf("Palavra:");
    fgets(palavra, 10, stdin);
    palavra [strlen(palavra)-1]='\0';
    printf("A palavra apareceu %d vez(es) na frase\n", conta(frase, palavra));
    return 0;
}
int conta(char *frase, char *palavra)
{
    char *aux = frase-1;
    int vezes = 0;
    while(1){
        if (strstr(aux+1, palavra) != NULL){ 
            vezes++;
            aux = strstr(aux + 1, palavra);}
        if (strstr(aux+1, palavra) == NULL) break;
    }
    return vezes;
    
}