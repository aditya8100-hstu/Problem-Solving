#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int r = x*y;
        int fr = r/100;
        cout<<fr<<endl;
    }
    return 0;
}
