#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int num, i,j, v[6]={0};
    srand(time(NULL));
    for (i = 0; i < 30; i++)
    {
        num = rand() % 6 + 1;
        v[num-1]++;
        
    }   
    for (i = 0; i < 6; i++)
    {
        printf("%d - ", i+1);
        for (j = 0; j < v[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
