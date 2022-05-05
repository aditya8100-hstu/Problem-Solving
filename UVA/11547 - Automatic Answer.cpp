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
        int r = abs((((((n*567)/9)+7492)*235)/47)-498);
        int r1 = r/10;
        int r2 = (r1%10);
        cout<<r2<<endl;
    }
    return 0;
}
