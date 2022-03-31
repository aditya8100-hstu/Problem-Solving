#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int r = (a*1)+(b*2);
        if(r>=x)
            cout<<"Qualify"<<endl;
        else
            cout<<"NotQualify"<<endl;
    }
    return 0;
}
