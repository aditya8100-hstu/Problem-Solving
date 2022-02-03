#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        double d = (a*2)+(b*3)+(c*5);
        double e = d/10.0;
        printf("%.1lf\n",e);
    }
    return 0;
}
