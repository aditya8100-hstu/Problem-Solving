#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int r1 = abs(7-a);
        int r2 = abs(7-b);
        if(r1<r2)
            cout<<r1<<endl;
        else
            cout<<r2<<endl;
    }
    return 0;
}
