#include<stdio.h>
int main()
{
    double  a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d = (a*2) + (b*3) + (c*5);
    float e = d / 10;
    printf("MEDIA = %.1f\n",e);
    return 0;
}
