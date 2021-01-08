#include<stdio.h>
float calcula(float a, float b, char op);
int main(){
    char op;
    float a, b;
    while (scanf("%f%f %c", &a, &b, &op)==3)
    {
     calcula(a, b, op);
    }
    return 0;
}

float calcula (float a, float b, char op){
    switch (op)
        {
        case 'V':
            printf("%.2f V\n", a*b);
            break;
        case 'R':
            printf("%.2f Ohm\n", b/a);
            break;
        case 'I':
            printf("%.2f A\n", a/b);
            break;
        }
     return 0;
}