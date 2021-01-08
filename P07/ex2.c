#include<stdio.h>
void ordena(int* va, int* vb, int*vc){
    int aux;
    if(*va < *vb && *va < *vc){
        if(*vb < *vc){
            printf("%d %d %d\n", *va, *vb, *vc);
        }
        else 
            printf("%d %d %d \n", *va, *vc, *vb);
    }
    else if(*vb < *va && *vb < *vc){
        if(*va < *vc)
            printf("%d %d %d \n", *vb, *va, *vc);
        else 
            printf("%d %d %d \n", *vb, *vc, *va);
    }
    else if(*vc < *va && *vc < *vb){
        if(*va < *vb)
            printf("%d %d %d \n", *vc, *va, *vb);
        else 
            printf("%d %d %d\n ", *vc, *vb, *va);
    }
}
int main(){
    int a, b, c;
    printf("Insira valores : \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n");
    ordena(&a, &b, &c);
    return 0;
}