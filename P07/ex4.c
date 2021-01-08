#include <stdio.h>
#include <math.h>
void cartesianas_polares(float x, float y, float *r, float *theta);
void polares_cartesianas(float r, float theta, float *x, float *y);
int main()
{
    float x, y, r, theta;
    printf("x, y ?\n"); scanf("%f %f", &x, &y);
    cartesianas_polares(x, y, &r, &theta);
    printf("r = %f, theta = %f\n", r, theta);
    polares_cartesianas(r, theta, &x, &y);
    printf("x = %f, y = %f\n", x, y);

    return 0;
}

void cartesianas_polares(float x, float y, float *r, float *theta)
{
    *r = sqrt(pow(x, 2) + pow(y, 2));
    *theta = atan2(y, x);
}

void polares_cartesianas(float r, float theta, float *x, float *y)
{
    *x = r * cos(theta);
    *y = r * sin(theta);
}