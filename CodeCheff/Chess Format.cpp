#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        int r = a+b;
        if(r<3)
            cout<<"1"<<endl;
        else if(r>=3 && r<=10)
            cout<<"2"<<endl;
        else if(r>=11 && r<=60)
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    }
    return 0;
}
