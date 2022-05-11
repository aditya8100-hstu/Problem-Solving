#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,factorial=1,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         factorial = factorial*i;
    }
    cout<<factorial<<endl;
}
