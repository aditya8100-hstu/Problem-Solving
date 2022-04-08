#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int r;
        cin>>r;
        if(r<1600)
            cout<<"3"<<endl;
        else if(r>=1600 && r<2000)
            cout<<"2"<<endl;
        else if(r>=2000)
            cout<<"1"<<endl;
    }
    return 0;
}
