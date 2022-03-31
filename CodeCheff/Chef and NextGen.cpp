#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int p = a*b;
        int q = x*y;
        if(p<q || p==q)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
