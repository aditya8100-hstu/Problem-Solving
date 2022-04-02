#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,r1,r2;
        cin>>n;
        if((n%10) != 0)
        {
            r1 = (n/10)+1;
            cout<<r1<<endl;
        }
        else
        {
            r2 = (n/10);
            cout<<r2<<endl;
        }
    }
    return 0;
}
