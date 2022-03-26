#include<stdio.h>
int main()
{
    int N,result;
    scanf("%d",&N);

    int year = N/365;
    printf("%d ano(s)\n",year);


    result = N%365;
    int month = result/30;
    printf("%d mes(s)\n",month);

    result = N%30;
    int day = N - (year*365 + month*30);
    printf("%d dia(s)\n",day);

    return 0;
}
