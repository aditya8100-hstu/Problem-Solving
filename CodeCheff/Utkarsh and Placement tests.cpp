#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char first,second,third,x,y;
        cin>>first>>second>>third>>x>>y;
        if(first==x)
            cout<<x<<endl;
        else if(first==y)
            cout<<y<<endl;
        else if(second==x)
            cout<<x<<endl;
        else if(second==y)
            cout<<y<<endl;
        else if(third==x)
            cout<<x<<endl;
        else if(third==y)
            cout<<y<<endl;
    }
    return 0;
}
