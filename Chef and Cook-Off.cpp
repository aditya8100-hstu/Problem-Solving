#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        int r = a1+a2+a3+a4+a5;
        if(r==0)
            cout<<"Beginner"<<endl;
        else if(r==1)
            cout<<"Junior Developer"<<endl;
        else if(r==2)
            cout<<"Middle Developer"<<endl;
        else if(r==3)
            cout<<"Senior Developer"<<endl;
        else if(r==4)
            cout<<"Hacker"<<endl;
        else
            cout<<"Jeff Dean"<<endl;
    }
    return 0;
}
