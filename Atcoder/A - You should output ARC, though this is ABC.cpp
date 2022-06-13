#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a,b,d,e;
    cin>>a>>b>>d>>e;
    if(r==1 && c==1)
        cout<<a<<endl;
    else if(r==1 && c==2)
        cout<<b<<endl;
    else if(r==2 && c==1)
        cout<<d<<endl;
    else if(r==2 && c==2)
        cout<<e<<endl;
    return 0;
}
