#include<stdio.h>
int main(){
    int pa, pb, anos=0;
    float ta, tb;
    printf("Pais A (população/taxa):\n");
    scanf("%d %f", &pa, &ta);
    printf("Pais B (população/taxa):\n");
    scanf("%d %f", &pb, &tb);
    pa *= 1000000;
    pb *= 1000000;
    while (pb <= pa)
    {
        pa = pa + (pa * (ta/100));
        pb = pb + (pb * (tb/100));
        anos +=1;
    }
    printf("População de B ultrapassara a de A em %d anos\n", anos);
    return 0;
}