#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int g1,s1,b1,g2,s2,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        int r1 = g1+s1+b1;
        int r2 = g2+s2+b2;
        if(r1>r2)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
    }
    return 0;
}
