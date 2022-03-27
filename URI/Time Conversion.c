#include<stdio.h>
int main()
{
    int N,hour,min,sec;
    scanf("%d",&N);

    if(N>600)
    {
        hour = N/3600;
        min = (N-(3600*hour))/60;
        sec = N-((hour*3600)+(min*60));
        printf("%d:%d:%d\n",hour,min,sec);
    }
    else
    {
        min = N/60;
        sec = N-(min*60);
        printf("%d:%d:%d\n",hour,min,sec);
    }

    return 0;
}
