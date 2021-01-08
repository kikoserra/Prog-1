#include <stdio.h>
#include <string.h>
#define NUM 30
void inverte(char *strOriginal, char *strInvertida, int j);
int main()
{
    char s[NUM], sinv[NUM] = "";
    int j;
    printf("Escreva uma frase: \n"); fgets(s, NUM, stdin);
    
    s[strlen(s) - 1] = '\0';
    j = strlen(s);
    inverte(s, sinv, j);
    printf("%s\n", sinv);

    return 0;
}

void inverte(char *strOriginal, char *strInvertida, int j)
{
    int t = j - 1;
    for (int i = 0; i < j; i++)
    {
        strInvertida[i] = strOriginal[t];
        t--;
    }
    strInvertida[j] = '\0';
}