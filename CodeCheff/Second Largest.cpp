#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && b>c) || (c>b && b>a))
            cout<<b<<endl;
        else if((b>c && c>a) || (a>c && c>b))
            cout<<c<<endl;
        else if((b>a && a>c) || (c>a && a>b))
            cout<<a<<endl;
    }
     return 0;
}
