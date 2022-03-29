#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y,d;
        cin>>x>>y>>d;
        if(abs(x-y)<=d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
