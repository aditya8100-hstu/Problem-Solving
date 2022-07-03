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
        int r1 = (x/y);
        if(x%y !=0 )
        {
           int r2 = (r1+1)*z;
           cout<<r2<<endl;
        }
        else
        {
            int r3 = r1*z;
            cout<<r3<<endl;
        }
    }
    return 0;
}

