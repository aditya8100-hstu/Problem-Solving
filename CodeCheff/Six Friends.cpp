#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int r3 = 3*x;
        int r2 = 2*y;
        if(r3>r2)
            cout<<r2<<endl;
        else
            cout<<r3<<endl;
    }
    return 0;
}
