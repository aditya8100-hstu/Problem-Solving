#include<stdio.h>
#include<math.h>
int main()
{
    double  x1,y1,x2,y2;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);

    double a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ;
    double b = sqrt(a);

    printf("%.4lf\n",b);
    return 0;
}
