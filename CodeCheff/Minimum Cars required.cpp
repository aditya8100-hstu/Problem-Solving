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
        if(n<=4)
            cout<<"1"<<endl;
        else if(n%4 != 0)
        {
            int r = (n/4)+1;
            cout<<r<<endl;
        }
        else if(n%4 == 0)
        {
            int r1 = (n/4);
            cout<<r1<<endl;
        }
    }
    return 0;

}
