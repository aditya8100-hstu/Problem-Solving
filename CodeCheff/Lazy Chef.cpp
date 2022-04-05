#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,m,d;
        cin>>x>>m>>d;
        int r1 = x*m;
        int r2 = (d+x);
        if(r1<r2)
            cout<<r1<<endl;
        else
            cout<<r2<<endl;

    }
    return 0;
}
