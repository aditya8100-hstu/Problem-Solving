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
        int r1 = x*y;
        if(x>3)
        {
            if(x%3 == 0)
            {
                int r2 = (x/3)-1 ;
                cout<<((r2*z)+r1)<<endl;
            }
            else
            {
                int r3 = (x/3) ;
                cout<<((r3*z)+r1)<<endl;
            }
        }
        else
        {
            cout<<r1<<endl;
        }
    }
    return 0;
}
