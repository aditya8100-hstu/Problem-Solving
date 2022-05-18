#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int r = (y*z)+w;
        if(x<r)
            cout<<"overFlow"<<endl;
        else if(x==r)
            cout<<"filled"<<endl;
        else
            cout<<"Unfilled"<<endl;
    }
    return 0;
}
