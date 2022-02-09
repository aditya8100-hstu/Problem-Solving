#include<stdio.h>
int main()
{
    int i,j,k=7,b;
    for(i=1;i<=9;i=i+2)
    {
        for(b=1,j=k;b<=3;b++,j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        k=k+2;
    }
    return 0;
}
