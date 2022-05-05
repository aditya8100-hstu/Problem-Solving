#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c,z,y;
        //cin>>a>>b>>c>>z>>y;
        cin>>z>>y>>a>>b>>c;
        int r1 = z-y;
        int r2 = a+b+c;
        if(r1>=r2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
