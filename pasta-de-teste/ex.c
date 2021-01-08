#include<stdio.h>
int main(){
    int a = 0;
    char let;

    printf("Insira letras : \n");
    scanf("%c", &let);
    if(let == 'a'){a += 1;}
    while (let != '.'){
        scanf("%c", &let);
        switch (let)
        {
        case 'a':
            a += 1;
            break;
        
        }
    }
    printf("A = %d\n", a);
}
