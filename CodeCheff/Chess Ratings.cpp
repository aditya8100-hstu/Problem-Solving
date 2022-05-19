#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int r = y-x;
        if(r==0)
            cout<<0<<endl;
        else if(r>0 && r<=8)
            cout<<1<<endl;
        else if(r%8==0)
            cout<<(r/8)<<endl;
        else if(r%8!=0)
        {
            int r1 = r/8;
            int fr = r1+1;
            cout<<fr<<endl;
        }
    }
    return 0;
}
