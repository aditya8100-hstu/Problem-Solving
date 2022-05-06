#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        float x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        float r1 = (y1/x1);
        cout<<"r1 = "<<r1<<endl;
        float r2 = (y2/x2);
        cout<<"r2 = "<<r2<<endl;
        if(r1<r2)
            cout<<"-1"<<endl;
        else if(r1>r2)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
