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
        int a1 = 500-(x*2);
        int a2 = 1000-((x+y)*4);
        int ab = a1+a2;

        int a3 = 500-(y*4);
        int a4 = 1000-((x+y)*2);
        int ba = a3+a4;

        if(ab>ba)
            cout<<ab<<endl;
        else
            cout<<ba<<endl;
    }
    return 0;
}
