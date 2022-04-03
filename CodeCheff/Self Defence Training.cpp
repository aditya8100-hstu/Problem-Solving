#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,number=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            int a;
            cin>>a;
            if(a>=10 && a<=60)
            {
                number++;
            }
        }
        cout<<number<<endl;
    }
}
