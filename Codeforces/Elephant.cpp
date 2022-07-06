#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=5)
    {
        if(a%5==0)
        {
            int r1 = a/5;
            cout<<r1<<endl;
        }
        else
        {
            int r2 = a/5;
            int r3 = r2+1;
            cout<<r3<<endl;
        }
    }
    else
    {
        cout<<"1"<<endl;
    }
    return 0;
}
