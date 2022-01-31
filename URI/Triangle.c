#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        double d = (a+b+c);
        printf("Perimetro = %.1lf\n",d);
    }
    else
    {
        double e = ((a+b)/2.0)*c;
        printf("Area = %.1lf\n",e);
    }
    return 0;
}
