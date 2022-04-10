#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        if(n%k != 0)
        {
            int r = (n/k) +1;
            cout<<r<<endl;
        }
        else
        {
            int r1 = n/k;
            cout<<r1<<endl;
        }
    }
    return 0;
}
