#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int d,j,countd=0;
        cin>>d;
        for(j=0;j<d;j++)
        {
            int a;
            cin>>a;
            if(a>=1000)
                countd++;
        }
        cout<<countd<<endl;
    }
    return 0;
}
