#include<stdio.h>
int main(){
    int l, t, h = 1, nmax = 5, b = 5, ntracos, e,x=0;
    printf("Qual a altura da árvore (altura minima :4)?: ");
    scanf("%d", &l);
    if(l == 4) {b = 4;nmax=3;}
    
    while (b <= l){
    nmax = nmax + 2;
    b++;}
    ntracos = nmax / 2;

    while(h<l){
        for(t=x; t<ntracos; t++){
         printf(" ");
        }
        for(e=0;e<=x;e++){
            if(e==0){printf("*");}
            else{printf("**");}
        }
      printf("\n");
        h++;
        x++;
    } 
    for(t=0; t<ntracos; t++){
         printf(" ");
        }
    for(e=0;e<=x;e++){
    if(e==0){printf("*");}
    }
    printf("\n");
}