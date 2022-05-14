#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,x,k;
        cin>>n>>x>>k;
        int tk = n*x;
        if(tk>k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
