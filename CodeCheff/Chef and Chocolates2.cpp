#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int r1 = (x*5) + (y*10);
        int r2 = r1/z;
        cout<<r2<<endl;
    }
    return 0;
}
