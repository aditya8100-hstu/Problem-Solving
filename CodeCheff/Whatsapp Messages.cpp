#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int r1 = x-y;
        int r2 = (r1 * z);
        cout<<r2<<endl;
    }
    return 0;
}
