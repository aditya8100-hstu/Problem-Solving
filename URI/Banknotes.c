#include<stdio.h>
int main()
{
    int N,result;
    scanf("%d",&N);
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",N/100);

    result = N%100;
    printf("%d nota(s) de R$ 50,00\n",result/50);

    result = result%50;
    printf("%d nota(s) de R$ 20,00\n",result/20);

    result = result%20;
    printf("%d nota(s) de R$ 10,00\n",result/10);

    result = result%10;
    printf("%d nota(s) de R$ 5,00\n",result/5);

    result = result%5;
    printf("%d nota(s) de R$ 2,00\n",result/2);

    result = result%2;
    printf("%d nota(s) de R$ 1,00\n",result/1);

    return 0;

}
