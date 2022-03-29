#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,a1,b1;
        cin>>a>>b>>a1>>b1;
        int r = (a1/a) + (b1/b);
        cout<<r<<endl;
    }
    return 0;
}
