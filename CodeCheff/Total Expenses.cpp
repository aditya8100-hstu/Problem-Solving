#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double q,p;
        cin>>q>>p;
        if(q>1000)
        {
            double r1 = (p*q)/10.00;
            double r2 = (p*q) - r1;
            cout<<fixed<<setprecision(6)<<r2<<endl;
        }
        else
        {
            double r3 = (p*q);
            cout<<fixed<<setprecision(6)<<r3<<endl;
        }
    }
    return 0;
}
