#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x%3 == 0)
        {
           cout<<"0"<<endl;
        }
        else
        {
            int r2 = x/3;
            int r3 = r2+1;
            int r4 = r3*3;
            int r5 = r4-x;
            cout<<r5<<endl;
        }
    }
    return 0;
}
