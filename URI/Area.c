#include<stdio.h>
#define PI 3.14159
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    double t =  0.5*a*c;
    double ci = PI*(c*c);
    double tr = ((a+b)/2)*c ;
    double s = b*b;
    double r = a*b;

    printf("TRIANGULO: %.3lf\n",t);
    printf("CIRCULO: %.3lf\n",ci);
    printf("TRAPEZIO: %.3lf\n",tr);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",r);
    return 0;

}
