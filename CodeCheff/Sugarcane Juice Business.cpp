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
        int r1 = ((20.0/100.0)*(50*n))  + ((20.0/100.0)*(50*n)) + ((30.0/100.0)*(50*n));

        int r = (50*n) - r1;
        cout<<r<<endl;
    }
    return 0;
}
