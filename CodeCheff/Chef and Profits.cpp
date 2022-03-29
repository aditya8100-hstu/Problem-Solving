#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int r = (x*z) - (x*y);
        cout<<r<<endl;
    }
    return 0;
}
