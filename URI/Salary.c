#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d%d",&a,&b);
    scanf("%lf",&c);
    double d = b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2lf\n",d);
    return 0;

}
