#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1;
        cin>>x1;
        int x2 = x1+200;
        int y;
        cin>>y;
        if(y>=x1 && y<=x2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
