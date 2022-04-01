#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int c,x,y;
        cin>>c>>x>>y;
        int r = (c-x)*y;
        cout<<r<<endl;
    }
    return 0;
}
