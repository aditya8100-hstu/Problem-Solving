#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int x;
        cin>>x;
        if(x>=1 && x<100)
            cout<<"Easy"<<endl;
        else if(x>=100 && x<200)
             cout<<"Medium"<<endl;
        else if(x>=200 && x<=300)
              cout<<"Hard"<<endl;
    }
    return 0;
}
