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
        int r1 = z-y;
        if(r1>0)
        {
          int r2 = r1/x;
          cout<<r2<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    return 0;
}
