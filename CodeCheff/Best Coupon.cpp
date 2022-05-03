#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x;
        cin>>x;
        int r = x/10;
        if(r>=100)
            cout<<r<<endl;
        else
            cout<<"100"<<endl;
    }
    return 0;
}
