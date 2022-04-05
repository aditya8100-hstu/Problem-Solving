#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int m,h;
        cin>>m>>h;
        int r = m/(h*h);
        if(r<=18)
            cout<<"1"<<endl;
        else if(r>=19 && r<=24)
            cout<<"2"<<endl;
        else if(r>=25 && r<=29)
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    }
    return 0;
}
