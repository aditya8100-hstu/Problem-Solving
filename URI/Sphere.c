#include<stdio.h>
#define PI 3.14159
int main()
{
    double a;
    scanf("%lf",&a);
    double p = (4/3.0);
    double q =  (a*a*a);
    double r = p * PI * q;
    printf("VOLUME = %.3lf\n",r);
    return 0;
}
