#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    double p = b*b - 4*a*c;

    if(a>0 && p>0)
    {
        double q = sqrt(p);

    double r1 = ((-b)+q)/(2*a);
    double r2 = ((-b)-q)/(2*a);

    printf("R1 = %.5lf\n",r1);
    printf("R2 = %.5lf\n",r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;


}
