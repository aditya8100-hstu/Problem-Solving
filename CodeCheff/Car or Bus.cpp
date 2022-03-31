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
        if(x>y)
            cout<<"CAR"<<endl;
        else if(y>x)
            cout<<"BIKE"<<endl;
        else
            cout<<"SAME"<<endl;
    }
    return 0;
}
