#include<stdio.h>
int main()
{
    int a,i,result=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
         result = result*i;
    printf("%d\n",result);
    return 0;
}
