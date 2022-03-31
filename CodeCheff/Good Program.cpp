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
        if(a%4==0)
            cout<<"Good"<<endl;
        else
        cout<<"Not Good"<<endl;
    }
    return 0;
}
