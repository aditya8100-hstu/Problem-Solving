#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int t1,t2,r1,r2;
        double x1,x2;
        cin>>t1>>t2>>r1>>r2;
        x1 = pow(t1,2)/pow(r1, 3);
        x2 = pow(t2,2)/pow(r2, 3);

        if(x1==x2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
