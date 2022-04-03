#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int r1 = abs(x1-x2);
        int r2 = abs(y1-y2);
        if(r1>r2)
            cout<<r1<<endl;
        else
            cout<<r2<<endl;
    }
    return 0;
}
