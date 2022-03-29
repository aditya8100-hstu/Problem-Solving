#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int r = 2*(180+n) - (a+b);
        cout<<r<<endl;
    }
    return 0;
}
