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
        if(x+y <= z)
            cout<<"2"<<endl;
        else if(x<=z)
            cout<<"1"<<endl;
        else if(x>z)
            cout<<"0"<<endl;
    }
    return 0;
}
