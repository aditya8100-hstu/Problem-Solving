#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,r;
        cin>>a>>b;
        r = 21-(a+b);
        if(r>=1 && r<=10)
            cout<<r<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
