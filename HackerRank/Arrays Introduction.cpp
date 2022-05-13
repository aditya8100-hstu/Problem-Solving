#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[10000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       // cout<<a[i];
    }
    int j;
    for(j=n-1;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
