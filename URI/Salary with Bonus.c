#include<stdio.h>
int main()
{
    char a[20];
    double b,c;
    scanf("%s",a);
    scanf("%lf%lf",&b,&c);

    double d = b + (c*0.15);

    printf("TOTAL = R$ %.2lf\n",d);
    return 0;

}
