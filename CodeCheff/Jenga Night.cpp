
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,x;
        cin>>n>>x;
        if(x%n==0)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
