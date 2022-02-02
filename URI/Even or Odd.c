#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while((n--)>0)
    {
        int a;
        scanf("%d",&a);
        if(a>0 && a%2==0)
            printf("EVEN  POSITIVE\n");
        else if(a<0 && a%2==0)
            printf("EVEN NEGATIVE\n");
        else if(a>0 && a%2!=0)
             printf("ODD POSITIVE\n");
         else if(a<0 && a%2!=0)
            printf("ODD NEGATIVE\n");
        else
            printf("NULL\n");
    }
      return 0;
}
