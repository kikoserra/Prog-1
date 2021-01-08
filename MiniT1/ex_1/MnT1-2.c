#include<stdio.h>
int main(){
    char op;
    float ux, uy, uz, vx, vy, vz, c;
    int opa = 0, opb = 0, opc = 0;

    while(scanf(" %c", &op)==1){
        switch (op)
        {
        case 'A':
            scanf("%f%f%f%f%f%f\n", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u + v = (%f, %f, %f)\n", ux+vx, uy+vy, uz+vz);
            opa++;
            break;
        case 'B':
            scanf("%f%f%f%f\n", &c, &ux, &uy, &uz);
            printf("c * u = (%f, %f, %f)\n", c*ux, c*uy, c*uz);
            opb++;
            break;
        case 'C':
            scanf("%f%f%f%f%f%f\n", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u * v = %f\n", (ux*vx) + (uy*vy) + (uz*vz));
            opc++;
            
        
        }
    }
    printf("Adição de vetores: %d\n", opa);
    printf("Produto por um escalar: %d\n", opb);
    printf("Produto escalar de vetores: %d\n", opc);

    return 0;
}