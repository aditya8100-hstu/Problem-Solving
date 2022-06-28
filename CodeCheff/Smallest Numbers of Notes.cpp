#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  countnum = 0;
        while(n>0)
        {
            if(n>=100)
            {
                countnum = n/100 +countnum;
                n=n%100;
            }
            else if(n>=50)
            {
                countnum = n/50 +countnum;
                n=n%50;
            }
            else if(n>=10)
            {
                countnum = n/10 +countnum;
                n=n%10;
            }
            else if(n>=5)
            {
                countnum = n/5 +countnum;
                n=n%5;
            }
            else if(n>=2)
            {
                countnum = n/2 +countnum;
                n=n%2;
            }
            else if(n>=1)
            {
                countnum = n/1 +countnum;
                n=n%1;
            }

        }
        cout<<countnum<<endl;

    }
    return 0;
}
