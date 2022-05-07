#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d>=l && d<=r)
            cout<<"Take second dose now"<<endl;
        else if(d>l && d>r)
            cout<<"Too Late"<<endl;
        else if(d<l && d<r)
            cout<<"Too Early"<<endl;
    }
    return 0;
}
