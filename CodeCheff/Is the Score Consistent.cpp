#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=c && b<=d)
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
