#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=b && a<=c)
            cout<<(b+c)<<endl;
        else if(b<=a && b<=c)
            cout<<(a+c)<<endl;
        else if(c<=a && c<=b)
            cout<<(a+b)<<endl;
    }
    return 0;
}
