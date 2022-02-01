#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==1)
    {
        double e = 4.00*b;
        printf("Total: R$ %.2lf\n",e);
    }
    if(a==2)
    {
        double i = 4.50*b;
        printf("Total: R$ %.2lf\n",i);
    }

    if(a==3)
    {
        double f = 5.00*b;
        printf("Total: R$ %.2lf\n",f);
    }

    if(a==4)
    {
        double g = 2.00*b;
        printf("Total: R$ %.2lf\n",g);
    }

    if(a==5)
    {
        double h = 1.50*b;
        printf("Total: R$ %.2lf\n",h);
    }

    return 0;
}
