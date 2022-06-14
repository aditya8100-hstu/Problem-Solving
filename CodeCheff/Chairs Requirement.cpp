#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
            cout<<0<<endl;
        else
        {
            int r = x-y;
            cout<<r<<endl;
        }
    }
    return 0;
}
