#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n>=1 && n<=18)
            cout<<"Children"<<endl;
        else if(n>=19 && n<=55)
            cout<<"Citizens"<<endl;
        else
            cout<<"Senior Citizens"<<endl;
    }
    return 0;
}
