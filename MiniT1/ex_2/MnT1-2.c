#include<stdio.h>
#include<math.h>
int main(){
    char op;
    int combbase = 350, time;
    float peso, ca, cb, cc, ctotal = 0;

    while (scanf(" %c", &op)==1)
    {
        switch (op)
        {
        case 'A':
            scanf("%d%f", &time, &peso);
            ca = combbase + (time*(peso/10));
            printf("%.2f\n", ca);
            ctotal = ctotal + ca;
            break;
        case 'B':
            scanf("%d%f", &time, &peso);
            cb = combbase + (time*pow((peso/1500),2));
            printf("%.2f\n", cb);
            ctotal = ctotal + cb;
            break;
        case 'C':
            scanf("%d", &time);
            cc = combbase + pow(time, 3);
            printf("%.2f\n", cc);
            ctotal = ctotal + cc;

        }
    }
    printf("%.2f (total)\n", ctotal);
    return 0;
}