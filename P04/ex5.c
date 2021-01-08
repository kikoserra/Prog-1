#include<stdio.h>
int lett();
int a = 0, e = 0, i = 0, o = 0, u = 0;
char let;  
int main(){
  
    printf("Qual é a frase? \n");
    let = 'q';
    while (let != '.'){
        lett();
    }
    printf("A = %d \nE = %d \nI = %d \nO = %d \nU = %d\n", a, e, i, o, u);
    return 0;
}


int lett(){
    scanf("%c", &let);
        switch(let){
            case 'a': 
            case 'A': 
                    a+=1;break;
            case 'e': 
            case 'E': 
                    e+=1;break;
            case 'i': 
            case 'I': 
                    i+=1;break;
            case 'o': 
            case 'O': 
                    o+=1;break;
            case 'u': 
            case 'U': 
                    u+=1;
        }
        return 0;
}
