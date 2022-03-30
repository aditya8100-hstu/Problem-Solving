#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int r = (b/x) - (a/x);
        cout<<r<<endl;
    }
    return 0;
}
