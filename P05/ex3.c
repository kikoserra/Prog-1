#include<stdio.h>
#include<math.h>
void distancia(float x1,float y1,float x2,float y2);

int main(){
    float x1, x2, y1, y2;
    printf("Quais as coordenadas de X ?\n");
    scanf("%f %f", &x1, &y1);
    printf("Quais as coordenadas de Y ?\n");
    scanf("%f %f", &x2, &y2);
    
    distancia(x1,y1,x2,y2);


    return(0);

}
void distancia(float x1,float y1,float x2,float y2){
    float X, Y, dist;
    X = x1 - x2;
    Y = y1 - y2;
    dist = sqrt((X*X) + (Y*Y));
    printf("A distancia entre os dois pontos é %.2f \n", dist);
}
