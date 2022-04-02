#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,x,p;
        cin>>n>>x>>p;
        int incorrectAnswer = n-x;
        int mark = (x*3) - (incorrectAnswer*1);
        if(mark>=p)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }
    return 0;
}
