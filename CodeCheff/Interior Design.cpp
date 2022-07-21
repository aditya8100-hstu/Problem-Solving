#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int r1 = a+b;
        int r2 = c+d;
        if(r1>r2)
            cout<<r2<<endl;
        else
            cout<<r1<<endl;
    }
    return 0;
}
