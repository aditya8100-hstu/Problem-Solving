#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a;
        cin>>a;
        double result;
        result = sqrt(a);
        int b = floor(result);
        cout<<b<<endl;
    }
    return 0;
}
