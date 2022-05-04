#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int r1 = a*(100/10);
        int r2 = b*(100/20);
        if(r1>r2)
            cout<<"FIRST"<<endl;
        else if(r2>r1)
            cout<<"SECOND"<<endl;
        else
            cout<<"ANY"<<endl;
    }
    return 0;
}
