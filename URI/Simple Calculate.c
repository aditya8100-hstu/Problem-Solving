#include<stdio.h>
int main()
{
    int a1,b1,a2,b2;
    float c1,c2;
    scanf("%d%d",&a1,&b1);
    scanf("%f",&c1);
    scanf("%d%d",&a2,&b2);
    scanf("%f",&c2);

    double d = (b1*c1) + (b2*c2);

    printf("VALOR A PAGAR: R$ %.2lf\n",d);
    return 0;
}
