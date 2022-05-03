#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[100] , count1=0,count0=0;
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<7;i++)
        {
            if(a[i]== 1)
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        if(count1>count0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
