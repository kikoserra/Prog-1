#include<stdio.h>
#include<math.h>
float distancia(float x1,float y1,float x2,float y2);
void colisao(float raio_x, float raio_y, float dist);
int main(){
    float x1, x2, y1, y2, raio_x, raio_y;
    printf("Quais as coordenadas de X e o raio?\n");
    scanf("%f %f %f", &x1, &y1, &raio_x);
    printf("Quais as coordenadas de Y e o raio?\n");
    scanf("%f %f %f", &x2, &y2, &raio_y);

    float dist = distancia(x1,y1,x2,y2);
    colisao(raio_x,raio_y, dist);
    
}
float distancia(float x1,float y1,float x2,float y2){
    float X, Y, dist;
    X = x1 - x2;
    Y = y1 - y2;
    dist = sqrt((X*X) + (Y*Y));
    return dist;
}
void colisao(float raio_x,float raio_y, float dist){

    float raio_t;
    raio_t = raio_x + raio_y;
    if(dist < raio_t)
        printf("As bolas estao em colisao\n");
    else
    {
        printf("As bolas nao esta em colisao\n");
    }
    

}