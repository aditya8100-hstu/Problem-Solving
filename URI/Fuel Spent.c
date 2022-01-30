#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int  c = (a*b);
    double d = c/12.0;
    printf("%.3lf\n",d);
    return 0;
}
