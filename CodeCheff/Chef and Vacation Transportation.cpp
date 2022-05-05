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
        if((x+y)>z)
            cout<<"TRAIN"<<endl;
        else if((x+y)<z)
            cout<<"PLANEBUS"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
    return 0;
}
